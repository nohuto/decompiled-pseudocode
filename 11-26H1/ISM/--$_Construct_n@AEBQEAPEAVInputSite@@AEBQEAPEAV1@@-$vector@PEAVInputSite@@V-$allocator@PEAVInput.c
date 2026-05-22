/*
 * XREFs of ??$_Construct_n@AEBQEAPEAVInputSite@@AEBQEAPEAV1@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAX_KAEBQEAPEAVInputSite@@1@Z @ 0x1800A7534
 * Callers:
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800A7A68 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@@std@@QEAA@XZ @ 0x1800A7BA8 (--1-$_Tidy_guard@V-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<InputSite *>::_Construct_n<InputSite * * const &,InputSite * * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        void **a3,
        __int64 *a4)
{
  unsigned __int64 size_of; // rax
  char *v9; // rax
  char *v10; // rsi
  void *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v9;
    a1[1] = v9;
    v10 = v9;
    a1[2] = &v9[8 * a2];
    v11 = *a3;
    v12 = *a4;
    std::_Copy_memmove<enum _Button *,enum _Button *>(*a3, v12, v9);
    v13 = 0LL;
    a1[1] = &v10[8 * ((v12 - (__int64)v11) >> 3)];
    std::_Tidy_guard<std::vector<InputSite *>>::~_Tidy_guard<std::vector<InputSite *>>(&v13);
  }
}
