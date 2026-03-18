/*
 * XREFs of ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1401B0814
 * Callers:
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 * Callees:
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140085740 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140085C70 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x140126220 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x140126480 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ConvertPointCoordinates @ 0x140196130 (ConvertPointCoordinates.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

char __fastcall CInertiaManager::EndInertia(CInertiaManager *this, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 *Inertia; // rdi
  int v6; // edx
  int v7; // r8d
  CInertiaManager *v8; // rcx
  struct tagPOINT v10; // [rsp+30h] [rbp-328h] BYREF
  __int128 v11; // [rsp+40h] [rbp-318h] BYREF
  __int128 v12; // [rsp+50h] [rbp-308h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-2F8h] BYREF
  _OWORD v14[45]; // [rsp+70h] [rbp-2E8h] BYREF

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19216);
  Inertia = (__int64 *)CInertiaManager::QueryInertia((__int64)this, v4, 15);
  if ( Inertia
    && (v10 = 0LL,
        v11 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v13),
        v12 = *InputConfig::Mouse::GetUnionRegion(v14, v6, v7),
        (unsigned int)ConvertPointCoordinates(v4, &v12, (int *)&v11, &v10))
    && CInertiaManager::PostInertiaMessage(v8, 0x23Cu, (CInertiaManager *)((char *)this + 8), (struct tagPOINT)v4, v10) )
  {
    return CInertiaManager::InvalidateInertiaInfo(this, *Inertia, Inertia[1]);
  }
  else
  {
    return 0;
  }
}
