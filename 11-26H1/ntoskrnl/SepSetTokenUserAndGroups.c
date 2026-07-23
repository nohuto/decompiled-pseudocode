/*
 * XREFs of SepSetTokenUserAndGroups @ 0x140A86164
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SepDuplicateSid @ 0x140A86564 (SepDuplicateSid.c)
 *     SepDereferenceSidValuesBlock @ 0x140B1018C (SepDereferenceSidValuesBlock.c)
 *     SepLogTokenSidManagement @ 0x140B2D560 (SepLogTokenSidManagement.c)
 *     SepCreateSidValuesBlock @ 0x140B51110 (SepCreateSidValuesBlock.c)
 *     SepCompareSidValuesBlocks @ 0x140B67214 (SepCompareSidValuesBlocks.c)
 */

__int64 __fastcall SepSetTokenUserAndGroups(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  int v5; // eax
  int v6; // ebx
  int v9; // ebp
  char v11; // r15
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  int SidValuesBlock; // r12d
  volatile signed __int64 *v15; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v17; // r14
  AutoBoost *v18; // rax
  void *v19; // rdx
  AutoBoost *v20; // rbp
  __int64 v21; // rbp
  int v22; // ecx
  __int64 v23; // r8
  char v24; // al
  __int64 v25; // r9
  __int64 v26; // r9
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  PVOID P; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a1 + 208);
  v6 = -1;
  P = 0LL;
  v9 = a2;
  v11 = 0;
  if ( v5 != -1 )
  {
    v6 = v5 - 1;
    result = SepDuplicateSid(*(void **)(a4 + 16LL * (unsigned int)(v5 - 1)));
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = 0LL;
  }
  SidValuesBlock = SepCreateSidValuesBlock((unsigned int)&P, v9, a3, a4, a5, v6);
  if ( SidValuesBlock >= 0 )
  {
    v15 = (volatile signed __int64 *)P;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL) )
      goto LABEL_20;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 112LL);
    v18 = (AutoBoost *)KeAbPreAcquire((__int64)v17, 0LL, 0LL, v13);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
      ExfAcquirePushLockExclusiveEx(v17, v18, (__int64)v17);
    if ( v20 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v20, v19);
      else
        *((_BYTE *)v20 + 10) = 1;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL) )
    {
      if ( _InterlockedIncrement64(v15 + 1) <= 1 )
        __fastfail(0xEu);
      v11 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL) = v15;
    }
    v21 = *(_QWORD *)(a1 + 216);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v21 + 112));
    KeAbPostRelease(v21 + 112);
    KeLeaveCriticalRegion();
    if ( !v11 )
    {
LABEL_20:
      v24 = SepCompareSidValuesBlocks(v15, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL));
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL);
      if ( v24 )
      {
        SepLogTokenSidManagement(2, (_DWORD)v15, v23, a1, 0LL);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL);
        SepDereferenceSidValuesBlock((PVOID)v15);
        goto LABEL_26;
      }
      v22 = 1;
    }
    else
    {
      v22 = 0;
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL);
    }
    SepLogTokenSidManagement(v22, (_DWORD)v15, v23, a1, 0LL);
    *(_QWORD *)(a1 + 1128) = v15;
LABEL_26:
    v25 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1176;
    v26 = v25 + 24;
    v27 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      do
      {
        v28 = *(_QWORD *)(a1 + 152);
        v29 = 2LL * v27;
        if ( v27 == *(_DWORD *)(a1 + 208) )
        {
          *(_QWORD *)(v28 + 16LL * v27) = *(_QWORD *)(a1 + 1120);
        }
        else
        {
          *(_QWORD *)(v28 + 16LL * v27) = v26;
          v26 += (4LL * *(unsigned __int8 *)(v26 + 1) + 11) & 0xFFFFFFFCLL;
        }
        if ( v27 )
          v30 = *(_DWORD *)(a4 + 16LL * (v27 - 1) + 8);
        else
          v30 = *(_DWORD *)(a2 + 8);
        ++v27;
        *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v29 + 8) = v30;
      }
      while ( v27 < *(_DWORD *)(a1 + 124) );
    }
  }
  return (unsigned int)SidValuesBlock;
}
