/*
 * XREFs of __std_minmax_element_4 @ 0x1802CD230
 * Callers:
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18055DD4C (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::__std_minmax_element_impl_3__anonymous_namespace_::_Minmax_traits_4_avx_ @ 0x1802CC600 (_anonymous_namespace_--__std_minmax_element_impl_3__anonymous_namespace_--_Minmax_traits_4_avx_.c)
 *     _anonymous_namespace_::__std_minmax_element_impl_3__anonymous_namespace_::_Minmax_traits_4_sse_ @ 0x1802CC9A0 (_anonymous_namespace_--__std_minmax_element_impl_3__anonymous_namespace_--_Minmax_traits_4_sse_.c)
 */

_OWORD *__fastcall _std_minmax_element_4(_OWORD *a1, __m128i *a2, __m128i *a3, unsigned __int8 a4)
{
  _OWORD *result; // rax
  bool v7; // zf
  __m128i *v8; // r9
  __m128i *v9; // r8
  int v10; // edi
  signed int v11; // r11d
  signed int v12; // ecx
  int v13; // eax
  unsigned __int32 v14; // r11d
  unsigned int v15; // edi
  unsigned __int32 v16; // ecx
  unsigned int v17; // eax
  __int128 v18; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int64)((char *)a3 - (char *)a2) < 0x20 )
  {
    if ( (unsigned __int64)((char *)a3 - (char *)a2) < 0x10 )
      goto LABEL_7;
  }
  else if ( (_isa_enabled & 0x20) != 0 )
  {
    anonymous_namespace_::__std_minmax_element_impl_3__anonymous_namespace_::_Minmax_traits_4_avx_(
      a1,
      a2->m128i_i32,
      a3->m128i_i32,
      a4);
    return a1;
  }
  if ( (_isa_enabled & 4) != 0 )
  {
    anonymous_namespace_::__std_minmax_element_impl_3__anonymous_namespace_::_Minmax_traits_4_sse_(a1, a2, a3, a4);
    return a1;
  }
LABEL_7:
  v7 = a4 == 0;
  v8 = a2;
  *(_QWORD *)&v18 = a2;
  v9 = a2;
  *((_QWORD *)&v18 + 1) = a2;
  if ( v7 )
  {
    v14 = 0;
    v15 = -1;
    if ( a2 != a3 )
    {
      do
      {
        v16 = v8->m128i_i32[0];
        v17 = v8->m128i_i32[0];
        if ( v8->m128i_i32[0] < v15 )
          a2 = v8;
        else
          v17 = v15;
        v15 = v17;
        if ( v14 <= v16 )
          v9 = v8;
        v8 = (__m128i *)((char *)v8 + 4);
        if ( v14 > v16 )
          v16 = v14;
        v14 = v16;
      }
      while ( v8 != a3 );
      goto LABEL_27;
    }
  }
  else
  {
    v10 = 0x7FFFFFFF;
    v11 = 0x80000000;
    if ( a2 != a3 )
    {
      do
      {
        v12 = v8->m128i_i32[0];
        v13 = v8->m128i_i32[0];
        if ( v8->m128i_i32[0] < v10 )
          a2 = v8;
        else
          v13 = v10;
        v10 = v13;
        if ( v11 <= v12 )
          v9 = v8;
        v8 = (__m128i *)((char *)v8 + 4);
        if ( v11 > v12 )
          v12 = v11;
        v11 = v12;
      }
      while ( v8 != a3 );
LABEL_27:
      *((_QWORD *)&v18 + 1) = v9;
      *(_QWORD *)&v18 = a2;
    }
  }
  result = a1;
  *a1 = v18;
  return result;
}
