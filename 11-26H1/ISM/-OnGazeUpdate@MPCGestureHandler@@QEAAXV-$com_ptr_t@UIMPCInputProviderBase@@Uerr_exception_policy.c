/*
 * XREFs of ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BE7DC
 * Callers:
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180024128 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 * Callees:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180114D44 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180115110 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::OnGazeUpdate(__int64 a1, __int64 *a2)
{
  unsigned int v4; // eax
  float *v5; // rbp
  unsigned int v6; // eax

  if ( !*(_BYTE *)(a1 + 972) )
  {
    if ( *(_DWORD *)(a1 + 168) == 1 )
    {
      if ( *(float *)(a1 + 960) == 0.0 )
      {
        v5 = (float *)(a1 + 964);
        if ( *(float *)(a1 + 964) == 0.0 )
          goto LABEL_11;
      }
      else
      {
        v5 = (float *)(a1 + 964);
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 88LL))(*a2);
      ManipulationInjector::InjectPan((ManipulationInjector *)(a1 + 80), *(float *)(a1 + 960), *v5, v6);
      *(float *)(a1 + 952) = fmaxf(*(float *)(a1 + 960), *v5) + *(float *)(a1 + 952);
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a1 + 168) == 16 || *(_DWORD *)(a1 + 168) == 32 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 88LL))(*a2);
      ManipulationInjector::InjectZoom((ManipulationInjector *)(a1 + 80), *(float *)(a1 + 968), v4);
    }
  }
LABEL_11:
  *(_BYTE *)(a1 + 972) = 0;
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
