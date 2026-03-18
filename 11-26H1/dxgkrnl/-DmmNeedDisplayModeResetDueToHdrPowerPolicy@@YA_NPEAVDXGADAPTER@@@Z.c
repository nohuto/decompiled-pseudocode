/*
 * XREFs of ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z @ 0x1403B55C0
 * Callers:
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403B5500 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1402DB7D8 (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 *     ?MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D8E4C (-MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 */

char __fastcall DmmNeedDisplayModeResetDueToHdrPowerPolicy(struct DXGADAPTER *a1)
{
  char v1; // bl
  __int64 v2; // rax
  VIDPN_MGR *v3; // rsi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rcx
  char IsHdrAllowedOnVidPnPath; // al
  DMMVIDPNTARGET *v10; // rsi
  char v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  struct HDXGMONITOR__ *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  bool v17; // zf
  struct DMMVIDPNTARGETMODESET *v18; // [rsp+50h] [rbp+30h] BYREF
  __int64 v19; // [rsp+58h] [rbp+38h] BYREF
  __int64 v20; // [rsp+60h] [rbp+40h] BYREF

  v1 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 15681;
    return 0;
  }
  v2 = *((_QWORD *)a1 + 395);
  if ( !v2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15695;
    return 0;
  }
  v3 = *(VIDPN_MGR **)(v2 + 104);
  if ( !v3 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15708;
    return 0;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, *(_QWORD *)(v2 + 104));
  v19 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v3);
  auto_rc<DMMVIDPN const>::reset(&v19, (__int64)ClientCommittedVidPnRef);
  if ( !v19 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15725;
    goto LABEL_12;
  }
  v5 = v19 + 120;
  v6 = 0LL;
  v7 = *(_QWORD *)(v19 + 120);
  if ( v7 != v19 + 120 )
    v6 = v7 - 8;
  while ( 1 )
  {
    if ( !v6 )
    {
      auto_rc<DMMVIDPN const>::reset(&v19, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
      return 0;
    }
    IsHdrAllowedOnVidPnPath = DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath((DMMVIDPNTARGET **)v6);
    v10 = *(DMMVIDPNTARGET **)(v6 + 96);
    v11 = IsHdrAllowedOnVidPnPath;
    if ( !v10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15742;
    }
    v12 = *((_QWORD *)v10 + 12);
    if ( *(_BYTE *)(v12 + 419) )
    {
      v14 = *(struct HDXGMONITOR__ **)(v12 + 112);
      LOBYTE(v18) = 0;
      MonitorIsHdrEnabled(v14, (bool *)&v18);
      if ( (_BYTE)v18 )
        break;
    }
LABEL_16:
    v13 = *(_QWORD *)(v6 + 8);
    v6 = v13 - 8;
    if ( v13 == v5 )
      v6 = 0LL;
  }
  v18 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v10);
  v15 = *((_QWORD *)v18 + 18);
  if ( !v15 )
    goto LABEL_30;
  v16 = *(_DWORD *)(v15 + 136);
  if ( v16 == 12 || v16 == 32 )
  {
    if ( !v11 )
      goto LABEL_31;
    if ( v16 == 12 )
      goto LABEL_30;
    v17 = v16 == 32;
  }
  else
  {
    v17 = v11 == 0;
  }
  if ( v17 )
  {
LABEL_30:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v18, 0LL);
    goto LABEL_16;
  }
LABEL_31:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v18, 0LL);
  v1 = 1;
LABEL_12:
  auto_rc<DMMVIDPN const>::reset(&v19, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
  return v1;
}
