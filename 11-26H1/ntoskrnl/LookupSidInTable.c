/*
 * XREFs of LookupSidInTable @ 0x140901140
 * Callers:
 *     SeConvertStringSidToSid @ 0x1404EEA30 (SeConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140901030 (LocalGetSidForString.c)
 *     LocalConvertAclToString @ 0x140A6D784 (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A6E644 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetStringForSid @ 0x140A6F670 (LocalGetStringForSid.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlSubAuthorityCountSid @ 0x14048B1A0 (RtlSubAuthorityCountSid.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall LookupSidInTable(wchar_t *Str1, PSID Sid, __int64 a3, __int64 a4, int a5, char a6, _QWORD *a7)
{
  __int64 v7; // r13
  char v8; // r15
  PSID v9; // rsi
  BOOL v11; // r14d
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  PSID *v14; // rdi
  __int64 v15; // rbp
  const wchar_t *v16; // rsi
  int v17; // eax
  __int64 v18; // r13
  int v20; // ecx
  ULONG v21; // edx
  int v22; // ecx
  char *v23; // rdi
  void *v24; // rcx
  ULONG v25; // esi
  void *v26; // rbx
  PUCHAR v27; // rax
  int v28; // [rsp+70h] [rbp+8h]
  int v31; // [rsp+88h] [rbp+20h]

  v7 = 0LL;
  v8 = 0;
  v28 = 0;
  v9 = Sid;
  if ( __PAIR128__((unsigned __int64)Str1, (unsigned __int64)Sid) == 0 )
    return 0LL;
  v11 = 0;
  *a7 = 0LL;
  v12 = 68;
  v31 = 68;
  if ( Str1 )
  {
    if ( wcsnicmp(Str1, L"EA", 2uLL) )
    {
      if ( wcsnicmp(Str1, L"SA", 2uLL) )
      {
        if ( wcsnicmp(Str1, L"RO", 2uLL) )
          v11 = wcsnicmp(Str1, L"EK", 2uLL) == 0;
        else
          v11 = 1;
      }
      else
      {
        v11 = 1;
        v28 = 1;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v8 = 1;
    v20 = *RtlSubAuthorityCountSid(Sid);
    if ( (_BYTE)v20 )
    {
      v21 = *RtlSubAuthoritySid(v9, v20 - 1);
      if ( v21 == 519 || v21 - 498 <= 0x1D && (v22 = 537919489, _bittest(&v22, v21 - 498)) )
      {
        v11 = 1;
        if ( v21 == 518 )
          v28 = 1;
      }
    }
  }
  v13 = 0;
  v14 = (PSID *)&unk_140E0CED0;
  do
  {
    if ( v8 )
    {
      if ( RtlEqualSid(v9, *v14) )
      {
        v15 = v13;
LABEL_28:
        v18 = 104 * v15;
        return (__int64)&unk_140E0CEC0 + v18;
      }
    }
    else
    {
      v15 = v13;
      v16 = (const wchar_t *)((char *)&unk_140E0CEC0 + 104 * v13);
      if ( !wcsnicmp(Str1, v16 + 1, *((unsigned int *)v14 - 1)) )
        goto LABEL_28;
      if ( !v11 || !a6 || a3 || !*((_BYTE *)v14 - 16) || !*v14 )
      {
        v9 = Sid;
LABEL_17:
        v12 = v31;
        goto LABEL_18;
      }
      v17 = wcsnicmp(L"DA", v16 + 1, *((unsigned int *)v14 - 1));
      v9 = Sid;
      if ( v17 )
        goto LABEL_17;
      v12 = v13;
      v31 = v13;
    }
LABEL_18:
    ++v13;
    v14 += 13;
  }
  while ( v13 < 0x44 );
  if ( v11 && a6 && !a3 && v12 < 0x44 )
  {
    if ( !v28 )
    {
      v18 = 104LL * v12;
      return (__int64)&unk_140E0CEC0 + v18;
    }
    if ( v8 )
    {
      *a7 = v9;
    }
    else
    {
      v23 = (char *)&unk_140E0CEC0 + 104 * v12;
      v24 = (void *)*((_QWORD *)v23 + 2);
      if ( v24 )
      {
        v25 = RtlLengthSid(v24);
        v26 = (void *)SddlpAlloc(v25 + 1);
        *a7 = v26;
        if ( v26 )
        {
          _mm_lfence();
          memmove(v26, *((const void **)v23 + 2), v25);
          v27 = RtlSubAuthorityCountSid(*((PSID *)v23 + 2));
          *RtlSubAuthoritySid(v26, (unsigned int)*v27 - 1) = 518;
        }
      }
    }
  }
  return v7;
}
