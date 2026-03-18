/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400A4600
 * Callers:
 *     ?Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x140058EB4 (-Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1400A3194 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     NtCompositionSetDropTarget @ 0x1400A36F0 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1400A3840 (NtQueryCompositionInputSinkViewId.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1400A4180 (NtQueryCompositionInputIsImplicit.c)
 *     NtQueryCompositionInputSink @ 0x1400A4290 (NtQueryCompositionInputSink.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1400A44F0 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1401CFA98 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtUserAddVisualIdentifier @ 0x1401E2110 (NtUserAddVisualIdentifier.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x14021A490 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionInputObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct CompositionInputObject **a4)
{
  NTSTATUS v5; // ebx
  struct CompositionInputObject *v6; // rdi
  int v7; // eax
  struct CompositionInputObject *v8; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = (struct CompositionInputObject *)Object;
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v6 + 1) + 16LL))(*((_QWORD **)v6 + 1));
      if ( v7 != 2 )
        v5 = -1073741788;
      v8 = v6;
      if ( v7 != 2 )
        v8 = 0LL;
      if ( v5 >= 0 )
      {
        *a4 = v8;
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741816;
    }
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
