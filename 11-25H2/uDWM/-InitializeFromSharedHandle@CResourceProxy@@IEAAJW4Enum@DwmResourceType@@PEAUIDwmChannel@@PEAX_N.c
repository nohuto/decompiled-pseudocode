/*
 * XREFs of ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z @ 0x180005820
 * Callers:
 *     ?InitializeFromSharedHandle@CVisualTargetProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x180003B60 (-InitializeFromSharedHandle@CVisualTargetProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ?InitializeFromSharedHandle@CVisualProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x18000568C (-InitializeFromSharedHandle@CVisualProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ?InitializeFromSharedHandle@CBaseGeometryProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800057F8 (-InitializeFromSharedHandle@CBaseGeometryProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ?InitializeFromSharedHandle@CVisualSurfaceProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x18008120C (-InitializeFromSharedHandle@CVisualSurfaceProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ?InitializeFromSharedHandle@CAnimationTriggerProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800A8B00 (-InitializeFromSharedHandle@CAnimationTriggerProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ?InitializeFromSharedHandle@CCaptureControllerProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800A8BAC (-InitializeFromSharedHandle@CCaptureControllerProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ?InitializeFromSharedHandle@CHolographicInteropTextureProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800B6948 (-InitializeFromSharedHandle@CHolographicInteropTextureProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x1800058E0 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResourceProxy::InitializeFromSharedHandle(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // rax
  __int64 v7; // r10
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF

  v5 = *a3;
  v14 = 0;
  v7 = a4;
  LOBYTE(a4) = a5;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, unsigned int *))(v5 + 88))(a3, v7, a2, a4, &v14);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB3u, 0LL);
  }
  else
  {
    v12 = CResource::WrapExistingResource(a3, v10, v14, a1 + 16);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u, 0LL);
    else
      v11 = 0;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64 *))(*a3 + 96))(a3);
  return v11;
}
