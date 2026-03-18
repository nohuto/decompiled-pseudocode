/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x14007C6FC
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x14007C5C0 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x14007F4D8 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U4@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U3@U6@U2@U2@U2@U2@U2@U6@U6@U2@U6@U6@U6@U6@U2@U2@U5@U2@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@55AEBU?$_tlgWrapperByRef@$0BA@@@6AEBU?$_tlgWrapperByVal@$07@@444444AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@88888888888888888858444448848888447477@Z @ 0x14000A3A4 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@U3@U-.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U5@U4@U4@U4@U4@U4@U5@U5@U4@U5@U5@U5@U5@U4@U4@U3@U4@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@66666AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@77777777777777777747666667767777665655@Z @ 0x14007B798 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U-$_tlgWrapperByVal@$07@@U.c)
 *     ?OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z @ 0x14007D21C (-OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x14007E9E4 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     UserUnsafeIsProcessDwm @ 0x1400CD430 (UserUnsafeIsProcessDwm.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, __int64 a2)
{
  int v3; // r14d
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY **v5; // rax
  const WCHAR **v6; // r11
  __int64 v7; // rdi
  struct _CIT_AUDIO_STATS *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // r15
  __int64 UserSessionState; // rax
  __int64 v13; // r8
  int v14; // r12d
  __int64 v15; // rsi
  int v16; // r14d
  __int64 v17; // r10
  __int64 v18; // r9
  bool v19; // zf
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __int16 v22; // ax
  __int64 v23; // r8
  __int64 v24; // r9
  const WCHAR *v25; // r10
  __int64 v26; // r11
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // r10
  const WCHAR *v31; // r13
  const WCHAR *v32; // rdi
  const WCHAR *v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // xmm1_8
  __int16 v36; // ax
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r10
  const WCHAR *v41; // r11
  int v42; // eax
  int v43; // eax
  char v44[2]; // [rsp+1F0h] [rbp-80h] BYREF
  __int16 v45; // [rsp+1F2h] [rbp-7Eh] BYREF
  __int16 v46; // [rsp+1F4h] [rbp-7Ch] BYREF
  __int16 v47; // [rsp+1F6h] [rbp-7Ah] BYREF
  __int16 v48; // [rsp+1F8h] [rbp-78h] BYREF
  __int16 v49; // [rsp+1FAh] [rbp-76h] BYREF
  __int16 v50; // [rsp+1FCh] [rbp-74h] BYREF
  __int16 v51; // [rsp+1FEh] [rbp-72h] BYREF
  __int16 v52; // [rsp+200h] [rbp-70h] BYREF
  __int16 v53; // [rsp+202h] [rbp-6Eh] BYREF
  __int16 v54; // [rsp+204h] [rbp-6Ch] BYREF
  __int16 v55; // [rsp+206h] [rbp-6Ah] BYREF
  __int16 v56; // [rsp+208h] [rbp-68h] BYREF
  __int16 v57; // [rsp+20Ah] [rbp-66h] BYREF
  __int16 v58; // [rsp+20Ch] [rbp-64h] BYREF
  __int16 v59; // [rsp+20Eh] [rbp-62h] BYREF
  __int16 v60; // [rsp+210h] [rbp-60h] BYREF
  __int16 v61; // [rsp+212h] [rbp-5Eh] BYREF
  __int16 v62; // [rsp+214h] [rbp-5Ch] BYREF
  __int16 v63; // [rsp+216h] [rbp-5Ah] BYREF
  __int16 v64; // [rsp+218h] [rbp-58h] BYREF
  __int16 v65; // [rsp+21Ah] [rbp-56h] BYREF
  __int16 v66; // [rsp+21Ch] [rbp-54h] BYREF
  __int16 v67; // [rsp+21Eh] [rbp-52h] BYREF
  __int16 v68; // [rsp+220h] [rbp-50h] BYREF
  __int16 v69; // [rsp+222h] [rbp-4Eh] BYREF
  _WORD v70[2]; // [rsp+224h] [rbp-4Ch] BYREF
  int v71; // [rsp+228h] [rbp-48h] BYREF
  int v72; // [rsp+22Ch] [rbp-44h] BYREF
  int v73; // [rsp+230h] [rbp-40h] BYREF
  int v74; // [rsp+234h] [rbp-3Ch] BYREF
  int v75; // [rsp+238h] [rbp-38h] BYREF
  int v76; // [rsp+23Ch] [rbp-34h] BYREF
  int v77; // [rsp+240h] [rbp-30h] BYREF
  int v78; // [rsp+244h] [rbp-2Ch] BYREF
  int v79; // [rsp+248h] [rbp-28h] BYREF
  int v80; // [rsp+24Ch] [rbp-24h] BYREF
  int v81; // [rsp+250h] [rbp-20h] BYREF
  int v82; // [rsp+254h] [rbp-1Ch] BYREF
  int v83; // [rsp+258h] [rbp-18h] BYREF
  int v84; // [rsp+25Ch] [rbp-14h] BYREF
  int v85; // [rsp+260h] [rbp-10h] BYREF
  const WCHAR *v86; // [rsp+268h] [rbp-8h] BYREF
  __int128 v87; // [rsp+270h] [rbp+0h] BYREF
  __int64 v88; // [rsp+280h] [rbp+10h]
  int v89; // [rsp+288h] [rbp+18h]
  __int16 v90; // [rsp+28Ch] [rbp+1Ch]
  int v91; // [rsp+290h] [rbp+20h] BYREF
  int v92; // [rsp+294h] [rbp+24h] BYREF
  __int64 v93; // [rsp+298h] [rbp+28h] BYREF
  __int64 v94; // [rsp+2A0h] [rbp+30h] BYREF
  __int64 v95; // [rsp+2A8h] [rbp+38h] BYREF
  const WCHAR *v96; // [rsp+2B0h] [rbp+40h] BYREF
  const WCHAR *v97; // [rsp+2B8h] [rbp+48h] BYREF
  __int64 v98; // [rsp+2C0h] [rbp+50h] BYREF
  const WCHAR *v99[2]; // [rsp+2C8h] [rbp+58h] BYREF
  __int64 v100; // [rsp+2D8h] [rbp+68h] BYREF
  __int64 v101[8]; // [rsp+2E0h] [rbp+70h] BYREF
  __int64 v102; // [rsp+330h] [rbp+C0h] BYREF
  char v103; // [rsp+340h] [rbp+D0h] BYREF
  char v104; // [rsp+348h] [rbp+D8h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)a1;
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 8) != a1
    || (v5 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)a1 + 1), *v5 != a1) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _CIT_INTERACTION_SUMMARY *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = v99;
  *((_QWORD *)a1 + 1) = a1;
  v99[1] = (const WCHAR *)((char *)a1 + 124);
  v7 = 2LL;
  *(_QWORD *)a1 = a1;
  v99[0] = (const WCHAR *)((char *)a1 + 116);
  do
  {
    v8 = (struct _CIT_AUDIO_STATS *)*v6;
    if ( *((_BYTE *)*v6 + 3) )
      CitpAudioStatSnapDelta(v8);
    ++v6;
    --v7;
  }
  while ( v7 );
  v11 = *(_DWORD **)(W32GetUserSessionState(v8, a2) + 18912);
  if ( (v11[3] & 0x10) == 0
    || *((_WORD *)a1 + 57) != 4
    || *((_WORD *)a1 + 54)
    && *((_WORD *)a1 + 55)
    && ((*((_BYTE *)a1 + 100) & 1) != 0
     || !(unsigned int)UserUnsafeIsProcessDwm(**(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL))) )
  {
    if ( (v11[3] & 0x20) == 0
      || (v29 = *((unsigned __int16 *)a1 + 57), (v29 & 8) == 0)
      || (v29 & 0xFFFFFFF3) != 0
      || (v10 = 3LL, *((_WORD *)a1 + 53) >= 3u)
      || *((_WORD *)a1 + 54) && *((_WORD *)a1 + 55) )
    {
      UserSessionState = W32GetUserSessionState(v10, v9);
      v14 = v3 - *((_DWORD *)a1 + 23);
      v15 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 18912) + 32LL);
      v16 = v3 - *(_DWORD *)(v15 + 288);
      v17 = *(_QWORD *)(v15 + 256) + 1LL;
      v18 = *(_QWORD *)(v15 + 280);
      *(_QWORD *)(v15 + 256) = v17;
      v19 = (*((_BYTE *)a1 + 100) & 1) == 0;
      v102 = v17;
      if ( v19 )
      {
        v20 = *((_OWORD *)a1 + 2);
        v89 = *((_DWORD *)a1 + 14);
        v21 = *((_QWORD *)a1 + 6);
        v22 = *((_WORD *)a1 + 30);
        v87 = v20;
        v90 = v22;
        v88 = v21;
        if ( !(unsigned int)OnlyCompositionMetrics(a1, &v87, v13, v18)
          && (unsigned int)dword_14029EF38 > 5
          && (qword_14029EF48 & 0x800000000800LL) != 0
          && (qword_14029EF50 & 0x800000000800LL) == qword_14029EF50 )
        {
          v96 = (const WCHAR *)*((_QWORD *)a1 + 2);
          v27 = *((_DWORD *)a1 + 31) & 0xFFFFFF;
          v99[0] = (const WCHAR *)0x2000000;
          v84 = v27;
          v28 = *((_DWORD *)a1 + 29) & 0xFFFFFF;
          v97 = v25;
          v83 = v28;
          v70[0] = *((_WORD *)a1 + 53);
          v69 = *((_WORD *)a1 + 56);
          v68 = *((_WORD *)a1 + 55);
          v67 = *((_WORD *)a1 + 54);
          v82 = *((_DWORD *)a1 + 24);
          v66 = *((_WORD *)a1 + 28);
          v65 = *((_WORD *)a1 + 52);
          v81 = *(_DWORD *)(v15 + 292);
          v80 = v11[3];
          v79 = v11[5];
          v78 = v11[4];
          v77 = v11[2];
          v64 = *((_WORD *)a1 + 35);
          LOBYTE(v102) = *((_BYTE *)a1 + 72);
          v63 = *((_WORD *)a1 + 34);
          v62 = *((_WORD *)a1 + 33);
          v61 = *((_WORD *)a1 + 32);
          v60 = *((_WORD *)a1 + 31);
          v59 = *((_WORD *)a1 + 22);
          v58 = *((_WORD *)a1 + 30);
          v57 = *((_WORD *)a1 + 29) + v58;
          v56 = *((_WORD *)a1 + 27);
          v55 = *((_WORD *)a1 + 26);
          v54 = *((_WORD *)a1 + 25) + v55;
          v53 = *((_WORD *)a1 + 24);
          v52 = *((_WORD *)a1 + 23) + v53;
          v51 = *((_WORD *)a1 + 21);
          v50 = *((_WORD *)a1 + 20);
          v49 = *((_WORD *)a1 + 19);
          v48 = *((_WORD *)a1 + 18);
          v47 = *((_WORD *)a1 + 17);
          v46 = *((_WORD *)a1 + 16);
          *(_QWORD *)&v87 = *((_QWORD *)a1 + 20);
          WORD4(v87) = *((_WORD *)a1 + 84);
          LOWORD(v28) = *((_WORD *)a1 + 70);
          v85 = v14;
          v45 = v28;
          v76 = *((_DWORD *)a1 + 38);
          v71 = *((_DWORD *)a1 + 36);
          v75 = *((unsigned __int16 *)a1 + 51);
          v74 = *((_DWORD *)a1 + 33);
          v73 = *((_DWORD *)a1 + 34);
          v72 = v16;
          v95 = v24;
          v94 = v26;
          v98 = v26;
          v103 = 1;
          v104 = 1;
          v93 = v26;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            0xFFFFFFLL,
            byte_14028342D,
            v23,
            v24,
            &v93,
            (__int64)&v104,
            (__int64)&v103,
            &v98,
            &v94,
            (__int64)&v95,
            (__int64)&v72,
            (__int64)&v73,
            (__int64)&v74,
            (__int64)&v75,
            (__int64)&v71,
            (__int64)&v76,
            (__int64)&v45,
            (__int64 *)&v87,
            (__int64)&v46,
            (__int64)&v47,
            (__int64)&v48,
            (__int64)&v49,
            (__int64)&v50,
            (__int64)&v51,
            (__int64)&v52,
            (__int64)&v53,
            (__int64)&v54,
            (__int64)&v55,
            (__int64)&v56,
            (__int64)&v57,
            (__int64)&v58,
            (__int64)&v59,
            (__int64)&v60,
            (__int64)&v61,
            (__int64)&v62,
            (__int64)&v63,
            (__int64)&v102,
            (__int64)&v64,
            (__int64)&v77,
            (__int64)&v78,
            (__int64)&v79,
            (__int64)&v80,
            (__int64)&v81,
            (__int64)&v65,
            (__int64)&v66,
            (__int64)&v82,
            (__int64)&v67,
            (__int64)&v68,
            (__int64)&v69,
            (__int64)v70,
            (__int64)&v83,
            (__int64)&v84,
            (__int64)&v96,
            (__int64)&v85,
            (__int64)&v97,
            (__int64)v99);
        }
      }
      else
      {
        v30 = *((_QWORD *)a1 + 3);
        v86 = &word_14025FAA8;
        v31 = &word_14025FAA8;
        v32 = &word_14025FAA8;
        if ( *(_QWORD *)(v30 + 40) )
        {
          v33 = *(const WCHAR **)(v30 + 48);
          if ( *(_DWORD *)(v30 + 72) == 1 )
          {
            v86 = *(const WCHAR **)(v30 + 40);
            if ( v33 )
              v31 = v33;
          }
          else if ( v33 )
          {
            v32 = *(const WCHAR **)(v30 + 48);
          }
        }
        v34 = *((_OWORD *)a1 + 2);
        v89 = *((_DWORD *)a1 + 14);
        v35 = *((_QWORD *)a1 + 6);
        v36 = *((_WORD *)a1 + 30);
        v87 = v34;
        v90 = v36;
        v88 = v35;
        if ( !(unsigned int)OnlyCompositionMetrics(a1, &v87, v13, v18)
          && (unsigned int)dword_14029EF38 > 5
          && (unsigned __int8)tlgKeywordOn(&dword_14029EF38, 0x800000000800LL, v37) )
        {
          v101[0] = v102;
          v93 = *((_QWORD *)a1 + 2);
          v42 = *((_DWORD *)a1 + 31) & 0xFFFFFF;
          v100 = 0x2000000LL;
          v91 = v42;
          v43 = *((_DWORD *)a1 + 29) & 0xFFFFFF;
          v92 = v14;
          v72 = v43;
          v45 = *((_WORD *)a1 + 53);
          v46 = *((_WORD *)a1 + 56);
          v47 = *((_WORD *)a1 + 55);
          v48 = *((_WORD *)a1 + 54);
          v73 = *((_DWORD *)a1 + 24);
          v49 = *((_WORD *)a1 + 28);
          v50 = *((_WORD *)a1 + 52);
          v74 = *(_DWORD *)(v15 + 292);
          v75 = v11[3];
          v71 = v11[5];
          v76 = v11[4];
          v77 = v11[2];
          v51 = *((_WORD *)a1 + 35);
          LOBYTE(v102) = *((_BYTE *)a1 + 72);
          v52 = *((_WORD *)a1 + 34);
          v53 = *((_WORD *)a1 + 33);
          v54 = *((_WORD *)a1 + 32);
          v55 = *((_WORD *)a1 + 31);
          v56 = *((_WORD *)a1 + 22);
          v57 = *((_WORD *)a1 + 30);
          v58 = *((_WORD *)a1 + 29) + v57;
          v59 = *((_WORD *)a1 + 27);
          v60 = *((_WORD *)a1 + 26);
          v61 = *((_WORD *)a1 + 25) + v60;
          v62 = *((_WORD *)a1 + 24);
          v63 = *((_WORD *)a1 + 23) + v62;
          v64 = *((_WORD *)a1 + 21);
          v65 = *((_WORD *)a1 + 20);
          v66 = *((_WORD *)a1 + 19);
          v67 = *((_WORD *)a1 + 18);
          v68 = *((_WORD *)a1 + 17);
          v69 = *((_WORD *)a1 + 16);
          *(_QWORD *)&v87 = *((_QWORD *)a1 + 20);
          WORD4(v87) = *((_WORD *)a1 + 84);
          v70[0] = *((_WORD *)a1 + 70);
          v78 = *((_DWORD *)a1 + 38);
          v79 = *((_DWORD *)a1 + 36);
          v80 = *((unsigned __int16 *)a1 + 51);
          v81 = *((_DWORD *)a1 + 33);
          v82 = *((_DWORD *)a1 + 34);
          v94 = (__int64)a1 + 76;
          v95 = (__int64)a1 + 76;
          v84 = *(_DWORD *)(v40 + 64);
          v85 = *(_DWORD *)(v40 + 68);
          v83 = v16;
          v98 = v39;
          v103 = 1;
          v104 = 1;
          v44[0] = 1;
          v96 = v32;
          v97 = v31;
          v99[0] = v41;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            0xFFFFFFLL,
            (__int64)&unk_14028388F,
            v38,
            v39,
            v99,
            &v86,
            &v97,
            &v96,
            (__int64)&v85,
            (__int64)&v84,
            (__int64)v44,
            (__int64)&v104,
            (__int64)&v103,
            &v95,
            &v94,
            (__int64)&v98,
            (__int64)&v83,
            (__int64)&v82,
            (__int64)&v81,
            (__int64)&v80,
            (__int64)&v79,
            (__int64)&v78,
            (__int64)v70,
            (__int64 *)&v87,
            (__int64)&v69,
            (__int64)&v68,
            (__int64)&v67,
            (__int64)&v66,
            (__int64)&v65,
            (__int64)&v64,
            (__int64)&v63,
            (__int64)&v62,
            (__int64)&v61,
            (__int64)&v60,
            (__int64)&v59,
            (__int64)&v58,
            (__int64)&v57,
            (__int64)&v56,
            (__int64)&v55,
            (__int64)&v54,
            (__int64)&v53,
            (__int64)&v52,
            (__int64)&v102,
            (__int64)&v51,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)&v71,
            (__int64)&v75,
            (__int64)&v74,
            (__int64)&v50,
            (__int64)&v49,
            (__int64)&v73,
            (__int64)&v48,
            (__int64)&v47,
            (__int64)&v46,
            (__int64)&v45,
            (__int64)&v72,
            (__int64)&v91,
            (__int64)&v93,
            (__int64)&v92,
            (__int64)v101,
            (__int64)&v100);
        }
      }
    }
  }
}
