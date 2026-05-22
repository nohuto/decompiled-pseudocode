/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800B5894
 * Callers:
 *     ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800B40C0 (-GetCurrentInputTypesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 * Callees:
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG2@Z @ 0x1800B2DFC (--$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@-$basic_string@GU-$c.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

void **__fastcall std::wstring::insert(void **Src, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r8
  bool v7; // cc
  char *v8; // r14
  __int64 v9; // rdi
  int v11; // [rsp+20h] [rbp-28h]

  v4 = (__int64)Src[2];
  if ( (char *)a4 > (char *)Src[3] - v4 )
    return std::wstring::_Reallocate_grow_by<_lambda_156f8c05752017390d6185e99ef4c093_,unsigned __int64,unsigned short const *,unsigned __int64>(
             Src,
             a4,
             v4,
             a4,
             v11,
             a4);
  v7 = (unsigned __int64)Src[3] <= 7;
  Src[2] = (void *)(v4 + a4);
  v8 = (char *)Src;
  if ( !v7 )
    v8 = (char *)*Src;
  if ( &asc_180204CD0[a4] <= (wchar_t *)v8 || L"," > (wchar_t *)&v8[2 * v4] )
  {
    v9 = a4;
  }
  else if ( v8 > (char *)L"," )
  {
    v9 = (v8 - (char *)L",") >> 1;
  }
  else
  {
    v9 = 0LL;
  }
  memmove_0(&v8[2 * a4], v8, 2 * v4 + 2);
  memcpy_0(v8, L",", 2 * v9);
  memcpy_0(&v8[2 * v9], &asc_180204CD0[v9 + a4], 2 * (a4 - v9));
  return Src;
}
