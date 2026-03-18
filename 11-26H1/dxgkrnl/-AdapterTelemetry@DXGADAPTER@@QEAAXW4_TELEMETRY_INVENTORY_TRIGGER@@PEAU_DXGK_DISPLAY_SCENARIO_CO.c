/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x140358108
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140357FA0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DpiGetMdmStatus @ 0x1400151E4 (DpiGetMdmStatus.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U2@U?$_tlgWrapSz@G@@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U2@U3@U2@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U1@U2@U2@U3@U1@U1@U1@U2@U2@U2@U4@U4@U4@U4@U4@U3@U1@U1@U1@U4@U_tlgWrapperBinary@@U1@U3@U4@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperArray@$00@@U8@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@55554AEBU?$_tlgWrapSz@G@@3555555555454555555554434453334446666653336AEBU_tlgWrapperBinary@@3565AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperArray@$00@@AEBU?$_tlgWrapperArray@$00@@555@Z @ 0x140049208 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U-$.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEBVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1400561EC (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEBVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     DpiGetAdapterMdmSupport @ 0x1400629C4 (DpiGetAdapterMdmSupport.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1400637AC (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140358D30 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, GUID *a3, int a4, int a5)
{
  bool v5; // zf
  int v7; // r14d
  bool v8; // cf
  BOOL v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // rdi
  int v14; // r12d
  unsigned int v15; // r12d
  __int64 v16; // rcx
  int v17; // r15d
  _DWORD *v18; // rax
  int v19; // r15d
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r10
  unsigned __int64 i; // rcx
  __int64 *v25; // rax
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r11
  unsigned int v32; // ebx
  __int64 v33; // r10
  unsigned int v34; // eax
  unsigned int j; // r9d
  __int64 v36; // r9
  __int16 v37; // r10
  __int64 v38; // r11
  int v39; // eax
  int v40; // ebx
  unsigned int v41; // ecx
  int v42; // eax
  __int64 v43; // rcx
  BOOL v44; // eax
  GUID *p_ActivityId; // r8
  __int16 v46; // [rsp+240h] [rbp-80h] BYREF
  __int16 v47; // [rsp+242h] [rbp-7Eh] BYREF
  __int16 v48; // [rsp+244h] [rbp-7Ch] BYREF
  char v49; // [rsp+246h] [rbp-7Ah]
  int v50; // [rsp+248h] [rbp-78h] BYREF
  unsigned int NumDifferentPhysicalAdapters; // [rsp+24Ch] [rbp-74h] BYREF
  int v52; // [rsp+250h] [rbp-70h] BYREF
  int v53; // [rsp+254h] [rbp-6Ch] BYREF
  int v54; // [rsp+258h] [rbp-68h] BYREF
  __int16 v55; // [rsp+25Ch] [rbp-64h] BYREF
  int v56; // [rsp+260h] [rbp-60h] BYREF
  int v57; // [rsp+264h] [rbp-5Ch] BYREF
  int v58; // [rsp+268h] [rbp-58h] BYREF
  unsigned int v59; // [rsp+26Ch] [rbp-54h] BYREF
  int v60; // [rsp+270h] [rbp-50h] BYREF
  int v61; // [rsp+274h] [rbp-4Ch] BYREF
  unsigned int v62; // [rsp+278h] [rbp-48h] BYREF
  BOOL v63; // [rsp+27Ch] [rbp-44h] BYREF
  BOOL v64; // [rsp+280h] [rbp-40h] BYREF
  __int64 v65; // [rsp+288h] [rbp-38h] BYREF
  unsigned __int64 v66; // [rsp+290h] [rbp-30h] BYREF
  unsigned __int16 *v67; // [rsp+298h] [rbp-28h] BYREF
  unsigned __int16 *v68; // [rsp+2A0h] [rbp-20h] BYREF
  __int64 v69; // [rsp+2A8h] [rbp-18h] BYREF
  unsigned __int16 *v70; // [rsp+2B0h] [rbp-10h] BYREF
  unsigned __int16 *v71; // [rsp+2B8h] [rbp-8h] BYREF
  __int64 v72; // [rsp+2C0h] [rbp+0h] BYREF
  unsigned __int16 *v73; // [rsp+2C8h] [rbp+8h] BYREF
  int v74; // [rsp+2D0h] [rbp+10h] BYREF
  int v75; // [rsp+2D4h] [rbp+14h] BYREF
  int v76; // [rsp+2D8h] [rbp+18h] BYREF
  int v77; // [rsp+2DCh] [rbp+1Ch] BYREF
  int v78; // [rsp+2E0h] [rbp+20h] BYREF
  int v79; // [rsp+2E4h] [rbp+24h] BYREF
  int v80; // [rsp+2E8h] [rbp+28h] BYREF
  int v81; // [rsp+2ECh] [rbp+2Ch] BYREF
  int v82; // [rsp+2F0h] [rbp+30h] BYREF
  int v83; // [rsp+2F4h] [rbp+34h] BYREF
  BOOL v84; // [rsp+2F8h] [rbp+38h] BYREF
  int v85; // [rsp+2FCh] [rbp+3Ch] BYREF
  int v86; // [rsp+300h] [rbp+40h] BYREF
  _DWORD v87[5]; // [rsp+304h] [rbp+44h] BYREF
  unsigned __int64 v88; // [rsp+318h] [rbp+58h] BYREF
  unsigned __int64 v89; // [rsp+320h] [rbp+60h] BYREF
  unsigned __int64 v90; // [rsp+328h] [rbp+68h] BYREF
  DXGADAPTER *v91[2]; // [rsp+330h] [rbp+70h] BYREF
  __int128 v92; // [rsp+340h] [rbp+80h] BYREF
  PVOID P[2]; // [rsp+350h] [rbp+90h] BYREF
  __int64 v94; // [rsp+360h] [rbp+A0h] BYREF
  unsigned __int16 *v95; // [rsp+368h] [rbp+A8h] BYREF
  __int64 v96; // [rsp+370h] [rbp+B0h] BYREF
  __int64 v97; // [rsp+378h] [rbp+B8h] BYREF
  __int64 v98; // [rsp+380h] [rbp+C0h] BYREF
  unsigned __int16 *v99; // [rsp+388h] [rbp+C8h] BYREF
  unsigned __int16 *v100; // [rsp+390h] [rbp+D0h] BYREF
  unsigned __int16 *v101; // [rsp+398h] [rbp+D8h] BYREF
  unsigned __int16 *v102; // [rsp+3A0h] [rbp+E0h] BYREF
  PVOID *v103; // [rsp+3A8h] [rbp+E8h] BYREF
  unsigned __int64 v104; // [rsp+3B0h] [rbp+F0h] BYREF
  unsigned __int64 v105; // [rsp+3B8h] [rbp+F8h] BYREF
  unsigned __int64 v106; // [rsp+3C0h] [rbp+100h] BYREF
  __int64 v107; // [rsp+3C8h] [rbp+108h] BYREF
  __int64 v108; // [rsp+3D0h] [rbp+110h] BYREF
  __int64 v109; // [rsp+3D8h] [rbp+118h] BYREF
  unsigned __int16 *v110; // [rsp+3E0h] [rbp+120h] BYREF
  __int64 v111; // [rsp+3E8h] [rbp+128h] BYREF
  GUID *v112; // [rsp+3F0h] [rbp+130h]
  PVOID *v113; // [rsp+3F8h] [rbp+138h]
  PVOID v114[2]; // [rsp+400h] [rbp+140h] BYREF
  __int128 v115; // [rsp+410h] [rbp+150h] BYREF
  _BYTE *v116; // [rsp+428h] [rbp+168h]
  __int16 v117; // [rsp+430h] [rbp+170h]
  _BYTE *v118; // [rsp+438h] [rbp+178h]
  __int16 v119; // [rsp+440h] [rbp+180h]
  __int64 *v120; // [rsp+448h] [rbp+188h] BYREF
  __int16 v121; // [rsp+450h] [rbp+190h]
  __int64 v122; // [rsp+460h] [rbp+1A0h] BYREF
  int v123; // [rsp+468h] [rbp+1A8h]
  const wchar_t *v124; // [rsp+470h] [rbp+1B0h]
  PVOID *v125; // [rsp+478h] [rbp+1B8h]
  int v126; // [rsp+480h] [rbp+1C0h]
  __int64 v127; // [rsp+488h] [rbp+1C8h]
  int v128; // [rsp+490h] [rbp+1D0h]
  __int64 v129; // [rsp+498h] [rbp+1D8h]
  int v130; // [rsp+4A0h] [rbp+1E0h]
  __int64 v131; // [rsp+4A8h] [rbp+1E8h]
  __int128 v132; // [rsp+4B0h] [rbp+1F0h]
  __int128 v133; // [rsp+4C0h] [rbp+200h]
  _OWORD v134[23]; // [rsp+4D0h] [rbp+210h] BYREF
  _DWORD v135[192]; // [rsp+640h] [rbp+380h] BYREF
  GUID ActivityId; // [rsp+940h] [rbp+680h] BYREF
  _BYTE v137[64]; // [rsp+950h] [rbp+690h] BYREF
  _BYTE v138[64]; // [rsp+990h] [rbp+6D0h] BYREF

  v5 = *(_QWORD *)(a1 + 904) == 0LL;
  v61 = *(_DWORD *)(a1 + 3044);
  v57 = a4;
  v64 = !v5;
  v7 = 1;
  v8 = *(_DWORD *)(a1 + 296) == 0;
  v5 = *(_DWORD *)(a1 + 296) == 1;
  v112 = a3;
  v9 = !v8 && !v5;
  v60 = a2;
  v5 = (*(_DWORD *)(a1 + 444) & 0x20000) == 0;
  v63 = v9;
  if ( !v5 || (v10 = *(_DWORD *)(a1 + 3016) >> 1, v53 = 0, (v10 & 1) != 0) )
    v53 = 1;
  v115 = 0LL;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)a1);
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)&v115);
  if ( *(_QWORD *)(a1 + 3168) || *(_QWORD *)(a1 + 3160) )
  {
    v11 = *(_QWORD *)(a1 + 3160);
    v90 = 0LL;
    v89 = 0LL;
    LOWORD(v12) = 0;
    v88 = 0LL;
    v13 = 0LL;
    v48 = 0;
    v14 = 0;
    v47 = 0;
    LOBYTE(v46) = 0;
    v54 = 0;
    *(_OWORD *)P = 0LL;
    v92 = 0LL;
    if ( v11 )
    {
      v15 = *(_DWORD *)(v11 + 24);
      v48 = *(_WORD *)(a1 + 1896);
      v47 = *(_WORD *)(a1 + 1900);
      v14 = (v15 >> 5) & 1;
    }
    if ( (*(_DWORD *)(a1 + 444) & 0x100) != 0 )
    {
      v91[0] = 0LL;
      if ( (int)DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)a1, 0, v91) >= 0 )
        v13 = *(_QWORD *)((char *)v91[0] + 412);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v91, 0LL);
    }
    v16 = *(_QWORD *)(a1 + 3168);
    v17 = 0;
    if ( v16 )
    {
      if ( !*(_BYTE *)(a1 + 209) )
      {
        v66 = 0LL;
        VIDMM_EXPORT::VidMmGetTotalSegmentSize(
          *(VIDMM_EXPORT **)(v16 + 760),
          *(const struct VIDMM_GLOBAL **)(v16 + 768),
          0,
          &v66,
          &v66,
          &v66,
          &v90,
          &v89,
          &v88);
      }
      v16 = *(_QWORD *)(a1 + 3168);
      LOBYTE(v46) = *(_BYTE *)(v16 + 1880);
      v18 = *(_DWORD **)(a1 + 3048);
      v12 = (*v18 >> 15) & 3;
      v19 = *v18 >> 20;
      v54 = (*v18 >> 18) & 3;
      v17 = v19 & 1;
    }
    v71 = (unsigned __int16 *)(v16 + 320);
    if ( v16 )
    {
      v67 = (unsigned __int16 *)(v16 + 336);
      v73 = (unsigned __int16 *)(v16 + 512);
      v70 = (unsigned __int16 *)(v16 + 368);
      v68 = (unsigned __int16 *)(v16 + 352);
    }
    else
    {
      v71 = (unsigned __int16 *)&v92;
      v67 = (unsigned __int16 *)&v92;
      v68 = (unsigned __int16 *)&v92;
      v70 = (unsigned __int16 *)&v92;
      v73 = (unsigned __int16 *)&v92;
    }
    LODWORD(v66) = IoQueryFullDriverPath(
                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 64LL) + 40LL) + 32LL),
                     P);
    if ( (v66 & 0x80000000) != 0LL )
      *(_OWORD *)P = 0LL;
    v20 = 0LL;
    v21 = (_QWORD *)(a1 + 456);
    v65 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    for ( i = 0LL; i < 0xA6; ++i )
    {
      if ( *v21 )
      {
        if ( i >= 0x40 )
        {
          if ( i >= 0x80 )
          {
            v22 |= 1LL << ((unsigned __int8)i + 0x80);
          }
          else
          {
            v23 |= 1LL << ((unsigned __int8)i - 64);
            v20 = v65;
          }
        }
        else
        {
          v20 |= 1LL << i;
          v65 = v20;
        }
      }
      ++v21;
    }
    v25 = *(__int64 **)(a1 + 3048);
    v72 = v22;
    v69 = v23;
    v26 = *v25;
    v124 = L"DxDbVersion";
    v111 = v26;
    v122 = 0LL;
    v127 = 0LL;
    v128 = 0;
    v129 = 0LL;
    v130 = 0;
    v131 = 0LL;
    v125 = v114;
    *(_OWORD *)v114 = 0LL;
    v123 = 292;
    v126 = 16777217;
    v132 = 0LL;
    v133 = 0LL;
    v50 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\Software\\Microsoft\\DirectX", &v122, 0LL, 0LL);
    memset(v135, 0, 0x2F4uLL);
    DpiGetMdmStatus((struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *)v135);
    memset(v134, 0, 0x164uLL);
    DpiGetAdapterMdmSupport(*(_QWORD *)(a1 + 216), v134);
    v27 = v134[0] & 0xF | (16
                         * (BYTE4(v134[0]) & 0xF | (16
                                                  * (BYTE8(v134[0]) & 0xF | (16
                                                                           * (BYTE12(v134[5]) & 0xF | (16 * (v135[185] & 0xF | (16 * (v135[186] & 0xF))))))))));
    v28 = *(_DWORD *)(a1 + 3040);
    v58 = v27;
    v56 = v28;
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)a1);
    memset(v138, 0, sizeof(v138));
    memset(v137, 0, sizeof(v137));
    v29 = 0LL;
    v30 = 0LL;
    v52 = 0;
    if ( NumDifferentPhysicalAdapters )
    {
      v31 = *(_QWORD *)(a1 + 3032);
      v32 = NumDifferentPhysicalAdapters;
      do
      {
        v33 = 352LL * (unsigned int)v30;
        v138[v30] = *(_BYTE *)(v33 + v31);
        v5 = *(_QWORD *)(v33 + v31 + 32) == 0LL;
        v34 = *(unsigned __int16 *)(v33 + v31);
        v59 = v34;
        if ( v5 )
        {
          v29 = v34 + (unsigned int)v29;
        }
        else
        {
          for ( j = 0; j < v34; ++j )
          {
            if ( (unsigned int)v29 >= 0x40 )
              goto LABEL_39;
            v137[v29] = *(_BYTE *)(74LL * j + *(_QWORD *)(v33 + v31 + 32));
            v29 = (unsigned int)(v29 + 1);
            v34 = v59;
          }
          LODWORD(v30) = v52;
        }
        v30 = (unsigned int)(v30 + 1);
        v52 = v30;
      }
      while ( (unsigned int)v30 < v32 );
LABEL_39:
      v27 = v58;
    }
    ++DXGADAPTER::sTelemetrySeqId;
    if ( (unsigned int)dword_140166628 > 5 && tlgKeywordOn((__int64)&dword_140166628, 0x800000000004LL) )
    {
      v39 = (*(unsigned __int8 *)(a1 + 3112) >> 1) & 1;
      v87[4] = v27;
      v87[1] = v39;
      v87[2] = a5;
      v40 = v50;
      v87[3] = v57;
      v116 = v137;
      v117 = v56;
      v118 = v138;
      v113 = v114;
      v120 = &v111;
      v121 = 8;
      v95 = v73;
      v96 = v72;
      v97 = v69;
      v98 = v65;
      v75 = *(_DWORD *)(a1 + 2320);
      v99 = v70;
      v100 = v68;
      v101 = v67;
      v102 = v71;
      v103 = P;
      v55 = *(_WORD *)(a1 + 1904);
      v104 = v88;
      v105 = v89;
      v106 = v90;
      LOWORD(v56) = *(_WORD *)(a1 + 2972);
      LOWORD(v57) = *(_WORD *)(a1 + 2968);
      v107 = *(_QWORD *)(a1 + 412);
      LOWORD(v58) = v61;
      LOWORD(v59) = *(_WORD *)(a1 + 2096);
      v61 = v53;
      v119 = v37;
      v53 = (v62 >> 1) & 1;
      v49 = v37;
      v76 = v62 & 1;
      v74 = v50;
      v94 = v13;
      LOWORD(v50) = v12;
      v78 = (v62 >> 3) & 1;
      v77 = (v62 >> 2) & 1;
      v41 = *(_DWORD *)(a1 + 444);
      v80 = v14;
      v79 = (v41 >> 7) & 1;
      LOWORD(v52) = v54;
      v81 = (unsigned __int8)v46;
      v42 = *(_WORD *)(a1 + 2510) & 1;
      v54 = v17;
      v87[0] = v42;
      v82 = *(unsigned __int8 *)(a1 + 2988);
      v83 = *(unsigned __int8 *)(a1 + 2983);
      v84 = BYTE8(v115) == 0;
      v43 = (v41 >> 6) & 1;
      v86 = *(_DWORD *)(a1 + 2056);
      v108 = *(_QWORD *)(a1 + 2048);
      v109 = *(_QWORD *)(a1 + 2040);
      v46 = *(_WORD *)(a1 + 436);
      LODWORD(v71) = *(_DWORD *)(a1 + 432);
      LODWORD(v67) = *(_DWORD *)(a1 + 428);
      LODWORD(v68) = *(_DWORD *)(a1 + 424);
      LODWORD(v70) = *(_DWORD *)(a1 + 420);
      v110 = *(unsigned __int16 **)(a1 + 1968);
      v85 = v43;
      v44 = (_DWORD)v36 && tlgKeywordOn(v38, 0x200000000000LL);
      LODWORD(v69) = v44;
      if ( !(_DWORD)v36 || !tlgKeywordOn(v38, 0x400000000000LL) )
        v7 = 0;
      p_ActivityId = &ActivityId;
      LODWORD(v73) = DXGADAPTER::sTelemetrySeqId;
      LODWORD(v72) = v7;
      LODWORD(v65) = MEMORY[0xFFFFF780000002C4];
      LOWORD(NumDifferentPhysicalAdapters) = 21;
      v91[0] = (DXGADAPTER *)2048;
      if ( v112 )
        p_ActivityId = v112;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperArray<1>,_tlgWrapperArray<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v43,
        byte_1401410B2,
        p_ActivityId,
        v36,
        (__int64)v91,
        (__int64)&NumDifferentPhysicalAdapters,
        (__int64)&v65,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v69,
        &v110,
        (__int64)&v70,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v71,
        (__int64)&v46,
        &v109,
        (__int64)&v108,
        (__int64)&v86,
        (__int64)&v85,
        (__int64)&v84,
        (__int64)&v83,
        (__int64)&v82,
        (__int64)&v64,
        (__int64)v87,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v50,
        (__int64)&v54,
        (__int64)&v52,
        (__int64)&v63,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v53,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v107,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v60,
        (__int64)&v106,
        (__int64)&v105,
        (__int64)&v104,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v55,
        (unsigned __int16 **)&v103,
        &v102,
        &v101,
        &v100,
        &v99,
        (__int64)&v75,
        (__int64)&v98,
        (__int64)&v97,
        (__int64)&v96,
        &v95,
        (__int64 *)&v120,
        (__int64)&v94,
        (__int64)&v74);
    }
    else
    {
      v40 = v50;
    }
    if ( (v66 & 0x80000000) == 0LL )
      ExFreePoolWithTag(P[1], 0);
    if ( v40 >= 0 )
      ExFreePoolWithTag(v114[1], 0);
  }
}
