/*
 * XREFs of RtlpTpWorkUnposted @ 0x180087430
 * Callers:
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x1800870E0 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180039308 (TppPoolpFree.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     RtlTpETWCallbackDequeue @ 0x1800876A4 (RtlTpETWCallbackDequeue.c)
 *     RtlpTpDeleteData @ 0x180087894 (RtlpTpDeleteData.c)
 */

LOGICAL __fastcall RtlpTpWorkUnposted(_QWORD *BaseAddress, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  char *v6; // rcx
  _RTL_SRWLOCK *v7; // rdx
  const void **v8; // rcx
  _ACTIVATION_CONTEXT *v9; // rcx
  void *v10; // rcx

  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478LL;
  if ( *(_BYTE *)v4 )
    RtlTpETWCallbackDequeue(v4, (_DWORD)BaseAddress, BaseAddress[7], BaseAddress[8], BaseAddress[12]);
  v5 = 0;
  if ( !a2 && (BaseAddress[6] & 0xC0) != 0 )
    v5 = 2;
  v6 = (char *)BaseAddress[4];
  if ( !v6 )
  {
    v6 = (char *)TppPoolpGlobalPool;
    if ( v5 )
      v6 = (char *)TppPoolpSerializedPool;
  }
  if ( v6 == (char *)TppPoolpGlobalPool )
  {
    v7 = &TppPoolpGlobalPoolLock;
    v8 = (const void **)&TppPoolpGlobalPool;
LABEL_16:
    TppPoolpDereferenceGlobalPool(v8, v7);
    goto LABEL_17;
  }
  if ( v6 == TppPoolpSerializedPool )
  {
    v7 = &TppPoolpSerializedPoolLock;
    v8 = (const void **)&TppPoolpSerializedPool;
    goto LABEL_16;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
    TppPoolpFree(v6);
LABEL_17:
  RtlpTpDeleteData(BaseAddress + 5);
  v9 = (_ACTIVATION_CONTEXT *)BaseAddress[9];
  if ( v9 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v9);
  v10 = (void *)BaseAddress[10];
  if ( v10 )
    LdrUnloadDll(v10);
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
