/*
 * XREFs of sub_140ABD3B0 @ 0x140ABD3B0
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     StringCbLengthW @ 0x1404508A4 (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140ABD3B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v7; // ebx
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
  const wchar_t *v19; // rbx
  __int64 v20; // r11
  size_t v21; // r15
  void *Pool2; // rax
  void *v23; // rdi
  unsigned int *v24; // rdx
  unsigned int *v25; // rax
  unsigned int k; // r8d
  __int64 v27; // r11
  unsigned int *v28; // rcx
  unsigned int m; // r9d
  __int64 v30; // rax
  unsigned int *v31; // rcx
  int v32; // edx
  unsigned int v33; // ecx
  signed int v34; // r15d
  _DWORD *v35; // rax
  int v36; // r15d
  unsigned __int64 v37; // rdx
  unsigned int v38; // ecx
  int v39; // edx
  unsigned int v40; // eax
  unsigned int n; // ecx
  unsigned int v42; // eax
  size_t pcbLength; // [rsp+68h] [rbp+10h] BYREF

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
LABEL_42:
    v7 = -1073741811;
    goto LABEL_58;
  }
  v25 = *(unsigned int **)(a1 + 8);
  for ( k = 0; ; ++k )
  {
    v27 = *v25;
    v28 = v25 + 1;
    if ( k >= 5 )
      break;
    if ( v28 < v25 )
      goto LABEL_57;
    v25 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      goto LABEL_57;
  }
  if ( v28 < v25 )
    goto LABEL_57;
  if ( *(_DWORD *)a1 <= 6u )
    goto LABEL_42;
  for ( m = 0; ; ++m )
  {
    v30 = *v24;
    v31 = v24 + 1;
    if ( m >= 6 )
      break;
    if ( v31 < v24 )
      goto LABEL_57;
    v24 = (unsigned int *)((char *)v31 + v30);
    if ( (unsigned int *)((char *)v31 + v30) < v31 )
      goto LABEL_57;
  }
  if ( v31 < v24 )
    goto LABEL_57;
  if ( !qword_140FD73A0 )
  {
    v7 = -1073741637;
    goto LABEL_58;
  }
  v7 = guard_dispatch_icall_no_overrides(v23);
  if ( v7 < 0 )
    goto LABEL_58;
  v32 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    goto LABEL_57;
  v33 = *(_DWORD *)(a2 + 16) + 52;
  v34 = v7;
  if ( v33 < *(_DWORD *)(a2 + 16) + 48 )
    goto LABEL_57;
  v7 = v33 + v32 < v33 ? 0xC0000095 : 0;
  if ( v33 + v32 < v33 )
    goto LABEL_58;
  *(_DWORD *)(a4 + 4) = 20;
  v35 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( !v35 )
  {
    v7 = -1073741801;
    goto LABEL_58;
  }
  *(_QWORD *)(a4 + 8) = v35;
  v36 = v34 | 0x10000000;
  *(_DWORD *)a4 = 0;
  if ( v35 + 1 < v35 )
    goto LABEL_57;
  if ( (unsigned __int64)(v35 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
LABEL_62:
    v7 = -1073741789;
    goto LABEL_58;
  }
  *v35 = 4;
  v35[1] = v36;
  ++*(_DWORD *)a4;
  v37 = *(_QWORD *)(a4 + 8);
  if ( !v37 )
  {
    v38 = *(_DWORD *)(a4 + 4);
    v39 = -1;
    v40 = v38 + 12;
    if ( v38 + 12 >= v38 )
      v39 = v38 + 12;
    v7 = v40 < v38 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v39;
    if ( v40 >= v38 )
    {
      ++*(_DWORD *)a4;
      v7 = 0;
    }
    goto LABEL_58;
  }
  for ( n = 0; n < *(_DWORD *)a4; ++n )
  {
    v42 = *(_DWORD *)v37 + 4;
    if ( *(_DWORD *)v37 >= 0xFFFFFFFC || v37 + v42 < v37 )
      goto LABEL_57;
    v37 += v42;
  }
  if ( v37 + 4 < v37 )
  {
LABEL_57:
    v7 = -1073741675;
    goto LABEL_58;
  }
  v7 = 0;
  if ( v37 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    goto LABEL_62;
  *(_DWORD *)v37 = 8;
  *(_QWORD *)(v37 + 4) = v15;
  ++*(_DWORD *)a4;
LABEL_58:
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  return (unsigned int)v7;
}
