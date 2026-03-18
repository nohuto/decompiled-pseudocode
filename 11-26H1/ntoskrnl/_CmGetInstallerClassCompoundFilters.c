/*
 * XREFs of _CmGetInstallerClassCompoundFilters @ 0x140918A78
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140918784 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14077CB10 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x140918C2C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 *     _CmOpenCommonClassRegKey @ 0x14099F0C4 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFilters(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  bool v8; // zf
  const DEVPROPKEY *v13; // r14
  int v14; // ebx
  HANDLE v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r12
  int v20; // r13d
  int InstallerClassMappedPropertyFromRegProp; // eax
  __int64 v23; // rax
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE v25; // [rsp+A8h] [rbp+20h] BYREF

  v8 = *(_DWORD *)(a4 + 16) == 20;
  Handle = 0LL;
  v25 = 0LL;
  if ( !v8 )
    goto LABEL_2;
  v23 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_CompoundUpperFilters )
    v23 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
  v13 = &DEVPKEY_DeviceClass_UpperFilters;
  if ( v23 )
LABEL_2:
    v13 = &DEVPKEY_DeviceClass_LowerFilters;
  if ( a3 )
  {
    v15 = a3;
    Handle = a3;
  }
  else
  {
    v14 = CmOpenCommonClassRegKey(a1, a2, 32, 0, 33554433, 0, (__int64)&Handle, 0LL);
    if ( v14 < 0 )
      goto LABEL_12;
    v15 = Handle;
  }
  if ( a1 && (v16 = *(_QWORD *)(a1 + 224)) != 0 )
    v17 = *(_QWORD *)(v16 + 8);
  else
    v17 = 0LL;
  v18 = RegRtlOpenKeyTransacted(v15, L"Filters", 0LL, 131103LL, &v25, v17);
  v19 = a8;
  v14 = v18;
  v20 = a7;
  if ( v18 < 0
    || (InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassCompoundFiltersWorker(
                                                    a1,
                                                    a2,
                                                    (int)Handle,
                                                    (__int64)v25,
                                                    a4,
                                                    (__int64)v13,
                                                    a5,
                                                    a6,
                                                    a7,
                                                    a8),
        InstallerClassMappedPropertyFromRegProp == -1073741772)
    || InstallerClassMappedPropertyFromRegProp == -1073741444
    || InstallerClassMappedPropertyFromRegProp == -1073741275 )
  {
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                a2,
                                                (_DWORD)Handle,
                                                (_DWORD)v13,
                                                (__int64)a5,
                                                a6,
                                                v20,
                                                v19);
  }
  else if ( InstallerClassMappedPropertyFromRegProp >= 0 )
  {
    goto LABEL_12;
  }
  v14 = InstallerClassMappedPropertyFromRegProp;
LABEL_12:
  if ( Handle && !a3 )
    ZwClose(Handle);
  if ( v25 )
    ZwClose(v25);
  return (unsigned int)v14;
}
