/*
 * XREFs of ?get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificationManager@2@@Z @ 0x18003F140
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VNotificationManager@ContentManagement@@UINotificationManager@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUINotificationManager@ContentManagement@@@Z @ 0x180025D88 (--$MakeAndInitialize@VNotificationManager@ContentManagement@@UINotificationManager@2@$$V@Details.c)
 *     ?EnforceCapability@ContentManagement@@YAJXZ @ 0x18002E908 (-EnforceCapability@ContentManagement@@YAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_NotificationManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::INotificationManager **a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ContentManagement::INotificationManager **); // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = ContentManagement::EnforceCapability(this, (__int64)a2, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::NotificationManager,ContentManagement::INotificationManager,>(&v10);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v6 = (**v10)(v10, &GUID_eda914b7_6cc4_49c7_99b6_4e948059e9a0, a2);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 1169LL;
    }
    else
    {
      v7 = 1168LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
