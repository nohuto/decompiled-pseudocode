/*
 * XREFs of ?CanCastTo@?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801D9648
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@UITouchSwipe@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@UITouchSwipe@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801D9568 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGestur.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // eax

  if ( *a2 == 2027207670 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_78d4bbf6_0c6e_4a17_ae0c_aff5dc4295e9.Data2
      || a2[2] != *(_DWORD *)GUID_78d4bbf6_0c6e_4a17_ae0c_aff5dc4295e9.Data4 )
    {
      return 2147500034LL;
    }
    v3 = *(_DWORD *)&GUID_78d4bbf6_0c6e_4a17_ae0c_aff5dc4295e9.Data4[4];
  }
  else
  {
    if ( *a2 != -1663204013
      || a2[1] != *(_DWORD *)&GUID_9cdd8553_04f2_4be1_8210_4911258c7d0e.Data2
      || a2[2] != *(_DWORD *)GUID_9cdd8553_04f2_4be1_8210_4911258c7d0e.Data4 )
    {
      return 2147500034LL;
    }
    v3 = *(_DWORD *)&GUID_9cdd8553_04f2_4be1_8210_4911258c7d0e.Data4[4];
  }
  if ( a2[3] == v3 )
  {
    *a3 = a1;
    return 0LL;
  }
  return 2147500034LL;
}
