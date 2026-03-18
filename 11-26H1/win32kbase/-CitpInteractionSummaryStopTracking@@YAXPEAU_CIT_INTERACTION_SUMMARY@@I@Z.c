/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1400D6948
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1400D6810 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400D7B64 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U4@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U3@U6@U2@U2@U2@U2@U2@U6@U6@U2@U6@U6@U6@U6@U2@U2@U5@U2@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@55AEBU?$_tlgWrapperByRef@$0BA@@@6AEBU?$_tlgWrapperByVal@$07@@444444AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@88888888888888888858444448848888447477@Z @ 0x140007984 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@U3@U-.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1400D74A4 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U5@U4@U4@U4@U4@U4@U5@U5@U4@U5@U5@U5@U5@U4@U4@U3@U4@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@66666AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@77777777777777777747666667767777665655@Z @ 0x1400D7534 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U-$_tlgWrapperByVal@$07@@U.c)
 *     UserUnsafeIsProcessDwm @ 0x1400D7D90 (UserUnsafeIsProcessDwm.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z @ 0x140167E98 (-OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2, int a3)
{
  __int64 v5; // rcx
  struct _CIT_INTERACTION_SUMMARY **v6; // rax
  _DWORD *v7; // r12
  _DWORD *v8; // r13
  const WCHAR **v9; // r11
  __int64 v10; // rdi
  struct _CIT_AUDIO_STATS *v11; // rcx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  _DWORD *v15; // r15
  __int64 UserSessionState; // rax
  __int64 v17; // r8
  int v18; // r10d
  __int64 v19; // rdi
  int v20; // r14d
  const WCHAR *v21; // r11
  __int64 v22; // r9
  bool v23; // zf
  __int64 v24; // xmm0_8
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rsi
  const WCHAR *v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int16 v32; // ax
  __int64 v33; // rcx
  __int64 v34; // r9
  const WCHAR *v35; // r10
  const WCHAR *v36; // r11
  int v37; // eax
  char v38[2]; // [rsp+1F0h] [rbp-80h] BYREF
  __int16 v39; // [rsp+1F2h] [rbp-7Eh] BYREF
  __int16 v40; // [rsp+1F4h] [rbp-7Ch] BYREF
  __int16 v41; // [rsp+1F6h] [rbp-7Ah] BYREF
  __int16 v42; // [rsp+1F8h] [rbp-78h] BYREF
  __int16 v43; // [rsp+1FAh] [rbp-76h] BYREF
  __int16 v44; // [rsp+1FCh] [rbp-74h] BYREF
  __int16 v45; // [rsp+1FEh] [rbp-72h] BYREF
  __int16 v46; // [rsp+200h] [rbp-70h] BYREF
  __int16 v47; // [rsp+202h] [rbp-6Eh] BYREF
  __int16 v48; // [rsp+204h] [rbp-6Ch] BYREF
  __int16 v49; // [rsp+206h] [rbp-6Ah] BYREF
  __int16 v50; // [rsp+208h] [rbp-68h] BYREF
  __int16 v51; // [rsp+20Ah] [rbp-66h] BYREF
  __int16 v52; // [rsp+20Ch] [rbp-64h] BYREF
  __int16 v53; // [rsp+20Eh] [rbp-62h] BYREF
  __int16 v54; // [rsp+210h] [rbp-60h] BYREF
  __int16 v55; // [rsp+212h] [rbp-5Eh] BYREF
  __int16 v56; // [rsp+214h] [rbp-5Ch] BYREF
  __int16 v57; // [rsp+216h] [rbp-5Ah] BYREF
  __int16 v58; // [rsp+218h] [rbp-58h] BYREF
  __int16 v59; // [rsp+21Ah] [rbp-56h] BYREF
  __int16 v60; // [rsp+21Ch] [rbp-54h] BYREF
  __int16 v61; // [rsp+21Eh] [rbp-52h] BYREF
  __int16 v62; // [rsp+220h] [rbp-50h] BYREF
  __int16 v63; // [rsp+222h] [rbp-4Eh] BYREF
  _WORD v64[2]; // [rsp+224h] [rbp-4Ch] BYREF
  int v65; // [rsp+228h] [rbp-48h] BYREF
  int v66; // [rsp+22Ch] [rbp-44h] BYREF
  int v67; // [rsp+230h] [rbp-40h] BYREF
  int v68; // [rsp+234h] [rbp-3Ch] BYREF
  int v69; // [rsp+238h] [rbp-38h] BYREF
  int v70; // [rsp+23Ch] [rbp-34h] BYREF
  int v71; // [rsp+240h] [rbp-30h] BYREF
  int v72; // [rsp+244h] [rbp-2Ch] BYREF
  int v73; // [rsp+248h] [rbp-28h] BYREF
  int v74; // [rsp+24Ch] [rbp-24h] BYREF
  int v75; // [rsp+250h] [rbp-20h] BYREF
  int v76; // [rsp+254h] [rbp-1Ch] BYREF
  int v77; // [rsp+258h] [rbp-18h] BYREF
  int v78; // [rsp+25Ch] [rbp-14h] BYREF
  int v79; // [rsp+260h] [rbp-10h] BYREF
  const WCHAR *v80; // [rsp+268h] [rbp-8h] BYREF
  const WCHAR *v81; // [rsp+270h] [rbp+0h] BYREF
  int v82; // [rsp+278h] [rbp+8h] BYREF
  int v83; // [rsp+27Ch] [rbp+Ch] BYREF
  const WCHAR *v84; // [rsp+280h] [rbp+10h] BYREF
  char *v85; // [rsp+288h] [rbp+18h] BYREF
  char *v86; // [rsp+290h] [rbp+20h] BYREF
  __int64 v87; // [rsp+298h] [rbp+28h] BYREF
  __int64 v88; // [rsp+2A0h] [rbp+30h] BYREF
  const WCHAR *v89; // [rsp+2A8h] [rbp+38h] BYREF
  __int128 v90; // [rsp+2B0h] [rbp+40h] BYREF
  __int64 v91; // [rsp+2C0h] [rbp+50h]
  int v92; // [rsp+2C8h] [rbp+58h]
  __int16 v93; // [rsp+2CCh] [rbp+5Ch]
  const WCHAR *v94[2]; // [rsp+2D0h] [rbp+60h] BYREF
  __int64 v95[8]; // [rsp+2E0h] [rbp+70h] BYREF
  int v96; // [rsp+330h] [rbp+C0h] BYREF
  const WCHAR *v97; // [rsp+340h] [rbp+D0h] BYREF
  char v98; // [rsp+348h] [rbp+D8h] BYREF

  v5 = *(_QWORD *)a1;
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v5 + 8) != a1
    || (v6 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)a1 + 1), *v6 != a1) )
  {
    __fastfail(3u);
  }
  *v6 = (struct _CIT_INTERACTION_SUMMARY *)v5;
  v7 = (_DWORD *)((char *)a1 + 116);
  *(_QWORD *)(v5 + 8) = v6;
  v8 = (_DWORD *)((char *)a1 + 124);
  *((_QWORD *)a1 + 1) = a1;
  v9 = v94;
  *(_QWORD *)a1 = a1;
  v10 = 2LL;
  v94[0] = (const WCHAR *)((char *)a1 + 116);
  v94[1] = (const WCHAR *)((char *)a1 + 124);
  do
  {
    v11 = (struct _CIT_AUDIO_STATS *)*v9;
    if ( *((_BYTE *)*v9 + 3) )
      CitpAudioStatSnapDelta(v11);
    ++v9;
    --v10;
  }
  while ( v10 );
  v15 = *(_DWORD **)(W32GetUserSessionState((_DWORD)v11, a2, a3) + 18952);
  if ( (v15[3] & 0x10) == 0
    || *((_WORD *)a1 + 57) != 4
    || *((_WORD *)a1 + 54)
    && *((_WORD *)a1 + 55)
    && ((*((_BYTE *)a1 + 100) & 1) != 0
     || !(unsigned int)UserUnsafeIsProcessDwm(**(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL))) )
  {
    if ( (v15[3] & 0x20) == 0
      || (v27 = *((unsigned __int16 *)a1 + 57), (v27 & 8) == 0)
      || (v27 & 0xFFFFFFF3) != 0
      || (v13 = 3, *((_WORD *)a1 + 53) >= 3u)
      || *((_WORD *)a1 + 54) && *((_WORD *)a1 + 55) )
    {
      UserSessionState = W32GetUserSessionState(v13, v12, v14);
      v18 = a2 - *((_DWORD *)a1 + 23);
      v96 = v18;
      v19 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 18952) + 32LL);
      v20 = a2 - *(_DWORD *)(v19 + 288);
      v21 = (const WCHAR *)(*(_QWORD *)(v19 + 256) + 1LL);
      v22 = *(_QWORD *)(v19 + 280);
      *(_QWORD *)(v19 + 256) = v21;
      v23 = (*((_BYTE *)a1 + 100) & 1) == 0;
      v97 = v21;
      if ( v23 )
      {
        v24 = *((_QWORD *)a1 + 6);
        v92 = *((_DWORD *)a1 + 14);
        v93 = *((_WORD *)a1 + 30);
        v91 = v24;
        if ( (*((_WORD *)a1 + 16)
           || (*v8 & 0xFFFFFF) != 0
           || (*v7 & 0xFFFFFF) != 0
           || *((_WORD *)a1 + 53)
           || *((_WORD *)a1 + 52)
           || !*((_WORD *)a1 + 55) && !*((_WORD *)a1 + 56) && !*((_WORD *)a1 + 54))
          && (unsigned int)dword_1402A9F58 > 5
          && (qword_1402A9F68 & 0x800000000800LL) != 0
          && (qword_1402A9F70 & 0x800000000800LL) == qword_1402A9F70 )
        {
          v88 = *((_QWORD *)a1 + 2);
          v25 = *v8 & 0xFFFFFF;
          v94[0] = (const WCHAR *)0x2000000;
          v78 = v25;
          v26 = *v7 & 0xFFFFFF;
          v89 = v21;
          v77 = v26;
          v64[0] = *((_WORD *)a1 + 53);
          v63 = *((_WORD *)a1 + 56);
          v62 = *((_WORD *)a1 + 55);
          v61 = *((_WORD *)a1 + 54);
          v76 = *((_DWORD *)a1 + 24);
          v60 = *((_WORD *)a1 + 28);
          v59 = *((_WORD *)a1 + 52);
          v75 = *(_DWORD *)(v19 + 292);
          v74 = v15[3];
          v73 = v15[5];
          v72 = v15[4];
          v71 = v15[2];
          v58 = *((_WORD *)a1 + 35);
          LOBYTE(v96) = *((_BYTE *)a1 + 72);
          v57 = *((_WORD *)a1 + 34);
          v56 = *((_WORD *)a1 + 33);
          v55 = *((_WORD *)a1 + 32);
          v54 = *((_WORD *)a1 + 31);
          v53 = *((_WORD *)a1 + 22);
          v52 = *((_WORD *)a1 + 30);
          v51 = *((_WORD *)a1 + 29) + v52;
          v50 = *((_WORD *)a1 + 27);
          v49 = *((_WORD *)a1 + 26);
          v48 = *((_WORD *)a1 + 25) + v49;
          v47 = *((_WORD *)a1 + 24);
          v46 = *((_WORD *)a1 + 23) + v47;
          v45 = *((_WORD *)a1 + 21);
          v44 = *((_WORD *)a1 + 20);
          v43 = *((_WORD *)a1 + 19);
          v42 = *((_WORD *)a1 + 18);
          v41 = *((_WORD *)a1 + 17);
          v40 = *((_WORD *)a1 + 16);
          *(_QWORD *)&v90 = *((_QWORD *)a1 + 20);
          WORD4(v90) = *((_WORD *)a1 + 84);
          v39 = *((_WORD *)a1 + 70);
          v79 = v18;
          v70 = *((_DWORD *)a1 + 38);
          v65 = *((_DWORD *)a1 + 36);
          v69 = *((unsigned __int16 *)a1 + 51);
          v68 = *((_DWORD *)a1 + 33);
          v67 = *((_DWORD *)a1 + 34);
          v66 = v20;
          v87 = v22;
          v86 = (char *)a1 + 76;
          v85 = (char *)a1 + 76;
          LOBYTE(v97) = 1;
          v98 = 1;
          v84 = (const WCHAR *)((char *)a1 + 76);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            0,
            (unsigned int)&unk_14028DA92,
            0xFFFFFF,
            v22,
            (__int64)&v84,
            (__int64)&v98,
            (__int64)&v97,
            (__int64)&v85,
            (__int64)&v86,
            (__int64)&v87,
            (__int64)&v66,
            (__int64)&v67,
            (__int64)&v68,
            (__int64)&v69,
            (__int64)&v65,
            (__int64)&v70,
            (__int64)&v39,
            (__int64)&v90,
            (__int64)&v40,
            (__int64)&v41,
            (__int64)&v42,
            (__int64)&v43,
            (__int64)&v44,
            (__int64)&v45,
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
            (__int64)&v96,
            (__int64)&v58,
            (__int64)&v71,
            (__int64)&v72,
            (__int64)&v73,
            (__int64)&v74,
            (__int64)&v75,
            (__int64)&v59,
            (__int64)&v60,
            (__int64)&v76,
            (__int64)&v61,
            (__int64)&v62,
            (__int64)&v63,
            (__int64)v64,
            (__int64)&v77,
            (__int64)&v78,
            (__int64)&v88,
            (__int64)&v79,
            (__int64)&v89,
            (__int64)v94);
        }
      }
      else
      {
        v28 = *((_QWORD *)a1 + 3);
        v81 = &word_14026AF94;
        v80 = &word_14026AF94;
        if ( *(_QWORD *)(v28 + 40) )
        {
          v29 = *(const WCHAR **)(v28 + 48);
          if ( *(_DWORD *)(v28 + 72) == 1 )
          {
            v81 = *(const WCHAR **)(v28 + 40);
            if ( v29 )
              v80 = v29;
          }
        }
        v30 = *((_OWORD *)a1 + 2);
        v92 = *((_DWORD *)a1 + 14);
        v31 = *((_QWORD *)a1 + 6);
        v32 = *((_WORD *)a1 + 30);
        v90 = v30;
        v93 = v32;
        v91 = v31;
        if ( !(unsigned int)OnlyCompositionMetrics(a1, &v90, v17, v22)
          && (unsigned int)dword_1402A9F58 > 5
          && (unsigned __int8)tlgKeywordOn(&dword_1402A9F58, 0x800000000800LL) )
        {
          v84 = v97;
          v83 = v96;
          v85 = (char *)*((_QWORD *)a1 + 2);
          v37 = *v8 & 0xFFFFFF;
          v95[0] = 0x2000000LL;
          v82 = v37;
          v66 = *v7 & 0xFFFFFF;
          v39 = *((_WORD *)a1 + 53);
          v40 = *((_WORD *)a1 + 56);
          v41 = *((_WORD *)a1 + 55);
          v42 = *((_WORD *)a1 + 54);
          v67 = *((_DWORD *)a1 + 24);
          v43 = *((_WORD *)a1 + 28);
          v44 = *((_WORD *)a1 + 52);
          v68 = *(_DWORD *)(v19 + 292);
          v69 = v15[3];
          v65 = v15[5];
          v70 = v15[4];
          v71 = v15[2];
          v45 = *((_WORD *)a1 + 35);
          LOBYTE(v96) = *((_BYTE *)a1 + 72);
          v46 = *((_WORD *)a1 + 34);
          v47 = *((_WORD *)a1 + 33);
          v48 = *((_WORD *)a1 + 32);
          v49 = *((_WORD *)a1 + 31);
          v50 = *((_WORD *)a1 + 22);
          v51 = *((_WORD *)a1 + 30);
          v52 = *((_WORD *)a1 + 29) + v51;
          v53 = *((_WORD *)a1 + 27);
          v54 = *((_WORD *)a1 + 26);
          v55 = *((_WORD *)a1 + 25) + v54;
          v56 = *((_WORD *)a1 + 24);
          v57 = *((_WORD *)a1 + 23) + v56;
          v58 = *((_WORD *)a1 + 21);
          v59 = *((_WORD *)a1 + 20);
          v60 = *((_WORD *)a1 + 19);
          v61 = *((_WORD *)a1 + 18);
          v62 = *((_WORD *)a1 + 17);
          v63 = *((_WORD *)a1 + 16);
          *(_QWORD *)&v90 = *((_QWORD *)a1 + 20);
          WORD4(v90) = *((_WORD *)a1 + 84);
          v64[0] = *((_WORD *)a1 + 70);
          v72 = *((_DWORD *)a1 + 38);
          v73 = *((_DWORD *)a1 + 36);
          v74 = *((unsigned __int16 *)a1 + 51);
          v75 = *((_DWORD *)a1 + 33);
          v76 = *((_DWORD *)a1 + 34);
          v87 = (__int64)a1 + 76;
          v88 = (__int64)a1 + 76;
          v78 = *(_DWORD *)(v28 + 64);
          v79 = *(_DWORD *)(v28 + 68);
          v77 = v20;
          v86 = (char *)v34;
          LOBYTE(v97) = 1;
          v98 = 1;
          v38[0] = 1;
          v89 = v36;
          v94[0] = v35;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v33,
            (__int64)&unk_14028DEB2,
            0xFFFFFFLL,
            v34,
            v94,
            &v81,
            &v80,
            &v89,
            (__int64)&v79,
            (__int64)&v78,
            (__int64)v38,
            (__int64)&v98,
            (__int64)&v97,
            &v88,
            &v87,
            (__int64)&v86,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)&v75,
            (__int64)&v74,
            (__int64)&v73,
            (__int64)&v72,
            (__int64)v64,
            (__int64 *)&v90,
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
            (__int64)&v51,
            (__int64)&v50,
            (__int64)&v49,
            (__int64)&v48,
            (__int64)&v47,
            (__int64)&v46,
            (__int64)&v96,
            (__int64)&v45,
            (__int64)&v71,
            (__int64)&v70,
            (__int64)&v65,
            (__int64)&v69,
            (__int64)&v68,
            (__int64)&v44,
            (__int64)&v43,
            (__int64)&v67,
            (__int64)&v42,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v39,
            (__int64)&v66,
            (__int64)&v82,
            (__int64)&v85,
            (__int64)&v83,
            (__int64)&v84,
            (__int64)v95);
        }
      }
    }
  }
}
