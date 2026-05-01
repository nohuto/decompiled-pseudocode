/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x18004D11C
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x18004D9C8 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ??$_Guess_median_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x18004CC64 (--$_Guess_median_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Inter.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18004D95C (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x18004D990 (--MInternal@Windows@@YA_NAEBVString@01@0@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

Windows::Internal::String **__fastcall std::_Partition_by_median_guess_unchecked<Windows::Internal::String *,std::less<void>>(
        Windows::Internal::String **a1,
        Windows::Internal::String *a2,
        Windows::Internal::String *a3)
{
  Windows::Internal::String *v5; // rdi
  Windows::Internal::String *v6; // rsi
  Windows::Internal::String *v7; // rbx
  HSTRING v8; // rdx
  HSTRING v9; // rcx
  HSTRING v10; // rdx
  HSTRING v11; // rcx
  Windows::Internal::String *v12; // r14
  Windows::Internal::String *v13; // r15
  HSTRING v14; // rbx
  HSTRING v15; // rbx
  Windows::Internal::String *v16; // rbx
  Windows::Internal::String *v17; // r12
  bool v18; // zf
  Windows::Internal::String *v19; // r12
  HSTRING v20; // rdx
  HSTRING v21; // rcx
  Windows::Internal::String *v22; // r12
  __int64 v23; // rbx
  HSTRING v24; // rbx
  Windows::Internal::String **v25; // rax
  HSTRING v26; // rbx
  HSTRING v27; // rbx
  __int64 v28; // rbx
  Windows::Internal::String *v31; // [rsp+80h] [rbp+58h] BYREF
  INT32 result; // [rsp+88h] [rbp+60h] BYREF

  v5 = (Windows::Internal::String *)((char *)a2 + 8 * ((a3 - a2) >> 4));
  std::_Guess_median_unchecked<Windows::Internal::String *,std::less<void>>(
    a2,
    v5,
    (Windows::Internal::String *)((char *)a3 - 8));
  v6 = (Windows::Internal::String *)((char *)v5 + 8);
  if ( a2 < v5 )
  {
    do
    {
      v7 = (Windows::Internal::String *)((char *)v5 - 8);
      if ( (unsigned __int8)Windows::Internal::operator<((char *)v5 - 8, v5) )
        break;
      if ( (unsigned __int8)Windows::Internal::operator<(v5, (char *)v5 - 8) )
        break;
      v5 = (Windows::Internal::String *)((char *)v5 - 8);
    }
    while ( a2 < v7 );
  }
  while ( v6 < a3 )
  {
    v8 = *(HSTRING *)v5;
    v9 = *(HSTRING *)v6;
    result = 0;
    WindowsCompareStringOrdinal(v9, v8, &result);
    if ( result == -1 )
      break;
    v10 = *(HSTRING *)v6;
    v11 = *(HSTRING *)v5;
    result = 0;
    WindowsCompareStringOrdinal(v11, v10, &result);
    if ( result == -1 )
      break;
    v6 = (Windows::Internal::String *)((char *)v6 + 8);
  }
  v12 = v6;
  v13 = v5;
  while ( 2 )
  {
    while ( v12 < a3 )
    {
      if ( !(unsigned __int8)Windows::Internal::operator<(v5, v12) )
      {
        if ( (unsigned __int8)Windows::Internal::operator<(v12, v5) )
          break;
        if ( v6 != v12 )
        {
          v26 = *(HSTRING *)v6;
          *(_QWORD *)v6 = 0LL;
          Windows::Internal::String::Release(v6);
          *(_QWORD *)v6 = *(_QWORD *)v12;
          *(_QWORD *)v12 = 0LL;
          Windows::Internal::String::Release(v12);
          *(_QWORD *)v12 = v26;
          v31 = 0LL;
          Windows::Internal::String::~String((Windows::Internal::String *)&v31);
        }
        v6 = (Windows::Internal::String *)((char *)v6 + 8);
      }
LABEL_14:
      v12 = (Windows::Internal::String *)((char *)v12 + 8);
    }
    v16 = a2;
    v17 = v13;
    v31 = v13;
    v18 = v13 == a2;
    if ( v13 <= a2 )
      goto LABEL_23;
    v19 = (Windows::Internal::String *)((char *)v13 - 8);
    while ( 1 )
    {
      v20 = *(HSTRING *)v5;
      v21 = *(HSTRING *)v19;
      result = 0;
      WindowsCompareStringOrdinal(v21, v20, &result);
      if ( result != -1 )
        break;
LABEL_21:
      v13 = (Windows::Internal::String *)((char *)v13 - 8);
      v19 = (Windows::Internal::String *)((char *)v19 - 8);
      v31 = v13;
      if ( v16 >= v13 )
        goto LABEL_22;
    }
    if ( !(unsigned __int8)Windows::Internal::operator<(v5, v19) )
    {
      v5 = (Windows::Internal::String *)((char *)v5 - 8);
      if ( v5 != v19 )
      {
        v27 = *(HSTRING *)v5;
        *(_QWORD *)v5 = 0LL;
        Windows::Internal::String::Release(v5);
        *(_QWORD *)v5 = *(_QWORD *)v19;
        *(_QWORD *)v19 = 0LL;
        Windows::Internal::String::Release(v19);
        *(_QWORD *)v19 = v27;
        v31 = 0LL;
        Windows::Internal::String::~String((Windows::Internal::String *)&v31);
        v16 = a2;
      }
      goto LABEL_21;
    }
LABEL_22:
    v17 = v31;
    v18 = v13 == v16;
LABEL_23:
    if ( !v18 )
    {
      v13 = (Windows::Internal::String *)((char *)v13 - 8);
      if ( v12 != a3 )
      {
        v28 = *(_QWORD *)v12;
        *(_QWORD *)v12 = 0LL;
        Windows::Internal::String::Release(v12);
        *(_QWORD *)v12 = *((_QWORD *)v17 - 1);
        *((_QWORD *)v17 - 1) = 0LL;
        Windows::Internal::String::Release(v13);
        *((_QWORD *)v17 - 1) = v28;
        v31 = 0LL;
        Windows::Internal::String::~String((Windows::Internal::String *)&v31);
        goto LABEL_14;
      }
      v5 = (Windows::Internal::String *)((char *)v5 - 8);
      v22 = (Windows::Internal::String *)((char *)v17 - 8);
      if ( v22 != v5 )
      {
        v23 = *(_QWORD *)v22;
        *(_QWORD *)v22 = 0LL;
        Windows::Internal::String::Release(v13);
        *(_QWORD *)v22 = *(_QWORD *)v5;
        *(_QWORD *)v5 = 0LL;
        Windows::Internal::String::Release(v5);
        *(_QWORD *)v5 = v23;
        v31 = 0LL;
        Windows::Internal::String::~String((Windows::Internal::String *)&v31);
      }
      v24 = *(HSTRING *)v5;
      *(_QWORD *)v5 = 0LL;
      v6 = (Windows::Internal::String *)((char *)v6 - 8);
      Windows::Internal::String::Release(v5);
      *(_QWORD *)v5 = *(_QWORD *)v6;
      *(_QWORD *)v6 = 0LL;
      Windows::Internal::String::Release(v6);
      *(_QWORD *)v6 = v24;
      v31 = 0LL;
      Windows::Internal::String::~String((Windows::Internal::String *)&v31);
      continue;
    }
    break;
  }
  if ( v12 != a3 )
  {
    if ( v6 != v12 )
    {
      v14 = *(HSTRING *)v5;
      *(_QWORD *)v5 = 0LL;
      Windows::Internal::String::Release(v5);
      *(_QWORD *)v5 = *(_QWORD *)v6;
      *(_QWORD *)v6 = 0LL;
      Windows::Internal::String::Release(v6);
      *(_QWORD *)v6 = v14;
    }
    v15 = *(HSTRING *)v5;
    *(_QWORD *)v5 = 0LL;
    v6 = (Windows::Internal::String *)((char *)v6 + 8);
    Windows::Internal::String::Release(v5);
    *(_QWORD *)v5 = *(_QWORD *)v12;
    *(_QWORD *)v12 = 0LL;
    Windows::Internal::String::Release(v12);
    v5 = (Windows::Internal::String *)((char *)v5 + 8);
    *(_QWORD *)v12 = v15;
    goto LABEL_14;
  }
  v25 = a1;
  *a1 = v5;
  a1[1] = v6;
  return v25;
}
