/*
 * XREFs of ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x1801FB4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::WriteData(
        VirtualDesktopRegistryHelpers *this,
        unsigned __int8 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        DWORD dwType,
        BYTE *a6,
        unsigned __int64 cbData)
{
  bool v9; // zf
  HKEY v10; // rbx
  HKEY *v11; // rax
  unsigned int KeyW; // eax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned int lpData; // [rsp+20h] [rbp-28h]
  HKEY hKey[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 )
    v9 = *((_QWORD *)this + 3) == 0LL;
  else
    v9 = *((_QWORD *)this + 2) == 0LL;
  if ( !v9 )
  {
    hKey[0] = 0LL;
    v10 = (HKEY)*((_QWORD *)this + a2 + 2);
    if ( a3 )
    {
      v11 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(hKey);
      KeyW = RegCreateKeyW(v10, a3, v11);
      if ( KeyW )
      {
        v13 = 93LL;
LABEL_11:
        v14 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)v13,
                (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
                (const char *)KeyW,
                lpData);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
        return v14;
      }
      v10 = hKey[0];
    }
    KeyW = RegSetValueExW(v10, a4, 0, dwType, a6, cbData);
    if ( KeyW )
    {
      v13 = 100LL;
      goto LABEL_11;
    }
    if ( hKey[0] )
      RegCloseKey(hKey[0]);
  }
  return 0LL;
}
