/*
 * XREFs of RIMWatchDog @ 0x140033480
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140002054 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     RIMDisArmWatchDog @ 0x140033408 (RIMDisArmWatchDog.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     RIMArmWatchDog @ 0x1400EF8EC (RIMArmWatchDog.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1401D6DD8 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDqSq @ 0x1401D6EF0 (WPP_RECORDER_AND_TRACE_SF_qqqDqSq.c)
 */

__int64 __fastcall RIMWatchDog(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  void *v10; // rcx
  int v11; // r15d
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 i; // rdi
  LARGE_INTEGER v25; // r8
  bool v26; // r12
  int v27; // ebx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r14
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  char v37; // r15
  bool v38; // r12
  int v39; // ebx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // r8
  __int64 v47; // r9
  char v48; // al
  __int64 v49; // rbx
  __int64 v50; // rdi
  int v51; // esi
  __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // r12
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  int v58; // [rsp+20h] [rbp-69h]
  int v59; // [rsp+28h] [rbp-61h]
  int v60; // [rsp+30h] [rbp-59h]
  int v61; // [rsp+38h] [rbp-51h]
  __int64 v62; // [rsp+68h] [rbp-21h]
  _QWORD *v63; // [rsp+80h] [rbp-9h]
  __int64 v64; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v65[10]; // [rsp+90h] [rbp+7h] BYREF
  int v66; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v67; // [rsp+F8h] [rbp+6Fh] BYREF
  int v68; // [rsp+100h] [rbp+77h]
  __int64 v69; // [rsp+108h] [rbp+7Fh] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v5 = W32GetUserSessionState(v4, v3);
  RIMLockExclusive(v5 + 88);
  v8 = (_QWORD *)(W32GetUserSessionState(v7, v6) + 120);
  v63 = v8;
  v11 = 0;
  v68 = 0;
  v12 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
    goto LABEL_5;
  do
  {
    if ( *((_DWORD *)v12 + 224) )
    {
      if ( v12[113]
        && !*((_BYTE *)v12 + 65)
        && !*((_BYTE *)v12 + 64)
        && (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v12[113]) > v12[114]
        && !PsGetProcessDebugPort(v12[2]) )
      {
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v37 = 0;
        }
        v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v39 = *((_DWORD *)v12 + 17);
          v40 = v12[3];
          v41 = v12[2];
          v42 = v12[7];
          v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
          LOBYTE(v44) = v38;
          LOBYTE(v45) = v37;
          WPP_RECORDER_AND_TRACE_SF_qqqD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v45,
            v44,
            *(_QWORD *)(v43 + 19336),
            v58,
            v59,
            15,
            (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
            v42,
            v41,
            v40,
            v39);
        }
        if ( (unsigned int)dword_14029EE58 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029EE58, 0x400000000000LL, v36) )
        {
          v66 = *((_DWORD *)v12 + 17);
          v67 = v12[3];
          v69 = v12[2];
          v64 = v12[7];
          v65[0] = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (__int64)v10,
            (__int64)&unk_14027A195,
            v46,
            v47,
            (__int64)v65,
            (__int64)&v64,
            (__int64)&v69,
            (__int64)&v67,
            (__int64)&v66);
        }
        v11 = v68;
      }
      if ( !v12[111] || *((_BYTE *)v12 + 65) || *((_BYTE *)v12 + 64) || *((_BYTE *)v12 + 760) )
      {
        *((_DWORD *)v12 + 224) = 0;
      }
      else
      {
        v11 = 1;
        v68 = 1;
        if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v12[111]) > v12[110] )
        {
          *((_DWORD *)v12 + 224) = 0;
          v10 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            LOBYTE(v11) = 0;
          }
          v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = *((_DWORD *)v12 + 17);
            v28 = v12[3];
            v29 = v12[2];
            v30 = v12[7];
            v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
            LOBYTE(v32) = v26;
            LOBYTE(v33) = v11;
            WPP_RECORDER_AND_TRACE_SF_qqqD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v33,
              v32,
              *(_QWORD *)(v31 + 19336),
              v58,
              v59,
              16,
              (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
              v30,
              v29,
              v28,
              v27);
          }
          if ( (unsigned int)dword_14029EE58 > 5
            && (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))tlgKeywordOn)(
                                  &dword_14029EE58,
                                  0x400000000000LL,
                                  (LARGE_INTEGER)v25.QuadPart) )
          {
            v66 = *((_DWORD *)v12 + 17);
            v67 = v12[3];
            v69 = v12[2];
            v65[0] = v12[7];
            v64 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              (__int64)v10,
              (__int64)&unk_14027A1E0,
              v34,
              v35,
              (__int64)&v64,
              (__int64)v65,
              (__int64)&v69,
              (__int64)&v67,
              (__int64)&v66);
          }
          v11 = v68;
        }
      }
      for ( i = v12[51]; ; i = *(_QWORD *)(i + 40) )
      {
        v69 = i;
        if ( !i )
          break;
        if ( *(_DWORD *)(i + 352) )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(i + 344)) <= v12[114] )
          {
            v11 = 1;
            v68 = 1;
            *((_DWORD *)v12 + 224) = 1;
          }
          else
          {
            v10 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
            {
              v48 = 0;
            }
            LOBYTE(v66) = v48;
            LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            LOBYTE(v67) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v49 = *(_QWORD *)(i + 296);
              v50 = *(_QWORD *)(i + 200);
              v51 = *((_DWORD *)v12 + 17);
              v52 = v12[3];
              v53 = v12[2];
              v54 = v12[7];
              v55 = W32GetUserSessionState(v10, v9);
              LOBYTE(v56) = v67;
              LOBYTE(v57) = v66;
              v62 = v50;
              i = v69;
              WPP_RECORDER_AND_TRACE_SF_qqqDqSq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v57,
                v56,
                *(_QWORD *)(v55 + 19336),
                v58,
                v59,
                v60,
                v61,
                v54,
                v53,
                v52,
                v51,
                v69,
                v62,
                v49);
              v11 = v68;
            }
          }
        }
      }
      v8 = v63;
    }
    v12 = (_QWORD *)*v12;
  }
  while ( v12 != v8 );
  if ( v11 )
    RIMArmWatchDog();
  else
LABEL_5:
    RIMDisArmWatchDog((__int64)v10, v9);
  v15 = W32GetUserSessionState(v14, v13);
  RIMUnlockExclusive(v15 + 88, v16, v17);
  v20 = W32GetUserSessionState(v19, v18);
  return RIMUnlockExclusive(v20 + 56, v21, v22);
}
