/*
 * XREFs of AuthzBasepFindSecurityAttributeValue @ 0x1403B27DC
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x1403B24FC (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14052E95C (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140A3CEE0 (AuthzBasepCompareSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepFindSecurityAttributeValue(__int64 a1, unsigned __int16 *a2, unsigned __int16 a3)
{
  int v3; // r13d
  __int64 *v4; // r12
  __int64 *v5; // r14
  unsigned __int64 v6; // r15
  char v7; // di
  int v8; // ebx
  _QWORD *v10; // r14
  bool v12; // zf
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  bool v19; // zf
  size_t v20; // r8
  const UNICODE_STRING *v21; // rdx
  wchar_t *v22; // rcx
  char v23; // al
  size_t v24; // r8
  const UNICODE_STRING *v25; // rdx
  wchar_t *v26; // rcx
  char v27; // al
  unsigned int v28; // eax
  unsigned int v29; // eax
  UNICODE_STRING String1; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v31; // [rsp+30h] [rbp-10h] BYREF

  v3 = a3;
  v4 = (__int64 *)(a1 + 72);
  v5 = *(__int64 **)(a1 + 72);
  v6 = 0LL;
  String1 = 0LL;
  v7 = 0;
  v8 = a3;
  v31 = 0LL;
  while ( v5 != v4 )
  {
    v6 = (unsigned __int64)v5;
    v8 = v3;
    if ( v3 == 1 || v3 == 2 )
      goto LABEL_13;
    if ( v3 == 3 )
    {
      v20 = *a2;
      v21 = (const UNICODE_STRING *)(v5 + 5);
      v22 = (wchar_t *)*((_QWORD *)a2 + 1);
      String1.Length = v20;
      String1.MaximumLength = v20;
      String1.Buffer = v22;
      if ( KeGetCurrentIrql() < 2u )
        v23 = RtlEqualUnicodeString(&String1, v21, 1u);
      else
        v23 = (_WORD)v20 == v21->Length && memcmp(v22, (const void *)v5[6], v20) == 0;
LABEL_29:
      if ( v23 )
        v7 = 1;
      goto LABEL_31;
    }
    if ( v3 != 4 )
    {
      if ( v3 != 5 )
      {
        if ( v3 == 6 )
        {
LABEL_13:
          v12 = a2 == (unsigned __int16 *)v5[5];
LABEL_14:
          if ( v12 )
          {
            v7 = 1;
            break;
          }
          goto LABEL_31;
        }
        if ( v3 != 16 )
          goto LABEL_31;
      }
      v28 = *((_DWORD *)a2 + 2);
      if ( v28 != *((_DWORD *)v5 + 12) )
        goto LABEL_31;
      v12 = memcmp(*(const void **)a2, (const void *)v5[5], v28) == 0;
      goto LABEL_14;
    }
    String1.Length = a2[4];
    String1.MaximumLength = String1.Length;
    String1.Buffer = (wchar_t *)*((_QWORD *)a2 + 2);
    v31.Length = *((_WORD *)v5 + 24);
    v31.MaximumLength = v31.Length;
    v31.Buffer = (wchar_t *)v5[7];
    if ( *(_QWORD *)a2 == v5[5] )
    {
      v23 = AuthzBasepEqualUnicodeString(&String1, &v31);
      goto LABEL_29;
    }
LABEL_31:
    v5 = (__int64 *)*v5;
    if ( v7 )
      break;
  }
  v10 = *(_QWORD **)(a1 + 96);
  while ( 2 )
  {
    if ( !v7 && v10 != (_QWORD *)(a1 + 96) )
    {
      v6 = (unsigned __int64)(v10 - 2);
      if ( (v10[2] & 1) != 0 )
        goto LABEL_38;
      v13 = v8 - 1;
      if ( !v13 )
        goto LABEL_23;
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_23;
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
            goto LABEL_48;
          v18 = v17 - 1;
          if ( !v18 )
          {
LABEL_23:
            v19 = a2 == *(unsigned __int16 **)(v6 + 40);
            goto LABEL_24;
          }
          if ( v18 == 10 )
          {
LABEL_48:
            v29 = *((_DWORD *)a2 + 2);
            if ( v29 == *(_DWORD *)(v6 + 48) )
            {
              v19 = memcmp(*(const void **)a2, *(const void **)(v6 + 40), v29) == 0;
LABEL_24:
              if ( v19 )
              {
                v7 = 1;
                return v6 & -(__int64)(v7 != 0);
              }
            }
          }
LABEL_38:
          v10 = (_QWORD *)*v10;
          v8 = v3;
          continue;
        }
        String1.Length = a2[4];
        String1.MaximumLength = String1.Length;
        String1.Buffer = (wchar_t *)*((_QWORD *)a2 + 2);
        v31.Length = *(_WORD *)(v6 + 48);
        v31.MaximumLength = v31.Length;
        v31.Buffer = *(wchar_t **)(v6 + 56);
        if ( *(_QWORD *)a2 != *(_QWORD *)(v6 + 40) )
          goto LABEL_38;
        v27 = AuthzBasepEqualUnicodeString(&String1, &v31);
      }
      else
      {
        v24 = *a2;
        v25 = (const UNICODE_STRING *)(v6 + 40);
        v26 = (wchar_t *)*((_QWORD *)a2 + 1);
        String1.Length = v24;
        String1.MaximumLength = v24;
        String1.Buffer = v26;
        if ( KeGetCurrentIrql() < 2u )
          v27 = RtlEqualUnicodeString(&String1, v25, 1u);
        else
          v27 = (_WORD)v24 == v25->Length && memcmp(v26, *(const void **)(v6 + 48), v24) == 0;
      }
      if ( v27 )
        v7 = 1;
      goto LABEL_38;
    }
    return v6 & -(__int64)(v7 != 0);
  }
}
