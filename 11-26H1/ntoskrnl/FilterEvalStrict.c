/*
 * XREFs of FilterEvalStrict @ 0x1409A7F40
 * Callers:
 *     ConstraintEval @ 0x14098E0C4 (ConstraintEval.c)
 *     PiDqQueryEvaluateFilter @ 0x1409A7950 (PiDqQueryEvaluateFilter.c)
 *     FilterEvalStrict @ 0x1409A7F40 (FilterEvalStrict.c)
 *     ValidFilter @ 0x140ADC3C0 (ValidFilter.c)
 * Callees:
 *     Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline @ 0x140719C18 (Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     FilterEvalStrict @ 0x1409A7F40 (FilterEvalStrict.c)
 *     PropertyEval @ 0x1409A8E30 (PropertyEval.c)
 *     FindFilterOperatorClose @ 0x140A78660 (FindFilterOperatorClose.c)
 */

__int64 __fastcall FilterEvalStrict(int a1, __int64 a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // ebp
  int v6; // r10d
  __int64 v9; // r11
  int v10; // r13d
  unsigned int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 result; // rax
  unsigned int v17; // ebx
  unsigned int v18; // r15d
  unsigned int *v19; // rax
  unsigned int *v20; // rsi
  unsigned int v21; // r14d
  unsigned int v22; // edi
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // edi
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rcx
  bool v30; // zf
  int v31; // eax
  bool v32; // zf
  __int64 *v33; // [rsp+20h] [rbp-78h]
  __int64 *v34; // [rsp+20h] [rbp-78h]
  unsigned int v35; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-4Ch]
  __int64 v37; // [rsp+50h] [rbp-48h] BYREF
  unsigned int *v38; // [rsp+58h] [rbp-40h]
  int v41; // [rsp+B0h] [rbp+18h]

  v5 = 0;
  v6 = 1;
  v41 = 1;
  v37 = 0LL;
  v9 = a2;
  if ( a3 < 3 )
    return 3221225485LL;
  v10 = *a4 & 0xFF00000;
  if ( !v10 )
    return 3221225485LL;
  v11 = 0;
  v35 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0LL;
  *a5 = 0;
  while ( 1 )
  {
    v15 = a4[14 * v14] & 0xFF00000;
    if ( v15 <= 0x400000 )
    {
      if ( v15 != 0x400000 )
      {
        if ( v15 == 0x100000 )
          goto LABEL_9;
        if ( v15 != 0x200000 )
        {
          if ( v15 != 3145728 )
            goto LABEL_10;
LABEL_9:
          ++v12;
          goto LABEL_10;
        }
      }
LABEL_16:
      ++v13;
      goto LABEL_10;
    }
    if ( v15 == 5242880 )
      goto LABEL_9;
    if ( v15 == 6291456 )
      goto LABEL_16;
LABEL_10:
    if ( v12 == v13 )
      break;
    v35 = ++v11;
    v14 = v11;
    if ( v11 >= a3 )
      return 3221225485LL;
  }
  v17 = 0;
  v18 = -1073741823;
  v19 = &a4[14 * v11];
  v20 = a4 + 14;
  v38 = v19;
  LODWORD(v19) = a3 - v11;
  v21 = a3 - 1;
  v36 = (unsigned int)v19;
  if ( ((v10 - 0x100000) & 0xFFDFFFFF) != 0 )
  {
    if ( v10 != 5242880 )
      return 3221225485LL;
    if ( (*v20 & 0xFF00000) != 0 )
    {
      result = FindFilterOperatorClose(v21, v20, &v35);
      v22 = v35 + 1;
      if ( (_DWORD)result )
        return result;
      result = FilterEvalStrict(a1, a2, v22, (_DWORD)v20, (__int64)a5);
      v17 = result;
      if ( (_DWORD)result )
        return result;
      v21 -= v22;
      v23 = 56LL * v22;
    }
    else
    {
      v33 = &v37;
      result = guard_dispatch_icall_no_overrides(v9, (__int64)(v20 + 2));
      v17 = result;
      if ( (_DWORD)result == -1073741275 )
        return v18;
      if ( (_DWORD)result )
        return result;
      LODWORD(v33) = v20[10];
      PropertyEval(0LL, v37, 0LL, *v20, v33, *((_QWORD *)v20 + 6), v20[11], a5);
      --v21;
      v23 = 56LL;
    }
    v20 = (unsigned int *)((char *)v20 + v23);
    *a5 = *a5 == 0;
    goto LABEL_66;
  }
  if ( v21 <= 1 )
    goto LABEL_67;
  while ( 2 )
  {
    v30 = (*v20 & 0xFF00000) == 0;
    *a5 = 0;
    if ( v30 )
    {
      v34 = &v37;
      v17 = guard_dispatch_icall_no_overrides(v9, (__int64)(v20 + 2));
      if ( v17 == -1073741275 )
      {
        v17 = (unsigned int)Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline() != 0
            ? 0xC0000001
            : 0;
        if ( (*v20 & 0xFFF) != 1 )
        {
          v20 += 14;
          v41 = 0;
          --v21;
          v6 = 0;
LABEL_62:
          if ( v21 <= 1 )
            goto LABEL_67;
          v9 = a2;
          continue;
        }
        v37 = 0LL;
      }
      if ( (unsigned int)Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v17 )
          goto LABEL_55;
        v30 = v17 == -1073741823;
      }
      else
      {
        v30 = v17 == 0;
      }
      if ( !v30 )
        return v17;
LABEL_55:
      LODWORD(v34) = v20[10];
      PropertyEval(0LL, v37, 0LL, *v20, v34, *((_QWORD *)v20 + 6), v20[11], a5);
      --v21;
      v29 = 56LL;
LABEL_56:
      v20 = (unsigned int *)((char *)v20 + v29);
      if ( (unsigned int)Feature_KernelPnP_DevFilterShortCircuitEval__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v17 && *a5 == (v10 == 3145728) )
        {
          v20 = v38;
          v5 = 1;
          v21 = v36;
LABEL_66:
          v6 = v41;
LABEL_67:
          if ( !v21 )
            return 3221225485LL;
          v31 = *v20 & 0xFF00000;
          switch ( v31 )
          {
            case 2097152:
              v32 = v10 == 0x100000;
              break;
            case 4194304:
              v32 = v10 == 3145728;
              break;
            case 6291456:
              v32 = v10 == 5242880;
              break;
            default:
              return 3221225485LL;
          }
          if ( !v32 )
            return 3221225485LL;
          if ( v5 || v6 || v17 )
            return v17;
          return v18;
        }
        v6 = v41;
      }
      else
      {
        v6 = v41;
        if ( *a5 == (v10 == 3145728) )
        {
          v20 = v38;
          v5 = 1;
          v21 = v36;
          goto LABEL_67;
        }
      }
      goto LABEL_62;
    }
    break;
  }
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  while ( 1 )
  {
    v28 = v20[14 * v27] & 0xFF00000;
    if ( v28 <= 0x400000 )
    {
      if ( v28 != 0x400000 )
      {
        if ( v28 == 0x100000 )
          goto LABEL_35;
        if ( v28 != 0x200000 )
        {
          if ( v28 != 3145728 )
            goto LABEL_36;
LABEL_35:
          ++v24;
          goto LABEL_36;
        }
      }
LABEL_41:
      ++v25;
      goto LABEL_36;
    }
    if ( v28 == 5242880 )
      goto LABEL_35;
    if ( v28 == 6291456 )
      goto LABEL_41;
LABEL_36:
    ++v26;
    if ( v24 == v25 )
      break;
    v27 = v26;
    if ( v26 >= v21 )
      return 3221225485LL;
  }
  result = FilterEvalStrict(a1, v9, v26, (_DWORD)v20, (__int64)a5);
  v17 = result;
  if ( (_DWORD)result == -1073741823 )
  {
    v41 = 0;
    goto LABEL_45;
  }
  if ( !(_DWORD)result )
  {
LABEL_45:
    v21 -= v26;
    v29 = 56LL * v26;
    goto LABEL_56;
  }
  return result;
}
