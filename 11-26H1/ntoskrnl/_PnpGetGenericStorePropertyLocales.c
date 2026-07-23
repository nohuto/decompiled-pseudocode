/*
 * XREFs of _PnpGetGenericStorePropertyLocales @ 0x140AB4F34
 * Callers:
 *     PiDqPnPGetObjectPropertyLocales @ 0x140AB4AB8 (PiDqPnPGetObjectPropertyLocales.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x140AB4D44 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _RegRtlEnumValue @ 0x140975A14 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpGetGenericStorePropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        unsigned int cchDest,
        unsigned int *a6)
{
  wchar_t *v6; // r15
  NTSTATUS v7; // ebx
  int v8; // eax
  unsigned int v9; // esi
  ULONG v10; // r14d
  int v11; // eax
  unsigned int v12; // eax
  __int64 v14; // rdi
  int pszFormat; // [rsp+28h] [rbp-E8h]
  __int64 v16; // [rsp+90h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-78h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-70h]
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-60h] BYREF
  wchar_t pszSrc[88]; // [rsp+110h] [rbp+0h] BYREF

  v6 = a4;
  v16 = a2;
  v18 = a1;
  *a6 = 0;
  Handle = 0LL;
  if ( cchDest )
    *a4 = 0;
  v7 = RtlStringCchPrintfExW(
         pszDest,
         0x30uLL,
         0LL,
         0LL,
         0x800u,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX");
  if ( v7 >= 0 )
  {
    v8 = PnpOpenPropertiesKey(v18, v16, pszDest, 1LL, 0, pszFormat, &Handle);
    v7 = v8;
    if ( v8 == -1073741772 )
    {
      return 0;
    }
    else if ( v8 >= 0 )
    {
      v9 = cchDest;
      v10 = 0;
      while ( 1 )
      {
        do
        {
          LODWORD(v16) = 85;
          v11 = RegRtlEnumValue(Handle, v10++, pszSrc, &v16, 0LL, 0LL, 0LL);
        }
        while ( v11 == -1073741789 );
        if ( v11 )
          break;
        if ( pszSrc[0] )
        {
          v14 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v14 < v9 )
          {
            RtlStringCchCopyExW(v6, v9, pszSrc, 0LL, 0LL, 0x900u);
            v9 -= v14;
            v6 += v14;
          }
          *a6 += v14;
        }
      }
      ZwClose(Handle);
      v12 = *a6 + 1;
      *a6 = v12;
      if ( v6 && cchDest >= v12 )
        *v6 = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v7;
}
