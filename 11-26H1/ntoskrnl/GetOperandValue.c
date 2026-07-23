/*
 * XREFs of GetOperandValue @ 0x140A70FD0
 * Callers:
 *     LocalGetConditionForString @ 0x140A70494 (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x140A70FD0 (GetOperandValue.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcstoxq @ 0x14053B040 (wcstoxq.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SddlpReAlloc @ 0x14081E8D4 (SddlpReAlloc.c)
 *     GetBinaryOperandLen @ 0x14081EB5C (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x14081EBB8 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x14081ECCC (GetNextNoneWhiteSpace.c)
 *     LocalGetSidForString @ 0x140901030 (LocalGetSidForString.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     FreeOperandValue @ 0x140A7045C (FreeOperandValue.c)
 *     GetOperandValue @ 0x140A70FD0 (GetOperandValue.c)
 *     IsValueSizeFixed @ 0x140A7113C (IsValueSizeFixed.c)
 *     GetAttributeName @ 0x140A7118C (GetAttributeName.c)
 *     GetStringOperandValue @ 0x140A713EC (GetStringOperandValue.c)
 */

__int64 __fastcall GetOperandValue(
        wchar_t *a1,
        char a2,
        char a3,
        _QWORD **a4,
        _DWORD *a5,
        char a6,
        unsigned int a7,
        int a8,
        char a9)
{
  __int64 v9; // r15
  unsigned int AttributeName; // esi
  char v14; // r13
  _QWORD *v15; // rax
  PSID v16; // rbx
  unsigned int StringOperandValue; // eax
  _DWORD *v19; // rax
  unsigned int v20; // ecx
  wchar_t *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r9
  char v24; // r12
  void *v25; // r8
  unsigned int v26; // edx
  unsigned int v27; // r10d
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  void *v30; // rax
  __int64 v31; // rsi
  PVOID v32; // rax
  __int64 v33; // r8
  wchar_t v34; // dx
  char v35; // r14
  __int64 v36; // r14
  bool v37; // zf
  __int64 v38; // rdi
  PSID v39; // rcx
  unsigned int v40; // r14d
  __int64 v41; // rax
  PVOID v42; // rax
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  wint_t *v49; // rdx
  unsigned __int64 v50; // r13
  wchar_t v51; // ax
  unsigned __int64 v52; // rax
  __int16 v53; // r15
  wchar_t v54; // ax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // [rsp+58h] [rbp-28h] BYREF
  PSID Sid; // [rsp+60h] [rbp-20h] BYREF
  wint_t *v60; // [rsp+68h] [rbp-18h] BYREF
  __int64 v61; // [rsp+70h] [rbp-10h] BYREF
  char v63; // [rsp+D8h] [rbp+58h] BYREF

  v9 = (__int64)a5;
  a7 = 0;
  a6 = 0;
  v63 = 0;
  v60 = 0LL;
  AttributeName = 0;
  Sid = 0LL;
  v14 = 0;
  a9 = 0;
  v58 = 0LL;
  v61 = 0LL;
  a8 = 0;
  *a5 = 0;
  v15 = SddlpAlloc(0x10uLL);
  *a4 = v15;
  if ( !v15 )
  {
LABEL_13:
    AttributeName = 8;
LABEL_14:
    v16 = 0LL;
    goto LABEL_12;
  }
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1);
    if ( !AttributeName )
    {
LABEL_4:
      v16 = 0LL;
      goto LABEL_5;
    }
    goto LABEL_14;
  }
  if ( *a1 == 34 )
  {
    StringOperandValue = GetStringOperandValue(a1, a4, v9);
    v16 = 0LL;
    AttributeName = StringOperandValue;
    if ( !StringOperandValue )
      goto LABEL_5;
    goto LABEL_12;
  }
  if ( *a1 == 123 )
  {
    v19 = *a4;
    v20 = 1;
    a7 = 1;
    *((_BYTE *)v19 + 1) = 80;
    while ( a1[v20] )
    {
      AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
      if ( AttributeName )
        goto LABEL_14;
      v21 = &a1[a7];
      if ( *v21 == 123 )
        goto LABEL_40;
      AttributeName = GetOperandValue((_DWORD)v21, 0, 0, (unsigned int)&v58, v9, 0, 0, 0, 0);
      if ( AttributeName )
        goto LABEL_14;
      if ( a3 )
      {
        if ( v14 && v14 != *((_BYTE *)v58 + 1) )
          goto LABEL_40;
        v14 = *((_BYTE *)v58 + 1);
      }
      LOBYTE(v22) = *((_BYTE *)v58 + 1);
      v24 = IsValueSizeFixed(v22);
      v25 = (void *)(*a4)[1];
      v26 = v24 != 0 ? 1 : 5;
      if ( v25 )
      {
        v27 = *((_DWORD *)*a4 + 1);
        v28 = v27 + *(_DWORD *)(v23 + 4);
        if ( v28 < v27 || (v29 = v28 + v26, v28 + v26 < v28) )
        {
LABEL_41:
          AttributeName = 534;
          goto LABEL_14;
        }
        v30 = SddlpReAlloc(v27, v29, v25);
        v31 = (__int64)*a4;
        (*a4)[1] = v30;
        if ( !v30 )
          goto LABEL_13;
      }
      else
      {
        v29 = v26 + *(_DWORD *)(v23 + 4);
        if ( v29 < v26 )
          goto LABEL_41;
        v32 = SddlpAlloc(v29);
        v31 = (__int64)*a4;
        (*a4)[1] = v32;
      }
      v33 = *(_QWORD *)(v31 + 8);
      if ( !v33 )
        goto LABEL_13;
      *(_BYTE *)(*(unsigned int *)(v31 + 4) + v33) = *((_BYTE *)v58 + 1);
      if ( !v24 )
        *(_DWORD *)(*(unsigned int *)(v31 + 4) + *(_QWORD *)(v31 + 8) + 1LL) = *((_DWORD *)v58 + 1);
      memmove(
        (void *)(*(_QWORD *)(v31 + 8) + *(unsigned int *)(v31 + 4) + (-(__int64)(v24 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 5),
        (const void *)v58[1],
        *((unsigned int *)v58 + 1));
      *(_DWORD *)(v31 + 4) = v29;
      FreeOperandValue(v58);
      v58 = 0LL;
      a7 += *(_DWORD *)v9;
      AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
      if ( AttributeName )
        goto LABEL_14;
      v34 = a1[a7];
      if ( v34 != 44 )
      {
        v16 = 0LL;
        if ( v34 != 125 )
          goto LABEL_44;
        *(_DWORD *)v9 = a7 + 1;
        goto LABEL_5;
      }
      v20 = ++a7;
    }
    goto LABEL_4;
  }
  v35 = 3;
  if ( !wcsnicmp(a1, L"SID", 3uLL) )
  {
    a7 = 3;
    AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
    if ( AttributeName )
      goto LABEL_14;
    if ( a1[a7] == 40 )
    {
      v36 = a7 + 1;
      AttributeName = LocalGetSidForString(&a1[v36], &Sid, &v61, &a9);
      if ( AttributeName
        || (a7 = v36 + ((v61 - 2 * v36 - (__int64)a1) >> 1),
            (AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7)) != 0) )
      {
        v16 = Sid;
      }
      else
      {
        v37 = a1[a7] == 41;
        v16 = Sid;
        if ( v37 )
        {
          v38 = (__int64)*a4;
          v39 = Sid;
          *(_DWORD *)v9 = a7 + 1;
          *(_BYTE *)(v38 + 1) = 81;
          *(_DWORD *)(v38 + 4) = RtlLengthSid(v39);
          v37 = a9 == 0;
          *(_QWORD *)(v38 + 8) = v16;
          v16 = 0LL;
          *(_BYTE *)v38 = v37;
          goto LABEL_5;
        }
LABEL_44:
        AttributeName = 1336;
      }
LABEL_12:
      FreeOperandValue(*a4);
      *a4 = 0LL;
      goto LABEL_5;
    }
    goto LABEL_40;
  }
  GetBinaryOperandLen(a1, &a7);
  if ( *a1 == 35 )
  {
    v40 = a7;
    if ( a7 >= 2 )
    {
      v41 = (__int64)*a4;
      *(_DWORD *)v9 = a7;
      LODWORD(v9) = v40 >> 1;
      *(_BYTE *)(v41 + 1) = 24;
      *(_DWORD *)(v41 + 4) = v40 >> 1;
      v42 = SddlpAlloc(v40 >> 1);
      (*a4)[1] = v42;
      if ( v42 )
      {
        v43 = (int)(v40 - 1);
        while ( v43 >= 1 )
        {
          if ( !GetDigitFromChar(a1[v43], &a6) || !GetDigitFromChar(a1[v44 - 1], &v63) )
            goto LABEL_13;
          v9 = (unsigned int)(v9 - 1);
          v43 = v45 - 2;
          *(_BYTE *)(v9 + *(_QWORD *)(v46 + 8)) = a6 | (16 * v63);
        }
        goto LABEL_4;
      }
      goto LABEL_13;
    }
LABEL_40:
    AttributeName = 1336;
    goto LABEL_14;
  }
  v47 = a7;
  if ( !a7 )
    goto LABEL_40;
  *(_DWORD *)v9 = a7;
  v48 = wcstoxq(0LL, a1, &v60, 0, 1, &a8);
  v49 = v60;
  v50 = v48;
  if ( v60 == a1 && !v48 )
    goto LABEL_40;
  if ( v60 != &a1[v47] || a8 )
    goto LABEL_40;
  v51 = *a1;
  if ( *a1 == 45 )
  {
    v52 = wcstoxq(0LL, ++a1, &v60, 0, 1, &a8);
    if ( v52 >= v50 && v52 )
      goto LABEL_40;
    v51 = *a1;
    v53 = 2;
    v49 = v60;
  }
  else if ( v51 == 43 )
  {
    ++a1;
    v53 = 1;
    v51 = *a1;
  }
  else
  {
    v53 = 3;
  }
  if ( v51 == 48 )
  {
    if ( a1 + 1 >= v49 || (v54 = a1[1], v54 != 120) && v54 != 88 )
      v35 = 1;
  }
  else
  {
    v35 = 2;
  }
  v55 = (__int64)*a4;
  *(_BYTE *)(v55 + 1) = 4;
  *(_DWORD *)(v55 + 4) = 10;
  v56 = SddlpAlloc(0xAuLL);
  v57 = (__int64)*a4;
  v16 = 0LL;
  (*a4)[1] = v56;
  if ( !v56 )
  {
    AttributeName = 8;
    goto LABEL_12;
  }
  *v56 = v50;
  *(_WORD *)(*(_QWORD *)(v57 + 8) + 8LL) = v53;
  *(_BYTE *)(*(_QWORD *)(v57 + 8) + 9LL) = v35;
LABEL_5:
  if ( v58 )
    FreeOperandValue(v58);
  if ( v16 && a9 )
    SddlpFree(v16);
  return AttributeName;
}
