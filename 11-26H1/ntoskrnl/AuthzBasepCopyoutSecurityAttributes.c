/*
 * XREFs of AuthzBasepCopyoutSecurityAttributes @ 0x1403B1710
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B1220 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepCopyoutSecurityAttributeValues @ 0x1403B1A40 (AuthzBasepCopyoutSecurityAttributeValues.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B1F88 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepCopyoutSecurityAttributes(int *a1, __int64 a2, unsigned int a3, _OWORD *a4, size_t Size)
{
  unsigned int v6; // r12d
  __int64 v7; // r14
  int *v8; // rdi
  unsigned __int64 v9; // rbp
  _OWORD *v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rax
  char *v13; // r13
  int v14; // edx
  __int64 *v15; // r15
  __int64 *v16; // rdi
  char *v17; // rcx
  size_t v18; // r8
  char *v19; // r14
  unsigned int v20; // r15d
  const UNICODE_STRING *v21; // r12
  _QWORD *v22; // r14
  _QWORD *i; // rdi
  const UNICODE_STRING *v24; // rcx
  BOOLEAN v25; // al
  const UNICODE_STRING *j; // r14
  char v27; // al
  __int64 *v28; // rdi
  char *v29; // rcx
  size_t v30; // r8
  char *v31; // r14
  __int64 *v33; // [rsp+30h] [rbp-58h]
  size_t v37; // [rsp+A8h] [rbp+20h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( !a4 || !Size || (v9 = (unsigned __int64)a4 + Size, (_OWORD *)((char *)a4 + Size) < a4) )
  {
    v14 = -1073741811;
    goto LABEL_43;
  }
  memset_0(a4, 0, Size);
  v10 = a4 + 1;
  if ( (unsigned __int64)(a4 + 1) > v9 )
  {
    v14 = -1073741789;
LABEL_43:
    if ( Size >= 0x10 )
      *a4 = 0LL;
    return (unsigned int)v14;
  }
  if ( v7 )
    v11 = v6;
  else
    v11 = *v8;
  v37 = 0LL;
  v12 = 40LL * v11;
  if ( !is_mul_ok(0x28uLL, v11) )
  {
    v14 = -1073741675;
    goto LABEL_43;
  }
  v13 = (char *)v10 + v12;
  v14 = 0;
  if ( (unsigned __int64)v10 + v12 > v9 )
  {
LABEL_34:
    v14 = -2147483643;
    goto LABEL_43;
  }
  *(_DWORD *)a4 = 1;
  *((_DWORD *)a4 + 1) = v11;
  *((_QWORD *)a4 + 1) = v10;
  if ( v7 )
  {
    v20 = 0;
    while ( v20 < v6 )
    {
      v21 = (const UNICODE_STRING *)(v7 + 16LL * v20);
      v33 = 0LL;
      v22 = v8 + 2;
      LOBYTE(v37) = 0;
      for ( i = (_QWORD *)*((_QWORD *)v8 + 1); i != v22; i = (_QWORD *)*i )
      {
        v33 = i;
        v24 = (const UNICODE_STRING *)(i + 4);
        if ( KeGetCurrentIrql() >= 2u )
          v25 = AuthzBasepEqualUnicodeStringCaseSensitive(v24, v21);
        else
          v25 = RtlEqualUnicodeString(v24, v21, 1u);
        if ( v25 )
        {
LABEL_33:
          v27 = 1;
          goto LABEL_27;
        }
      }
      for ( j = (const UNICODE_STRING *)*((_QWORD *)a1 + 4);
            j != (const UNICODE_STRING *)(a1 + 8);
            j = *(const UNICODE_STRING **)&j->Length )
      {
        v33 = (__int64 *)&j[-1];
        if ( ((__int64)j[2].Buffer & 1) == 0 && AuthzBasepEqualUnicodeString(j + 1, v21) )
          goto LABEL_33;
      }
      v27 = v37;
LABEL_27:
      v28 = 0LL;
      if ( v27 )
        v28 = v33;
      if ( !v28 )
      {
        v14 = -1073741275;
        goto LABEL_43;
      }
      *((_WORD *)v10 + 8) = *((_WORD *)v28 + 24);
      v29 = (char *)((unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
      *((_DWORD *)v10 + 6) = *((_DWORD *)v28 + 15);
      *((_WORD *)v10 + 9) = 0;
      *((_DWORD *)v10 + 5) = *((_DWORD *)v28 + 13);
      v30 = *((unsigned __int16 *)v28 + 16);
      v37 = v30;
      v31 = &v29[v30];
      if ( (unsigned __int64)&v29[v30] > v9 )
        goto LABEL_34;
      *(_WORD *)v10 = v30;
      *((_WORD *)v10 + 1) = v30;
      *((_QWORD *)v10 + 1) = v29;
      memmove(v29, (const void *)v28[5], v30);
      v14 = AuthzBasepCopyoutSecurityAttributeValues(
              (_DWORD)v28,
              (_DWORD)v10,
              (_DWORD)v31,
              (int)v9 - (int)v31,
              (__int64)&v37);
      if ( v14 < 0 )
        goto LABEL_43;
      ++v20;
      v8 = a1;
      v13 = &v31[v37];
      v7 = a2;
      v10 = (_OWORD *)((char *)v10 + 40);
      v6 = a3;
    }
  }
  else
  {
    v15 = (__int64 *)(v8 + 2);
    v16 = (__int64 *)*((_QWORD *)v8 + 1);
    while ( v16 != v15 )
    {
      *((_WORD *)v10 + 8) = *((_WORD *)v16 + 24);
      v17 = (char *)((unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
      *((_DWORD *)v10 + 6) = *((_DWORD *)v16 + 15);
      *((_WORD *)v10 + 9) = 0;
      *((_DWORD *)v10 + 5) = *((_DWORD *)v16 + 13);
      v18 = *((unsigned __int16 *)v16 + 16);
      v37 = v18;
      v19 = &v17[v18];
      if ( (unsigned __int64)&v17[v18] > v9 )
        goto LABEL_34;
      *(_WORD *)v10 = v18;
      *((_WORD *)v10 + 1) = v18;
      *((_QWORD *)v10 + 1) = v17;
      memmove(v17, (const void *)v16[5], v18);
      v14 = AuthzBasepCopyoutSecurityAttributeValues(
              (_DWORD)v16,
              (_DWORD)v10,
              (_DWORD)v19,
              (int)v9 - (int)v19,
              (__int64)&v37);
      if ( v14 < 0 )
        goto LABEL_43;
      v10 = (_OWORD *)((char *)v10 + 40);
      v16 = (__int64 *)*v16;
      v13 = &v19[v37];
    }
  }
  return (unsigned int)v14;
}
