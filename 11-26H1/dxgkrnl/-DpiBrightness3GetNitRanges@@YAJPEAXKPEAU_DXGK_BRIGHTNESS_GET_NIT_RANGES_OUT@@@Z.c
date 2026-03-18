/*
 * XREFs of ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024D910
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140090678 (DpiMdmProcessAdapterBrightness.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024EC3C (-ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3GetNitRanges(
        _QWORD *a1,
        unsigned int a2,
        struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *a3)
{
  __int64 v3; // r14
  int v7; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *); // rax

  v3 = a1[8];
  KeWaitForSingleObject((PVOID)(v3 + 4536), Executive, 0, 0, 0LL);
  v7 = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
  if ( v7 >= 0 )
  {
    v8 = 0LL;
    if ( *(_WORD *)(v3 + 4810) == 3 )
      v8 = v3 + 4808;
    if ( v8 )
    {
      v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *))(v8 + 56);
      if ( v9 )
      {
        v7 = v9(*(_QWORD *)(v8 + 8), a2, a3);
        if ( v7 >= 0 )
          ZeroUnusedNitsRanges(a3);
      }
      else
      {
        v7 = -1073741661;
      }
    }
    else
    {
      v7 = -1073741637;
    }
    DpiReleaseCoreSyncAccessSafe(a1, 0LL);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 576;
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 4536), 0);
  return (unsigned int)v7;
}
