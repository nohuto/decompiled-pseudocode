/*
 * XREFs of ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1403419E8
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1403427E0 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline @ 0x140064E78 (Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1402DB7D8 (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DED8C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x140379F18 (BmlDoesTargetModeSupportWireFormat.c)
 *     ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1403D7920 (-PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 *     ?IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1403F58AC (-IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403FC780 (-MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x140419D18 (-ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 */

__int64 __fastcall BmlPickColorSpaceAndWireFormat(unsigned __int8 *a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  unsigned int i; // ecx
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v10; // r13
  struct DMMVIDPNTARGETMODESET *v11; // rdi
  struct DMMVIDPNTARGETMODE *v12; // r12
  __int64 v13; // rax
  int DitheringCaps; // eax
  __int64 v15; // r15
  int v16; // eax
  int v17; // r15d
  _BOOL8 v18; // rcx
  unsigned int v19; // ebx
  __int64 result; // rax
  int v21; // ecx
  unsigned int v22; // ebx
  bool v23; // zf
  int v24; // ecx
  bool v25; // r14
  const struct DMMVIDPNSOURCEMODESET *v26; // rbx
  const struct DXGADAPTER *ContainingAdapter; // rax
  bool v28; // al
  int v29; // eax
  char v30; // r8
  unsigned int v31; // ebx
  __int64 v32; // rcx
  bool v33; // bl
  int v34; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-14h]
  __int64 v36[2]; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v37; // [rsp+90h] [rbp+48h] BYREF
  int v38; // [rsp+98h] [rbp+50h]
  __int64 v39; // [rsp+A0h] [rbp+58h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v40; // [rsp+A8h] [rbp+60h] BYREF

  v39 = a3;
  v38 = a2;
  v4 = a3;
  for ( i = 0; ; i = v35 + 1 )
  {
    v6 = *a1;
    v35 = i;
    if ( i >= v6 )
      return 0LL;
    v7 = i;
    v8 = 120 * v7;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             (DMMVIDPNTOPOLOGY *)(v4 + 96),
             *(_DWORD *)(*(_QWORD *)&a1[120 * v7 + 16] + 24LL),
             *(_DWORD *)(*(_QWORD *)&a1[120 * v7 + 16] + 28LL));
    v10 = Path;
    if ( !Path )
      break;
    v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
    v36[0] = (__int64)v11;
    v12 = (struct DMMVIDPNTARGETMODE *)*((_QWORD *)v11 + 18);
    if ( !v12 )
    {
      _mm_lfence();
      WdLogSingleEntry2(2LL, *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL), v4);
      WdLogGlobalForLineNumber = 5895;
      v22 = -1071774967;
      goto LABEL_59;
    }
    v13 = *((_QWORD *)v10 + 12);
    v40.Value = 0;
    DitheringCaps = MonitorGetDitheringCaps(*(struct HDXGMONITOR__ **)(*(_QWORD *)(v13 + 96) + 112LL), &v40);
    if ( DitheringCaps < 0 )
    {
      WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL), v4, DitheringCaps);
      WdLogGlobalForLineNumber = 5917;
      v40.Value = 0;
    }
    v15 = *(_QWORD *)&a1[v8 + 16];
    v16 = *((_DWORD *)v12 + 32);
    v37 = 0;
    v34 = v16;
    if ( (*(_BYTE *)v15 & 8) == 0 )
      goto LABEL_8;
    v19 = *(_DWORD *)(v15 + 204);
    v17 = *(_DWORD *)(v15 + 208);
    if ( !(unsigned __int8)BmlDoesTargetModeSupportWireFormat(v12, v19) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&a1[v8 + 16] + 8LL) & 8) != 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5974;
        v22 = -1071774902;
        goto LABEL_59;
      }
LABEL_8:
      if ( (a1[v8 + 132] & 2) != 0
        && (*(_DWORD *)&a1[v8 + 116] & 1) != 0
        && DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath((DMMVIDPNTARGET **)v10)
        && ModeSupportsHighDepthColorFormat(v12, &v40)
        && (a1[v8 + 132] & 1) == 0 )
      {
        v25 = 0;
        if ( v38 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
        {
          v24 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
          if ( v24 != 36 && v24 != 113 )
            v25 = 1;
        }
        v26 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v10 + 11));
        v36[0] = (__int64)v26;
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v39 + 48));
        v28 = IsHdrSourceModePinned(ContainingAdapter, v26);
        v17 = v28 ? (!v25 ? 0xC : 0) : 0;
        v29 = PickWireFormatWithPreference((4 * !v25) & (unsigned int)-v28, &v34, &v40, &v37);
        v19 = v37;
        if ( v29 < 0 )
        {
          v19 = v37 & 0xFFFFFF03 | 8;
          v17 = 0;
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 6041;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(v36, 0LL);
      }
      else if ( (a1[v8 + 132] & 0xC) == 0xC && ModeSupportsHighDepthColorFormat(v12, &v40) && (v30 & 1) == 0 )
      {
        v31 = 3;
        v17 = 30;
        if ( (unsigned int)Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline() )
        {
          v36[0] = (__int64)DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v10 + 11));
          v32 = *(_QWORD *)(v36[0] + 144);
          v33 = v32 && *(_DWORD *)(v32 + 72) == 1 && BmlPixelFormatMatchHdrPixelFormat(*(_DWORD *)(v32 + 96), 3, 0);
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(v36, 0LL);
          v17 = v33 ? 0x1E : 0;
          v31 = 2 * v33 + 1;
        }
        if ( (int)PickWireFormatWithPreference(v31, &v34, &v40, &v37) >= 0 )
        {
LABEL_13:
          v19 = v37;
          goto LABEL_14;
        }
        v19 = v37 & 0xFFFFFF03 | 8;
        v17 = 0;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 6083;
      }
      else
      {
        v17 = 0;
        v18 = 1;
        if ( v38 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
        {
          v21 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
          if ( v21 == 31 || v21 == 35 )
            v18 = 0;
        }
        if ( (int)PickWireFormatWithPreference(v18, &v34, &v40, &v37) >= 0 )
          goto LABEL_13;
        v19 = v37 & 0xFFFFFF03 | 8;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 6118;
      }
      goto LABEL_14;
    }
    if ( (unsigned int)(v17 - 31) > 2 )
      goto LABEL_27;
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304896)
      && (*((_DWORD *)VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v39 + 48)) + 111) & 8) == 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5952;
      v22 = -1073741811;
LABEL_59:
      auto_rc<DMMVIDPNTARGETMODESET>::reset(v36, 0LL);
      return v22;
    }
    if ( v17 == 32 )
    {
      v23 = (*(_DWORD *)&a1[v8 + 116] & 2) == 0;
    }
    else
    {
LABEL_27:
      if ( v17 != 33 )
        goto LABEL_14;
      v23 = (*(_DWORD *)&a1[v8 + 116] & 4) == 0;
    }
    if ( v23 )
    {
      v22 = -1073741637;
      goto LABEL_59;
    }
LABEL_14:
    *((_DWORD *)v12 + 33) = v19;
    *((_DWORD *)v12 + 34) = v17;
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
    v4 = v39;
  }
  _mm_lfence();
  WdLogSingleEntry5(
    2LL,
    v7,
    a1,
    *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 24LL),
    *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL),
    v4);
  result = 3223192345LL;
  WdLogGlobalForLineNumber = 5882;
  return result;
}
