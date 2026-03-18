/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x140147600
 * Callers:
 *     <none>
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004C108 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x140147848 (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1401C15D4 (ApiSetEditionAllocThreadPointerData.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        struct tagINPUTDEST *a7)
{
  unsigned int v7; // ebx
  unsigned __int64 v9; // rax
  int v13; // edx
  int v14; // r8d
  CTouchProcessor *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // rdx
  _QWORD v24[4]; // [rsp+28h] [rbp-B9h] BYREF
  char v25; // [rsp+48h] [rbp-99h]
  PERESOURCE *v26; // [rsp+50h] [rbp-91h]
  _QWORD v27[16]; // [rsp+60h] [rbp-81h] BYREF

  v7 = 0;
  v25 = 0;
  v9 = a5;
  if ( a5 == -1LL )
    v9 = 0LL;
  v24[0] = v9;
  v26 = (PERESOURCE *)(a1 + 32);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(a1 + 32));
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v24, v13, v14);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4974LL);
  if ( a3 != CTouchProcessor::GetMsgPointerId(v15, a5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4975LL);
  CInputDest::CInputDest((CInputDest *)v27, a7);
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( HIDWORD(v27[11]) )
      HMAssignmentUnlock(&v27[10]);
    memset(v27, 0, 0x78uLL);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v24, v23);
    ExReleaseResourceAndLeaveCriticalRegion(*v26);
    return 0LL;
  }
  else
  {
    v18 = ApiSetEditionAllocThreadPointerData(v17, v16);
    v19 = v18;
    if ( v18 )
    {
      *(_WORD *)(v18 + 16) = a3;
      v20 = 0LL;
      *(_DWORD *)(v18 + 20) = a4;
      *(_QWORD *)(v18 + 24) = a5;
      *(_DWORD *)(v18 + 32) = a6;
      if ( (v27[0] & 4) != 0 )
      {
        if ( HIDWORD(v27[11]) == 1 || HIDWORD(v27[11]) == 2 )
        {
          if ( v27[10] )
            v20 = *(_QWORD *)v27[10];
          else
            v20 = 0LL;
        }
      }
      else if ( (v27[0] & 2) != 0 )
      {
        v20 = v27[3];
      }
      *(_DWORD *)(v18 + 48) &= ~1u;
      *(_QWORD *)(v18 + 40) = v20;
      CTouchProcessor::ReferenceMsgData(a1, a5, 5);
      *(_QWORD *)(a2 + 24) = v19;
      if ( HIDWORD(v27[11]) )
        HMAssignmentUnlock(&v27[10]);
      v7 = 1;
    }
    else if ( HIDWORD(v27[11]) )
    {
      HMAssignmentUnlock(&v27[10]);
    }
    memset(v27, 0, 0x78uLL);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v24, v21);
    ExReleaseResourceAndLeaveCriticalRegion(*v26);
    return v7;
  }
}
