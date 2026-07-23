/*
 * XREFs of sub_140B6DDD8 @ 0x140B6DDD8
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14047D11C (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140B6DDD8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rbp
  unsigned int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  unsigned int *v13; // rax
  bool v14; // cc
  unsigned int j; // r9d
  unsigned __int64 v16; // r8
  unsigned int *v17; // rdx
  const wchar_t *v18; // r14
  __int64 v19; // r11
  size_t v20; // r13
  size_t v21; // r15
  void *Pool2; // rax
  void *v23; // rdi
  const wchar_t *v24; // rax
  unsigned int k; // r8d
  size_t v26; // rdx
  const wchar_t *v27; // rcx
  const void *v28; // r15
  __int64 v29; // r11
  unsigned int v30; // r12d
  void *v31; // rax
  __int64 v32; // rdx
  int v33; // ebx
  _DWORD *v34; // rax
  int v35; // ebx
  __int64 v36; // r8
  unsigned int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned int m; // ecx
  unsigned int v40; // eax
  __int64 v42; // [rsp+30h] [rbp-38h]
  size_t pcbLength; // [rsp+70h] [rbp+8h] BYREF

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
    v13 = v12;
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v14 = *(_DWORD *)a1 <= 4u;
  v42 = *(_QWORD *)v13;
  pcbLength = 0LL;
  if ( v14 )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v16 = *v8;
    v17 = v8 + 1;
    if ( j >= 4 )
      break;
    if ( v17 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  if ( v17 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v16 )
    return (unsigned int)-1073741762;
  v18 = (const wchar_t *)(v8 + 1);
  if ( (v16 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( *((_WORD *)v17 + (v16 >> 1) - 1) )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v18, *v8, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v19 )
    return (unsigned int)-1073741762;
  v20 = pcbLength >> 1;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v21 = 2 * (unsigned int)(pcbLength >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v23 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v18, v21);
  v24 = *(const wchar_t **)(a1 + 8);
  pcbLength = 0LL;
  if ( v24 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; ; ++k )
    {
      v26 = *(unsigned int *)v24;
      v27 = v24 + 2;
      if ( k >= 5 )
        break;
      if ( v27 < v24 )
        goto LABEL_61;
      v24 = (const wchar_t *)((char *)v27 + v26);
      if ( (const wchar_t *)((char *)v27 + v26) < v27 )
        goto LABEL_61;
    }
    if ( v27 >= v24 )
    {
      if ( !(_DWORD)v26
        || (v28 = v24 + 2,
            (v26 & 1) != 0
         || v27[(v26 >> 1) - 1]
         || StringCbLengthW(v27, v26, &pcbLength) < 0
         || pcbLength + 2 != v29
         || 2 * (unsigned int)(pcbLength >> 1) == -2) )
      {
        v7 = -1073741762;
        goto LABEL_62;
      }
      v30 = 2 * (pcbLength >> 1) + 2;
      v31 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v31 )
        goto LABEL_58;
      v6 = v31;
      memmove(v31, v28, v30);
      v33 = guard_dispatch_icall_no_overrides((unsigned int)(2 * v20 + 2), (__int64)v23);
      if ( v33 >= 0 )
      {
        if ( ExpPlatformBinaryLock.PropagateBoostsEntry.Next )
        {
          v33 = guard_dispatch_icall_no_overrides((__int64)v23, v32);
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
LABEL_58:
        v7 = -1073741801;
        goto LABEL_62;
      }
      *(_QWORD *)(a4 + 8) = v34;
      v35 = v33 | 0x10000000;
      *(_DWORD *)a4 = 0;
      if ( v34 + 1 >= v34 )
      {
        if ( v34 + 2 > (_DWORD *)((char *)v34 + *(unsigned int *)(a4 + 4)) )
        {
LABEL_68:
          v7 = -1073741789;
          goto LABEL_62;
        }
        *v34 = 4;
        v34[1] = v35;
        ++*(_DWORD *)a4;
        v36 = *(_QWORD *)(a4 + 8);
        if ( v36 )
        {
          v38 = *(_QWORD *)(a4 + 8);
          for ( m = 0; m < *(_DWORD *)a4; ++m )
          {
            v40 = *(_DWORD *)v38 + 4;
            if ( *(_DWORD *)v38 >= 0xFFFFFFFC || v38 + v40 < v38 )
              goto LABEL_61;
            v38 += v40;
          }
          if ( v38 + 4 >= v38 )
          {
            v7 = 0;
            if ( v38 + 12 > v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_68;
            *(_DWORD *)v38 = 8;
            *(_QWORD *)(v38 + 4) = v42;
            ++*(_DWORD *)a4;
LABEL_62:
            if ( !v23 )
              goto LABEL_64;
            goto LABEL_63;
          }
        }
        else
        {
          v37 = *(_DWORD *)(a4 + 4);
          if ( v37 + 12 >= v37 )
          {
            *(_DWORD *)(a4 + 4) = v37 + 12;
            v7 = 0;
            ++*(_DWORD *)a4;
            goto LABEL_62;
          }
          *(_DWORD *)(a4 + 4) = -1;
        }
      }
    }
LABEL_61:
    v7 = -1073741675;
    goto LABEL_62;
  }
  v7 = -1073741811;
LABEL_63:
  ExFreePoolWithTag(v23, 0);
LABEL_64:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
