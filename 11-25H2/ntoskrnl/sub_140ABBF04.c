/*
 * XREFs of sub_140ABBF04 @ 0x140ABBF04
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     StringCbLengthW @ 0x1404508A4 (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140ABBF04(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rsi
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
  const wchar_t *v19; // r12
  __int64 v20; // r11
  size_t v21; // r15
  size_t v22; // r13
  void *Pool2; // rax
  void *v24; // rdi
  const wchar_t *v25; // rax
  unsigned int k; // r8d
  size_t v27; // rdx
  const wchar_t *v28; // rcx
  const void *v29; // rbx
  __int64 v30; // r11
  size_t v31; // r12
  void *v32; // rax
  int v33; // ebx
  _DWORD *v34; // rax
  int v35; // ebx
  unsigned __int64 v36; // rdx
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int m; // ecx
  unsigned int v41; // eax
  size_t pcbLength; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
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
  if ( (v17 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( *((_WORD *)v18 + (v17 >> 1) - 1) )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v19, *v8, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v20 )
    return (unsigned int)-1073741762;
  v21 = pcbLength >> 1;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v22 = 2 * (unsigned int)(pcbLength >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v24 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v19, v22);
  v25 = *(const wchar_t **)(a1 + 8);
  pcbLength = 0LL;
  if ( v25 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; ; ++k )
    {
      v27 = *(unsigned int *)v25;
      v28 = v25 + 2;
      if ( k >= 5 )
        break;
      if ( v28 < v25 )
        goto LABEL_58;
      v25 = (const wchar_t *)((char *)v28 + v27);
      if ( (const wchar_t *)((char *)v28 + v27) < v28 )
        goto LABEL_58;
    }
    if ( v28 >= v25 )
    {
      if ( !(_DWORD)v27
        || (v29 = v25 + 2, (v27 & 1) != 0)
        || v28[(v27 >> 1) - 1]
        || StringCbLengthW(v28, v27, &pcbLength) < 0
        || pcbLength + 2 != v30
        || 2 * (unsigned int)(pcbLength >> 1) == -2 )
      {
        v7 = -1073741762;
        goto LABEL_59;
      }
      v31 = 2 * (unsigned int)(pcbLength >> 1) + 2;
      v32 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v32 )
        goto LABEL_50;
      v6 = v32;
      memmove(v32, v29, v31);
      v33 = guard_dispatch_icall_no_overrides((unsigned int)(2 * v21 + 2));
      if ( v33 >= 0 )
      {
        if ( qword_140FD73E0 )
        {
          v33 = guard_dispatch_icall_no_overrides(v24);
          if ( v33 == -1073741198 )
            v33 = 0;
        }
        else
        {
          v33 = -1073741637;
        }
      }
      *(_DWORD *)(a4 + 4) = 20;
      v34 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !v34 )
      {
LABEL_50:
        v7 = -1073741801;
        goto LABEL_59;
      }
      *(_QWORD *)(a4 + 8) = v34;
      v35 = v33 | 0x10000000;
      *(_DWORD *)a4 = 0;
      if ( v34 + 1 >= v34 )
      {
        if ( (unsigned __int64)(v34 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
LABEL_65:
          v7 = -1073741789;
          goto LABEL_59;
        }
        *v34 = 4;
        v34[1] = v35;
        ++*(_DWORD *)a4;
        v36 = *(_QWORD *)(a4 + 8);
        if ( !v36 )
        {
          v37 = *(_DWORD *)(a4 + 4);
          v38 = -1;
          v39 = v37 + 12;
          if ( v37 + 12 >= v37 )
            v38 = v37 + 12;
          *(_DWORD *)(a4 + 4) = v38;
          v7 = v39 < v37 ? 0xC0000095 : 0;
          if ( v39 >= v37 )
          {
            ++*(_DWORD *)a4;
            v7 = 0;
          }
          goto LABEL_59;
        }
        for ( m = 0; m < *(_DWORD *)a4; ++m )
        {
          v41 = *(_DWORD *)v36 + 4;
          if ( *(_DWORD *)v36 >= 0xFFFFFFFC || v36 + v41 < v36 )
            goto LABEL_58;
          v36 += v41;
        }
        if ( v36 + 4 >= v36 )
        {
          v7 = 0;
          if ( v36 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v36 = 8;
            *(_QWORD *)(v36 + 4) = v15;
            ++*(_DWORD *)a4;
            goto LABEL_59;
          }
          goto LABEL_65;
        }
      }
    }
LABEL_58:
    v7 = -1073741675;
    goto LABEL_59;
  }
  v7 = -1073741811;
LABEL_59:
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
