/*
 * XREFs of RIMWatchDog @ 0x14005A160
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140002858 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMDisArmWatchDog @ 0x14005AA08 (RIMDisArmWatchDog.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     RIMArmWatchDog @ 0x140136748 (RIMArmWatchDog.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1401FE198 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDqSq @ 0x1401FE2B4 (WPP_RECORDER_AND_TRACE_SF_qqqDqSq.c)
 */

__int64 __fastcall RIMWatchDog(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  _QWORD *v11; // rax
  int v12; // r15d
  _QWORD *v13; // r13
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  __int64 i; // rdi
  int v24; // edx
  int v25; // r8d
  bool v26; // r12
  int v27; // ebx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r14
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // edx
  int v38; // r8d
  char v39; // r15
  bool v40; // r12
  int v41; // ebx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // r14
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // edx
  int v52; // r8d
  int v53; // ecx
  char v54; // al
  __int64 v55; // rbx
  __int64 v56; // rdi
  int v57; // esi
  __int64 v58; // r14
  __int64 v59; // r15
  __int64 v60; // r12
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  int v64; // [rsp+20h] [rbp-69h]
  int v65; // [rsp+28h] [rbp-61h]
  int v66; // [rsp+30h] [rbp-59h]
  int v67; // [rsp+38h] [rbp-51h]
  __int64 v68; // [rsp+68h] [rbp-21h]
  _QWORD *v69; // [rsp+80h] [rbp-9h]
  __int64 v70; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v71[10]; // [rsp+90h] [rbp+7h] BYREF
  int v72; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v73; // [rsp+F8h] [rbp+6Fh] BYREF
  int v74; // [rsp+100h] [rbp+77h]
  __int64 v75; // [rsp+108h] [rbp+7Fh] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  v7 = W32GetUserSessionState(v5, v4, v6);
  RIMLockExclusive(v7 + 88);
  v11 = (_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 120);
  v69 = v11;
  v12 = 0;
  v74 = 0;
  v13 = (_QWORD *)*v11;
  if ( (_QWORD *)*v11 == v11 )
    goto LABEL_5;
  do
  {
    if ( *((_DWORD *)v13 + 224) )
    {
      if ( v13[113]
        && !*((_BYTE *)v13 + 65)
        && !*((_BYTE *)v13 + 64)
        && (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v13[113]) > v13[114]
        && !PsGetProcessDebugPort(v13[2]) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v39 = 0;
        }
        v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v41 = *((_DWORD *)v13 + 17);
          v42 = v13[3];
          v43 = v13[2];
          v44 = v13[7];
          v45 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v37, v38);
          LOBYTE(v46) = v40;
          LOBYTE(v47) = v39;
          WPP_RECORDER_AND_TRACE_SF_qqqD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v47,
            v46,
            *(_QWORD *)(v45 + 19368),
            v64,
            v65,
            15,
            (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
            v44,
            v43,
            v42,
            v41);
        }
        if ( (unsigned int)dword_1402A9E78 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1402A9E78, 0x400000000000LL) )
        {
          v72 = *((_DWORD *)v13 + 17);
          v73 = v13[3];
          v75 = v13[2];
          v70 = v13[7];
          v71[0] = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            v48,
            (__int64)&unk_14028443A,
            v49,
            v50,
            (__int64)v71,
            (__int64)&v70,
            (__int64)&v75,
            (__int64)&v73,
            (__int64)&v72);
        }
        v12 = v74;
      }
      if ( !v13[111] || *((_BYTE *)v13 + 65) || *((_BYTE *)v13 + 64) || *((_BYTE *)v13 + 760) )
      {
        *((_DWORD *)v13 + 224) = 0;
      }
      else
      {
        v12 = 1;
        v74 = 1;
        if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v13[111]) > v13[110] )
        {
          *((_DWORD *)v13 + 224) = 0;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            LOBYTE(v12) = 0;
          }
          v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = *((_DWORD *)v13 + 17);
            v28 = v13[3];
            v29 = v13[2];
            v30 = v13[7];
            v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v25);
            LOBYTE(v32) = v26;
            LOBYTE(v33) = v12;
            WPP_RECORDER_AND_TRACE_SF_qqqD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v33,
              v32,
              *(_QWORD *)(v31 + 19368),
              v64,
              v65,
              16,
              (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
              v30,
              v29,
              v28,
              v27);
          }
          if ( (unsigned int)dword_1402A9E78 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1402A9E78, 0x400000000000LL) )
          {
            v72 = *((_DWORD *)v13 + 17);
            v73 = v13[3];
            v75 = v13[2];
            v71[0] = v13[7];
            v70 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              v34,
              (__int64)&unk_140284485,
              v35,
              v36,
              (__int64)&v70,
              (__int64)v71,
              (__int64)&v75,
              (__int64)&v73,
              (__int64)&v72);
          }
          v12 = v74;
        }
      }
      for ( i = v13[51]; ; i = *(_QWORD *)(i + 40) )
      {
        v75 = i;
        if ( !i )
          break;
        if ( *(_DWORD *)(i + 352) )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(i + 344)) <= v13[114] )
          {
            v12 = 1;
            v74 = 1;
            *((_DWORD *)v13 + 224) = 1;
          }
          else
          {
            v53 = (int)WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
            {
              v54 = 0;
            }
            LOBYTE(v72) = v54;
            LOBYTE(v73) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v55 = *(_QWORD *)(i + 296);
              v56 = *(_QWORD *)(i + 200);
              v57 = *((_DWORD *)v13 + 17);
              v58 = v13[3];
              v59 = v13[2];
              v60 = v13[7];
              LOBYTE(v53) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              v61 = W32GetUserSessionState(v53, v51, v52);
              LOBYTE(v62) = v73;
              LOBYTE(v63) = v72;
              v68 = v56;
              i = v75;
              WPP_RECORDER_AND_TRACE_SF_qqqDqSq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v63,
                v62,
                *(_QWORD *)(v61 + 19368),
                v64,
                v65,
                v66,
                v67,
                v60,
                v59,
                v58,
                v57,
                v75,
                v68,
                v55);
              v12 = v74;
            }
          }
        }
      }
      v11 = v69;
    }
    v13 = (_QWORD *)*v13;
  }
  while ( v13 != v11 );
  if ( v12 )
    RIMArmWatchDog();
  else
LABEL_5:
    RIMDisArmWatchDog();
  v17 = W32GetUserSessionState(v15, v14, v16);
  RIMUnlockExclusive(v17 + 88);
  v21 = W32GetUserSessionState(v19, v18, v20);
  return RIMUnlockExclusive(v21 + 56);
}
