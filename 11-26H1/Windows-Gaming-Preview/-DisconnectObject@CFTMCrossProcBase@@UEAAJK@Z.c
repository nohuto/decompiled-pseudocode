/*
 * XREFs of ?DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z @ 0x180042640
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180006C98 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042D48 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFTMCrossProcBase::DisconnectObject(LPUNKNOWN punkOuter, unsigned int a2)
{
  const struct _GUID *v4; // rdx
  int FTM; // ebx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
  FTM = CFTMCrossProcBase::_GetFTM(punkOuter, v4, &v7);
  if ( FTM >= 0 )
    FTM = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
  return (unsigned int)FTM;
}
