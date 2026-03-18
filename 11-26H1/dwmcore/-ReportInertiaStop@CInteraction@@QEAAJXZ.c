/*
 * XREFs of ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x1801E1688
 * Callers:
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18013B374 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::ReportInertiaStop(CInteraction *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  signed int LastError; // eax

  v1 = (__int64 *)((char *)this + 1736);
  v3 = *((_QWORD *)this + 217);
  v4 = 0;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 232LL))(v3, *((_QWORD *)g_pComposition + 110));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
  }
  if ( !(unsigned int)ReportInertia(*((unsigned int *)this + 430), 6LL, 0LL, 0LL, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      return (unsigned __int16)LastError | 0x80070000;
    return (unsigned int)LastError;
  }
  return v4;
}
