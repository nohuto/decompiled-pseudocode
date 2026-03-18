/*
 * XREFs of ??0?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800796A8
 * Callers:
 *     ?GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18007A150 (-GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007A6F0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 *__fastcall wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::com_ptr_t<CDrawListCache,wil::err_returncode_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a2;
  *a1 = *a2;
  if ( v2 && _InterlockedAdd((volatile signed __int32 *)(v2 + 8), 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  return a1;
}
