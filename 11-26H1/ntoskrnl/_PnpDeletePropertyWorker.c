/*
 * XREFs of _PnpDeletePropertyWorker @ 0x1409AD164
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x1409ACB6C (_PnpSetGenericStoreProperty.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A3EE58 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall PnpDeletePropertyWorker(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, int a5, __int64 a6, int a7)
{
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // edi
  __int64 v15; // rcx
  _WORD *v16; // rax
  int pszFormat; // [rsp+28h] [rbp-130h]
  HANDLE Handle; // [rsp+90h] [rbp-C8h] BYREF
  wchar_t pszDest[48]; // [rsp+A0h] [rbp-B8h] BYREF

  Handle = 0LL;
  if ( a5 || a7 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    goto LABEL_4;
  v15 = 85LL;
  v16 = a3;
  do
  {
    if ( !*v16 )
      break;
    ++v16;
    --v15;
  }
  while ( v15 );
  v12 = v15 == 0 ? 0xC000000D : 0;
  if ( v15 )
  {
LABEL_4:
    if ( RtlStringCchPrintfExW(
           pszDest,
           0x30uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX") < 0 )
      return (unsigned int)-1073741595;
    v10 = PnpOpenPropertiesKey(a1, a2, pszDest, 6LL, 0, pszFormat, &Handle);
    v12 = v10;
    if ( v10 == -1073741772 )
      return (unsigned int)-1073741275;
    if ( v10 < 0 )
      return v12;
    v13 = PnpCtxRegDeleteValue(v11, Handle, a3);
    ZwClose(Handle);
    if ( v13 == -1073741772 || v13 == -1073741444 )
      return (unsigned int)-1073741275;
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  return v12;
}
