/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001700C
 * Callers:
 *     _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x18001699C (_lambda_d1e543e32deb761d4b0a6b2d9b3a008a_--operator().c)
 *     _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x180016C00 (_lambda_715f26a8cf03ec1bdf3d6747fabae5e9_--operator().c)
 *     _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x180016E10 (_lambda_7a32b90734f372e87ecd5e5e89c702f7_--operator().c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180017240 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _get_errno @ 0x180030942 (_get_errno.c)
 *     _set_errno @ 0x1800309A4 (_set_errno.c)
 *     _vsnwprintf @ 0x180030A4C (_vsnwprintf.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        __int64 a1,
        const wchar_t *a2,
        ...)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  int v7; // ebx
  unsigned __int64 v8; // rbx
  LPVOID v9; // rax
  unsigned __int64 v11; // rsi
  wchar_t *v12; // r14
  size_t v13; // rsi
  int v14; // eax
  _WORD *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int Value[18]; // [rsp+20h] [rbp-48h] BYREF
  va_list Args; // [rsp+80h] [rbp+18h] BYREF

  va_start(Args, a2);
  *(_QWORD *)Value = 0LL;
  v4 = 32LL;
  while ( 1 )
  {
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
LABEL_13:
      v7 = -2147024362;
      goto LABEL_14;
    }
    v6 = *(_QWORD *)(a1 + 16);
    v7 = 0;
    if ( v6 == -1LL )
    {
      v17 = *(_QWORD *)(a1 + 8);
      if ( v17 == -1 )
      {
        if ( *(_QWORD *)a1 )
        {
          do
            ++v17;
          while ( *(_WORD *)(*(_QWORD *)a1 + 2 * v17) );
        }
        else
        {
          v17 = 0LL;
        }
        *(_QWORD *)(a1 + 8) = v17;
      }
      v6 = (v17 + 1) & -(__int64)(*(_QWORD *)a1 != 0LL);
      *(_QWORD *)(a1 + 16) = v6;
    }
    if ( !v6 )
    {
      *(_QWORD *)Value = 0LL;
      if ( !is_mul_ok(v5, 2uLL) )
        goto LABEL_13;
      v15 = CoTaskMemAlloc(2 * v5);
      if ( v15 )
      {
        *(_QWORD *)(a1 + 16) = v5;
        *(_QWORD *)a1 = v15;
        *v15 = 0;
        goto LABEL_17;
      }
      v7 = -2147024882;
LABEL_16:
      if ( v7 < 0 )
        goto LABEL_14;
      goto LABEL_17;
    }
    if ( v5 <= v6 )
      goto LABEL_16;
    *(_QWORD *)Value = 0LL;
    v8 = 2 * v6;
    if ( !is_mul_ok(v6, 2uLL) )
      goto LABEL_13;
    if ( v6 > 0x800 )
      v8 = v6 + 2048;
    if ( v5 > v8 )
      v8 = v5;
    v9 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v8);
    if ( !v9 )
    {
      v7 = -2147024882;
      goto LABEL_14;
    }
    *(_QWORD *)(a1 + 16) = v8;
    *(_QWORD *)a1 = v9;
LABEL_17:
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(wchar_t **)a1;
    set_errno(0);
    if ( v11 && v11 <= 0x7FFFFFFF )
    {
      v13 = v11 - 1;
      v7 = 0;
      v14 = vsnwprintf(v12, v13, a2, Args);
      if ( v14 < 0 || v14 > v13 )
      {
        v12[v13] = 0;
        v7 = -2147024774;
      }
      else if ( v14 == v13 )
      {
        v12[v13] = 0;
      }
    }
    else
    {
      v7 = -2147024809;
      if ( v11 )
      {
        *v12 = 0;
        goto LABEL_24;
      }
    }
    if ( v7 != -2147024774 )
      goto LABEL_24;
    Value[0] = 0;
    get_errno(Value);
    if ( Value[0] == 22 )
      break;
    v16 = *(_QWORD *)(a1 + 16);
    v4 = v16 + 32;
    if ( v16 + 32 < v16 )
      goto LABEL_13;
  }
  v7 = -2147024809;
LABEL_24:
  if ( v7 < 0 )
  {
LABEL_14:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
    return (unsigned int)v7;
  }
  *(_QWORD *)(a1 + 8) = -1LL;
  return (unsigned int)v7;
}
