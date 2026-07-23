/*
 * XREFs of AslEnvVarQuery @ 0x140891A64
 * Callers:
 *     SdbpGetProcessHistory @ 0x14088C140 (SdbpGetProcessHistory.c)
 *     AslEnvExpandStrings @ 0x1408914E8 (AslEnvExpandStrings.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     RtlGetNtSystemRoot @ 0x1409E50B0 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall AslEnvVarQuery(
        WCHAR *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  char *v8; // r14
  char *v10; // r12
  __int64 v11; // rcx
  char *v12; // rax
  unsigned int v13; // ebx
  WCHAR *v14; // rax
  PWSTR NtSystemRoot; // rax
  unsigned __int64 v16; // rbx
  size_t v17; // rbx
  int v18; // r8d
  WCHAR *v19; // r15
  WCHAR v20; // bx
  bool v21; // zf
  int v22; // r8d
  WCHAR *v23; // rdx
  _BYTE *v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]
  WCHAR *v28; // [rsp+40h] [rbp-38h]

  v8 = (char *)a2;
  v10 = 0LL;
  if ( MmIsUserAddress(a2) )
  {
    v12 = (char *)AslAlloc(v11, 2 * a3);
    v10 = v12;
    if ( !v12 )
    {
      v13 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslEnvVarQuery", 293, (unsigned int)"Out of memory");
      goto LABEL_52;
    }
    RtlCopyFromUser(v12, v8, 2 * a3);
    v8 = v10;
  }
  v14 = (WCHAR *)&v8[2 * a3];
  v27 = (unsigned __int64)v14;
  if ( a3 >= 0xA )
  {
    if ( !wcsnicmp((const wchar_t *)v8, L"systemroot", 0xAuLL) )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      v16 = -1LL;
      do
        ++v16;
      while ( NtSystemRoot[v16] );
      if ( v16 < a5 )
      {
        *a6 = v16;
        v17 = v16;
        memmove(a4, NtSystemRoot, v17 * 2);
        a4[v17] = 0;
        v13 = 0;
      }
      else
      {
        if ( a4 && a5 )
          *a4 = 0;
        *a6 = v16 + 1;
        v13 = -1073741789;
      }
      v11 = 0x80000000LL;
      if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741789 )
      {
        v18 = 327;
LABEL_18:
        AslLogCallPrintf(1, (unsigned int)"AslEnvVarQuery", v18, (unsigned int)"AslpEnvReturnData failed [%x]");
      }
      goto LABEL_52;
    }
    v14 = (WCHAR *)&v8[2 * a3];
  }
  if ( a1 )
  {
    while ( *a1 )
    {
      v11 = (__int64)a1;
      v28 = a1;
      v19 = (WCHAR *)v8;
      if ( v8 < (char *)v14 )
      {
        do
        {
          if ( !*a1 )
            break;
          v20 = RtlUpcaseUnicodeChar(*v19);
          v21 = RtlUpcaseUnicodeChar(*a1) == v20;
          v14 = (WCHAR *)v27;
          if ( !v21 )
            break;
          ++a1;
          ++v19;
        }
        while ( (unsigned __int64)v19 < v27 );
        v11 = (__int64)v28;
      }
      if ( v19 != v14 || (v22 = 1, *a1 != 61) )
        v22 = 0;
      if ( v22 )
        goto LABEL_36;
      while ( *a1 && (*a1 != 61 || a1 == (WCHAR *)v11) )
        ++a1;
      if ( *a1 )
      {
LABEL_36:
        v23 = a1;
        if ( *a1 )
        {
          v11 = 0LL;
          do
          {
            if ( (__int64)(v11 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
              break;
            ++a1;
            v11 += 2LL;
          }
          while ( *a1 );
        }
        if ( v22 )
        {
          v24 = v23 + 1;
          v25 = ((char *)a1 - v24) >> 1;
          if ( v25 < a5 )
          {
            *a6 = v25;
            memmove(a4, v24, 2 * v25);
            a4[v25] = 0;
            v13 = 0;
          }
          else
          {
            if ( a4 && a5 )
              *a4 = 0;
            *a6 = v25 + 1;
            v13 = -1073741789;
          }
          v11 = 0x80000000LL;
          if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741789 )
          {
            v18 = 471;
            goto LABEL_18;
          }
          goto LABEL_52;
        }
      }
      ++a1;
      v14 = (WCHAR *)v27;
    }
  }
  v13 = -1073741568;
LABEL_52:
  if ( v10 )
    AslFree(v11, v10);
  return v13;
}
