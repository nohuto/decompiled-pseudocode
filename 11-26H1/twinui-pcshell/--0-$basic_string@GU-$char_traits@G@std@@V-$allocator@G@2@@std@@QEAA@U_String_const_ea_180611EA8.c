/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x180611EA8
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ??0RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180662BA0 (--0RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Take_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEAV12@@Z @ 0x1800336B0 (-_Take_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEAV12@@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180033F54 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

char **__fastcall std::wstring::wstring(char **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  char *v10; // r13
  char *v11; // rcx
  __int64 v12; // r9
  size_t v13; // r8
  const void *v14; // rdx
  char *v15; // rcx
  char *v16; // rbx
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  unsigned __int64 size_of; // rax
  char *v20; // rax
  char *v21; // rbp
  size_t v22; // r12

  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  v5 = (_QWORD *)a4;
  a1[3] = 0LL;
  v6 = (_QWORD *)a3;
  v7 = *(_QWORD *)(a3 + 16);
  v8 = *(_QWORD *)(a4 + 16);
  v9 = *(_QWORD *)(a4 + 24);
  v10 = (char *)(v8 + v7);
  if ( v8 <= *(_QWORD *)(a3 + 24) - v7 && v9 <= *(_QWORD *)(a3 + 24) )
  {
    std::wstring::_Take_contents(a1, a3);
    if ( (unsigned __int64)a1[3] > 7 )
      v11 = *a1;
    if ( *(_QWORD *)(v12 + 24) > 7uLL )
      v5 = *(_QWORD **)v12;
    v13 = 2 * v8 + 2;
    v14 = v5;
    v15 = &v11[2 * v7];
LABEL_8:
    memcpy_0(v15, v14, v13);
    a1[2] = v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    std::wstring::_Take_contents(a1, a4);
    v16 = *a1;
    v17 = 2 * v7;
    memmove_0(&(*a1)[v17], *a1, 2 * v8 + 2);
    if ( v6[3] > 7uLL )
      v6 = (_QWORD *)*v6;
    v13 = v17;
    v14 = v6;
    v15 = v16;
    goto LABEL_8;
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v7 < v8 )
    std::_Xlen_string();
  v18 = std::wstring::_Calculate_growth(v8 + v7, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
  size_of = std::_Get_size_of_n<2>(v18 + 1);
  v20 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *a1 = v20;
  v21 = v20;
  a1[2] = v10;
  a1[3] = (char *)v18;
  if ( v6[3] > 7uLL )
    v6 = (_QWORD *)*v6;
  v22 = 2 * v7;
  memcpy_0(v20, v6, v22);
  if ( v5[3] > 7uLL )
    v5 = (_QWORD *)*v5;
  memcpy_0(&v21[v22], v5, 2 * v8 + 2);
  return a1;
}
