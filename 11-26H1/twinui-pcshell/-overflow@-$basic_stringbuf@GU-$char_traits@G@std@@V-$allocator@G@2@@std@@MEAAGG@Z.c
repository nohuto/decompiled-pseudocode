/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x180317F20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  void *v11; // r15
  unsigned __int64 size_of; // rax
  char *v13; // r14
  __int64 v14; // rcx
  char *v15; // r8
  __int64 v16; // rax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == 0xFFFF )
      return 0LL;
    v5 = std::basic_streambuf<unsigned short>::pptr(a1);
    v6 = std::basic_streambuf<unsigned short>::epptr(a1);
    v7 = 0LL;
    v8 = v6;
    if ( v5 && v5 < v6 )
    {
      *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v5 + 2;
      return a2;
    }
    v9 = std::basic_streambuf<unsigned short>::eback(a1);
    v10 = 32LL;
    v11 = (void *)v9;
    if ( !v5 || (v7 = (__int64)(v8 - v9) >> 1, v7 < 0x20) )
    {
LABEL_13:
      size_of = std::_Get_size_of_n<2>(v10);
      v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
      memcpy_0(v13, v11, 2 * v7);
      *(_QWORD *)(a1 + 104) = &v13[2 * v7 + 2];
      std::basic_streambuf<unsigned short>::setp(a1, v13, &v13[2 * v7], &v13[2 * v10]);
      v14 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v15 = v13;
      }
      else
      {
        v16 = std::basic_streambuf<unsigned short>::gptr(a1);
        v14 = a1;
        v15 = &v13[2 * ((v16 - (__int64)v11) >> 1)];
      }
      std::basic_streambuf<unsigned short>::setg(v14, v13, v15);
      if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
        std::_Deallocate<16>(v11, (struct std::nothrow_t *)(2 * v7));
      *(_DWORD *)(a1 + 112) |= 1u;
      *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = a2;
      return a2;
    }
    if ( v7 < 0x3FFFFFFF )
    {
      v10 = 2 * v7;
      goto LABEL_13;
    }
    v10 = 0x7FFFFFFFLL;
    if ( v7 < 0x7FFFFFFF )
      goto LABEL_13;
  }
  return 0xFFFFLL;
}
