/*
 * XREFs of _PnpOpenPropertiesKey @ 0x140956580
 * Callers:
 *     _CmSetInstallerClassRegPropWorker @ 0x14089D748 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1408A18DC (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1408A1A88 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1408A2960 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x140973A40 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140973EE8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpSetPropertyWorker @ 0x1409ACBB4 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x1409AD164 (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140AB4F34 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140B47184 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegCreateTree @ 0x140978C5C (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegCreateKey @ 0x140AED6E8 (_SysCtxRegCreateKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140B25B1C (_PnpGetPropertiesSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, char a5, int a6, void **a7)
{
  __int64 v8; // rcx
  NTSTATUS v11; // edi
  wchar_t *Pool2; // rbx
  void *v13; // rsi
  _WORD *v14; // rax
  __int64 v15; // rcx
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  NTSTATUS v21; // eax
  char v22; // bp
  int Key; // eax
  void *v24; // rbp
  void *PropertiesSecurityDescriptor; // rax
  __int64 v26; // rcx
  const wchar_t *v27; // [rsp+30h] [rbp-118h]
  unsigned int v28; // [rsp+50h] [rbp-F8h]
  void *v29; // [rsp+58h] [rbp-F0h]
  wchar_t pszDest[64]; // [rsp+70h] [rbp-D8h] BYREF

  v8 = 0LL;
  v28 = a4;
  *a7 = 0LL;
  v11 = 0;
  v29 = 0LL;
  Pool2 = 0LL;
  v13 = 0LL;
  if ( !a3 )
  {
    v22 = a5;
    v20 = a1 + 224;
    goto LABEL_24;
  }
  v14 = a3;
  v15 = 512LL;
  while ( *v14 )
  {
    ++v14;
    if ( !--v15 )
      return 3221225485LL;
  }
  if ( (unsigned __int64)(512 - v15) >= 0x30 )
  {
    v17 = 512 - v15 + 12;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225495LL;
  }
  else
  {
    Pool2 = pszDest;
    v17 = 59;
  }
  v27 = L"Properties";
  v11 = RtlStringCchPrintfExW(Pool2, v17, 0LL, 0LL, 0x800u, L"%s\\%s");
  if ( v11 >= 0 )
  {
    if ( a1 && (v18 = *(_QWORD *)(a1 + 224)) != 0 )
      v19 = *(_QWORD *)(v18 + 8);
    else
      v19 = 0LL;
    v20 = a1 + 224;
    v21 = RegRtlOpenKeyTransacted(a2, Pool2, 0LL, v28, a7, v19);
    if ( v21 == -1073741444 )
    {
      v11 = -1073741772;
      goto LABEL_15;
    }
    if ( v21 != -1073741772 || (v22 = a5) == 0 )
    {
      v11 = v21;
      goto LABEL_15;
    }
    a4 = v28;
    v8 = 0LL;
LABEL_24:
    if ( a1 && *(_QWORD *)v20 )
      v8 = *(_QWORD *)(*(_QWORD *)v20 + 8LL);
    Key = RegRtlOpenKeyTransacted(a2, L"Properties", 0LL, a4, a7, v8);
    if ( Key == -1073741772 )
    {
      if ( !v22 )
      {
        v24 = 0LL;
        goto LABEL_31;
      }
      PropertiesSecurityDescriptor = (void *)PnpGetPropertiesSecurityDescriptor();
      v24 = PropertiesSecurityDescriptor;
      if ( !PropertiesSecurityDescriptor )
      {
        v11 = -1073741595;
        goto LABEL_15;
      }
      if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
      {
        v11 = -1073741595;
LABEL_44:
        ExFreePoolWithTag(v24, 0);
        goto LABEL_15;
      }
      if ( a1 )
        v26 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v26) = 0;
      Key = SysCtxRegCreateKey(
              v26,
              a2,
              (unsigned int)L"Properties",
              0,
              v28,
              (__int64)v24,
              (_DWORD)v27,
              (__int64)a7,
              0LL);
    }
    else
    {
      v24 = 0LL;
    }
    if ( Key == -1073741444 )
    {
      v11 = -1073741772;
    }
    else
    {
      if ( Key < 0 )
      {
LABEL_31:
        v11 = Key;
        goto LABEL_32;
      }
      if ( a3 )
      {
        v29 = *a7;
        *a7 = 0LL;
        Key = PnpCtxRegCreateTree(a1, v29, a3, 0LL, v28, 0LL, a7, 0LL);
        if ( Key == -1073741444 )
        {
          v11 = -1073741772;
        }
        else if ( Key < 0 )
        {
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    if ( v24 )
      goto LABEL_44;
LABEL_15:
    v13 = v29;
  }
  if ( Pool2 && Pool2 != pszDest )
    ExFreePoolWithTag(Pool2, 0);
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v11;
}
