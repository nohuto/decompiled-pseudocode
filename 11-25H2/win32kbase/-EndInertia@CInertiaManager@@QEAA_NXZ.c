/*
 * XREFs of ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x140212150
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 * Callees:
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140062700 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140062770 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400DA130 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1400DA804 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1401519B8 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ConvertPointCoordinates @ 0x14015D084 (ConvertPointCoordinates.c)
 *     Feature_CheckPointConversionResult__private_IsEnabledDeviceUsageNoInline @ 0x1402126E8 (Feature_CheckPointConversionResult__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

char __fastcall CInertiaManager::EndInertia(CInertiaManager *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *Inertia; // rdi
  __int64 v5; // rdx
  CInertiaManager *v6; // rcx
  __int64 v8; // rdx
  struct tagPOINT v9; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v12[16]; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v13[45]; // [rsp+78h] [rbp-90h] BYREF

  v3 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 19184);
  Inertia = (__int64 *)CInertiaManager::QueryInertia((__int64)this, v3, 15);
  if ( !Inertia )
    return 0;
  v9 = 0LL;
  if ( (unsigned int)Feature_CheckPointConversionResult__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v12);
    v11 = *InputConfig::Mouse::GetUnionRegion(v13, v5);
    if ( !(unsigned int)ConvertPointCoordinates(v3, (int *)&v11, (int *)&v10, &v9) )
      return 0;
  }
  else
  {
    v11 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v12);
    v10 = *InputConfig::Mouse::GetUnionRegion(v13, v8);
    ConvertPointCoordinates(v3, (int *)&v10, (int *)&v11, &v9);
  }
  if ( CInertiaManager::PostInertiaMessage(v6, 572LL, (CInertiaManager *)((char *)this + 8), (struct tagPOINT)v3, v9) )
    return CInertiaManager::InvalidateInertiaInfo(this, *Inertia, Inertia[1]);
  return 0;
}
