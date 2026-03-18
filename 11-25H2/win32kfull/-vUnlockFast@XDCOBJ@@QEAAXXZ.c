/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0
 * Callers:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A2CC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14008952C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140089CAC (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x140089E58 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x14008A3D0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x14008AC84 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x14008AF88 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x14008BE80 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14008C23C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     GreGetCharSet @ 0x140195348 (GreGetCharSet.c)
 *     ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x140212898 (-GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140326E38 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140327CF0 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 *     ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x140327DA0 (-ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z.c)
 *     ??$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z @ 0x1403310AC (--$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x140142C80 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1402FDD6C (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  XDCOBJ::RestoreAttributes(this);
  v2 = *(__int64 **)this;
  v4 = 0;
  v3 = *v2;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    HmgDecrementExclusiveReferenceCountExFastOpt(
      *((_QWORD *)this + 2),
      *(_QWORD *)this,
      *((unsigned int *)this + 8),
      &v4);
  else
    HmgDecrementExclusiveReferenceCountEx(*(_QWORD *)this, *((unsigned int *)this + 8), &v4);
  if ( v4 )
    GrepDeleteDC(v3, 0x2000000LL);
}
