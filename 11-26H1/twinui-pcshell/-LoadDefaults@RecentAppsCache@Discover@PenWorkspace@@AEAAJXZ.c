/*
 * XREFs of ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803EC380
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800C9958 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::GetCurTime @ 0x1802BB86C (_anonymous_namespace_--GetCurTime.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803EB478 (--0-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ @ 0x1803EB674 (--1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ.c)
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1803EC51C (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1803ECCC0 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ @ 0x1803ECF30 (-StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ.c)
 *     ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x1803ED044 (-Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDefaults(PenWorkspace::Discover::RecentAppsCache *this)
{
  __int64 v2; // rdi
  int v3; // esi
  bool v4; // bl
  void *ppv; // [rsp+38h] [rbp-D0h] BYREF
  struct _FILETIME FileTime; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v8; // [rsp+48h] [rbp-C0h]
  const wchar_t *v9; // [rsp+50h] [rbp-B8h]
  const wchar_t *v10; // [rsp+58h] [rbp-B0h]
  const wchar_t *v11; // [rsp+60h] [rbp-A8h]
  const wchar_t *v12; // [rsp+68h] [rbp-A0h]
  const WCHAR *v13; // [rsp+70h] [rbp-98h]
  _QWORD v14[42]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  FileTime = 0LL;
  anonymous_namespace_::GetCurTime(&FileTime);
  LODWORD(ppv) = 0;
  PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(this, FileTime, (int *)&ppv);
  v3 = 6 - (_DWORD)ppv;
  wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v14);
  v14[0] = &PenWorkspaceBrokerTelemetry::OfficeInstalled::`vftable';
  PenWorkspaceBrokerTelemetry::OfficeInstalled::StartActivity((PenWorkspaceBrokerTelemetry::OfficeInstalled *)v14);
  ppv = 0LL;
  v4 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         L"Microsoft.Office.WINWORD.EXE.15",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &ppv) >= 0;
  PenWorkspaceBrokerTelemetry::OfficeInstalled::Stop((PenWorkspaceBrokerTelemetry::OfficeInstalled *)v14, v4);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  PenWorkspaceBrokerTelemetry::OfficeInstalled::~OfficeInstalled((PenWorkspaceBrokerTelemetry::OfficeInstalled *)v14);
  v8 = L"Microsoft.WindowsMaps_8wekyb3d8bbwe!App";
  if ( v4 )
  {
    v10 = L"Microsoft.Office.WINWORD.EXE.15";
    v9 = L"Microsoft.Office.POWERPNT.EXE.15";
  }
  else
  {
    v9 = L"Microsoft.MSPaint_8wekyb3d8bbwe!Microsoft.MSPaint";
    v10 = L"Microsoft.Windows.Photos_8wekyb3d8bbwe!App";
  }
  v11 = L"Microsoft.Office.OneNote_8wekyb3d8bbwe!microsoft.onenoteim";
  v12 = L"Microsoft.WindowsCommunicationsApps_8wekyb3d8bbwe!Microsoft.WindowsLive.Mail";
  v13 = L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge";
  if ( v3 > 0 )
  {
    do
      PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, (&v8)[v2++], &FileTime);
    while ( v2 < v3 );
  }
  return 0LL;
}
