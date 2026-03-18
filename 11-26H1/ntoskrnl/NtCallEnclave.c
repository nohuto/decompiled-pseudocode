/*
 * XREFs of NtCallEnclave @ 0x140731220
 * Callers:
 *     DifNtCallEnclaveWrapper @ 0x14066DE80 (DifNtCallEnclaveWrapper.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x140731220 (NtCallEnclave.c)
 *     PsCallEnclave @ 0x1407FE1F0 (PsCallEnclave.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall NtCallEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v15; // rcx
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v19; // cf

  *(_DWORD *)(v5 - 72) = 0;
  *(_DWORD *)(v5 - 64) = 0;
  *(_DWORD *)(v5 - 56) = 0;
  *(_DWORD *)(v5 - 48) = 0;
  *(_DWORD *)(v5 - 40) = 0;
  *(_DWORD *)(v5 - 32) = 0;
  *(_OWORD *)(v5 - 16) = 0LL;
  *(_OWORD *)v5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_OWORD *)(v5 + 32) = 0LL;
  *(_OWORD *)(v5 + 48) = 0LL;
  *(_OWORD *)(v5 + 64) = 0LL;
  result = PsCallEnclave();
  *(_QWORD *)(v5 - 80) = result;
  v10 = *(_QWORD *)(v5 + 200);
  v11 = *(_QWORD *)(v5 + 208);
  _disable();
  __asm { rdsspq  rcx }
  if ( _RCX )
  {
    _RCX = 1LL;
    __asm { incsspq rcx }
  }
  if ( (KiTrapFeatures & 2) != 0 && (*(_BYTE *)(v5 + 240) & 1) != 0 )
  {
    *(_QWORD *)(v5 + 192) = *(_QWORD *)(v5 + 192);
    *(_QWORD *)(v5 + 208) = v11;
    *(_QWORD *)(v5 + 200) = v10;
  }
  else
  {
    if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v5 - 84));
      __asm { iretq }
    }
    if ( (KiTrapFeatures & 8) != 0 )
      __asm { stac }
    do
    {
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->ApcState.UserApcPendingAll & 3) == 0 )
          break;
        __writecr8(1uLL);
        _enable();
        KiInitiateUserApc();
        _disable();
        __writecr8(0LL);
      }
    }
    while ( (CurrentThread->Header.Reserved1 & 0x80u) != 0
         && (unsigned int)KiSynchronizeUserIsolationDomainEntry((__int64)CurrentThread, v7, v8, v9) );
    if ( (KeGetPcr()->Prcb.PrcbPad12a[2] & 2) != 0 )
      KiUpdateStibpPairing(0LL, v7, v8);
    if ( (KeGetCurrentThread()->Header.LockNV & 0x8000000) != 0 )
      ((void (*)(void))KiRestoreSetContextState)();
    v15 = KeGetCurrentThread();
    if ( (v15->Header.LockNV & 0x10000) != 0 && (v15->Header.Size & 1) != 0 )
    {
      KiCopyCounters((__int64)v15);
      v15 = KeGetCurrentThread();
    }
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    if ( *(_WORD *)(v5 + 128) )
      ((void (__fastcall *)(struct _KTHREAD *))KiRestoreDebugRegisterState)(v15);
    if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x16u) )
    {
      __asm { rdsspq  rcx }
      if ( _RCX == KeGetPcr()->Prcb.KernelShadowStackInitial + 8 )
      {
        _RCX = KeGetPcr()->Prcb.TransitionShadowStack;
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    __writegsbyte(0x89Eu, 0);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x8A6u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v19 = _bittestandreset16(MK_FP(__GS__, 2200LL), 2u);
    if ( v19 )
      __writemsr(0x49u, 1uLL);
    v19 = _bittestandreset16(MK_FP(__GS__, 2200LL), 5u);
    if ( v19 )
    {
      _RAX = 56026LL;
      if ( (KeGetPcr()->Prcb.BpbFeatures.AllFlags & 8) != 0 )
      {
        LOBYTE(_RAX) = 32;
        __asm { incsspq rax }
      }
    }
    if ( (KiTrapFeatures & 1) == 0 )
    {
      if ( (KeGetPcr()->Prcb.BpbState.AllFlags & 0x200) != 0 )
        __asm { verw    [rsp-1E8h+arg_200] }
      __asm
      {
        swapgs
        iretq
      }
    }
    return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), *(_QWORD *)(v5 - 56), *(_QWORD *)(v5 - 48), a5);
  }
  return result;
}
