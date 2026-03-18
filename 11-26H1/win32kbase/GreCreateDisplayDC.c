/*
 * XREFs of GreCreateDisplayDC @ 0x14003DEF0
 * Callers:
 *     UserGetDesktopDC @ 0x14000F79C (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     CreateCacheDC @ 0x140081BD0 (CreateCacheDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14011D380 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x14016F900 (NtGdiCreateMetafileDC.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 * Callees:
 *     HmgAllocateDcAttr @ 0x14000D8F8 (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x14000E59C (HmgFreeDcAttr.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?reset@?$lambda_call@V_lambda_1_@?1??AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ @ 0x14001A86C (-reset@-$lambda_call@V_lambda_1_@-1--AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z @ 0x140037830 (-vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400392A4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x14003DC30 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ??$IsIsolatedTypeBusy@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YA_NPEAX@Z @ 0x1400B70A4 (--$IsIsolatedTypeBusy@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YA_NPEAX@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9E10 (-vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x140102518 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z @ 0x140102DC4 (-SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x140128318 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     ??0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z @ 0x140164CD8 (--0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreCreateDisplayDC(HDEV a1, unsigned int a2, int a3)
{
  char v3; // si
  __int64 v6; // r15
  struct Gre::Base::SESSION_GLOBALS *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  bool v10; // al
  int v11; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r12d
  void (__fastcall *v16)(DC **, _QWORD); // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _DC_ATTR *DcAttr; // r12
  int v21; // r8d
  HDEV v22; // r8
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  int v26; // edx
  BOOL v27; // ecx
  unsigned int v28; // eax
  int v29; // edx
  __int64 v30; // r8
  int v31; // [rsp+28h] [rbp-80h]
  __int64 v32[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v33[3]; // [rsp+40h] [rbp-68h] BYREF
  DC *v34[4]; // [rsp+58h] [rbp-50h] BYREF
  int v35; // [rsp+78h] [rbp-30h]
  HDEV v36; // [rsp+B0h] [rbp+8h] BYREF
  int v37; // [rsp+C0h] [rbp+18h]
  __int64 v38; // [rsp+C8h] [rbp+20h] BYREF

  v37 = a3;
  v36 = a1;
  v3 = a3;
  v6 = 0LL;
  v7 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  v33[2] = v7;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v38, v7);
  v33[0] = a1;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v8) + 88) + 4384LL) + 48LL);
  if ( v9 )
    v10 = *(_BYTE *)(v9 + 36) == 0;
  else
    v10 = 0;
  if ( v10 && !(unsigned __int8)IsIsolatedTypeBusy<NSInstrumentation::CTypeIsolation<909312,3552>>(a1) )
  {
    GrepCaptureLiveMemoryDump(400LL, 46LL, 0LL, 0LL, 0LL, 0);
LABEL_7:
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v38,
      v11);
    return 0LL;
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 28) && ((_DWORD)a1[10] & 0x20400) == 0x20400 )
    goto LABEL_7;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v34, v7, a1, a2, v3 & 1, v31);
  if ( v34[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)v33, v7);
    *(_DWORD *)((struct HDEV__ *)v34[0] + 18) = a1[452];
    *(_DWORD *)((struct HDEV__ *)v34[0] + 19) = a1[528];
    *((_QWORD *)v34[0] + 3) = *((_QWORD *)a1 + 223);
    *((_QWORD *)v34[0] + 8) = *((_QWORD *)a1 + 6);
    if ( a2 == 1 )
    {
      v32[0] = 0x100000001LL;
      *((_QWORD *)v34[0] + 64) = 0x100000001LL;
    }
    else
    {
      *((_QWORD *)v34[0] + 64) = *(_QWORD *)((char *)a1
                                           + (-(__int64)(((_DWORD)a1[10] & 0x20000) != 0) & 0xFFFFFFFFFFFFFE4CuLL)
                                           + 2136);
      if ( a2 )
        goto LABEL_11;
      v23 = *((_DWORD *)v34[0] + 9) | 0x200;
      if ( ((_BYTE)a1[10] & 1) == 0 )
        v23 = *((_DWORD *)v34[0] + 9) & 0xFFFFFDFF;
      *((_DWORD *)v34[0] + 9) = v23;
      v24 = *((_DWORD *)v34[0] + 9) | 1;
      if ( ((_BYTE)a1[10] & 1) == 0 )
        v24 = *((_DWORD *)v34[0] + 9) & 0xFFFFFFFE;
      *((_DWORD *)v34[0] + 9) = v24;
      v25 = *((_DWORD *)v34[0] + 9) | 0x1000;
      if ( ((_DWORD)a1[10] & 0x400) == 0 )
        v25 = *((_DWORD *)v34[0] + 9) & 0xFFFFEFFF;
      *((_DWORD *)v34[0] + 9) = v25;
      if ( (*((_DWORD *)a1 + 10) & 0x80u) != 0 )
        goto LABEL_11;
      DC::pSurface(v34[0], *((struct SURFACE **)a1 + 318));
      v26 = *((_DWORD *)v34[0] + 9);
      v27 = (v26 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)a1 + 318) + 112LL) & 0x200) != 0;
      v28 = v26 & 0xFFFF7FFF;
      v29 = v26 | 0x8000;
      if ( !v27 )
        v29 = v28;
      *((_DWORD *)v34[0] + 9) = v29;
    }
    *((_QWORD *)v34[0] + 8) = *(_QWORD *)v7 + 1144LL;
LABEL_11:
    if ( (unsigned int)DC::bSetDefaultRegion(v34[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
      {
        v15 = (_DWORD)a1[10] & 1;
        v16 = *(void (__fastcall **)(DC **, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14) + 24) + 1464LL);
        if ( v16 )
          v16(v34, v15);
      }
      DC::AcquireDcVisRgnShared(v34[0], (__int64)v32);
      DC::vUpdate_VisRect(v34[0], v7, *((struct REGION **)v34[0] + 142));
      _reset___lambda_call_V_lambda_1___1__AcquireDcVisRgnShared_DC__QEAA_XZ__details_wil__QEAAXXZ(v32);
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
      v32[0] = (__int64)DcAttr;
      if ( DcAttr )
      {
        if ( a1 == *(HDEV *)(*(_QWORD *)(W32GetUserSessionState(v17, v13, v18, v19) + 56968) + 40LL) )
          **((_DWORD **)v34[0] + 122) |= 2u;
        v35 = 1;
        if ( (v37 & 2) != 0 )
          *((_DWORD *)v34[0] + 9) |= 8u;
        SetupDCAttributes(v34[2], v34[0], DcAttr);
        v36 = (HDEV)*((_QWORD *)a1 + 4);
        v22 = v36;
        *((_QWORD *)v34[0] + 7) = 0LL;
        if ( v22
          && ((_DWORD)a1[10] & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)v33)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v36) )
        {
          *((_QWORD *)v34[0] + 7) = v30;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v36, v7);
        }
        v6 = *(_QWORD *)v34[0];
      }
    }
    if ( v6 )
      GreValidateVisrgn(v6, 1);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v34, v13);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v38,
    v21);
  return v6;
}
