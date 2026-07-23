/*
 * XREFs of FilterEvalStrict @ 0x140968990
 * Callers:
 *     ConstraintEval @ 0x14094EB24 (ConstraintEval.c)
 *     PiDqQueryEvaluateFilter @ 0x1409683B0 (PiDqQueryEvaluateFilter.c)
 *     FilterEvalStrict @ 0x140968990 (FilterEvalStrict.c)
 *     ValidFilter @ 0x140AD9910 (ValidFilter.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     FilterEvalStrict @ 0x140968990 (FilterEvalStrict.c)
 *     PropertyEval @ 0x140969840 (PropertyEval.c)
 *     FindFilterOperatorClose @ 0x140A81100 (FindFilterOperatorClose.c)
 */

__int64 __fastcall FilterEvalStrict(int a1, __int64 a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // r14d
  int v6; // r10d
  __int64 v9; // r11
  int v11; // edi
  unsigned int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 result; // rax
  unsigned int v18; // ebx
  unsigned int v19; // r15d
  unsigned int *v20; // rax
  unsigned int *v21; // rsi
  unsigned int v22; // ebp
  unsigned int v23; // edi
  __int64 v24; // rax
  __int64 v25; // r13
  int v26; // ecx
  int v27; // edx
  unsigned int v28; // edi
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  bool v36; // zf
  __int64 *v37; // [rsp+20h] [rbp-88h]
  __int64 *v38; // [rsp+20h] [rbp-88h]
  unsigned int v39; // [rsp+48h] [rbp-60h] BYREF
  int v40; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v41; // [rsp+50h] [rbp-58h]
  __int64 v42; // [rsp+58h] [rbp-50h] BYREF
  unsigned int *v43; // [rsp+60h] [rbp-48h]
  int v46; // [rsp+C0h] [rbp+18h]

  v5 = 0;
  v6 = 1;
  v46 = 1;
  v42 = 0LL;
  v9 = a2;
  if ( a3 < 3 )
    return 3221225485LL;
  v36 = (*a4 & 0xFF00000) == 0;
  v11 = *a4 & 0xFF00000;
  v40 = v11;
  if ( v36 )
    return 3221225485LL;
  v12 = 0;
  v39 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  *a5 = 0;
  while ( 1 )
  {
    v16 = a4[14 * v15] & 0xFF00000;
    if ( v16 <= 0x400000 )
    {
      if ( v16 != 0x400000 )
      {
        if ( v16 == 0x100000 )
          goto LABEL_9;
        if ( v16 != 0x200000 )
        {
          if ( v16 != 3145728 )
            goto LABEL_10;
LABEL_9:
          ++v13;
          goto LABEL_10;
        }
      }
LABEL_16:
      ++v14;
      goto LABEL_10;
    }
    if ( v16 == 5242880 )
      goto LABEL_9;
    if ( v16 == 6291456 )
      goto LABEL_16;
LABEL_10:
    if ( v13 == v14 )
      break;
    v39 = ++v12;
    v15 = v12;
    if ( v12 >= a3 )
      return 3221225485LL;
  }
  v18 = 0;
  v19 = -1073741823;
  v20 = &a4[14 * v12];
  v21 = a4 + 14;
  v43 = v20;
  LODWORD(v20) = a3 - v12;
  v22 = a3 - 1;
  v41 = (unsigned int)v20;
  if ( ((v11 - 0x100000) & 0xFFDFFFFF) != 0 )
  {
    if ( v11 != 5242880 )
      return 3221225485LL;
    if ( (*v21 & 0xFF00000) != 0 )
    {
      result = FindFilterOperatorClose(v22, v21, &v39);
      v23 = v39 + 1;
      if ( (_DWORD)result )
        return result;
      result = FilterEvalStrict(a1, a2, v23, (_DWORD)v21, (__int64)a5);
      v18 = result;
      if ( (_DWORD)result )
        return result;
      v22 -= v23;
      v24 = v23;
      v11 = v40;
      v25 = 56 * v24;
LABEL_26:
      v21 = (unsigned int *)((char *)v21 + v25);
      *a5 = *a5 == 0;
      goto LABEL_60;
    }
    v37 = &v42;
    result = guard_dispatch_icall_no_overrides(v9, (__int64)(v21 + 2));
    v18 = result;
    if ( (_DWORD)result != -1073741275 )
    {
      if ( (_DWORD)result )
        return result;
      LODWORD(v37) = v21[10];
      PropertyEval(0LL, v42, 0LL, *v21, v37, *((_QWORD *)v21 + 6), v21[11], a5);
      --v22;
      v25 = 56LL;
      goto LABEL_26;
    }
    return v19;
  }
  if ( v22 <= 1 )
    goto LABEL_61;
  while ( 2 )
  {
    v36 = (*v21 & 0xFF00000) == 0;
    *a5 = 0;
    if ( v36 )
    {
      v38 = &v42;
      result = guard_dispatch_icall_no_overrides(v9, (__int64)(v21 + 2));
      v18 = result;
      if ( (_DWORD)result == -1073741275 )
      {
        v18 = -1073741823;
        if ( (*v21 & 0xFFF) != 1 )
        {
          v21 += 14;
          v46 = 0;
          --v22;
          v6 = 0;
          goto LABEL_57;
        }
        v34 = 0LL;
        v42 = 0LL;
      }
      else
      {
        if ( (_DWORD)result && (_DWORD)result != -1073741823 )
          return result;
        v34 = v42;
      }
      LODWORD(v38) = v21[10];
      PropertyEval(0LL, v34, 0LL, *v21, v38, *((_QWORD *)v21 + 6), v21[11], a5);
      --v22;
      v32 = 56LL;
      goto LABEL_54;
    }
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0LL;
    while ( 2 )
    {
      v30 = v21[14 * v29] & 0xFF00000;
      if ( v30 <= 0x400000 )
      {
        if ( v30 != 0x400000 )
        {
          if ( v30 == 0x100000 )
            goto LABEL_35;
          if ( v30 != 0x200000 )
          {
            if ( v30 == 3145728 )
              goto LABEL_35;
            goto LABEL_36;
          }
        }
LABEL_41:
        ++v27;
        goto LABEL_36;
      }
      if ( v30 == 5242880 )
      {
LABEL_35:
        ++v26;
        goto LABEL_36;
      }
      if ( v30 == 6291456 )
        goto LABEL_41;
LABEL_36:
      ++v28;
      if ( v26 != v27 )
      {
        v29 = v28;
        if ( v28 >= v22 )
          return 3221225485LL;
        continue;
      }
      break;
    }
    result = FilterEvalStrict(a1, v9, v28, (_DWORD)v21, (__int64)a5);
    v18 = result;
    if ( (_DWORD)result != -1073741823 )
    {
      if ( !(_DWORD)result )
      {
        v22 -= v28;
        v33 = v28;
        v11 = v40;
        v32 = 56 * v33;
        goto LABEL_54;
      }
      return result;
    }
    v22 -= v28;
    v31 = v28;
    v11 = v40;
    v32 = 56 * v31;
    v46 = 0;
LABEL_54:
    v21 = (unsigned int *)((char *)v21 + v32);
    if ( v18 || *a5 != (v11 == 3145728) )
    {
      v6 = v46;
LABEL_57:
      if ( v22 <= 1 )
        goto LABEL_61;
      v9 = a2;
      continue;
    }
    break;
  }
  v21 = v43;
  v5 = 1;
  v22 = v41;
LABEL_60:
  v6 = v46;
LABEL_61:
  if ( !v22 )
    return 3221225485LL;
  v35 = *v21 & 0xFF00000;
  switch ( v35 )
  {
    case 2097152:
      v36 = v11 == 0x100000;
      goto LABEL_68;
    case 4194304:
      v36 = v11 == 3145728;
LABEL_68:
      if ( !v36 )
        return 3221225485LL;
      if ( v5 || v6 || v18 )
        return v18;
      return v19;
    case 6291456:
      v36 = v11 == 5242880;
      goto LABEL_68;
  }
  return 3221225485LL;
}
