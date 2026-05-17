/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180054220
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004FFD4 (RtlpWnfWalkUserSubscriptionList.c)
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x180052AB0 (EtwpProcessNotification.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     RtlpTpIoCallback @ 0x1800661C0 (RtlpTpIoCallback.c)
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

void *__fastcall RtlSetThreadSubProcessTag(void *a1)
{
  struct _TEB *v1; // rax
  __int64 v2; // rdi
  void *SubProcessTag; // rbx
  _DWORD *SharedData; // rdx
  __int64 v5; // rax
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v1 = NtCurrentTeb();
  v2 = 2147353488LL;
  SubProcessTag = v1->SubProcessTag;
  v1->SubProcessTag = a1;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (__int64)NtCurrentPeb()->SharedData + 566;
  else
    v5 = 2147353488LL;
  if ( *(_BYTE *)v5 && a1 != SubProcessTag )
  {
    memset(v7, 0, sizeof(v7));
    WORD3(v7[0]) = 1349;
    v8 = (int)SubProcessTag;
    v9 = (int)a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v2 = (__int64)NtCurrentPeb()->SharedData + 566;
    NtTraceEvent(*(unsigned __int8 *)v2, 1026LL, 8LL, v7);
  }
  return SubProcessTag;
}
