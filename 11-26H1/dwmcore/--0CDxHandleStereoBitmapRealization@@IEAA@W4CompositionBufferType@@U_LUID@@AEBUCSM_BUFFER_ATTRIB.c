/*
 * XREFs of ??0CDxHandleStereoBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802AE6E8
 * Callers:
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802AE954 (-Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180129F50 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x18022A958 (-AdjustStereoEntityCount@CComposition@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char *v6; // rax
  CComposition *v7; // rcx
  __int64 v8; // rdi

  CDxHandleBitmapRealization::CDxHandleBitmapRealization((__int64)a1, a2, a3, a4, a5, 1, 1);
  *a1 = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  a1[2] = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  a1[10] = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  a1[11] = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  a1[41] = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResource'};
  a1[42] = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization's `ISwapChainRealization'};
  a1[43] = &CDxHandleStereoBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  a1[50] = 0LL;
  a1[51] = 0LL;
  v6 = (char *)operator new(0x50uLL);
  v7 = (CComposition *)v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *(_DWORD *)(v6 + 73) = 0;
    *(_WORD *)(v6 + 77) = 0;
    v6[79] = 0;
    *(_QWORD *)v6 = &CD2DBitmapCache::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    *((_QWORD *)v6 + 2) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    v6[72] = 0;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = a1[51];
  a1[51] = v7;
  if ( v7 )
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v7 + 8LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  CComposition::AdjustStereoEntityCount(v7, 1);
  return a1;
}
