/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x14025B224
 * Callers:
 *     DxgkHandleVideoParameters @ 0x140235530 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v10; // rdi
  VIDPN_MGR *v11; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v13; // r15
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0LL;
  v5 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 11685;
    return result;
  }
  *a4 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11702;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11708;
  }
  v10 = *((_QWORD *)a1 + 395);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11713;
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
  v11 = *(VIDPN_MGR **)(v10 + 104);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, (__int64)v11);
    v22 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v11);
    auto_rc<DMMVIDPN const>::reset(&v22, (__int64)ClientCommittedVidPnRef);
    if ( v22 )
    {
      v13 = (DMMVIDPNTOPOLOGY *)(v22 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v11 + 15) + 72LL));
      v14 = *((_QWORD *)v11 + 15);
      while ( 1 )
      {
        v24 = -1;
        v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v13, v5, v4, &v24);
        v18 = v15;
        if ( v15 < 0 )
          break;
        v19 = v24;
        if ( v24 == -1 )
          goto LABEL_18;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v14, v24);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            *a3 = 1;
            *a4 = v19;
LABEL_18:
            if ( v14 )
              ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
            auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v19, v14);
          WdLogGlobalForLineNumber = 11804;
        }
        ++v4;
      }
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
      v21[3] = v4;
      v21[4] = v5;
      v21[5] = v13;
      v21[6] = v18;
      WdLogGlobalForLineNumber = 11776;
      if ( v14 )
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
      auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
      return (unsigned int)v18;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 11746;
      auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
      return 3223192412LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 11727;
  }
  return result;
}
