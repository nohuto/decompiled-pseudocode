/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180319034
 * Callers:
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180318C78 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180318D48 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x1803139D0 (--$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@-$basic_string@DU-$cha.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

void **__fastcall std::string::append(void **Src, const void *a2, unsigned __int64 Size)
{
  _BYTE *v5; // rcx
  bool v6; // cc
  void *v7; // rax
  char *v8; // rbx
  void **result; // rax

  v5 = Src[2];
  if ( Size > (_BYTE *)Src[3] - v5 )
    return std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
             Src,
             Size,
             Size,
             a2,
             Size);
  v6 = (unsigned __int64)Src[3] <= 0xF;
  Src[2] = &v5[Size];
  v7 = Src;
  if ( !v6 )
    v7 = *Src;
  v8 = &v5[(_QWORD)v7];
  memmove_0(&v5[(_QWORD)v7], a2, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
