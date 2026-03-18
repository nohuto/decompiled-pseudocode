/*
 * XREFs of ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAVCIVTouchSerializer@@@Z @ 0x14021E3D0
 * Callers:
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x140221E14 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x14022663C (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1402266D4 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 *     ?Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z @ 0x140226930 (-Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z.c)
 */

int __fastcall IVMeasureRimCompleteFrame(
        struct RIMCOMPLETEFRAME *a1,
        const struct CPointerRawData **a2,
        struct _UNICODE_STRING *a3,
        struct CIVTouchSerializer *a4)
{
  __int64 v4; // rsi
  int result; // eax

  v4 = *((_QWORD *)a4 + 2);
  result = CIVSerializer::Serialize(a4, (struct _UNICODE_STRING *)v4, a3, 1);
  if ( result >= 0 )
  {
    result = CIVTouchSerializer::Serialize(
               a4,
               (struct _IVRIMPOINTERRAWDATA **)(v4 + 208),
               a2[29],
               *((_DWORD *)a1 + 7),
               1);
    if ( result >= 0 )
      return CIVSerializer::Serialize(
               a4,
               (void **)(v4 + 216),
               *((void *const *)a1 + 29),
               176LL * *((unsigned int *)a1 + 6),
               1);
  }
  return result;
}
