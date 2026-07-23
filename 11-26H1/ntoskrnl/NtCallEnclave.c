/*
 * XREFs of NtCallEnclave @ 0x140735DF0
 * Callers:
 *     DifNtCallEnclaveWrapper @ 0x140671A60 (DifNtCallEnclaveWrapper.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x140735DF0 (NtCallEnclave.c)
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __cdecl NtCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v14; // rcx
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v18; // cf
  char v24; // [rsp+50h] [rbp+28h]

  *(_DWORD *)(v4 - 72) = 0;
  *(_DWORD *)(v4 - 64) = 0;
  *(_DWORD *)(v4 - 56) = 0;
  *(_DWORD *)(v4 - 48) = 0;
  *(_DWORD *)(v4 - 40) = 0;
  *(_DWORD *)(v4 - 32) = 0;
  *(_OWORD *)(v4 - 16) = 0LL;
  *(_OWORD *)v4 = 0LL;
  *(_OWORD *)(v4 + 16) = 0LL;
  *(_OWORD *)(v4 + 32) = 0LL;
  *(_OWORD *)(v4 + 48) = 0LL;
  *(_OWORD *)(v4 + 64) = 0LL;
  v5 = ((__int64 (__fastcall *)(PENCLAVE_ROUTINE, PVOID, ULONG, PVOID *))PsCallEnclave)(
         Routine,
         Reserved,
         Flags,
         RoutineParamReturn);
  *(_QWORD *)(v4 - 80) = v5;
  v9 = *(_QWORD *)(v4 + 200);
  v10 = *(_QWORD *)(v4 + 208);
  _disable();
  __asm { rdsspq  rcx }
  if ( _RCX )
  {
    _RCX = 1LL;
    __asm { incsspq rcx }
  }
  if ( (KiTrapFeatures & 2) != 0 && (*(_BYTE *)(v4 + 240) & 1) != 0 )
  {
    *(_QWORD *)(v4 + 192) = *(_QWORD *)(v4 + 192);
    *(_QWORD *)(v4 + 208) = v10;
    *(_QWORD *)(v4 + 200) = v9;
  }
  else
  {
    if ( (*(_BYTE *)(v4 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v4 - 84));
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
         && (unsigned int)KiSynchronizeUserIsolationDomainEntry((__int64)CurrentThread, v6, v7, v8) );
    if ( (KeGetPcr()->Prcb.PrcbPad12a[2] & 2) != 0 )
      KiUpdateStibpPairing(0LL, v6, v7);
    if ( (KeGetCurrentThread()->Header.LockNV & 0x8000000) != 0 )
      ((void (*)(void))KiRestoreSetContextState)();
    v14 = KeGetCurrentThread();
    if ( (v14->Header.LockNV & 0x10000) != 0 && (v14->Header.Size & 1) != 0 )
    {
      KiCopyCounters((__int64)v14);
      v14 = KeGetCurrentThread();
    }
    _mm_setcsr(*(_DWORD *)(v4 - 84));
    if ( *(_WORD *)(v4 + 128) )
      ((void (__fastcall *)(struct _KTHREAD *))KiRestoreDebugRegisterState)(v14);
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
    v18 = _bittestandreset16(MK_FP(__GS__, 2200LL), 2u);
    if ( v18 )
      __writemsr(0x49u, 1uLL);
    v18 = _bittestandreset16(MK_FP(__GS__, 2200LL), 5u);
    if ( v18 )
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
    LODWORD(v5) = KiKernelExit(
                    *(_QWORD *)(v4 - 72),
                    *(_QWORD *)(v4 - 64),
                    *(_QWORD *)(v4 - 56),
                    *(_QWORD *)(v4 - 48),
                    v24);
  }
  return v5;
}
