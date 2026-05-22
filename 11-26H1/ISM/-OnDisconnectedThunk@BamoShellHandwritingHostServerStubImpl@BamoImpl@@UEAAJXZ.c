/*
 * XREFs of ?OnDisconnectedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ @ 0x180070DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18003DB30 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microso_ea_18003DB30.c)
 *     ??1?$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180070E58 (--1-$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoShellHandwritingHostServerStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoShellHandwritingHostServerStubImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v5; // rbx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( *(int *)(v3 + 8) > 0 )
  {
    v5 = v3 - 16;
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v6,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))v3,
      v3 != 0 ? 3 : 0);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 96LL))(v5, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>(v6);
  }
  return v2;
}
