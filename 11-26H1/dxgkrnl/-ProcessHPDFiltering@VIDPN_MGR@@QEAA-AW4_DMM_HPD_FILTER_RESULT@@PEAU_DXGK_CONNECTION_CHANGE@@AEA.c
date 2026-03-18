/*
 * XREFs of ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403D1D10
 * Callers:
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403D1C68 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U3@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@45445AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001348 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U3@U2@U2@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x14005A14C (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x140194B24 (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::ProcessHPDFiltering(VIDPN_MGR *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  struct DXGADAPTER *ContainingAdapter; // rax
  DMMVIDEOPRESENTTARGETSET *v10; // rcx
  int v11; // edx
  struct DXGADAPTER *v12; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // r8
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // edx
  unsigned int v17; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  bool v23; // al
  DMMVIDEOPRESENTTARGET *v24; // r8
  int v25; // edx
  int v26; // r9d
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  int v35; // edx
  int v36; // r9d
  int v37; // ecx
  unsigned int v38; // ebx
  struct _LUID *v39; // rcx
  __int64 v40; // rdx
  struct _LUID *v41; // rdx
  int v42; // ecx
  struct _LUID *v43; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v45; // r9
  int v46; // eax
  int v47; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  int v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+84h] [rbp-7Ch] BYREF
  int v51; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID *v52; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  int v56; // [rsp+B0h] [rbp-50h] BYREF
  int v57; // [rsp+B4h] [rbp-4Ch]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  __int128 v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+D8h] [rbp-28h]
  int v62; // [rsp+DCh] [rbp-24h]
  int v63; // [rsp+E0h] [rbp-20h]
  int v64; // [rsp+E4h] [rbp-1Ch]
  BOOL v65; // [rsp+E8h] [rbp-18h]
  int v66; // [rsp+ECh] [rbp-14h]
  struct _LUID *v67; // [rsp+F0h] [rbp-10h]
  struct _GUID v68; // [rsp+100h] [rbp+0h] BYREF

  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1);
  v10 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)a1 + 15);
  v11 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  v58 = 0LL;
  v12 = ContainingAdapter;
  v59 = 0LL;
  v62 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(v10, v11);
  if ( !TargetById )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5526;
    return 0LL;
  }
  v14 = *(_DWORD *)(a3 + 40) & 0xFFEFFFFF | (a4 == 0 ? 0x100000 : 0);
  *(_DWORD *)(a3 + 40) = v14;
  v15 = v14 & 0xFEFFFFFF | (*((_DWORD *)TargetById + 25) != 4 ? 0x1000000 : 0);
  v16 = 0;
  *(_DWORD *)(a3 + 40) = v15;
  if ( *((_DWORD *)TargetById + 21) == 15 )
    v16 = 0x200000;
  v17 = v15 & 0xFFDFFFFF | v16;
  *(_DWORD *)(a3 + 40) = v17;
  v18 = *((_DWORD *)TargetById + 20);
  if ( v18 && (v19 = v18 - 1) != 0 && (v20 = v19 - 1) != 0 && (v21 = v20 - 1) != 0 && v21 != 11 )
    v22 = 0;
  else
    v22 = 0x400000;
  *(_DWORD *)(a3 + 40) = v22 | v17 & 0xFFBFFFFF;
  v23 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)TargetById + 20));
  v26 = v25 ^ (v25 ^ (v23 << 23)) & 0x800000;
  *(_DWORD *)(a3 + 40) = v26;
  v27 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
  v28 = *((_QWORD *)v24 + 53);
  *(_QWORD *)(a3 + 24) = v28;
  v29 = v27 - v28;
  v30 = *((_QWORD *)v24 + 54);
  v31 = v27 - v30;
  *(_QWORD *)(a3 + 32) = v30;
  if ( v27 - v28 < 100000000 || v31 < 100000000 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0xF000000) == 0x8000000 )
      *(_DWORD *)(a3 + 40) |= 0x40000u;
    *(_DWORD *)(a3 + 40) |= 0x80000u;
  }
  v32 = *(unsigned int *)(*((_QWORD *)v12 + 395) + 540LL);
  v33 = (unsigned int)(v32 + 100000000);
  if ( v29 < v33 || v31 < v33 )
    *(_DWORD *)(a3 + 40) |= 0x80000u;
  *(_BYTE *)(a3 + 40) = *(_BYTE *)(a2 + 11) & 0xF;
  if ( v26 )
    return 0LL;
  v35 = *(_DWORD *)(a2 + 8);
  v36 = v35 & 0xF000000;
  if ( *(_BYTE *)(*((_QWORD *)v24 + 67) + 172LL) )
  {
    if ( v36 == 0x8000000 )
    {
      DMMVIDEOPRESENTTARGET::SetUnplugHiding(v24, 0);
      v35 = *(_DWORD *)(a2 + 8);
      v38 = 2;
    }
    else
    {
      v38 = 3;
    }
    v39 = *(struct _LUID **)((char *)v12 + 412);
    v58 = 0LL;
    v56 = 30;
    v57 = 72;
    v61 = 0;
    v60 = 0LL;
    v65 = v38 == 3;
    v59 = 0LL;
    v63 = 103;
    v64 = v35 & 0xFFFFFF;
    v66 = 0;
    v67 = v39;
    if ( *(_QWORD *)((char *)v12 + 4876) )
      v40 = *((unsigned int *)v12 + 1221);
    else
      v40 = 0x200000000LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v56, v40);
    *(_DWORD *)(a3 + 40) |= 0x20000u;
    return v38;
  }
  else
  {
    v37 = *(_DWORD *)(a2 + 8);
    if ( v36 != 0x8000000 )
      return 0LL;
    if ( v29 >= v32 && v27 - v30 >= v32 )
    {
      WdLogSingleEntry4(7LL, v37 & 0xFFFFFF, v12, v28, v27 - v28);
      WdLogGlobalForLineNumber = 5673;
      return 0LL;
    }
    v41 = *(struct _LUID **)((char *)v12 + 412);
    v56 = 30;
    v58 = 0LL;
    v64 = v37 & 0xFFFFFF;
    v42 = *(_DWORD *)(a3 + 16);
    v57 = 72;
    v61 = 0;
    v66 = v42 - *(_DWORD *)(a3 + 24);
    v60 = 0LL;
    v59 = 0LL;
    v63 = 102;
    v65 = v28 >= v30;
    v67 = v41;
    v48 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v12, v41, 0LL, &v48);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v56, v48);
    v48 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v12, v43, 0LL, &v48);
    v47 = 0;
    v68 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
      (struct DXGGLOBAL *)((char *)Global + 305640),
      0,
      (enum _DXGK_RAPID_HPD_TYPE *)&v47,
      &v68,
      0LL);
    if ( (unsigned int)dword_140166660 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140166660, 0x400000000080LL) )
      {
        v51 = 0;
        v52 = &v68;
        v53 = v48;
        v55 = *(_QWORD *)((char *)v12 + 412);
        v46 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
        v49 = -1;
        LODWORD(v48) = v46;
        v50 = 1;
        v54 = 2LL;
        LOWORD(v47) = 3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
          (__int64)&v47,
          (__int64)&unk_140145975,
          a5,
          v45,
          (__int64)&v47,
          (__int64)&v48,
          (__int64)&v55,
          (__int64)&v51,
          (__int64)&v54,
          (__int64)&v50,
          (__int64)&v49,
          (__int64)&v53,
          (__int64 *)&v52);
      }
    }
    *(_DWORD *)(a3 + 40) |= 0x10000u;
    return 1LL;
  }
}
