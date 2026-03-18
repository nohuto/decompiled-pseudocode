/*
 * XREFs of ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011FA24
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140125A90 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QuerySystemMemorySize@VIDMM_GLOBAL@@SA_KPEAX@Z @ 0x14009A6D4 (-QuerySystemMemorySize@VIDMM_GLOBAL@@SA_KPEAX@Z.c)
 *     ?ReadVPRConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011EB14 (-ReadVPRConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011ECE0 (-ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadBudgetConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011EF18 (-ReadBudgetConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadGpuVaConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011F714 (-ReadGpuVaConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadGpuVaPagingHistoryConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140120818 (-ReadGpuVaPagingHistoryConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadPowerConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x1401209E0 (-ReadPowerConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadWorkingSetConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140120ADC (-ReadWorkingSetConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadPagingConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140120BD4 (-ReadPagingConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadCommitLimitInformation@VIDMM_GLOBAL@@SAXXZ @ 0x14012122C (-ReadCommitLimitInformation@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadHeapConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140121478 (-ReadHeapConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140121A24 (-ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140121FC8 (-ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReadConfiguration(void *a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int *v5; // rsi
  ULONG v6; // edi
  __int64 v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v15; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+5Ch] [rbp-ACh] BYREF
  int v23; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-A0h] BYREF
  int v26; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v27; // [rsp+70h] [rbp-98h] BYREF
  int v28; // [rsp+74h] [rbp-94h] BYREF
  int v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v31; // [rsp+80h] [rbp-88h] BYREF
  int v32; // [rsp+84h] [rbp-84h] BYREF
  int v33; // [rsp+88h] [rbp-80h] BYREF
  int v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v35; // [rsp+90h] [rbp-78h] BYREF
  int v36; // [rsp+94h] [rbp-74h] BYREF
  int v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v39; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+A4h] [rbp-64h] BYREF
  int v41; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v42; // [rsp+ACh] [rbp-5Ch] BYREF
  int v43; // [rsp+B0h] [rbp-58h] BYREF
  int v44; // [rsp+B4h] [rbp-54h] BYREF
  int v45; // [rsp+B8h] [rbp-50h] BYREF
  int v46; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v47; // [rsp+C0h] [rbp-48h] BYREF
  int v48; // [rsp+C4h] [rbp-44h] BYREF
  int v49; // [rsp+C8h] [rbp-40h] BYREF
  int v50; // [rsp+CCh] [rbp-3Ch] BYREF
  int v51; // [rsp+D0h] [rbp-38h] BYREF
  int v52; // [rsp+D4h] [rbp-34h] BYREF
  int v53; // [rsp+D8h] [rbp-30h] BYREF
  int v54; // [rsp+DCh] [rbp-2Ch] BYREF
  int v55; // [rsp+E0h] [rbp-28h] BYREF
  int v56; // [rsp+E4h] [rbp-24h] BYREF
  int v57; // [rsp+E8h] [rbp-20h] BYREF
  int v58; // [rsp+ECh] [rbp-1Ch] BYREF
  int v59; // [rsp+F0h] [rbp-18h] BYREF
  int v60; // [rsp+F4h] [rbp-14h] BYREF
  int v61; // [rsp+F8h] [rbp-10h] BYREF
  int v62; // [rsp+FCh] [rbp-Ch] BYREF
  int v63; // [rsp+100h] [rbp-8h] BYREF
  int v64; // [rsp+104h] [rbp-4h] BYREF
  int v65; // [rsp+108h] [rbp+0h] BYREF
  int v66; // [rsp+10Ch] [rbp+4h] BYREF
  int v67; // [rsp+110h] [rbp+8h] BYREF
  int v68; // [rsp+114h] [rbp+Ch] BYREF
  int v69; // [rsp+118h] [rbp+10h] BYREF
  int v70; // [rsp+11Ch] [rbp+14h] BYREF
  int v71; // [rsp+120h] [rbp+18h] BYREF
  int v72; // [rsp+124h] [rbp+1Ch] BYREF
  int v73; // [rsp+128h] [rbp+20h] BYREF
  int v74; // [rsp+12Ch] [rbp+24h] BYREF
  int v75; // [rsp+130h] [rbp+28h] BYREF
  int v76; // [rsp+134h] [rbp+2Ch] BYREF
  int v77; // [rsp+138h] [rbp+30h] BYREF
  int v78; // [rsp+13Ch] [rbp+34h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+140h] [rbp+38h] BYREF
  struct _UNICODE_STRING String; // [rsp+150h] [rbp+48h] BYREF
  __int128 v81; // [rsp+160h] [rbp+58h]
  __int128 v82; // [rsp+170h] [rbp+68h]
  __int128 v83; // [rsp+180h] [rbp+78h]
  __int64 v84; // [rsp+190h] [rbp+88h]
  struct _UNICODE_STRING DestinationString; // [rsp+198h] [rbp+90h] BYREF
  _OWORD v86[116]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v87; // [rsp+8E8h] [rbp+7E0h] BYREF
  _BYTE v88[64]; // [rsp+8F8h] [rbp+7F0h] BYREF

  qword_14008A320 = VIDMM_GLOBAL::QuerySystemMemorySize(a1);
  qword_14008A318 = qword_14008A320;
  v1 = 0;
  v48 = 0;
  v17 = 25;
  v13 = 25;
  v15 = 0;
  v53 = 0;
  v18 = 40;
  v14 = 40;
  v19 = 0;
  v55 = 4;
  v49 = 10;
  v29 = 10;
  v50 = 15;
  v30 = 15;
  v51 = 5;
  v31 = 5;
  v52 = 300;
  v32 = 300;
  v2 = 256;
  if ( (unsigned __int64)qword_14008A320 > 0x20000000 )
    v2 = 1024;
  v21 = 4;
  v54 = v2;
  v20 = v2;
  v3 = 0x800000;
  if ( (unsigned __int64)qword_14008A320 > 0x20000000 )
    v3 = 0x2000000;
  v58 = 10;
  v56 = v3;
  v22 = v3;
  v4 = 0x400000;
  if ( (unsigned __int64)qword_14008A320 > 0x20000000 )
    v4 = 0x1000000;
  v24 = 10;
  v57 = v4;
  v23 = v4;
  v60 = 1;
  v26 = 1;
  v61 = 1;
  v28 = 1;
  v59 = g_IsInternalRelease != 0 ? 0x40 : 0;
  v25 = v59;
  v63 = 0x100000;
  v33 = 0x100000;
  v65 = 60;
  v35 = 60;
  v66 = 60;
  v36 = 60;
  v68 = 8;
  v38 = 8;
  v62 = 1;
  v27 = 1;
  v64 = 0x800000;
  v34 = 0x800000;
  v67 = 1;
  v37 = 1;
  v69 = 2;
  v39 = 2;
  v70 = 0;
  v40 = 0;
  v72 = 200;
  v42 = 200;
  v74 = 4096;
  v44 = 4096;
  v75 = 6;
  v45 = 6;
  v76 = 20;
  v46 = 20;
  v77 = 900;
  v47 = 900;
  *(_QWORD *)&v86[1] = L"PinnedMemoryLimit";
  *((_QWORD *)&v86[1] + 1) = &v13;
  *((_QWORD *)&v86[2] + 1) = &v17;
  *((_QWORD *)&v86[4] + 1) = L"PinnedApertureMemoryLimit";
  *(_QWORD *)&v86[5] = &v14;
  *(_QWORD *)&v86[6] = &v18;
  *(_QWORD *)&v86[8] = L"PagesHistory";
  *((_QWORD *)&v86[8] + 1) = &v15;
  *((_QWORD *)&v86[9] + 1) = &v48;
  *((_QWORD *)&v86[11] + 1) = L"MemTransferThreshold";
  *(_QWORD *)&v86[12] = &v29;
  *(_QWORD *)&v86[13] = &v49;
  *(_QWORD *)&v86[15] = L"ExcessiveMemTransferFlipThreshold";
  *((_QWORD *)&v86[15] + 1) = &v30;
  *((_QWORD *)&v86[16] + 1) = &v50;
  *((_QWORD *)&v86[18] + 1) = L"ExcessiveMemTransferPenalty";
  *(_QWORD *)&v86[19] = &v31;
  v71 = 0;
  v41 = 0;
  v73 = 1;
  v43 = 1;
  *(_QWORD *)&v86[0] = 0LL;
  DWORD2(v86[0]) = 288;
  LODWORD(v86[2]) = 67108868;
  LODWORD(v86[3]) = 4;
  *((_QWORD *)&v86[3] + 1) = 0LL;
  LODWORD(v86[4]) = 288;
  DWORD2(v86[5]) = 67108868;
  DWORD2(v86[6]) = 4;
  *(_QWORD *)&v86[7] = 0LL;
  DWORD2(v86[7]) = 288;
  LODWORD(v86[9]) = 67108868;
  LODWORD(v86[10]) = 4;
  *((_QWORD *)&v86[10] + 1) = 0LL;
  LODWORD(v86[11]) = 288;
  DWORD2(v86[12]) = 67108868;
  DWORD2(v86[13]) = 4;
  *(_QWORD *)&v86[14] = 0LL;
  DWORD2(v86[14]) = 288;
  LODWORD(v86[16]) = 67108868;
  LODWORD(v86[17]) = 4;
  *((_QWORD *)&v86[17] + 1) = 0LL;
  LODWORD(v86[18]) = 288;
  DWORD2(v86[19]) = 67108868;
  DWORD2(v86[20]) = 4;
  *(_QWORD *)&v86[20] = &v51;
  *(_QWORD *)&v86[22] = L"EventThrottleThreshold";
  *((_QWORD *)&v86[22] + 1) = &v32;
  *((_QWORD *)&v86[23] + 1) = &v52;
  *((_QWORD *)&v86[25] + 1) = L"DisablePrefetching";
  *(_QWORD *)&v86[26] = &v19;
  *(_QWORD *)&v86[27] = &v53;
  *(_QWORD *)&v86[29] = L"NbDmaBufferLimitPerDevice";
  *((_QWORD *)&v86[29] + 1) = &v20;
  *((_QWORD *)&v86[30] + 1) = &v54;
  *((_QWORD *)&v86[32] + 1) = L"NbCddDmaBufferLimitPerDevice";
  *(_QWORD *)&v86[33] = &v21;
  *(_QWORD *)&v86[34] = &v55;
  *(_QWORD *)&v86[36] = L"DmaBufferBytesLimitAllDevices";
  *((_QWORD *)&v86[36] + 1) = &v22;
  *((_QWORD *)&v86[37] + 1) = &v56;
  *((_QWORD *)&v86[39] + 1) = L"DmaBufferListBytesLimitAllDevices";
  *(_QWORD *)&v86[40] = &v23;
  *(_QWORD *)&v86[41] = &v57;
  *(_QWORD *)&v86[43] = L"NbDmaBufferLimitCompareWatermark";
  *((_QWORD *)&v86[43] + 1) = &v24;
  *((_QWORD *)&v86[44] + 1) = &v58;
  *((_QWORD *)&v86[46] + 1) = L"NbPagingHistoryRecords";
  *(_QWORD *)&v86[47] = &v25;
  *(_QWORD *)&v86[21] = 0LL;
  DWORD2(v86[21]) = 288;
  LODWORD(v86[23]) = 67108868;
  LODWORD(v86[24]) = 4;
  *((_QWORD *)&v86[24] + 1) = 0LL;
  LODWORD(v86[25]) = 288;
  DWORD2(v86[26]) = 67108868;
  DWORD2(v86[27]) = 4;
  *(_QWORD *)&v86[28] = 0LL;
  DWORD2(v86[28]) = 288;
  LODWORD(v86[30]) = 67108868;
  LODWORD(v86[31]) = 4;
  *((_QWORD *)&v86[31] + 1) = 0LL;
  LODWORD(v86[32]) = 288;
  DWORD2(v86[33]) = 67108868;
  DWORD2(v86[34]) = 4;
  *(_QWORD *)&v86[35] = 0LL;
  DWORD2(v86[35]) = 288;
  LODWORD(v86[37]) = 67108868;
  LODWORD(v86[38]) = 4;
  *((_QWORD *)&v86[38] + 1) = 0LL;
  LODWORD(v86[39]) = 288;
  DWORD2(v86[40]) = 67108868;
  DWORD2(v86[41]) = 4;
  *(_QWORD *)&v86[42] = 0LL;
  DWORD2(v86[42]) = 288;
  LODWORD(v86[44]) = 67108868;
  LODWORD(v86[45]) = 4;
  *((_QWORD *)&v86[45] + 1) = 0LL;
  LODWORD(v86[46]) = 288;
  DWORD2(v86[47]) = 67108868;
  *(_QWORD *)&v86[48] = &v59;
  *(_QWORD *)&v86[50] = L"PinDWMAllocationBackingStore";
  *((_QWORD *)&v86[50] + 1) = &v26;
  *((_QWORD *)&v86[51] + 1) = &v60;
  *((_QWORD *)&v86[53] + 1) = L"RemovePagesFromWorkingSetOnPagingForDwm";
  *(_QWORD *)&v86[54] = &v28;
  *(_QWORD *)&v86[55] = &v61;
  *(_QWORD *)&v86[57] = L"UseUnreset";
  *((_QWORD *)&v86[57] + 1) = &v27;
  *((_QWORD *)&v86[58] + 1) = &v62;
  *((_QWORD *)&v86[60] + 1) = L"PrivateHeapPackingThreshold";
  *(_QWORD *)&v86[61] = &v33;
  *(_QWORD *)&v86[62] = &v63;
  *(_QWORD *)&v86[64] = L"PrivateHeapPackingBlockSize";
  *((_QWORD *)&v86[64] + 1) = &v34;
  *((_QWORD *)&v86[65] + 1) = &v64;
  *((_QWORD *)&v86[67] + 1) = L"EvictTemporaryPeriod";
  *(_QWORD *)&v86[68] = &v35;
  *(_QWORD *)&v86[69] = &v65;
  *(_QWORD *)&v86[71] = L"EvictUnusedPeriod";
  *((_QWORD *)&v86[71] + 1) = &v36;
  *((_QWORD *)&v86[72] + 1) = &v66;
  *((_QWORD *)&v86[74] + 1) = L"ProcessPendingOfferPeriod";
  *(_QWORD *)&v86[75] = &v37;
  *(_QWORD *)&v86[76] = &v67;
  DWORD2(v86[48]) = 4;
  *(_QWORD *)&v86[49] = 0LL;
  DWORD2(v86[49]) = 288;
  LODWORD(v86[51]) = 67108868;
  LODWORD(v86[52]) = 4;
  *((_QWORD *)&v86[52] + 1) = 0LL;
  LODWORD(v86[53]) = 288;
  DWORD2(v86[54]) = 67108868;
  DWORD2(v86[55]) = 4;
  *(_QWORD *)&v86[56] = 0LL;
  DWORD2(v86[56]) = 288;
  LODWORD(v86[58]) = 67108868;
  LODWORD(v86[59]) = 4;
  *((_QWORD *)&v86[59] + 1) = 0LL;
  LODWORD(v86[60]) = 288;
  DWORD2(v86[61]) = 67108868;
  DWORD2(v86[62]) = 4;
  *(_QWORD *)&v86[63] = 0LL;
  DWORD2(v86[63]) = 288;
  LODWORD(v86[65]) = 67108868;
  LODWORD(v86[66]) = 4;
  *((_QWORD *)&v86[66] + 1) = 0LL;
  LODWORD(v86[67]) = 288;
  DWORD2(v86[68]) = 67108868;
  DWORD2(v86[69]) = 4;
  *(_QWORD *)&v86[70] = 0LL;
  DWORD2(v86[70]) = 288;
  LODWORD(v86[72]) = 67108868;
  LODWORD(v86[73]) = 4;
  *((_QWORD *)&v86[73] + 1) = 0LL;
  LODWORD(v86[74]) = 288;
  DWORD2(v86[75]) = 67108868;
  DWORD2(v86[76]) = 4;
  *(_QWORD *)&v86[78] = L"ProcessSysmemOfferPeriod";
  *((_QWORD *)&v86[78] + 1) = &v38;
  *((_QWORD *)&v86[79] + 1) = &v68;
  *((_QWORD *)&v86[81] + 1) = L"SegmentBalancingPolicy";
  *(_QWORD *)&v86[82] = &v39;
  *(_QWORD *)&v86[83] = &v69;
  *(_QWORD *)&v86[85] = L"BugcheckOnApertureCorruption";
  *((_QWORD *)&v86[85] + 1) = &v40;
  *((_QWORD *)&v86[86] + 1) = &v70;
  *((_QWORD *)&v86[88] + 1) = L"QuickApertureCorruptionCheck";
  *(_QWORD *)&v86[89] = &v41;
  *(_QWORD *)&v86[90] = &v71;
  *(_QWORD *)&v86[92] = L"DirectFlipMemoryRequirement";
  *((_QWORD *)&v86[92] + 1) = &v42;
  *((_QWORD *)&v86[93] + 1) = &v72;
  *((_QWORD *)&v86[95] + 1) = L"CommitProcessHeapOnDemand";
  *(_QWORD *)&v86[96] = &v43;
  *(_QWORD *)&v86[97] = &v73;
  *(_QWORD *)&v86[99] = L"SegmentCleanupSizeThreshold";
  *((_QWORD *)&v86[99] + 1) = &v44;
  *((_QWORD *)&v86[100] + 1) = &v74;
  *((_QWORD *)&v86[102] + 1) = L"SegmentCleanupCountThreshold";
  *(_QWORD *)&v86[103] = &v45;
  *(_QWORD *)&v86[104] = &v75;
  *(_QWORD *)&v86[77] = 0LL;
  DWORD2(v86[77]) = 288;
  LODWORD(v86[79]) = 67108868;
  LODWORD(v86[80]) = 4;
  *((_QWORD *)&v86[80] + 1) = 0LL;
  LODWORD(v86[81]) = 288;
  DWORD2(v86[82]) = 67108868;
  DWORD2(v86[83]) = 4;
  *(_QWORD *)&v86[84] = 0LL;
  DWORD2(v86[84]) = 288;
  LODWORD(v86[86]) = 67108868;
  LODWORD(v86[87]) = 4;
  *((_QWORD *)&v86[87] + 1) = 0LL;
  LODWORD(v86[88]) = 288;
  DWORD2(v86[89]) = 67108868;
  DWORD2(v86[90]) = 4;
  *(_QWORD *)&v86[91] = 0LL;
  DWORD2(v86[91]) = 288;
  LODWORD(v86[93]) = 67108868;
  LODWORD(v86[94]) = 4;
  *((_QWORD *)&v86[94] + 1) = 0LL;
  LODWORD(v86[95]) = 288;
  DWORD2(v86[96]) = 67108868;
  DWORD2(v86[97]) = 4;
  *(_QWORD *)&v86[98] = 0LL;
  DWORD2(v86[98]) = 288;
  LODWORD(v86[100]) = 67108868;
  LODWORD(v86[101]) = 4;
  *((_QWORD *)&v86[101] + 1) = 0LL;
  LODWORD(v86[102]) = 288;
  DWORD2(v86[103]) = 67108868;
  DWORD2(v86[104]) = 4;
  DWORD2(v86[105]) = 288;
  LODWORD(v86[107]) = 67108868;
  *(_QWORD *)&v86[106] = L"SegmentCleanupTime";
  LODWORD(v86[109]) = 288;
  *((_QWORD *)&v86[106] + 1) = &v46;
  DWORD2(v86[110]) = 67108868;
  *((_QWORD *)&v86[107] + 1) = &v76;
  *(_QWORD *)&v86[105] = 0LL;
  *((_QWORD *)&v86[109] + 1) = L"SelfRefreshVramForceEvictionTimer";
  LODWORD(v86[108]) = 4;
  *(_QWORD *)&v86[110] = &v47;
  *(_QWORD *)&v86[111] = &v77;
  *((_QWORD *)&v86[108] + 1) = 0LL;
  DWORD2(v86[111]) = 4;
  memset(&v86[112], 0, 56);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v86, 0LL, 0LL);
  v5 = dword_14008A348;
  memset(dword_14008A348, 0, sizeof(dword_14008A348));
  memset(v86, 0, 0x738uLL);
  v6 = 0;
  v7 = 0LL;
  do
  {
    memset(v88, 0, sizeof(v88));
    *(_QWORD *)&Destination.Length = 0x400000LL;
    Destination.Buffer = (PWSTR)v88;
    DestinationString = 0LL;
    String = 0LL;
    RtlInitUnicodeString(&DestinationString, L"MaxSegmentSize");
    if ( RtlAppendUnicodeStringToString(&Destination, &DestinationString) >= 0 )
    {
      *(_DWORD *)&String.Length = 0x100000;
      String.Buffer = (PWSTR)&v87;
      if ( RtlIntegerToUnicodeString(v6, 0, &String) >= 0 && RtlAppendUnicodeStringToString(&Destination, &String) >= 0 )
      {
        *(_QWORD *)&v82 = Destination.Buffer;
        *(_QWORD *)&v81 = 0LL;
        *((_QWORD *)&v82 + 1) = &v16;
        *((_QWORD *)&v81 + 1) = 288LL;
        *((_QWORD *)&v83 + 1) = &v78;
        v86[1] = v82;
        v86[0] = v81;
        *(_QWORD *)&v83 = 67108868LL;
        v84 = 4LL;
        v86[2] = v83;
        *(_QWORD *)&v86[3] = 4LL;
        v78 = 0;
        v16 = 0;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v86, 0LL, 0LL);
        v8 = v16;
        *v5 = v16;
        if ( v8 )
        {
          v9 = (v8 + 4095) & 0xFFFFF000;
          if ( v9 < 0x800000 )
            v9 = 0x800000;
          *v5 = v9;
          WdLogSingleEntry2(4LL, v7, v9);
          WdLogGlobalForLineNumber = 248;
        }
      }
    }
    ++v6;
    ++v7;
    ++v5;
  }
  while ( v6 < 0x20 );
  WdLogSingleEntry1(4LL, v13);
  v10 = v17;
  if ( v13 < 0x5A )
    v10 = v13;
  dword_14008A338 = v10;
  v11 = v18;
  if ( v14 < 0x5A )
    v11 = v14;
  dword_14008A33C = v11;
  v12 = 0x7FFFFFF;
  WdLogGlobalForLineNumber = 256;
  if ( v15 < 0x7FFFFFF )
    v12 = v15;
  dword_14008A344 = v12;
  dword_14008A340 = 0;
  dword_14008A448 = v20;
  dword_14008A44C = v21;
  dword_14008A450 = v22;
  dword_14008A454 = v23;
  dword_14008A458 = v24;
  dword_14008A45C = v25;
  qword_14008A460 = (unsigned int)(v29 << 20);
  dword_14008A468 = v30;
  dword_14008A46C = v31;
  dword_14008A478 = v33;
  dword_14008A47C = v34;
  dword_14008A4A0 = v39;
  qword_14008A470 = (unsigned int)(10000000 * v32);
  qword_14008A480 = (unsigned int)(10000000 * v35);
  qword_14008A488 = (unsigned int)(10000000 * v36);
  qword_14008A490 = (unsigned int)(10000000 * v37);
  qword_14008A498 = (unsigned int)(10000000 * v38);
  VIDMM_GLOBAL::_Config = (v40 != 0 ? 0x10 : 0) | (v26 != 0 ? 2 : 0) | v19 & 1 | VIDMM_GLOBAL::_Config & 0xFFFFFFE0 | (4 * (v28 & 1 | (unsigned __int8)(2 * (v27 & 1)))) & 0xEF;
  dword_14008A304 = v41 != 0;
  qword_14008A310 = (unsigned __int64)v42 << 20;
  LOBYTE(v1) = v43 != 0;
  qword_14008A4D0 = (unsigned int)(v44 << 10);
  dword_14008A4D8 = v45;
  qword_14008A4E0 = (unsigned int)(10000 * v46);
  dword_14008A308 = v1;
  qword_14008A688 = 10000000LL * v47;
  VIDMM_GLOBAL::ReadCommitLimitInformation();
  VIDMM_GLOBAL::ReadWorkingSetConfiguration();
  VIDMM_GLOBAL::ReadUnusedAllocationConfiguration();
  VIDMM_GLOBAL::ReadPreparationPeriodConfiguration();
  VIDMM_GLOBAL::ReadHeapConfiguration();
  VIDMM_GLOBAL::ReadPowerConfiguration();
  VIDMM_GLOBAL::ReadGpuVaPagingHistoryConfiguration();
  VIDMM_GLOBAL::ReadGpuVaConfiguration();
  VIDMM_GLOBAL::ReadPagingConfiguration();
  VIDMM_GLOBAL::ReadTestAndStagingConfiguration();
  VIDMM_GLOBAL::ReadVPRConfiguration();
  VIDMM_GLOBAL::ReadBudgetConfiguration();
}
