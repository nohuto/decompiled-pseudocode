/*
 * XREFs of AuthzBasepCompareUnicodeStringOperands @ 0x1402FA444
 * Callers:
 *     AuthzBasepValueInSet @ 0x1402FB070 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x1402FB3B8 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     RtlIsNameInExpression @ 0x1402FA830 (RtlIsNameInExpression.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B1F88 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1409DE5A0 (RtlCompareUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringOperands(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rdi
  wchar_t **p_Buffer; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  char v8; // cl
  unsigned __int8 CurrentIrql; // al
  char v10; // r14
  __int64 v11; // rax
  wchar_t **v12; // r12
  unsigned int *i; // r13
  int v14; // r8d
  _WORD *v15; // rax
  _WORD *v16; // rdx
  _WORD *v17; // rcx
  wchar_t *v18; // rcx
  __int16 v19; // ax
  wchar_t *Pool2; // rcx
  size_t v21; // r8
  const void *v22; // rdx
  int v23; // ecx
  UNICODE_STRING *p_Name; // rdx
  UNICODE_STRING *p_Expression; // rcx
  int IsNameInExpression; // ecx
  unsigned int v27; // r15d
  __int64 v28; // rdi
  wchar_t **v29; // r14
  unsigned int v31; // eax
  WCHAR *v32; // r12
  __int64 v33; // rdi
  unsigned __int16 *v34; // rdx
  BOOLEAN v35; // al
  LONG v36; // ecx
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // ax
  BOOL v39; // eax
  int v40; // r10d
  int v41; // r11d
  __int64 v42; // [rsp+20h] [rbp-68h]
  wchar_t **v43; // [rsp+28h] [rbp-60h]
  UNICODE_STRING Name; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING Expression; // [rsp+40h] [rbp-48h] BYREF
  __int16 v47; // [rsp+98h] [rbp+10h]
  _DWORD *v48; // [rsp+A0h] [rbp+18h]
  int v49; // [rsp+A8h] [rbp+20h]

  v48 = a3;
  v3 = a3;
  v47 = 0;
  p_Buffer = &Name.Buffer;
  v6 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v6;
  }
  while ( v6 );
  *a3 = 0;
  if ( *(_DWORD *)(a2 + 12) == 1 )
  {
    v7 = *(_QWORD *)(a2 + 56);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( *(_DWORD *)(a2 + 52) != 1 )
    {
      if ( (*(_DWORD *)(v7 + 36) & 2) != 0 || (v8 = 0, (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 36LL) & 2) != 0) )
        v8 = 1;
      goto LABEL_6;
    }
  }
  v8 = *(_BYTE *)(v7 + 36) & 2;
LABEL_6:
  CurrentIrql = KeGetCurrentIrql();
  if ( v8 || (v10 = 0, CurrentIrql >= 2u) )
    v10 = 1;
  v49 = 0;
  v11 = 0LL;
  v42 = 0LL;
  v12 = &Name.Buffer;
  for ( i = (unsigned int *)(a2 + 24); ; i += 10 )
  {
    v43 = v12;
    if ( v11 >= 2 )
      break;
    v14 = *(i - 3);
    if ( v14 != 1 && v10 )
    {
      *(_OWORD *)(v12 - 1) = *(_OWORD *)*(_QWORD *)(*((_QWORD *)i - 1) + 48LL);
      goto LABEL_23;
    }
    v49 = 0;
    *((_BYTE *)&v47 + v11) = 0;
    if ( v14 == 1 )
    {
      v15 = i;
      v16 = i;
      v17 = i;
    }
    else
    {
      v15 = *(_WORD **)(*((_QWORD *)i - 1) + 48LL);
      v16 = v15 + 1;
      v17 = v15;
    }
    v18 = (wchar_t *)*((_QWORD *)v17 + 1);
    v19 = *v15;
    *((_WORD *)v12 - 3) = *v16;
    *((_WORD *)v12 - 4) = v19;
    *v12 = v18;
    if ( v19 && v18 )
    {
      if ( (v14 != 1 || (i[2] & 1) == 0) && v10 )
        goto LABEL_21;
      Pool2 = (wchar_t *)ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL);
      *v12 = Pool2;
      if ( Pool2 )
      {
        if ( *(i - 3) == 1 )
        {
          v21 = *i;
          v22 = (const void *)*((_QWORD *)i + 1);
        }
        else
        {
          v34 = *(unsigned __int16 **)(*((_QWORD *)i - 1) + 48LL);
          v21 = *v34;
          v22 = (const void *)*((_QWORD *)v34 + 1);
        }
        memmove(Pool2, v22, v21);
        *((_BYTE *)&v47 + v42) = 1;
        if ( !v10 )
        {
          v31 = *((unsigned __int16 *)v12 - 4) >> 1;
          if ( v31 )
          {
            v32 = *v12;
            v33 = v31;
            do
            {
              *v32 = RtlUpcaseUnicodeChar(*v32);
              ++v32;
              --v33;
            }
            while ( v33 );
            v3 = v48;
            v12 = v43;
          }
        }
LABEL_21:
        v23 = 0;
        goto LABEL_22;
      }
      v23 = -1073741801;
    }
    else
    {
      v23 = -1073741406;
    }
    v49 = v23;
LABEL_22:
    if ( v23 < 0 )
    {
      *v3 = -1;
      goto LABEL_65;
    }
LABEL_23:
    v11 = ++v42;
    v12 += 2;
  }
  if ( a1 != 128 && a1 != 129 )
  {
    if ( v10 )
    {
      Buffer = Name.Buffer;
      Length = Name.Length;
      if ( Name.Length >= Expression.Length )
        Length = Expression.Length;
      while ( Buffer < (wchar_t *)((char *)Name.Buffer + Length) )
      {
        v40 = *Buffer;
        v41 = *(wchar_t *)((char *)Buffer + (char *)Expression.Buffer - (char *)Name.Buffer);
        if ( (_WORD)v40 != (_WORD)v41 )
        {
          v36 = v40 - v41;
          goto LABEL_63;
        }
        ++Buffer;
      }
      v36 = Name.Length - Expression.Length;
    }
    else
    {
      v36 = RtlCompareUnicodeString(&Name, &Expression, 1u);
    }
LABEL_63:
    *v3 = v36;
    switch ( a1 )
    {
      case 0x82:
LABEL_64:
        *v3 = (unsigned int)v36 >> 31;
LABEL_65:
        v27 = v49;
        goto LABEL_34;
      case 0x83:
        v39 = v36 <= 0;
        break;
      case 0x84:
        v39 = v36 > 0;
        break;
      case 0x85:
        v36 = ~v36;
        goto LABEL_64;
      default:
        goto LABEL_65;
    }
    *v3 = v39;
    goto LABEL_65;
  }
  if ( *(_DWORD *)(a2 + 12) == 2 || *(_DWORD *)(a2 + 52) == 2 )
  {
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      p_Name = &Name;
      p_Expression = &Expression;
    }
    else
    {
      p_Name = &Expression;
      p_Expression = &Name;
    }
    IsNameInExpression = RtlIsNameInExpression(p_Expression, p_Name, v10 ^ 1, 0LL);
    *v3 = IsNameInExpression;
  }
  else
  {
    if ( v10 )
      v35 = AuthzBasepEqualUnicodeStringCaseSensitive(&Name, &Expression);
    else
      v35 = RtlEqualUnicodeString(&Name, &Expression, 1u);
    IsNameInExpression = v35;
    *v3 = v35;
  }
  v27 = v49;
  if ( a1 == 0x81 )
    *v3 = IsNameInExpression != 1;
LABEL_34:
  v28 = 0LL;
  v29 = &Name.Buffer;
  do
  {
    if ( *((_BYTE *)&v47 + v28) )
      ExFreePoolWithTag(*v29, 0);
    ++v28;
    v29 += 2;
  }
  while ( v28 < 2 );
  return v27;
}
