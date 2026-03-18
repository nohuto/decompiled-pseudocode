/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x180237274
 * Callers:
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1802079DC (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_1_@?1??append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV34@QEBD_K@Z@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??append@01@QEAAAEAV01@QEBD0@Z@PEBD_K@Z @ 0x180237108 (--$_Reallocate_grow_by@V_lambda_1_@-1--append@-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void **__fastcall std::string::append(void **Src, _BYTE *a2, __int64 a3)
{
  void **v3; // rsi
  unsigned __int64 Size; // rdi
  _BYTE *v5; // rcx
  bool v6; // cc
  char *v7; // rax
  char *v8; // rbx

  v3 = Src;
  Size = -1LL;
  do
    ++Size;
  while ( a2[Size] );
  v5 = Src[2];
  if ( Size > (_BYTE *)v3[3] - v5 )
    return ____Reallocate_grow_by_V_lambda_1___1__append___basic_string_DU__char_traits_D_std__V__allocator_D_2__std__QEAAAEAV34_QEBD_K_Z_PEBD_K___basic_string_DU__char_traits_D_std__V__allocator_D_2__std__AEAAAEAV01__KV_lambda_1___1__append_01_QEAAAEAV01_QEBD0_Z_PEBD_K_Z(
             v3,
             Size,
             a3,
             a2,
             Size);
  v6 = (unsigned __int64)v3[3] <= 0xF;
  v3[2] = &v5[Size];
  v7 = (char *)v3;
  if ( !v6 )
    v7 = (char *)*v3;
  v8 = &v5[(_QWORD)v7];
  memmove_0(&v5[(_QWORD)v7], a2, Size);
  v8[Size] = 0;
  return v3;
}
