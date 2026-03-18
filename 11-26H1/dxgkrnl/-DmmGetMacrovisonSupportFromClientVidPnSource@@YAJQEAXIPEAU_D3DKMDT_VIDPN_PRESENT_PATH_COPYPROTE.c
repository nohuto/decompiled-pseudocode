/*
 * XREFs of ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x140259F9C
 * Callers:
 *     DxgkHandleVideoParameters @ 0x140235530 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(
        _QWORD *a1,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v8; // rsi
  VIDPN_MGR *v9; // rsi
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v10; // edi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  DMMVIDPNTOPOLOGY *v14; // r13
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h] BYREF
  char v24; // [rsp+B0h] [rbp+50h]
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 11854;
    return result;
  }
  *a3 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11875;
    return 3223191554LL;
  }
  v8 = a1[395];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11883;
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
  v9 = *(VIDPN_MGR **)(v8 + 104);
  if ( v9 )
  {
    v24 = 0;
    v10 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)7;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, (__int64)v9);
    v22 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
    auto_rc<DMMVIDPN const>::reset(&v22, (__int64)ClientCommittedVidPnRef);
    v12 = v22;
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 15) + 72LL));
      v13 = *((_QWORD *)v9 + 15);
      v14 = (DMMVIDPNTOPOLOGY *)(v12 + 96);
      while ( 1 )
      {
        LODWORD(Path) = -1;
        v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, v4, v3, (unsigned int *)&Path);
        v18 = v15;
        if ( v15 < 0 )
          break;
        v19 = (unsigned int)Path;
        if ( (_DWORD)Path == -1 )
        {
          if ( v13 )
            ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
          auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
          if ( v24 )
            *a3 = v10;
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
          return 0LL;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v14, v4, (int)Path);
        if ( !Path )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 11975;
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v13, v19);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            v24 = 1;
            v10 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)((*((_DWORD *)Path + 42) | 0xFFFFFFF8) & *(_DWORD *)&v10);
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v19, v13);
          WdLogGlobalForLineNumber = 12002;
        }
        ++v3;
      }
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
      v21[3] = v3;
      v21[4] = v4;
      v21[5] = v14;
      v21[6] = v18;
      WdLogGlobalForLineNumber = 11955;
      if ( v13 )
        ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
      auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
      return (unsigned int)v18;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 11925;
      auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
      return 3223192412LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 11897;
  }
  return result;
}
