/*
 * XREFs of ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x1801125A8
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010FB00 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180093550 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x18009B344 (swprintf_s.c)
 */

__int64 __fastcall SipcSignalFactory::OpenServerEvents(
        unsigned __int16 a1,
        const struct SipcPrivateNamespace *a2,
        void **a3,
        void **a4)
{
  char *v4; // r14
  char *v7; // r9
  int v8; // ebx
  signed int v9; // eax
  unsigned int v10; // ebx
  HANDLE v11; // rax
  signed int LastError; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h]
  void *v15; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v16; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t Buffer[56]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Name[56]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = (char *)a2 + 8;
  *a3 = 0LL;
  *a4 = 0LL;
  v7 = (char *)a2 + 8;
  if ( a1 )
  {
    v8 = a1;
    swprintf_s(Buffer, 0x38uLL, L"%s\\%4.4X_%s", v7, a1, L"ClientSignal");
    LODWORD(v14) = v8;
    swprintf_s(Name, 0x38uLL, L"%s\\%4.4X_%s", v4, v14, L"ServerSignal");
  }
  else
  {
    swprintf_s(Buffer, 0x38uLL, L"%s\\%s", v7, L"ClientSignal");
    swprintf_s(Name, 0x38uLL, L"%s\\%s", v4, L"ServerSignal");
  }
  v16 = OpenEventW(0x100002u, 0, Buffer);
  if ( v16 )
  {
    v11 = OpenEventW(2u, 0, Name);
    v15 = v11;
    if ( v11 )
    {
      *a3 = v16;
      *a4 = v11;
      v16 = 0LL;
      v15 = 0LL;
      SipcWin32Handle::Reset(&v15);
      v10 = 0;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v10 = -2147418113;
      if ( LastError < 0 )
        v10 = LastError;
      SipcWin32Handle::Reset(&v15);
    }
  }
  else
  {
    v9 = GetLastError();
    if ( v9 > 0 )
      v9 = (unsigned __int16)v9 | 0x80070000;
    v10 = -2147418113;
    if ( v9 < 0 )
      v10 = v9;
  }
  SipcWin32Handle::Reset(&v16);
  return v10;
}
