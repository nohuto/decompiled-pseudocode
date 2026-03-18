/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x14041E938
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x14026A2F0 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1402DFF2C (_BmlGetPathModeListForPath.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140341EF8 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1403D43D8 (_BmlLogDiagnosticsPacket.c)
 *     __BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO @ 0x1404163B4 (__BmlGetPathModeListForAdapter_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        struct BML_VIDPN_PATH_ORDER *a8,
        CCD_MODE_RESULT_SET *a9)
{
  struct BML_VIDPN_PATH_ORDER *v9; // rsi
  __int64 v14; // rax
  struct VIDPN_MGR *v15; // r14
  int ClientVidPn; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int PathModeListForPath; // edi
  int v20; // r15d
  __int64 v21; // r8
  struct DMMVIDPN *v22; // rbx
  unsigned __int8 *v23; // rcx
  unsigned __int8 v24; // al
  bool v25; // zf
  int v26; // eax
  struct DMMVIDPN *v28; // [rsp+90h] [rbp+50h] BYREF
  __int64 v29; // [rsp+98h] [rbp+58h] BYREF

  v9 = a8;
  *(_BYTE *)a8 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6952;
  }
  v14 = *(_QWORD *)(a4 + 3160);
  a8 = 0LL;
  v15 = *(struct VIDPN_MGR **)(v14 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, (__int64)v15);
  v28 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v15, (__int64 *)&v28);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = ClientVidPn;
    WdLogGlobalForLineNumber = 6976;
LABEL_17:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v29 + 40));
    _BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO((void **)&a8);
    return (unsigned int)PathModeListForPath;
  }
  v20 = a6;
  v21 = a3;
  v22 = v28;
  PathModeListForPath = BmlPreparePathOrderAndVidPn(&a8, (__int64)v28, v21, a1, a2, a6, a7);
  if ( PathModeListForPath >= 0 )
  {
    v23 = (unsigned __int8 *)a8;
    v24 = *(_BYTE *)a8;
    if ( *(_BYTE *)a8 <= 1u
      || (*(_BYTE *)a8 = v24 - 1,
          PathModeListForPath = BmlFunctionalizeVidPn(a8, v22),
          ++*(_BYTE *)a8,
          v23 = (unsigned __int8 *)a8,
          v24 = *(_BYTE *)a8,
          PathModeListForPath >= 0) )
    {
      PathModeListForPath = BmlGetPathModeListForPath((__int64)v23, (__int64)v22, v24 - 1, a9);
    }
    else
    {
      v25 = a5 == 0;
      *(_BYTE *)v9 = 1;
      if ( !v25 )
      {
        if ( v22 )
        {
          v26 = BmlLogDiagnosticsPacket((DXGDIAGNOSTICS **)v15, v20, (__int64)v22, v23);
          if ( v26 < 0 )
          {
            WdLogSingleEntry3(3LL, v22, a8, v26);
            WdLogGlobalForLineNumber = 7018;
          }
        }
      }
    }
    goto LABEL_17;
  }
  if ( v22 )
    ReferenceCounted::Release((struct DMMVIDPN *)((char *)v22 + 24));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v29 + 40));
  if ( a8 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a8);
  return (unsigned int)PathModeListForPath;
}
