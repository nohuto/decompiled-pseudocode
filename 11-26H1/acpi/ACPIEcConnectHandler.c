/*
 * XREFs of ACPIEcConnectHandler @ 0x1400AF5F0
 * Callers:
 *     ACPIEcInternalControl @ 0x1400AEC08 (ACPIEcInternalControl.c)
 * Callees:
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIEcConnectHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v4; // rsi
  unsigned __int64 v6; // r15
  int v7; // ebp
  unsigned __int64 v8; // r15
  unsigned int v9; // edi
  int v10; // ecx
  unsigned __int8 v11; // dl
  __int64 v12; // r13
  __int64 v13; // r14
  void *Pool2; // rax
  void *v15; // r12
  const void *v16; // rdx
  unsigned __int8 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // al
  __int64 v20; // rcx
  __int64 v21; // r10
  KIRQL NewIrql; // [rsp+68h] [rbp+10h]
  PVOID ImageSectionHandle; // [rsp+78h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(unsigned __int8 **)(v2 + 32);
  if ( *(_DWORD *)(v2 + 16) < 0x20u )
    return 3221225507LL;
  v6 = *v4;
  v7 = 1 << *v4;
  ImageSectionHandle = MmLockPagableDataSection(ACPIEcConnectHandler);
  v8 = v6 >> 5;
  v9 = -1073741823;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v10 = *(_DWORD *)(a1 + 4 * v8 + 156);
  if ( (v10 & v7) == 0 )
  {
    v9 = 0;
    *(_DWORD *)(a1 + 4 * v8 + 156) = v7 | v10;
    v11 = *(_BYTE *)(a1 + 447);
    if ( !v11 )
    {
      v12 = *(unsigned __int8 *)(a1 + 448);
      v13 = 24 * v12;
      Pool2 = (void *)ExAllocatePool2(64LL, 24 * v12 + 96, 1164993345LL);
      v15 = Pool2;
      if ( !Pool2 )
      {
        v9 = -1073741670;
        goto LABEL_17;
      }
      v16 = *(const void **)(a1 + 456);
      if ( v16 )
      {
        memmove(Pool2, v16, 24 * v12);
        ExFreePoolWithTag(*(PVOID *)(a1 + 456), 0);
      }
      *(_BYTE *)(a1 + 448) += 4;
      v17 = 0;
      *(_QWORD *)(a1 + 456) = v15;
      do
      {
        v11 = v17 + v12;
        ++v17;
        *(_BYTE *)(v13 + *(_QWORD *)(a1 + 456)) = *(_BYTE *)(a1 + 447);
        v13 += 24LL;
        *(_BYTE *)(a1 + 447) = v11;
      }
      while ( v17 < 4u );
    }
    v18 = *(_QWORD *)(a1 + 456);
    *(_BYTE *)(a1 + 447) = *(_BYTE *)(v18 + 24LL * v11);
    if ( *(_BYTE *)(*v4 + a1 + 188) )
    {
      *(_DWORD *)(a1 + 4 * v8 + 124) &= ~v7;
      v19 = *(_BYTE *)(a1 + 444);
      while ( v19 )
      {
        v20 = *v4;
        v21 = v19;
        v19 = *(_BYTE *)(v19 + a1 + 188);
        if ( v19 == (_BYTE)v20 )
        {
          *(_BYTE *)(v21 + a1 + 188) = *(_BYTE *)(v20 + a1 + 188);
          break;
        }
      }
    }
    *(_BYTE *)(*v4 + a1 + 188) = v11;
    *(_BYTE *)(v18 + 24LL * v11) = 0;
    *(_BYTE *)(v18 + 24LL * v11 + 1) = *v4;
    *(_QWORD *)(v18 + 24LL * v11 + 8) = *((_QWORD *)v4 + 1);
    *(_QWORD *)(v18 + 24LL * v11 + 16) = *((_QWORD *)v4 + 2);
    *((_QWORD *)v4 + 3) = v11;
  }
LABEL_17:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), NewIrql);
  MmUnlockPagableImageSection(ImageSectionHandle);
  return v9;
}
