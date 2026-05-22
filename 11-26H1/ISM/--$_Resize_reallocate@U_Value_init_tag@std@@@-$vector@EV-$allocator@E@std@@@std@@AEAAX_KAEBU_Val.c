/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800FD580
 * Callers:
 *     ?SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180074250 (-SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_M.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??1_Reallocation_guard@?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x1800FD6A8 (--1_Reallocation_guard@-$vector@EV-$allocator@E@std@@@std@@QEAA@XZ.c)
 *     ?_Calculate_growth@?$vector@EV?$allocator@E@std@@@std@@AEBA_K_K@Z @ 0x1800FD988 (-_Calculate_growth@-$vector@EV-$allocator@E@std@@@std@@AEBA_K_K@Z.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  signed __int64 v4; // rsi
  unsigned __int64 v5; // r12
  char *v6; // rax
  char *v7; // rdi
  char *v8; // r15
  size_t v9; // r8
  const void *v10; // rdx
  void *v11; // rcx
  _QWORD v13[6]; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v4 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v5 = std::vector<unsigned char>::_Calculate_growth();
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(v5);
  v13[0] = a1;
  v13[2] = v5;
  v7 = &v6[v4];
  v8 = v6;
  v13[3] = &v6[v4];
  memset_0(&v6[v4], 0, a2 - v4);
  v9 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v10 = *a1;
  v13[4] = &v7[a2 - v4];
  memmove_0(v8, v10, v9);
  v11 = (void *)*a1;
  v13[1] = 0LL;
  if ( v11 )
    std::_Deallocate<16>(v11, (struct std::nothrow_t *)((_BYTE *)a1[2] - (_BYTE *)v11));
  *a1 = v8;
  a1[1] = &v8[a2];
  a1[2] = &v8[v5];
  return std::vector<unsigned char>::_Reallocation_guard::~_Reallocation_guard(v13);
}
