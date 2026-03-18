/*
 * XREFs of ??$_Uninitialized_copy_n@PEBU_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@YAPEAU_DWMCaptureWindowInformation@@PEBU1@_KPEAU1@AEAV?$allocator@U_DWMCaptureWindowInformation@@@0@@Z @ 0x1802455D4
 * Callers:
 *     ??$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@1@PEBU_DWMCaptureWindowInformation@@_K@Z @ 0x18024532C (--$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformati.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEBU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowInformation@@PEBU1@_KPEAU1@@Z @ 0x180245270 (--$_Copy_memmove_n@PEBU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowInformat.c)
 */

char *__fastcall std::_Uninitialized_copy_n<_DWMCaptureWindowInformation const *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove_n<_DWMCaptureWindowInformation const *,_DWMCaptureWindowInformation *>(a1, a2, a3);
  return &a3[32 * a2];
}
