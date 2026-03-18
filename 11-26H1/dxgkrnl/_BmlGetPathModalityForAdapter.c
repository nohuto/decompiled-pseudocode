/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1403427E0
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1403418DC (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     FillDevmodeFromVidPn @ 0x1402D71CC (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1402D9384 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x14034187C (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1403419E8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140341EF8 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1403D3670 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1403D43D8 (_BmlLogDiagnosticsPacket.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1403EF914 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     __BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO @ 0x1404163B4 (__BmlGetPathModeListForAdapter_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(
        unsigned __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        __int64 *a8,
        struct BML_VIDPN_PATH_ORDER *a9)
{
  struct BML_VIDPN_PATH_ORDER *v9; // rdi
  __int64 v14; // rax
  struct VIDPN_MGR *v15; // r12
  int ClientVidPn; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // r14d
  __int64 v21; // rbx
  int v22; // r15d
  unsigned int v23; // edx
  int v24; // eax
  __int64 v25; // rdi
  unsigned int i; // r12d
  __int64 v27; // r15
  _DWORD *v28; // r13
  __int64 v29; // rax
  int v30; // ecx
  bool v32; // zf
  int v33; // eax
  int v34; // eax
  __int16 v35; // [rsp+20h] [rbp-30h]
  __int64 v36; // [rsp+A0h] [rbp+50h] BYREF
  struct DMMVIDPN *v37; // [rsp+A8h] [rbp+58h] BYREF

  v9 = a9;
  *(_BYTE *)a9 = 0;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6176;
  }
  v14 = *(_QWORD *)(a4 + 3160);
  a9 = 0LL;
  v15 = *(struct VIDPN_MGR **)(v14 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v36, (__int64)v15);
  v37 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v15);
  v19 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = ClientVidPn;
    WdLogGlobalForLineNumber = 6200;
    goto LABEL_42;
  }
  v20 = a6;
  v35 = a2;
  v21 = (__int64)v37;
  v22 = BmlPreparePathOrderAndVidPn(&a9, v37, a3, a1, v35, a6, a7);
  if ( v22 < 0 )
    goto LABEL_34;
  v22 = BmlFunctionalizeVidPn(a9, (struct DMMVIDPN *)v21);
  if ( v22 < 0 )
  {
    v32 = a5 == 0;
    *(_BYTE *)v9 = 1;
    if ( !v32 )
    {
      if ( !v21 )
        goto LABEL_30;
      v34 = BmlLogDiagnosticsPacket(v15);
      if ( v34 < 0 )
      {
        WdLogSingleEntry3(3LL, v21, a9, v34);
        WdLogGlobalForLineNumber = 6232;
      }
    }
    goto LABEL_34;
  }
  v22 = BmlPickColorSpaceAndWireFormat((unsigned __int8 *)a9, v20, v21);
  if ( v22 < 0 )
  {
    v32 = a5 == 0;
    *(_BYTE *)v9 = 1;
    if ( !v32 )
    {
      if ( !v21 )
        goto LABEL_30;
      v33 = BmlLogDiagnosticsPacket(v15);
      if ( v33 < 0 )
      {
        WdLogSingleEntry3(3LL, v21, a9, v33);
        WdLogGlobalForLineNumber = 6254;
      }
    }
LABEL_34:
    if ( v21 )
      ReferenceCounted::Release((ReferenceCounted *)(v21 + 24));
    goto LABEL_30;
  }
  if ( a5 )
  {
    if ( v21 )
    {
      if ( DMMVIDPN::IsFunctional((DMMVIDPN *)v21, v23) )
      {
        v24 = BmlLogDiagnosticsPacket(v15);
        if ( v24 < 0 )
        {
          WdLogSingleEntry3(3LL, v21, a9, v24);
          WdLogGlobalForLineNumber = 6273;
        }
      }
    }
  }
  if ( !a8 )
  {
    v19 = BmlFillPathModalityFromVidPn((const struct DMMVIDPN *)v21, (struct D3DKMT_GETPATHSMODALITY *)a3);
    if ( v19 >= 0 )
    {
      v25 = *(_QWORD *)(a4 + 412);
      for ( i = 0; i < *(unsigned __int16 *)(a3 + 20); ++i )
      {
        v27 = 296LL * i;
        if ( v25 == *(_QWORD *)(v27 + a3 + 72) && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, i) )
        {
          v28 = *(_DWORD **)(v27 + a3 + 304);
          if ( !v28 )
          {
            v29 = operator new(0xF4uLL, 0x63644356u, 256LL);
            *(_QWORD *)(v27 + a3 + 304) = v29;
            v28 = (_DWORD *)v29;
            if ( !v29 )
            {
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 6307;
              v19 = -1073741670;
              goto LABEL_42;
            }
          }
          v19 = FillDevmodeFromVidPn(v21, *(_DWORD *)(v27 + a3 + 80), v28);
          if ( v19 < 0 )
            break;
          v30 = *(_DWORD *)(v27 + a3 + 196);
          v28[58] = v30;
          ConvertDMMScalingToGdiScaling(v30, v28 + 59);
          if ( (*(_DWORD *)(v27 + a3 + 56) & 0x20000) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v27 + a3 + 304) + 172LL) = *(_DWORD *)(v27 + a3 + 208);
            *(_DWORD *)(*(_QWORD *)(v27 + a3 + 304) + 176LL) = *(_DWORD *)(v27 + a3 + 212);
          }
        }
      }
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 24));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v36 + 40));
      if ( a9 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a9);
      return (unsigned int)v19;
    }
LABEL_42:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v37, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v36 + 40));
    _BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO(&a9);
    return (unsigned int)v19;
  }
  *a8 = v21 & -(__int64)(v21 != -88);
LABEL_30:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v36 + 40));
  if ( a9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a9);
  return (unsigned int)v22;
}
