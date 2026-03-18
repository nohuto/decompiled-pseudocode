/*
 * XREFs of sub_140ABA558 @ 0x140ABA558
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     StringCbLengthW @ 0x1404508A4 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140ABA558(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  __int64 *v13; // rbp
  bool v14; // cc
  __int64 v15; // rbp
  unsigned int j; // r9d
  unsigned __int64 v17; // r8
  unsigned int *v18; // rdx
  const wchar_t *v19; // rsi
  __int64 v20; // r11
  size_t v21; // r15
  void *Pool2; // rax
  void *v23; // rdi
  unsigned int *v24; // rax
  unsigned int k; // edx
  __int64 v26; // r10
  unsigned int *v27; // rcx
  int v28; // r15d
  int v29; // edx
  unsigned int v30; // ecx
  _DWORD *v31; // rax
  int v32; // r15d
  int v33; // r8d
  unsigned __int64 v34; // rdx
  unsigned int v35; // edx
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int m; // ecx
  unsigned int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int n; // ecx
  unsigned int v44; // eax
  size_t pcbLength; // [rsp+30h] [rbp-48h] BYREF
  __int128 v47; // [rsp+38h] [rbp-40h]

  v47 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = v8;
  for ( i = 0; ; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( i >= 3 )
      break;
    if ( v12 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  if ( v12 < v9 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( (_DWORD)v11 )
    v13 = (__int64 *)(v9 + 1);
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v14 = *(_DWORD *)a1 <= 4u;
  v15 = *v13;
  pcbLength = 0LL;
  if ( v14 )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v17 = *v8;
    v18 = v8 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v17 )
    return (unsigned int)-1073741762;
  v19 = (const wchar_t *)(v8 + 1);
  if ( (v17 & 1) != 0
    || *((_WORD *)v18 + (v17 >> 1) - 1)
    || StringCbLengthW(v19, *v8, &pcbLength) < 0
    || pcbLength + 2 != v20
    || 2 * (unsigned int)(pcbLength >> 1) == -2 )
  {
    return (unsigned int)-1073741762;
  }
  v21 = 2 * (unsigned int)(pcbLength >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v23 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v19, v21);
  v24 = *(unsigned int **)(a1 + 8);
  if ( !v24 || *(_DWORD *)a1 <= 5u )
  {
    v7 = -1073741811;
    goto LABEL_82;
  }
  for ( k = 0; ; ++k )
  {
    v26 = *v24;
    v27 = v24 + 1;
    if ( k >= 5 )
      break;
    if ( v27 < v24 )
      goto LABEL_81;
    v24 = (unsigned int *)((char *)v27 + v26);
    if ( (unsigned int *)((char *)v27 + v26) < v27 )
      goto LABEL_81;
  }
  if ( v27 >= v24 )
  {
    v28 = qword_140FD7390 ? guard_dispatch_icall_no_overrides(v23) : -1073700223;
    v29 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFC0 )
    {
      v30 = *(_DWORD *)(a2 + 16) + 68;
      if ( v30 >= *(_DWORD *)(a2 + 16) + 64 )
      {
        v7 = v30 + v29 < v30 ? 0xC0000095 : 0;
        if ( v30 + v29 < v30 )
          goto LABEL_82;
        *(_DWORD *)(a4 + 4) = 40;
        v31 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( !v31 )
        {
          v7 = -1073741801;
          goto LABEL_82;
        }
        *(_QWORD *)(a4 + 8) = v31;
        v32 = v28 | 0x10000000;
        *(_DWORD *)a4 = 0;
        if ( v31 + 1 < v31 )
          goto LABEL_51;
        if ( (unsigned __int64)(v31 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_66;
        *v31 = 4;
        v31[1] = v32;
        ++*(_DWORD *)a4;
        v33 = -1;
        v34 = *(_QWORD *)(a4 + 8);
        if ( v34 )
        {
          for ( m = 0; m < *(_DWORD *)a4; ++m )
          {
            v39 = *(_DWORD *)v34 + 4;
            if ( *(_DWORD *)v34 >= 0xFFFFFFFC || v34 + v39 < v34 )
              goto LABEL_51;
            v34 += v39;
          }
          if ( v34 + 4 < v34 )
            goto LABEL_51;
          if ( v34 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_66;
          *(_DWORD *)v34 = 8;
          *(_QWORD *)(v34 + 4) = v15;
        }
        else
        {
          v35 = *(_DWORD *)(a4 + 4);
          v36 = -1;
          v37 = v35 + 12;
          if ( v35 + 12 >= v35 )
            v36 = v35 + 12;
          v7 = v37 < v35 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v36;
          if ( v37 < v35 )
            goto LABEL_82;
        }
        ++*(_DWORD *)a4;
        v40 = *(_QWORD *)(a4 + 8);
        if ( !v40 )
        {
          v41 = *(_DWORD *)(a4 + 4);
          v42 = v41 + 20;
          if ( v41 + 20 >= v41 )
            v33 = v41 + 20;
          v7 = v42 < v41 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v33;
          if ( v42 >= v41 )
          {
            ++*(_DWORD *)a4;
            v7 = 0;
          }
          goto LABEL_82;
        }
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v44 = *(_DWORD *)v40 + 4;
          if ( *(_DWORD *)v40 >= 0xFFFFFFFC || v40 + v44 < v40 )
            goto LABEL_51;
          v40 += v44;
        }
        if ( v40 + 4 >= v40 )
        {
          v7 = 0;
          if ( v40 + 20 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v40 = 16;
            *(_OWORD *)(v40 + 4) = v47;
            ++*(_DWORD *)a4;
            goto LABEL_82;
          }
LABEL_66:
          v7 = -1073741789;
          goto LABEL_82;
        }
LABEL_51:
        v7 = -1073741675;
        goto LABEL_82;
      }
    }
  }
LABEL_81:
  v7 = -1073741675;
LABEL_82:
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  return v7;
}
