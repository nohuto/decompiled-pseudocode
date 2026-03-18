/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1403D90F0
 * Callers:
 *     DxgkIsBootPrimarySource @ 0x1403D8F80 (DxgkIsBootPrimarySource.c)
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

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnUsedByFirmware(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3)
{
  __int64 v3; // r12
  __int64 v6; // rdi
  VIDPN_MGR *v7; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v9; // r15
  __int64 v10; // rbx
  __int64 i; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 result; // rax
  __int64 v18; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 11518;
    return result;
  }
  *a3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11535;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11541;
  }
  v6 = *((_QWORD *)a1 + 395);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11546;
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
  v7 = *(VIDPN_MGR **)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, (__int64)v7);
    v22 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
    auto_rc<DMMVIDPN const>::reset(&v22, (__int64)ClientCommittedVidPnRef);
    if ( v22 )
    {
      v9 = (DMMVIDPNTOPOLOGY *)(v22 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v7 + 15) + 72LL));
      v10 = *((_QWORD *)v7 + 15);
      for ( i = 0LL; ; ++i )
      {
        v21 = -1;
        v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v9, v3, i, &v21);
        v15 = v12;
        if ( v12 < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
          v16[3] = i;
          v16[4] = v3;
          v16[5] = v9;
          v16[6] = v15;
          WdLogGlobalForLineNumber = 11609;
          if ( v10 )
            ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
          auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
          return (unsigned int)v15;
        }
        v18 = v21;
        if ( v21 == -1 )
          break;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v10, v21);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 417) )
          {
            *a3 = 1;
            break;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v18, v10);
          WdLogGlobalForLineNumber = 11635;
        }
      }
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
      auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 11579;
      auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
      return 3223192412LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 11560;
  }
  return result;
}
