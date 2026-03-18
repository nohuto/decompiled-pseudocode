/*
 * XREFs of ?ProcessDeadlockThread@@YAXPEAX@Z @ 0x14019DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@43555555555555@Z @ 0x140001FD8 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVa_ea_140001FD8.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

void __fastcall ProcessDeadlockThread(unsigned __int8 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  int v12; // [rsp+E0h] [rbp-80h] BYREF
  int IsDebuggerPresent; // [rsp+E4h] [rbp-7Ch] BYREF
  int v14; // [rsp+E8h] [rbp-78h] BYREF
  int v15; // [rsp+ECh] [rbp-74h] BYREF
  int v16; // [rsp+F0h] [rbp-70h] BYREF
  int v17; // [rsp+F4h] [rbp-6Ch] BYREF
  int v18; // [rsp+F8h] [rbp-68h] BYREF
  int v19; // [rsp+FCh] [rbp-64h] BYREF
  int v20; // [rsp+100h] [rbp-60h] BYREF
  int v21; // [rsp+104h] [rbp-5Ch] BYREF
  int v22; // [rsp+108h] [rbp-58h] BYREF
  int v23; // [rsp+10Ch] [rbp-54h] BYREF
  int v24; // [rsp+110h] [rbp-50h] BYREF
  int v25; // [rsp+114h] [rbp-4Ch] BYREF
  int v26; // [rsp+118h] [rbp-48h] BYREF
  __int64 v27; // [rsp+120h] [rbp-40h]
  __int64 v28; // [rsp+128h] [rbp-38h] BYREF
  void *v29; // [rsp+130h] [rbp-30h] BYREF
  __int64 v30; // [rsp+138h] [rbp-28h] BYREF
  unsigned __int64 v31; // [rsp+140h] [rbp-20h] BYREF
  __int64 v32[7]; // [rsp+148h] [rbp-18h] BYREF
  __int16 v33; // [rsp+190h] [rbp+30h] BYREF
  __int16 v34; // [rsp+198h] [rbp+38h] BYREF
  int v35; // [rsp+1A0h] [rbp+40h] BYREF
  int v36; // [rsp+1A8h] [rbp+48h] BYREF

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 3);
    v3 = 0LL;
    if ( !v2 )
      goto LABEL_4;
    v11 = *(_QWORD *)(v2 + 168);
    if ( v11 )
    {
      v3 = *(_QWORD *)(v11 + 48);
      goto LABEL_4;
    }
  }
  else
  {
    v2 = 0LL;
  }
  v3 = 0LL;
LABEL_4:
  v4 = 1;
  LODWORD(v5) = DbgkWerCaptureLiveKernelDump(
                  L"WATCHDOG",
                  403LL,
                  2064LL,
                  v2,
                  v3,
                  DXGDEADLOCK_TRACKER::DeadlockCounter,
                  0LL,
                  ProcessDeadlockLiveDumpCallback,
                  1);
  if ( (int)v5 < 0 )
  {
    v4 = 3;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 12570;
    v6 = DbgkWerCaptureLiveKernelDump(
           L"WATCHDOG",
           403LL,
           2064LL,
           v2,
           v3,
           DXGDEADLOCK_TRACKER::DeadlockCounter,
           0LL,
           ProcessDeadlockLiveDumpCallback,
           3);
    v5 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12589;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DbgkWerCaptureLiveKernelDump failed with status 0x%I64x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( v2 )
  {
    v27 = *(_QWORD *)(v2 + 412);
    if ( (unsigned int)dword_140166660 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140166660, 0x400000004000LL) )
      {
        LOBYTE(v7) = 1;
        v36 = a1[240];
        v35 = v4;
        v12 = v5;
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v7);
        v14 = *(_DWORD *)(v2 + 3256);
        v15 = *(unsigned __int8 *)(v2 + 3093);
        v16 = *(_DWORD *)(v2 + 4968);
        v17 = *(_DWORD *)(v2 + 4964);
        v18 = *(unsigned __int8 *)(v2 + 209);
        v19 = *(unsigned __int8 *)(v2 + 2988);
        v20 = *(unsigned __int8 *)(v2 + 2983);
        v21 = *(_DWORD *)(v2 + 296);
        v33 = *(_WORD *)(v2 + 3044);
        v28 = *(_QWORD *)(v2 + 2048);
        v29 = *(void **)(v2 + 2040);
        v22 = *(_DWORD *)(v2 + 436);
        v23 = *(_DWORD *)(v2 + 432);
        v24 = *(_DWORD *)(v2 + 428);
        v25 = *(_DWORD *)(v2 + 424);
        v26 = *(_DWORD *)(v2 + 420);
        v30 = v27;
        v31 = DXGDEADLOCK_TRACKER::DeadlockCounter;
        v34 = 14;
        v32[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          (__int64)&unk_140140BD0,
          v9,
          v10,
          (__int64)&v34,
          (__int64)v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          &v29,
          (__int64)&v28,
          (__int64)&v33,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&IsDebuggerPresent,
          (__int64)&v12,
          (__int64)&v36,
          (__int64)&v35);
      }
    }
  }
  if ( a1 )
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
}
