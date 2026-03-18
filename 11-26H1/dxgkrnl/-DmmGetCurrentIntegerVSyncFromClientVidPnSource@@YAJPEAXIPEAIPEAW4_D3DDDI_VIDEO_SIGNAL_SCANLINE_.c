/*
 * XREFs of ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1403EF088
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x140257550 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAII@Z @ 0x140038978 (-GetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetCurrentIntegerVSyncFromClientVidPnSource(
        ADAPTER_DISPLAY **a1,
        unsigned int a2,
        unsigned int *a3,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a4)
{
  __int64 v4; // r12
  ADAPTER_DISPLAY *v8; // rbx
  VIDPN_MGR *v9; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  unsigned int v12; // ebx
  __int64 result; // rax
  DMMVIDPNTARGET *v14; // rcx
  struct DMMVIDPNTARGETMODESET *v15; // rbx
  struct _D3DDDI_RATIONAL *v16; // rdx
  struct _D3DDDI_RATIONAL v17; // rcx
  unsigned int v18; // r15d
  unsigned int LastCddIntegerVSync; // eax
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL v22; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 v23; // [rsp+B0h] [rbp+40h] BYREF

  v4 = a2;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry2(2LL, a3, a4);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 12710;
    return result;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12724;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12732;
  }
  v8 = a1[395];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12737;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = (VIDPN_MGR *)*((_QWORD *)v8 + 13);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, (__int64)v9);
    v20 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
    auto_rc<DMMVIDPN const>::reset(&v20, (__int64)ClientCommittedVidPnRef);
    if ( !v20 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12768;
      v12 = -1071774884;
      goto LABEL_12;
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(
             (DMMVIDPNTOPOLOGY *)(v20 + 96),
             v4,
             *(_DWORD *)(4024 * v4 + *((_QWORD *)a1[395] + 16) + 1072));
    if ( !Path )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12781;
LABEL_11:
      v12 = -1071774971;
LABEL_12:
      auto_rc<DMMVIDPN const>::reset(&v20, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
      return v12;
    }
    v14 = (DMMVIDPNTARGET *)*((_QWORD *)Path + 12);
    if ( !v14 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12788;
      goto LABEL_11;
    }
    v15 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v14);
    if ( !*((_QWORD *)v15 + 18) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12797;
    }
    v16 = (struct _D3DDDI_RATIONAL *)*((_QWORD *)v15 + 18);
    v23 = 0;
    v17 = v16[19];
    LODWORD(v16) = v16[15].Numerator << 29;
    v22 = v17;
    v18 = DmmMapVSyncFromRationalToInteger(&v22, (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)v16 >> 29), &v23);
    LastCddIntegerVSync = ADAPTER_DISPLAY::GetLastCddIntegerVSync(a1[395], v4);
    if ( v23 != 1 || LastCddIntegerVSync != v18 + 1 )
      LastCddIntegerVSync = v18;
    *a3 = LastCddIntegerVSync;
    *a4 = (int)(*(_DWORD *)(*((_QWORD *)v15 + 18) + 120LL) << 29) >> 29;
    if ( v15 )
      ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v15 + 88));
    auto_rc<DMMVIDPN const>::reset(&v20, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 12751;
  }
  return result;
}
