/*
 * XREFs of ConstraintEval @ 0x14094EB24
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     SimplifyFilter @ 0x14094E9DC (SimplifyFilter.c)
 *     FilterEvalStrict @ 0x140968990 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x14096971C (FilterEvalImpliedAnd.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ConstraintEval(unsigned int a1, _DWORD *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // r12d
  size_t v7; // r15
  _DWORD *Pool2; // rax
  _DWORD *v11; // rsi
  unsigned int i; // edi
  __int64 v13; // r8
  __int64 v14; // rcx
  const wchar_t *v15; // rdx
  const wchar_t *v16; // rcx
  _DWORD *v17; // rdi
  int v18; // ebx
  int v19; // ebx
  unsigned int j; // ebx
  _DWORD *v21; // r8
  __int64 v22; // rcx
  const wchar_t *v23; // rdx
  const wchar_t *v24; // rcx
  int v25; // r14d
  unsigned int v26; // eax
  unsigned int v27; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  char *v32; // rcx
  int v33; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-4Ch] BYREF
  __int128 v35; // [rsp+38h] [rbp-48h] BYREF
  __int128 v36; // [rsp+48h] [rbp-38h] BYREF
  __int128 v37; // [rsp+58h] [rbp-28h]
  __int128 v38; // [rsp+68h] [rbp-18h]

  v5 = a1;
  v7 = 56LL * a1;
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0;
  v33 = 0;
  v38 = 0LL;
  v35 = 0LL;
  if ( (a4 & 0xFF00000) != 0 )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return (unsigned int)-1073741823;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( (*a2 & 0xFF00000) != 0 )
  {
    SimplifyFilter(v5, (__int64)a2, &v34, (__int64)Pool2);
    v5 = v34;
  }
  else
  {
    memmove(Pool2, a2, v7);
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= v5 )
      goto LABEL_33;
    v13 = 14LL * i;
    if ( v11[v13 + 6] == *(_DWORD *)(a3 + 16) )
    {
      v14 = *(_QWORD *)&v11[v13 + 2] - *(_QWORD *)a3;
      if ( !v14 )
        v14 = *(_QWORD *)&v11[v13 + 4] - *(_QWORD *)(a3 + 8);
      if ( !v14 && v11[v13 + 7] == *(_DWORD *)(a3 + 20) )
      {
        v15 = *(const wchar_t **)(a3 + 24);
        v16 = *(const wchar_t **)&v11[v13 + 8];
        if ( (v16 == v15 || v16 && v15 && !wcsicmp(v16, v15)) && v11[14 * i] == a4 )
          break;
      }
    }
  }
  v17 = &v11[14 * i];
  if ( !v17 )
    goto LABEL_33;
  v36 = *(_OWORD *)(v17 + 2);
  v37 = *(_OWORD *)(v17 + 6);
  v38 = *(_OWORD *)(v17 + 10);
  v18 = a4 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v30 = v19 - 0x10000;
      if ( v30 )
      {
        if ( v30 != 0x10000 )
          goto LABEL_33;
        v31 = v17[10];
        if ( v31 != 18 && v31 != 25 && v31 != 8210 )
          goto LABEL_33;
      }
      else
      {
        if ( (_DWORD)v38 != 17 )
          goto LABEL_33;
        v32 = (char *)&WheapPfaLock.UserWaitTime + 1;
        if ( **((_BYTE **)&v38 + 1) != 0xFF )
          v32 = (char *)&unk_140E0F260;
        *((_QWORD *)&v38 + 1) = v32;
      }
    }
  }
  else
  {
    *(_QWORD *)&v38 = 0x400000007LL;
    *((_QWORD *)&v38 + 1) = (char *)&WheapPfaLock.UserWaitTime + 4;
  }
  for ( j = 0; j < v5; ++j )
  {
    v21 = &v11[14 * j];
    if ( v21 != v17 && v21[6] == v17[6] )
    {
      v22 = *((_QWORD *)v21 + 1) - *((_QWORD *)v17 + 1);
      if ( !v22 )
        v22 = *((_QWORD *)v21 + 2) - *((_QWORD *)v17 + 2);
      if ( !v22 && v21[7] == v17[7] )
      {
        v23 = (const wchar_t *)*((_QWORD *)v17 + 4);
        v24 = (const wchar_t *)*((_QWORD *)v21 + 4);
        if ( v24 == v23 || v24 && v23 && !wcsicmp(v24, v23) )
        {
          v25 = v11[14 * j];
          if ( v25 != *v17 )
            goto LABEL_33;
          if ( v11[14 * j + 10] != v17[10] )
            goto LABEL_33;
          v26 = v11[14 * j + 11];
          if ( v26 != v17[11] || memcmp(*(const void **)&v11[14 * j + 12], *((const void **)v17 + 6), v26) )
            goto LABEL_33;
          v11[14 * j] = v25 ^ 0x10000;
        }
      }
    }
  }
  *v17 ^= 0x10000u;
  LODWORD(v35) = 1;
  *((_QWORD *)&v35 + 1) = &v36;
  if ( !v5 )
  {
    v27 = -1073741811;
    goto LABEL_34;
  }
  if ( (*v11 & 0xFF00000) != 0 )
    v29 = FilterEvalStrict((unsigned int)GetPropertyFromPropArray, (unsigned int)&v35, v5, (_DWORD)v11, (__int64)&v33);
  else
    v29 = FilterEvalImpliedAnd(
            (unsigned int)GetPropertyFromPropArray,
            (unsigned int)&v35,
            v5,
            (_DWORD)v11,
            (__int64)&v33);
  v27 = v29;
  if ( v29 < 0 )
    goto LABEL_34;
  if ( v33 )
  {
LABEL_33:
    v27 = -1073741823;
    goto LABEL_34;
  }
  *(_OWORD *)a5 = *(_OWORD *)v17;
  *(_OWORD *)(a5 + 16) = *((_OWORD *)v17 + 1);
  *(_OWORD *)(a5 + 32) = *((_OWORD *)v17 + 2);
  *(_QWORD *)(a5 + 48) = *((_QWORD *)v17 + 6);
  *(_DWORD *)a5 ^= 0x10000u;
LABEL_34:
  ExFreePoolWithTag(v11, 0x52544C46u);
  return v27;
}
