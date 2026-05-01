/*
 * XREFs of AslEnvVarQuery @ 0x18018ECBC
 * Callers:
 *     AslEnvExpandStrings @ 0x18018EAF4 (AslEnvExpandStrings.c)
 * Callees:
 *     RtlDownlevelGetNtSystemRoot @ 0x18015BBFC (RtlDownlevelGetNtSystemRoot.c)
 *     _wcsnicmp @ 0x1802C9E0C (_wcsnicmp.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall AslEnvVarQuery(
        WCHAR *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  WCHAR *v6; // rax
  unsigned int v7; // esi
  WCHAR *v11; // r13
  WCHAR *v12; // r15
  WCHAR v13; // bx
  bool v14; // zf
  int v15; // r8d
  WCHAR *v16; // rdx
  __int64 v17; // rcx
  const void *v18; // rdx
  unsigned __int64 v19; // rdi
  WCHAR v21; // ax
  __int64 NtSystemRoot; // rax
  unsigned __int64 v23; // [rsp+50h] [rbp+8h]

  v6 = (WCHAR *)&a2[a3];
  v7 = 0;
  v23 = (unsigned __int64)v6;
  if ( a3 >= 0xA )
  {
    if ( !wcsnicmp(a2, L"systemroot", 0xAuLL) )
    {
      NtSystemRoot = RtlDownlevelGetNtSystemRoot();
      v19 = -1LL;
      do
        ++v19;
      while ( *(_WORD *)(NtSystemRoot + 2 * v19) );
      if ( v19 >= a5 )
      {
LABEL_27:
        if ( a4 && a5 )
          *a4 = 0;
        v7 = -1073741789;
        ++v19;
      }
      else
      {
        v18 = (const void *)NtSystemRoot;
LABEL_16:
        memcpy_0(a4, v18, 2 * v19);
        a4[v19] = 0;
      }
      *a6 = v19;
      return v7;
    }
    v6 = (WCHAR *)v23;
  }
  if ( a1 )
  {
    while ( 1 )
    {
      if ( !*a1 )
        return (unsigned int)-1073741568;
      v11 = a1;
      v12 = (WCHAR *)a2;
      if ( a2 < v6 )
      {
        do
        {
          if ( !*a1 )
            break;
          v13 = RtlUpcaseUnicodeChar(*v12);
          v14 = RtlUpcaseUnicodeChar(*a1) == v13;
          v6 = (WCHAR *)v23;
          if ( !v14 )
            break;
          ++a1;
          ++v12;
        }
        while ( (unsigned __int64)v12 < v23 );
      }
      if ( v12 == v6 && *a1 == 61 )
      {
        v15 = 1;
        v16 = a1;
      }
      else
      {
        v21 = *a1;
        if ( !*a1 )
          goto LABEL_20;
        do
        {
          if ( v21 == 61 && a1 != v11 )
            break;
          v21 = *++a1;
        }
        while ( *a1 );
        v16 = a1;
        if ( !*a1 )
          goto LABEL_20;
        v15 = 0;
      }
      v17 = 0LL;
      do
      {
        if ( (__int64)(v17 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
          break;
        ++a1;
        v17 += 2LL;
      }
      while ( *a1 );
      if ( v15 )
      {
        v18 = v16 + 1;
        v19 = ((char *)a1 - (_BYTE *)v18) >> 1;
        if ( v19 >= a5 )
          goto LABEL_27;
        goto LABEL_16;
      }
LABEL_20:
      v6 = (WCHAR *)v23;
      ++a1;
    }
  }
  return (unsigned int)-1073741568;
}
