/*
 * XREFs of MiIncrementLargeSubsections @ 0x1406FF0D4
 * Callers:
 *     MiReferenceDataSubsections @ 0x14034125C (MiReferenceDataSubsections.c)
 *     MiCloneLargeFileOnlyVad @ 0x140873250 (MiCloneLargeFileOnlyVad.c)
 *     MiAllocateDataVad @ 0x140995980 (MiAllocateDataVad.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     MiBuildWakeList @ 0x140470AE0 (MiBuildWakeList.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1406FE68C (MiEnableLargeSubsection.c)
 */

__int64 __fastcall MiIncrementLargeSubsections(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 *v5; // r13
  volatile LONG *v7; // r14
  KIRQL v8; // r15
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+28h] [rbp-28h]
  __int64 v21; // [rsp+2Ch] [rbp-24h]
  int v22; // [rsp+34h] [rbp-1Ch]
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+50h]

  v2 = *a1;
  v3 = (__int64)a1;
  v4 = 0;
  v26 = *a1;
  v5 = 0LL;
  v7 = (volatile LONG *)(*a1 + 72);
  v8 = ExAcquireSpinLockExclusive(v7);
  while ( 1 )
  {
    v9 = *(_DWORD *)(v3 + 48) >> 30;
    if ( !v9 )
      break;
    if ( v9 == 1 && !v4 )
      v4 = 1;
    v10 = *(_DWORD *)(v3 + 108);
    if ( v10 == -1 )
      break;
    if ( v10 == 1 )
    {
      v21 = 0LL;
      v24[1] = v24;
      v24[0] = v24;
      v19 = *(_QWORD *)(v2 + 80);
      *(_QWORD *)(v2 + 80) = &v19;
      v22 = 0;
      v23 = 393479LL;
      v20 = 1024;
      if ( v8 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      else
        ExReleaseSpinLockExclusive(v7, v8);
      KeWaitForGate((__int64)&v23, 19LL);
    }
    else
    {
      v11 = v10 + 1;
      *(_DWORD *)(v3 + 108) = v11;
      if ( v11 == 1 )
      {
        if ( v8 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v7);
        else
          ExReleaseSpinLockExclusive(v7, v8);
        v12 = MiEnableLargeSubsection(v3);
        ExAcquireSpinLockExclusive(v7);
        v13 = MiBuildWakeList(v26, 1024);
        MiReleaseControlAreaWaiters(v13, v14, v15);
        v16 = *(_DWORD *)(v3 + 108);
        if ( !v12 )
        {
          v4 = -1;
          *(_DWORD *)(v3 + 108) = v16 - 1;
          goto LABEL_26;
        }
        v2 = v26;
        *(_DWORD *)(v3 + 108) = v16 + 1;
      }
      v5 = (__int64 *)v3;
      if ( a2 )
      {
        v17 = *(unsigned int *)(v3 + 44);
        if ( a2 <= v17 )
          goto LABEL_26;
        a2 -= v17;
      }
      v3 = *(_QWORD *)(v3 + 16);
    }
    if ( !v3 )
      goto LABEL_26;
  }
  v4 = -1;
LABEL_26:
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  else
    ExReleaseSpinLockExclusive(v7, v8);
  if ( v4 == -1 && v5 )
    MiDecrementLargeSubsections(a1, v5);
  return v4;
}
