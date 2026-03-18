/*
 * XREFs of ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1801CBFCC
 * Callers:
 *     ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1801CBEB8 (-Initialize@DataProviderManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x180161864 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802015DC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18021EC68 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderManager::InitializeServer(DataProviderManager *this)
{
  const char *v2; // r9
  unsigned int LastError; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v13; // [rsp+58h] [rbp+18h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3"
          "968301570-1997628692-1435953622)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    v4 = *((_QWORD *)this + 2);
    v13 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64 *))(*(_QWORD *)v4 + 64LL))(
           v4,
           SecurityDescriptor,
           &v13);
    LastError = v5;
    if ( v5 >= 0 )
    {
      v7 = *((_QWORD *)this + 2);
      DWORD2(v11) = 1;
      *(_QWORD *)&v11 = 0LL;
      v5 = Microsoft::Bamo::BaseBamoConnection::CreateServer<DataProviderRegistrarConnection>(v7, v13, &v11);
      LastError = v5;
      if ( v5 >= 0 )
      {
        v9 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        LastError = 0;
        goto LABEL_13;
      }
      v6 = 65LL;
    }
    else
    {
      v6 = 53LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaldataprovidermanager.cpp",
      (const char *)(unsigned int)v5);
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
LABEL_13:
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&SecurityDescriptor);
    return LastError;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x30,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaldataprovidermanager.cpp",
                v2);
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return LastError;
}
