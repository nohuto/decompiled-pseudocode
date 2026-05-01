/*
 * XREFs of ??$_Copy_memmove_n@PEADPEAD@std@@YAPEADPEAD_K0@Z @ 0x180232FEC
 * Callers:
 *     ??$_Integer_to_chars@H@std@@YA?AUto_chars_result@0@PEADQEADHH@Z @ 0x180671428 (--$_Integer_to_chars@H@std@@YA-AUto_chars_result@0@PEADQEADHH@Z.c)
 * Callees:
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<char *,char *>(void *Src, size_t Size, void *a3)
{
  memmove_0(a3, Src, Size);
  return (__int64)a3 + Size;
}
