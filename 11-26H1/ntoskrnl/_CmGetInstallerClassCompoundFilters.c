/*
 * XREFs of _CmGetInstallerClassCompoundFilters @ 0x1409734D8
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1409731E4 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14077F604 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _CmOpenCommonClassRegKey @ 0x14095FB24 (_CmOpenCommonClassRegKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14097368C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFilters(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  bool v8; // zf
  int v11; // r15d
  const DEVPROPKEY *v13; // r14
  int v14; // ebx
  char *v15; // rcx
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
  v11 = a2;
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
    v15 = (char *)Handle;
  }
  if ( a1 && (v16 = *(_QWORD *)(a1 + 224)) != 0 )
    v17 = *(_QWORD *)(v16 + 8);
  else
    v17 = 0LL;
  v18 = RegRtlOpenKeyTransacted(v15, L"Filters", 0, 0x2001Fu, &v25, v17);
  v19 = a8;
  v14 = v18;
  v20 = a7;
  if ( v18 < 0
    || (InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassCompoundFiltersWorker(
                                                    a1,
                                                    v11,
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
                                                v11,
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
