/*
 * XREFs of ??$_Copy_memmove_n@PEBU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowInformation@@PEBU1@_KPEAU1@@Z @ 0x180245270
 * Callers:
 *     ??$_Uninitialized_copy_n@PEBU_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@YAPEAU_DWMCaptureWindowInformation@@PEBU1@_KPEAU1@AEAV?$allocator@U_DWMCaptureWindowInformation@@@0@@Z @ 0x1802455D4 (--$_Uninitialized_copy_n@PEBU_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInform.c)
 * Callees:
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<_DWMCaptureWindowInformation const *,_DWMCaptureWindowInformation *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = 32 * a2;
  memmove_0(a3, Src, 32 * a2);
  return (__int64)a3 + v4;
}
