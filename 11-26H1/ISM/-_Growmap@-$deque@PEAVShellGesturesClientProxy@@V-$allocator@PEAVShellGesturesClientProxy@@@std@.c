/*
 * XREFs of ?_Growmap@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x18015DB0C
 * Callers:
 *     ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x180072184 (--$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ?_Xlen@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@CAXXZ @ 0x1800C76D4 (-_Xlen@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

void std::deque<ShellGesturesClientProxy *>::_Growmap()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 v1; // rdi
  unsigned __int64 size_of; // rax
  char *v3; // rbp
  __int64 v4; // r14
  char *v5; // r15
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  size_t v8; // rbx
  char *v9; // r15
  size_t v10; // r8
  char *v11; // rcx

  v0 = 1LL;
  if ( qword_180253FE0 )
    v0 = qword_180253FE0;
  while ( v0 == qword_180253FE0 || v0 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v0 < v0 )
      std::deque<KeyboardEvent>::_Xlen();
    v0 *= 2LL;
  }
  v1 = (unsigned __int64)qword_180253FE8 >> 1;
  size_of = std::_Get_size_of_n<8>(v0);
  v3 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v4 = 8 * v1;
  v5 = &v3[8 * v1];
  v6 = v0 >> 1;
  while ( v0 <= v6 )
    v0 *= 2LL;
  v7 = v0 - qword_180253FE0;
  v8 = (size_t)Src + 8 * qword_180253FE0 - ((_QWORD)Src + v4);
  memmove_0(v5, (char *)Src + v4, v8);
  v9 = &v5[v8];
  if ( v1 > v7 )
  {
    memmove_0(v9, Src, 8 * v7);
    memmove_0(v3, (char *)Src + 8 * v7, v4 - 8 * v7);
    v11 = &v3[v4 - 8 * v7];
    v10 = 8 * v7;
  }
  else
  {
    memmove_0(v9, Src, 8 * v1);
    memset_0(&v9[v4], 0, 8 * (v7 - v1));
    v10 = 8 * v1;
    v11 = v3;
  }
  memset_0(v11, 0, v10);
  if ( Src )
    std::_Deallocate<16>(Src, (struct std::nothrow_t *)(8 * qword_180253FE0));
  qword_180253FE0 += v7;
  Src = v3;
}
