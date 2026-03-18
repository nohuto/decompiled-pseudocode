/*
 * XREFs of ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x14024DA20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013990 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3Set(_QWORD *a1, unsigned int a2, struct _DXGK_BRIGHTNESS_SET_IN *a3)
{
  __int64 v3; // rdi
  int v7; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_SET_IN *); // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-38h]

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
      v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_SET_IN *))(v8 + 32);
      if ( v9 )
      {
        v7 = v9(*(_QWORD *)(v8 + 8), a2, a3);
        if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline()
          && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(v13) = *(_DWORD *)(v3 + 4528);
          McTemplateK0pqtq_EtwWriteTransfer(v10, &EventBrightness, v11, a1, v13, a3->BrightnessMillinits, v7);
        }
        if ( v7 >= 0 )
          *(_DWORD *)(v3 + 4528) = a3->BrightnessMillinits;
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
    WdLogGlobalForLineNumber = 402;
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 4536), 0);
  return (unsigned int)v7;
}
