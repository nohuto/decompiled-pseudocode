/*
 * XREFs of ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x140412970
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013990 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3SetBacklightOptimization(
        _QWORD *a1,
        unsigned int a2,
        enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL a3)
{
  __int64 v3; // rsi
  struct _KMUTANT *v7; // r14
  int v8; // ebx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rax
  int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-38h]

  v3 = a1[8];
  v7 = (struct _KMUTANT *)(v3 + 4536);
  KeWaitForSingleObject((PVOID)(v3 + 4536), Executive, 0, 0, 0LL);
  v8 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  if ( v8 >= 0 )
  {
    v9 = 0LL;
    if ( *(_WORD *)(v3 + 4810) == 3 )
      v9 = v3 + 4808;
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v9 + 64);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v3 + 4524);
        v12 = v10(*(_QWORD *)(v9 + 8), a2, (unsigned int)a3);
        v8 = v12;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(v16) = v11;
          McTemplateK0pqtq_EtwWriteTransfer(v13, &EventBacklightOptimizationLevel, v14, a1, v16, a3, v12);
        }
      }
      else
      {
        v8 = -1073741661;
      }
    }
    else
    {
      v8 = -1073741637;
    }
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 632;
  }
  KeReleaseMutex(v7, 0);
  return (unsigned int)v8;
}
