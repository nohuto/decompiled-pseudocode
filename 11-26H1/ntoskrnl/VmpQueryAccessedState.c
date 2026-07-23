/*
 * XREFs of VmpQueryAccessedState @ 0x14045D8F4
 * Callers:
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1402536A0 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     VmpProcessAccessedBatch @ 0x1406C5368 (VmpProcessAccessedBatch.c)
 *     VmpLogQueryAccessedState @ 0x1406C6B18 (VmpLogQueryAccessedState.c)
 */

void __fastcall VmpQueryAccessedState(volatile LONG *SpinLock, _QWORD *a2, int a3, int a4)
{
  unsigned int v4; // esi
  _QWORD *v6; // rdi
  int v7; // ebx
  int v8; // r13d
  ULONG64 v9; // r12
  _QWORD *VmInternal; // r15
  int v11; // r12d
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rbx
  int v15; // ebx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // [rsp+38h] [rbp-49h]
  int v19; // [rsp+48h] [rbp-39h]
  int v20; // [rsp+4Ch] [rbp-35h]
  int v21; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+58h] [rbp-29h] BYREF
  _QWORD *v23; // [rsp+60h] [rbp-21h]
  unsigned __int64 v24; // [rsp+68h] [rbp-19h]
  __int128 v25; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp-1h] BYREF
  __int64 v27; // [rsp+88h] [rbp+7h]
  __int128 v28; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+A0h] [rbp+1Fh]
  unsigned __int64 v30; // [rsp+F0h] [rbp+6Fh] BYREF
  int v31; // [rsp+F8h] [rbp+77h]
  int v32; // [rsp+100h] [rbp+7Fh]

  v32 = a4;
  v31 = a3;
  v4 = 0;
  v21 = 0;
  v20 = 1;
  v29 = 0LL;
  v24 = (unsigned __int64)&a2[a3];
  v6 = a2;
  v19 = 0;
  v7 = 0;
  v23 = 0LL;
  v8 = 0;
  v25 = 0LL;
  v28 = 0LL;
  if ( stru_140F06A28.InitialStack
    && *(_DWORD *)stru_140F06A28.InitialStack
    && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 512LL) )
  {
    v9 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  else
  {
    v9 = 0LL;
  }
  QpcTimeStamp = v9;
  VmInternal = KeGetCurrentPrcb()->VmInternal;
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  if ( (unsigned __int64)v6 < v24 )
  {
    v11 = 0;
    while ( 1 )
    {
      v26 = *v6 >> 12;
      v27 = 1LL;
      VmpConvertPortionVpnRangeToGpnRange(SpinLock, &v26, 0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v28, &v25, &v21, 0);
      if ( *((_QWORD *)&v25 + 1) )
      {
        if ( v4 )
        {
          if ( VmInternal[v4 - 1] != (_QWORD)v25 - 1LL )
          {
            v11 = 0;
            v20 = 0;
          }
        }
        else
        {
          v23 = v6;
          v11 = 1;
        }
        v12 = v4++;
        v13 = v27 == 0;
        VmInternal[v12] = v25;
        if ( !v13 )
        {
          --v6;
LABEL_18:
          v14 = *((_QWORD *)SpinLock + 11);
          ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
          VmpProcessAccessedBatch(
            (_DWORD)SpinLock,
            (_DWORD)VmInternal,
            v4,
            (_DWORD)v23,
            (__int64)(VmInternal + 512),
            v32,
            v11);
          v4 = 0;
          ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
          if ( v14 != *((_QWORD *)SpinLock + 11) )
          {
            v28 = 0LL;
            v29 = 0LL;
          }
          ++v8;
          goto LABEL_21;
        }
        if ( v4 == 512 )
          goto LABEL_18;
      }
      else
      {
        *v6 |= 6uLL;
        ++v19;
        if ( v4 )
          goto LABEL_18;
      }
LABEL_21:
      if ( (unsigned __int64)++v6 >= v24 )
      {
        LODWORD(v30) = v11;
        v9 = QpcTimeStamp;
        v7 = v30;
        break;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
  if ( v4 )
  {
    v18 = v7;
    v15 = v32;
    VmpProcessAccessedBatch(
      (_DWORD)SpinLock,
      (_DWORD)VmInternal,
      v4,
      (_DWORD)v6 - 8 * v4,
      (__int64)(VmInternal + 512),
      v32,
      v18);
    ++v8;
  }
  else
  {
    v15 = v32;
  }
  if ( v9 )
  {
    KeQueryUnbiasedInterruptTimePrecise(&v30);
    if ( stru_140F06A28.InitialStack )
    {
      if ( *(_DWORD *)stru_140F06A28.InitialStack )
      {
        if ( tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 512LL) )
          VmpLogQueryAccessedState(v16, v31, v15, v19, v8, v20, v17, *((_QWORD *)SpinLock + 15));
      }
    }
  }
}
