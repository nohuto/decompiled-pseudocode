/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18001CC00
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18001C4D4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18001CC00 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18004A604 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18001CC00 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     atexit @ 0x18002FCC4 (atexit.c)
 *     _Init_thread_footer @ 0x18002FED0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18002FF38 (_Init_thread_header.c)
 *     ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x18004A928 (-Init@CNtDeleteKey@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LSTATUS __fastcall SafeRegCreateKeyEx(
        HKEY a1,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        REGSAM samDesired,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        HKEY *a8)
{
  const unsigned __int16 *v8; // rbx
  wchar_t *v10; // rax
  wchar_t *v11; // rdi
  BYTE *v12; // r14
  int v13; // edi
  LSTATUS v14; // eax
  LSTATUS v15; // eax
  LSTATUS v16; // edi
  CNtDeleteKey *v17; // rcx
  HKEY v18; // rcx
  LSTATUS result; // eax
  int Key; // ebx
  int v21; // edi
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  DWORD dwDisposition; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Type; // [rsp+5Ch] [rbp-A4h] BYREF
  DWORD cbData; // [rsp+60h] [rbp-A0h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp-98h] BYREF
  HKEY v27; // [rsp+70h] [rbp-90h] BYREF
  BYTE v28[528]; // [rsp+80h] [rbp-80h] BYREF
  BYTE Data[528]; // [rsp+290h] [rbp+190h] BYREF

  v8 = a2;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v10 = wcschr(a2, 0x5Cu);
  v11 = v10;
  if ( !v10 )
  {
    v12 = (BYTE *)v8;
    goto LABEL_6;
  }
  if ( (unsigned __int64)(v10 - v8) >= 0x104 )
    return 87;
  _o_wcsncpy_s(v28, 260LL, v8);
  v12 = v28;
  v8 = v11 + 1;
LABEL_6:
  phkResult = 0LL;
  hKey = 0LL;
  v13 = 0;
  v14 = RegOpenKeyExW(a1, (LPCWSTR)v12, 8u, samDesired, &phkResult);
  if ( v14 )
  {
    if ( v14 == 2 )
    {
      v13 = 3;
    }
    else
    {
      LOBYTE(v13) = v14 != 5;
      v13 += 4;
    }
  }
  else
  {
    cbData = 520;
    Type = 0;
    v15 = RegQueryValueExW(phkResult, L"SymbolicLinkValue", 0LL, &Type, Data, &cbData);
    if ( (!v15 || v15 == 234) && Type == 6 )
      v13 = 1;
    if ( v15 == 2 || v13 != 1 )
    {
      v27 = 0LL;
      v16 = RegOpenKeyExW(a1, (LPCWSTR)v12, 0, 0x20019u, &v27);
      RegCloseKey(v27);
      v13 = 2 - (v16 != 0);
    }
    hKey = phkResult;
  }
  v17 = (CNtDeleteKey *)*(unsigned int *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                        + 4LL);
  if ( dword_180068B68 > (int)v17 )
  {
    Init_thread_header(&dword_180068B68);
    if ( dword_180068B68 == -1 )
    {
      atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
      Init_thread_footer(&dword_180068B68);
    }
  }
  if ( v13 == 5 || !v13 )
    goto LABEL_14;
  v21 = v13 - 1;
  if ( !v21 )
  {
    if ( CNtDeleteKey::Init(v17) && qword_180068B78 && !(unsigned int)qword_180068B78(hKey) )
    {
      RegCloseKey(hKey);
      hKey = 0LL;
      dwDisposition = 0;
      goto LABEL_42;
    }
LABEL_14:
    v18 = hKey;
    if ( !hKey )
      return 5;
LABEL_45:
    RegCloseKey(v18);
    return 5;
  }
  if ( (unsigned int)(v21 - 1) > 1 )
    goto LABEL_14;
  dwDisposition = 0;
  if ( hKey )
  {
    dwDisposition = 2;
    goto LABEL_24;
  }
LABEL_42:
  result = RegCreateKeyExW(a1, (LPCWSTR)v12, 0, 0LL, 0, samDesired, lpSecurityAttributes, &hKey, &dwDisposition);
  if ( result )
    return result;
  if ( dwDisposition != 1 )
  {
    v18 = hKey;
    goto LABEL_45;
  }
LABEL_24:
  if ( v12 == (BYTE *)v8 )
  {
    if ( a8 )
      *a8 = hKey;
    return 0;
  }
  else
  {
    Key = SafeRegCreateKeyEx(hKey, v8, 0, 0LL, 0, samDesired, lpSecurityAttributes, a8, 0LL);
    RegCloseKey(hKey);
    return Key;
  }
}
