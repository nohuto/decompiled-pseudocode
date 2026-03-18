/*
 * XREFs of GreCreateDisplayDC @ 0x140041200
 * Callers:
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x140041660 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     CreateCacheDC @ 0x140089BB0 (CreateCacheDC.c)
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 *     UserGetDesktopDC @ 0x140098B10 (UserGetDesktopDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1400CDC30 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1401352D0 (NtGdiCreateMetafileDC.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 * Callees:
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x140012950 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x14001B7B8 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     HmgAllocateDcAttr @ 0x140043FBC (HmgAllocateDcAttr.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     GreValidateVisrgn @ 0x1400473D4 (GreValidateVisrgn.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14007553C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgFreeDcAttr @ 0x1400C0A8C (HmgFreeDcAttr.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1400C3120 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??$IsIsolatedTypeBusy@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YA_NPEAX@Z @ 0x1400C8460 (--$IsIsolatedTypeBusy@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YA_NPEAX@Z.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1400DA958 (XDCOBJ_vSetDefaultFontWrap.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1400DE8A4 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140109B20 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401340E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140177330 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140178B78 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x140178DF0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C65FC (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

HDC __fastcall GreCreateDisplayDC(HDEV a1, unsigned int a2, int a3)
{
  char v3; // r12
  HDC v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // al
  __int64 v11; // rcx
  _QWORD *v12; // r13
  _QWORD *v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  int v17; // edx
  BOOL v18; // ecx
  unsigned int v19; // eax
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _DC_ATTR *DcAttr; // r14
  HDEV v24; // rdx
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-98h]
  __int64 v27; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+38h] [rbp-80h]
  __int64 v29; // [rsp+50h] [rbp-68h]
  char v30; // [rsp+58h] [rbp-60h]
  DC *v31[5]; // [rsp+60h] [rbp-58h] BYREF
  int v32; // [rsp+88h] [rbp-30h]
  HDEV v33; // [rsp+C0h] [rbp+8h] BYREF
  int v34; // [rsp+D0h] [rbp+18h]
  HDEV v35; // [rsp+D8h] [rbp+20h] BYREF

  v34 = a3;
  v33 = a1;
  v3 = a3;
  v6 = 0LL;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v27);
  v35 = a1;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v7) + 88) + 4272LL) + 48LL);
  if ( v8 )
    v9 = *(_BYTE *)(v8 + 36) == 0;
  else
    v9 = 0;
  if ( v9 && !(unsigned __int8)IsIsolatedTypeBusy<NSInstrumentation::CTypeIsolation<909312,3552>>(a1) )
  {
    GrepCaptureLiveMemoryDump(400LL, 46LL, 0LL);
LABEL_7:
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v27);
    return 0LL;
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 28) && ((_DWORD)a1[10] & 0x20400) == 0x20400 )
    goto LABEL_7;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v31, a1, a2, v3 & 1, v26);
  if ( v31[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v35);
    *(_DWORD *)((struct HDEV__ *)v31[0] + 18) = a1[452];
    *(_DWORD *)((struct HDEV__ *)v31[0] + 19) = a1[528];
    *((_QWORD *)v31[0] + 3) = *((_QWORD *)a1 + 223);
    v11 = *((_QWORD *)a1 + 6);
    *((_QWORD *)v31[0] + 8) = v11;
    v12 = *(_QWORD **)(W32GetSessionState(v11) + 88);
    if ( a2 == 1 )
    {
      v28 = 0x100000001LL;
      *((_QWORD *)v31[0] + 64) = 0x100000001LL;
    }
    else
    {
      v13 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v35);
      *((_QWORD *)v31[0] + 64) = *v13;
      if ( a2 )
        goto LABEL_29;
      v14 = *((_DWORD *)v31[0] + 9) | 0x200;
      if ( ((_BYTE)a1[10] & 1) == 0 )
        v14 = *((_DWORD *)v31[0] + 9) & 0xFFFFFDFF;
      *((_DWORD *)v31[0] + 9) = v14;
      v15 = *((_DWORD *)v31[0] + 9) | 1;
      if ( ((_BYTE)a1[10] & 1) == 0 )
        v15 = *((_DWORD *)v31[0] + 9) & 0xFFFFFFFE;
      *((_DWORD *)v31[0] + 9) = v15;
      v16 = *((_DWORD *)v31[0] + 9) | 0x1000;
      if ( ((_DWORD)a1[10] & 0x400) == 0 )
        v16 = *((_DWORD *)v31[0] + 9) & 0xFFFFEFFF;
      *((_DWORD *)v31[0] + 9) = v16;
      if ( (*((_DWORD *)a1 + 10) & 0x80u) != 0 )
        goto LABEL_29;
      DC::pSurface(v31[0], *((struct SURFACE **)a1 + 318));
      v17 = *((_DWORD *)v31[0] + 9);
      v18 = (v17 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)a1 + 318) + 112LL) & 0x200) != 0;
      v19 = v17 & 0xFFFF7FFF;
      v20 = v17 | 0x8000;
      if ( !v18 )
        v20 = v19;
      *((_DWORD *)v31[0] + 9) = v20;
    }
    *((_QWORD *)v31[0] + 8) = *v12 + 1144LL;
LABEL_29:
    if ( (unsigned int)DC::bSetDefaultRegion(v31[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
        XDCOBJ_vSetDefaultFontWrap(v31, (_DWORD)a1[10] & 1);
      DC::AcquireDcVisRgnShared(v31[0]);
      DC::vUpdate_VisRect(v31[0], *((struct REGION **)v31[0] + 142));
      if ( v30 )
        CPushLock::ReleaseLock((CPushLock *)(v29 + 1112));
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
      v28 = (__int64)DcAttr;
      if ( DcAttr )
      {
        if ( a1 == *(HDEV *)(*(_QWORD *)(W32GetUserSessionState(v22, v21) + 56968) + 48LL) )
          **((_DWORD **)v31[0] + 122) |= 2u;
        v32 = 1;
        if ( (v3 & 2) != 0 )
          *((_DWORD *)v31[0] + 9) |= 8u;
        SetupDCAttributes(v31[0], DcAttr);
        v33 = (HDEV)*((_QWORD *)a1 + 4);
        v24 = v33;
        *((_QWORD *)v31[0] + 7) = 0LL;
        if ( v24
          && ((_DWORD)a1[10] & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v35)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v33) )
        {
          *((_QWORD *)v31[0] + 7) = v25;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v33);
        }
        v6 = *(HDC *)v31[0];
      }
    }
    if ( v6 )
      GreValidateVisrgn(v6);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v31);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v27);
  return v6;
}
