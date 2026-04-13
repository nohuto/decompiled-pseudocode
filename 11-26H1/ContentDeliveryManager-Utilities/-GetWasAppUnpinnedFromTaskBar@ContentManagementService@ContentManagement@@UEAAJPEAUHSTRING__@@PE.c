/*
 * XREFs of ?GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180053B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x180052A04 (-GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementService::GetWasAppUnpinnedFromTaskBar(
        ContentManagement::ContentManagementService *this,
        HSTRING a2,
        unsigned __int8 *a3)
{
  int LocalTilePropertiesForApp; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  LocalTilePropertiesForApp = ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
                                (ContentManagement::ContentManagementService *)((char *)this - 96),
                                a2,
                                &v10);
  if ( LocalTilePropertiesForApp >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *, unsigned __int8 *))(*(_QWORD *)v10 + 80LL))(
           v10,
           a3);
    LocalTilePropertiesForApp = v7;
    if ( v7 >= 0 )
      LocalTilePropertiesForApp = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E0,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  return (unsigned int)LocalTilePropertiesForApp;
}
