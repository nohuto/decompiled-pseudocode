/*
 * XREFs of MiIssueFlushTbEntire @ 0x1402519A0
 * Callers:
 *     MiGetHighestUltraLevel @ 0x140250780 (MiGetHighestUltraLevel.c)
 *     MiInsertCachedPte @ 0x140281740 (MiInsertCachedPte.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14043A570 (MiGetWsAndMakePageTablesNx.c)
 *     MiDecrementAweMapCount @ 0x1404799BC (MiDecrementAweMapCount.c)
 *     MiGeneratePteDeleteLazyStamp @ 0x140528EE4 (MiGeneratePteDeleteLazyStamp.c)
 *     MiDeleteUnmappedSystemCacheViews @ 0x1406FA688 (MiDeleteUnmappedSystemCacheViews.c)
 *     MiApplyLazyStampToAwePtes @ 0x1407056BC (MiApplyLazyStampToAwePtes.c)
 *     MiCalibrateTbFlush @ 0x140712BB4 (MiCalibrateTbFlush.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140CFA3B8 (MiZeroBootMappings.c)
 *     MxInitializePfnsForValidMappings @ 0x140CFD428 (MxInitializePfnsForValidMappings.c)
 *     MxSwitchToPfns @ 0x140CFE6E0 (MxSwitchToPfns.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140252764 (HvlpFastFlushAddressSpaceTb.c)
 *     KxFlushNonGlobalTb @ 0x140252950 (KxFlushNonGlobalTb.c)
 *     KxSetTimeStampBusy @ 0x140252AF4 (KxSetTimeStampBusy.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140252B78 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 *     VmpFlushTb @ 0x140253324 (VmpFlushTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402F3498 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1402F38FC (HvlpFastFlushAddressSpaceTbEx.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     KiIsFlushEntire @ 0x14041DD34 (KiIsFlushEntire.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404629F0 (HvlpSlowFlushAddressSpaceTb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiIssueFlushTbEntire(_KPROCESS *i, volatile _KAFFINITY_EX *ActiveProcessors, unsigned __int64 a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  __int64 result; // rax
  _ULARGE_INTEGER DueTime; // rcx
  volatile _KAFFINITY_EX *v7; // rbp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v10; // rcx
  unsigned __int8 v11; // di
  _KPROCESS *v12; // rcx
  _ULARGE_INTEGER v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int8 v16; // si
  unsigned __int8 v17; // di
  __int64 v18; // rsi
  volatile LONG *v19; // rcx
  unsigned __int8 v20; // di
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _KPROCESS *Process; // rcx
  _KPROCESS_SECURE_STATE v24; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v26[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-80h]

  v3 = (unsigned int)ActiveProcessors;
  v4 = (int)i;
  if ( (_DWORD)ActiveProcessors == -1 )
    return KeFlushCurrentTbOnly();
  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_3;
  v7 = 0LL;
  if ( (HvlEnlightenments & 2) == 0 && ((HvlEnlightenments & 0x800000) == 0 || !(unsigned __int8)KiIsFlushEntire()) )
  {
    if ( (_DWORD)KeNumberProcessors_0 == 1 )
    {
LABEL_3:
      if ( !KiKvaShadow )
      {
        if ( v4 != 1 )
        {
          result = KxFlushEntireTb(v3);
          goto LABEL_40;
        }
        KxFlushNonGlobalTb(v3);
LABEL_37:
        result = (__int64)KeGetCurrentThread();
        if ( *(_QWORD *)(*(_QWORD *)(result + 184) + 368LL) )
        {
          memset_0(v26, 0, 0x68uLL);
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 2u )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v24.EntireField = (unsigned __int64)Process->SecureState;
            LOBYTE(Process) = 2;
            v27 = v24.EntireField & 0xFFFFFFFFFFFFFFFCuLL;
            result = VslpEnterIumSecureMode(Process, 256LL, 0LL, v26);
          }
        }
        goto LABEL_40;
      }
      if ( v4 == 2 || v4 == 1 )
        result = KxFlushEntireTb(v3);
      else
        result = KxFlushNonGlobalTb(v3);
LABEL_36:
      if ( v4 != 1 )
        goto LABEL_40;
      goto LABEL_37;
    }
    if ( !v3 )
    {
      _InterlockedOr(v25, 0);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 12 )
        __writecr8(0xCuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
      CurrentPrcb = KeGetCurrentPrcb();
      ActiveProcessors = CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
      for ( i = 0LL; (unsigned __int16)i < ActiveProcessors->Count; LOWORD(i) = (_WORD)i + 1 )
      {
        a3 = ActiveProcessors->Bitmap[(unsigned __int16)i];
        if ( a3 && ((_WORD)i != CurrentPrcb->Group || a3 != CurrentPrcb->GroupSetMember) )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          goto LABEL_55;
        }
      }
      if ( KiKvaShadow )
      {
        if ( v4 != 3 && !v4 )
          goto LABEL_51;
        if ( !KiFlushPcid )
          goto LABEL_31;
        v21 = __readcr3();
        __writecr3(v21);
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          goto LABEL_33;
      }
      else
      {
        if ( v4 == 1 )
          goto LABEL_51;
        if ( !KiFlushPcid )
        {
LABEL_31:
          v10 = __readcr4();
          if ( (v10 & 0x20080) != 0 )
          {
            __writecr4(v10 ^ 0x80);
            __writecr4(v10);
LABEL_33:
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            goto LABEL_36;
          }
LABEL_51:
          v14 = __readcr3();
          __writecr3(v14);
          goto LABEL_33;
        }
        v22 = __readcr3();
        __writecr3(v22);
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          goto LABEL_33;
      }
      KiSetUserTbFlushPending();
      goto LABEL_33;
    }
  }
LABEL_55:
  if ( KiKvaShadow )
  {
    if ( v4 )
    {
LABEL_57:
      v15 = 0LL;
      v16 = 1;
      goto LABEL_58;
    }
    v15 = 0LL;
    v16 = 0;
  }
  else
  {
    if ( v4 != 1 )
      goto LABEL_57;
    i = KeGetCurrentThread()->ApcState.Process;
    v15 = i->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
    v16 = 0;
  }
LABEL_58:
  if ( !v3 )
  {
    _InterlockedOr(v25, 0);
    i = KeGetCurrentThread()->ApcState.Process;
    v7 = i->ActiveProcessors;
  }
  if ( v15 )
  {
    if ( !v7 )
      goto LABEL_63;
    goto LABEL_62;
  }
  if ( v7 )
  {
LABEL_62:
    if ( (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(i, ActiveProcessors, a3, v15) )
    {
      if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
        result = HvlpSlowFlushAddressSpaceTbEx(v15);
      else
        result = HvlpFastFlushAddressSpaceTbEx(v15);
      goto LABEL_36;
    }
LABEL_63:
    if ( (HvlEnlightenments & 0x80u) == 0 )
      result = HvlpSlowFlushAddressSpaceTb(v15, v7, v16);
    else
      result = HvlpFastFlushAddressSpaceTb(v15, v7, v16);
    goto LABEL_36;
  }
  if ( v4 == 1 )
    goto LABEL_63;
  v17 = KeGetCurrentIrql();
  if ( v17 != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v17, 12LL);
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    if ( (HvlEnlightenments & 0x80u) == 0 )
      HvlpSlowFlushAddressSpaceTb(0LL, 0LL, v16);
    else
      HvlpFastFlushAddressSpaceTb(0LL, 0LL, v16);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
  result = v17;
  __writecr8(v17);
LABEL_40:
  if ( v4 == 1 )
  {
    if ( VmTbFlushEnabled )
    {
      result = (__int64)KeGetCurrentThread();
      v18 = *(_QWORD *)(result + 184);
      v19 = *(volatile LONG **)(v18 + 1648);
      if ( v19 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 > 2u )
        {
          __int2c();
          result = VmpFlushTb(v19);
        }
        else
        {
          if ( v20 < 2u )
          {
            v20 = KeGetCurrentIrql();
            if ( v20 != 2 )
            {
              __writecr8(2uLL);
              v19 = *(volatile LONG **)(v18 + 1648);
            }
            if ( KiIrqlFlags )
            {
              LOBYTE(ActiveProcessors) = 2;
              KiRaiseIrqlProcessIrqlFlags(v20, ActiveProcessors);
              v19 = *(volatile LONG **)(v18 + 1648);
            }
          }
          result = VmpFlushTb(v19);
          if ( v20 < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
            result = v20;
            __writecr8(v20);
          }
        }
      }
    }
  }
  if ( ExTbFlushActive )
  {
    v11 = KeGetCurrentIrql();
    if ( v11 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(ActiveProcessors) = 15;
      KiRaiseIrqlProcessIrqlFlags(v11, ActiveProcessors);
    }
    v12 = KeGetCurrentThread()->ApcState.Process;
    if ( v4 == 1 )
    {
      v13 = (_ULARGE_INTEGER)v12[4].Padding[1];
      if ( v12[3].ActiveGroupPadding[1] )
      {
        guard_dispatch_icall_no_overrides(v12[3].ActiveGroupPadding[1], 0LL, 0LL);
        if ( !v13.QuadPart )
          goto LABEL_10;
      }
      else if ( !v13.QuadPart )
      {
LABEL_10:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        result = v11;
        __writecr8(v11);
        return result;
      }
      DueTime = v13;
    }
    else
    {
      DueTime = ExSaPageGroupDescriptorArrayLock.Timer.DueTime;
    }
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))guard_dispatch_icall_no_overrides)(
      (_ULARGE_INTEGER)DueTime.QuadPart,
      0LL,
      0LL);
    goto LABEL_10;
  }
  return result;
}
