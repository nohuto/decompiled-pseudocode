/*
 * XREFs of ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x1803155E8
 * Callers:
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x18030F2F4 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x18030FBCC (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 */

void **__fastcall std::string::resize(void **a1, char *a2)
{
  unsigned __int64 v2; // r8
  size_t v3; // rdi
  bool v4; // cc
  char *v5; // rbx
  void **result; // rax

  v2 = (unsigned __int64)a1[2];
  if ( (unsigned __int64)a2 > v2 )
  {
    v3 = (size_t)&a2[-v2];
    if ( &a2[-v2] > (char *)a1[3] - v2 )
    {
      return std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(
               a1,
               (unsigned __int64)&a2[-v2],
               v2,
               (size_t)&a2[-v2]);
    }
    else
    {
      v4 = (unsigned __int64)a1[3] <= 0xF;
      a1[2] = a2;
      if ( !v4 )
        a1 = (void **)*a1;
      v5 = (char *)a1 + v2;
      result = (void **)memset_0((char *)a1 + v2, 0, v3);
      v5[v3] = 0;
    }
  }
  else
  {
    a1[2] = a2;
    if ( (unsigned __int64)a1[3] > 0xF )
      a1 = (void **)*a1;
    a2[(_QWORD)a1] = 0;
  }
  return result;
}
