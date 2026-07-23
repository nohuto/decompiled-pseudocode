/*
 * XREFs of AuthzBasepQuerySecurityAttributesToken @ 0x1403B1220
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1403B1580 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403B1710 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B1F88 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributesToken(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        size_t Size,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // r10
  unsigned int i; // ecx
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // dx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned int j; // r12d
  const UNICODE_STRING *v16; // r15
  const UNICODE_STRING *v17; // r13
  const UNICODE_STRING *k; // rbx
  const UNICODE_STRING *v19; // rcx
  BOOLEAN v20; // al
  unsigned int *m; // rsi
  char v22; // al
  const UNICODE_STRING *v23; // rcx
  __int64 result; // rax
  unsigned __int64 v25; // rax
  unsigned int *v26; // r15
  unsigned int *v27; // rbx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  _QWORD v30[2]; // [rsp+38h] [rbp-50h] BYREF

  v6 = a6;
  v7 = a3;
  v8 = a2;
  *a6 = 0;
  v9 = *a1;
  if ( (_DWORD)v9 )
  {
    for ( i = 0; i < (unsigned int)v7; ++i )
    {
      v11 = *(_WORD *)(v8 + 16LL * i);
      if ( v11 )
      {
        v12 = *(_WORD *)(v8 + 16LL * i + 2);
        if ( v12 )
        {
          if ( v11 <= v12 && *(_QWORD *)(v8 + 16LL * i + 8) )
            continue;
        }
      }
      return 3221225485LL;
    }
    if ( v8 )
    {
      v30[0] = 0LL;
      v13 = 40 * v7;
      if ( is_mul_ok(0x28uLL, v7) )
      {
        v14 = v13 + 16;
        if ( v13 < 0xFFFFFFFFFFFFFFF0uLL )
        {
          for ( j = 0; j < (unsigned int)v7; ++j )
          {
            v16 = (const UNICODE_STRING *)(v8 + 16LL * j);
            v17 = 0LL;
            for ( k = (const UNICODE_STRING *)*((_QWORD *)a1 + 1);
                  k != (const UNICODE_STRING *)(a1 + 2);
                  k = *(const UNICODE_STRING **)&k->Length )
            {
              v17 = k;
              v19 = k + 2;
              if ( KeGetCurrentIrql() >= 2u )
                v20 = AuthzBasepEqualUnicodeStringCaseSensitive(v19, v16);
              else
                v20 = RtlEqualUnicodeString(v19, v16, 1u);
              if ( v20 )
              {
LABEL_43:
                v22 = 1;
                goto LABEL_23;
              }
            }
            LODWORD(v7) = a3;
            for ( m = (unsigned int *)*((_QWORD *)a1 + 4); m != a1 + 8; m = *(unsigned int **)m )
            {
              v17 = (const UNICODE_STRING *)(m - 4);
              if ( (m[10] & 1) == 0 && AuthzBasepEqualUnicodeString(v17 + 2, v16) )
                goto LABEL_43;
            }
            v22 = 0;
LABEL_23:
            v23 = 0LL;
            if ( v22 )
              v23 = v17;
            if ( !v23 )
              return 3221226021LL;
            v29 = (v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v29 < v14 || v29 + v23[2].Length < v29 )
              return 3221225621LL;
            v30[0] = v29 + v23[2].Length;
            result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v23, v30);
            v8 = a2;
            if ( (int)result < 0 )
              return result;
            v14 = v30[0];
          }
          v26 = a1;
          v6 = a6;
LABEL_54:
          if ( !v14 )
            return 3221225485LL;
          if ( (unsigned int)Size < v14 )
          {
            *v6 = v14;
            return 3221225507LL;
          }
          else
          {
            memset_0(a4, 0, (unsigned int)Size);
            result = AuthzBasepCopyoutSecurityAttributes(v26, v8, (unsigned int)v7, a4, (unsigned int)Size);
            *v6 = v14;
          }
          return result;
        }
      }
    }
    else
    {
      v25 = 40 * v9;
      if ( is_mul_ok(0x28uLL, v9) )
      {
        v14 = v25 + 16;
        if ( v25 < 0xFFFFFFFFFFFFFFF0uLL )
        {
          v26 = a1;
          v27 = (unsigned int *)*((_QWORD *)a1 + 1);
          while ( v27 != a1 + 2 )
          {
            v28 = (v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v28 < v14 || v28 + *((unsigned __int16 *)v27 + 16) < v28 )
              return 3221225621LL;
            v30[0] = v28 + *((unsigned __int16 *)v27 + 16);
            result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v27, v30);
            if ( (int)result < 0 )
              return result;
            v27 = *(unsigned int **)v27;
            v14 = v30[0];
          }
          goto LABEL_54;
        }
      }
    }
    return 3221225621LL;
  }
  if ( (unsigned int)Size < 0x10 )
  {
    result = 3221225507LL;
  }
  else
  {
    result = 0LL;
    *a4 = 0LL;
    *(_WORD *)a4 = 1;
  }
  *a6 = 16;
  return result;
}
