/*
 * XREFs of ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180081378
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800815D4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18002BC08 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18005E2A8 (-HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180070958 (--2@YAPEAX_K@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180080E00 (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x1800810F0 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     ?_Delete@?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@AEAAXXZ @ 0x180081C8C (-_Delete@-$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@AEAAXXZ.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(
        ExecutionModel::ResourceManager *this)
{
  unsigned int v1; // edi
  ExecutionModel::BaseResourceSet *v3; // rax
  ExecutionModel::BaseResourceSet *v4; // rax
  __int64 v5; // rax
  HKEY *v6; // rax
  LSTATUS v7; // eax
  HKEY *v8; // rax
  int v9; // r14d
  DWORD v10; // edx
  HMODULE LibraryW; // rax
  HMODULE v12; // rbx
  FARPROC ProcAddress; // rax
  DWORD cbData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD Type; // [rsp+44h] [rbp-BCh] BYREF
  DWORD cchValueName; // [rsp+48h] [rbp-B8h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  HKEY v19; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR ValueName[264]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR LibFileName[1024]; // [rsp+270h] [rbp+170h] BYREF

  v1 = 0;
  cchValueName = 259;
  v19 = 0LL;
  hKey = 0LL;
  Type = 0;
  cbData = 2046;
  memset_0(ValueName, 0, 0x208uLL);
  memset_0(LibFileName, 0, sizeof(LibFileName));
  v3 = (ExecutionModel::BaseResourceSet *)operator new(0x510uLL);
  if ( v3 )
    v4 = ExecutionModel::BaseResourceSet::BaseResourceSet(v3);
  else
    v4 = 0LL;
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach((__int64 *)this + 3, (__int64)v4);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 1280) = 2;
    *(_DWORD *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 24) = this;
    v6 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v19);
    v7 = HampSystemOpenKey(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", 0x20019u, v6);
    if ( v7 < 0
      || (v8 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&hKey),
          v7 = HampSystemOpenKey(v19, L"Registrars\\", 0x20019u, v8),
          v7 < 0) )
    {
      if ( v7 != -1073283070 )
        v1 = v7 | 0x10000000;
    }
    else
    {
      v9 = 1;
      v10 = 0;
      while ( !RegEnumValueW(hKey, v10, ValueName, &cchValueName, 0LL, &Type, (LPBYTE)LibFileName, &cbData) )
      {
        if ( Type == 1 && cbData > 2 )
        {
          LibraryW = LoadLibraryW(LibFileName);
          v12 = LibraryW;
          if ( LibraryW )
          {
            ProcAddress = GetProcAddress(LibraryW, "Register");
            if ( ProcAddress )
              ((void (__fastcall *)(ExecutionModel::ResourceManager *))ProcAddress)(this);
            FreeLibrary(v12);
          }
        }
        memset_0(ValueName, 0, 0x208uLL);
        memset_0(LibFileName, 0, sizeof(LibFileName));
        v10 = v9;
        cchValueName = 259;
        ++v9;
        cbData = 2046;
      }
    }
  }
  else
  {
    v1 = -2147024882;
  }
  tlx::auto_xxx<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>::_Delete(&hKey);
  tlx::auto_xxx<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>::_Delete(&v19);
  return v1;
}
