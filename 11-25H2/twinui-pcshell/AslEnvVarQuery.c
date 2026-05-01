/*
 * XREFs of AslEnvVarQuery @ 0x18013DB8C
 * Callers:
 *     AslEnvExpandStrings @ 0x18013D9B4 (AslEnvExpandStrings.c)
 * Callees:
 *     RtlDownlevelGetNtSystemRoot @ 0x18013CFF8 (RtlDownlevelGetNtSystemRoot.c)
 *     _wcsnicmp @ 0x1802D2F3C (_wcsnicmp.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

__int64 __fastcall AslEnvVarQuery(
        WCHAR *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  WCHAR *v7; // rbp
  WCHAR *v11; // r13
  WCHAR *v12; // r15
  WCHAR v13; // bx
  int v14; // r8d
  WCHAR *v15; // rdx
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  unsigned __int64 v18; // rdi
  size_t v19; // rbx
  __int64 NtSystemRoot; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx

  v6 = 0;
  v7 = (WCHAR *)&a2[a3];
  if ( a3 < 0xA || wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*a1 )
        return (unsigned int)-1073741568;
      v11 = a1;
      v12 = (WCHAR *)a2;
      if ( a2 < v7 )
        break;
LABEL_8:
      if ( v12 != v7 || *a1 != 61 )
        goto LABEL_20;
      v14 = 1;
LABEL_11:
      v15 = a1;
      if ( *a1 )
      {
        v16 = 0LL;
        do
        {
          if ( (__int64)(v16 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          ++a1;
          v16 += 2LL;
        }
        while ( *a1 );
      }
      if ( v14 )
      {
        v17 = v15 + 1;
        v18 = ((char *)a1 - v17) >> 1;
        if ( v18 < a5 )
        {
          v19 = v18;
          *a6 = v18;
          goto LABEL_18;
        }
        if ( a4 && a5 )
          *a4 = 0;
        v23 = v18 + 1;
        goto LABEL_33;
      }
LABEL_22:
      ++a1;
    }
    while ( *a1 )
    {
      v13 = RtlUpcaseUnicodeChar(*a1);
      if ( v13 == RtlUpcaseUnicodeChar(*v12) )
      {
        ++a1;
        if ( ++v12 < v7 )
          continue;
      }
      goto LABEL_8;
    }
LABEL_20:
    v14 = 0;
    while ( *a1 )
    {
      if ( *a1 == 61 && a1 != v11 )
        goto LABEL_11;
      ++a1;
    }
    goto LABEL_22;
  }
  NtSystemRoot = RtlDownlevelGetNtSystemRoot();
  v17 = (_BYTE *)NtSystemRoot;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)(NtSystemRoot + 2 * v22) );
  if ( v22 < a5 )
  {
    *a6 = v22;
    v19 = v22;
LABEL_18:
    memcpy_0(a4, v17, v19 * 2);
    a4[v19] = 0;
  }
  else
  {
    if ( a4 && a5 )
      *a4 = 0;
    v23 = v22 + 1;
LABEL_33:
    v6 = -1073741789;
    *a6 = v23;
  }
  return v6;
}
