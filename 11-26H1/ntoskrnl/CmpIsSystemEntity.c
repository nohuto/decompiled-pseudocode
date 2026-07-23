/*
 * XREFs of CmpIsSystemEntity @ 0x1408FA6D0
 * Callers:
 *     KCBNeedsVirtualImage @ 0x140447908 (KCBNeedsVirtualImage.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404C713C (KCBNeedsVirtualImage_0.c)
 *     CmDoVirtualTest @ 0x1404CE364 (CmDoVirtualTest.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *a2, int *a3)
{
  char v3; // si
  struct _SECURITY_SUBJECT_CONTEXT *p_Object; // rax
  bool v6; // zf
  bool v7; // di
  int v8; // eax
  int v9; // eax
  struct _LIST_ENTRY *PrimaryToken; // r8
  struct _LIST_ENTRY *ClientToken; // rbx
  _KPROCESS *Process; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v14; // rtt
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT Object; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  p_Object = a2;
  memset(&Object, 0, sizeof(Object));
  if ( !CmpVEEnabled )
    return 1;
  if ( a3 && (*a3 & 1) != 0 )
    return (*a3 & 2) != 0;
  if ( !a1 )
    return 1;
  if ( !a2 )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &Object);
    p_Object = &Object;
    v3 = 1;
  }
  v6 = p_Object->ClientToken == 0LL;
  LODWORD(TokenInformation) = 0;
  v7 = 1;
  if ( v6 )
  {
    SeQueryInformationToken(p_Object->PrimaryToken, TokenVirtualizationEnabled, &TokenInformation);
    if ( (_DWORD)TokenInformation )
      v7 = 0;
  }
  if ( a3 )
  {
    v8 = *a3;
    if ( v7 )
      v9 = v8 | 3;
    else
      v9 = v8 | 5;
    *a3 = v9;
  }
  if ( v3 )
  {
    PrimaryToken = (struct _LIST_ENTRY *)Object.PrimaryToken;
    ClientToken = (struct _LIST_ENTRY *)Object.ClientToken;
    if ( SeTokenLeakTracking )
    {
      if ( Object.PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object.PrimaryToken + 143) + 284LL));
        if ( PrimaryToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)&ClientToken[71].Blink[17].Blink + 1);
        if ( ClientToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&Process[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
    do
    {
      if ( ((unsigned __int64)PrimaryToken ^ ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag(PrimaryToken, 0x75536553u);
        goto LABEL_21;
      }
      v14 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&Process[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v14 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)&PrimaryToken[-3], -1, 0x75536553u);
LABEL_21:
    if ( ClientToken )
      ObfDereferenceObjectWithTag(ClientToken, 0x75536553u);
  }
  return v7;
}
