/*
 * XREFs of ??9CDrawListBitmap@@QEBA_NAEBV0@@Z @ 0x18017FF00
 * Callers:
 *     ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18017FD30 (-GetNextRunningEffect@CBrushRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnco.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawListBitmap::operator!=(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)a1 )
    return *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) || *(_BYTE *)(a1 + 16) != *(_BYTE *)(a2 + 16);
  return *(_QWORD *)a1 != *(_QWORD *)a2 || *(_BYTE *)(a1 + 16) != *(_BYTE *)(a2 + 16);
}
