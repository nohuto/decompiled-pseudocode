/*
 * XREFs of AslEnvVarQuery @ 0x1800A194C
 * Callers:
 *     SdbpGetProcessHistory @ 0x18009048C (SdbpGetProcessHistory.c)
 *     AslEnvExpandStrings @ 0x1800A11F8 (AslEnvExpandStrings.c)
 * Callees:
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A26D8 (RtlDownlevelGetNtSystemRoot.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
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
  __int64 NtSystemRoot; // rax
  unsigned __int64 v12; // rdi
  _BYTE *v13; // rdx
  WCHAR *v14; // r13
  WCHAR *v15; // r15
  WCHAR v16; // bx
  bool v17; // zf
  int v18; // r8d
  WCHAR *v19; // rdx
  WCHAR v20; // ax
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+50h] [rbp+8h]

  v6 = (WCHAR *)&a2[a3];
  v7 = 0;
  v23 = (unsigned __int64)v6;
  if ( a3 < 0xA )
  {
LABEL_14:
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*a1 )
        return (unsigned int)-1073741568;
      v14 = a1;
      v15 = (WCHAR *)a2;
      if ( a2 < v6 )
      {
        do
        {
          if ( !*a1 )
            break;
          v16 = RtlUpcaseUnicodeChar(*v15);
          v17 = RtlUpcaseUnicodeChar(*a1) == v16;
          v6 = (WCHAR *)v23;
          if ( !v17 )
            break;
          ++a1;
          ++v15;
        }
        while ( (unsigned __int64)v15 < v23 );
      }
      if ( v15 == v6 && *a1 == 61 )
      {
        v18 = 1;
        v19 = a1;
      }
      else
      {
        v20 = *a1;
        if ( !*a1 )
          goto LABEL_33;
        do
        {
          if ( v20 == 61 && a1 != v14 )
            break;
          v20 = *++a1;
        }
        while ( *a1 );
        v19 = a1;
        if ( !*a1 )
          goto LABEL_33;
        v18 = 0;
      }
      v21 = 0LL;
      do
      {
        if ( (__int64)(v21 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
          break;
        ++a1;
        v21 += 2LL;
      }
      while ( *a1 );
      if ( v18 )
      {
        v13 = v19 + 1;
        v12 = ((char *)a1 - v13) >> 1;
        if ( v12 >= a5 )
          goto LABEL_6;
        goto LABEL_11;
      }
LABEL_33:
      v6 = (WCHAR *)v23;
      ++a1;
    }
  }
  if ( _wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    v6 = (WCHAR *)v23;
    goto LABEL_14;
  }
  NtSystemRoot = RtlDownlevelGetNtSystemRoot();
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(NtSystemRoot + 2 * v12) );
  if ( v12 < a5 )
  {
    v13 = (_BYTE *)NtSystemRoot;
LABEL_11:
    memcpy_0(a4, v13, 2 * v12);
    a4[v12] = 0;
  }
  else
  {
LABEL_6:
    if ( a4 && a5 )
      *a4 = 0;
    v7 = -1073741789;
    ++v12;
  }
  *a6 = v12;
  return v7;
}
