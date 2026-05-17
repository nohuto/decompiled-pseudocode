/*
 * XREFs of RtlpTpWorkUnposted @ 0x180066FE0
 * Callers:
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x18004ED88 (TppPoolpFree.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     RtlTpETWCallbackDequeue @ 0x180067254 (RtlTpETWCallbackDequeue.c)
 *     RtlpTpDeleteData @ 0x180067444 (RtlpTpDeleteData.c)
 */

__int64 __fastcall RtlpTpWorkUnposted(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  volatile signed __int32 *v6; // rcx
  volatile signed __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  volatile signed __int32 *v12; // rcx
  unsigned __int64 v13; // rcx

  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478LL;
  if ( *(_BYTE *)v4 )
    RtlTpETWCallbackDequeue(v4, a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v5 = 0;
  if ( !a2 && (*(_BYTE *)(a1 + 48) & 0xC0) != 0 )
    v5 = 2;
  v6 = *(volatile signed __int32 **)(a1 + 32);
  if ( !v6 )
  {
    v6 = (volatile signed __int32 *)TppPoolpGlobalPool;
    if ( v5 )
      v6 = (volatile signed __int32 *)TppPoolpSerializedPool;
  }
  if ( v6 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v7 = &TppPoolpGlobalPoolLock;
    v8 = &TppPoolpGlobalPool;
LABEL_16:
    TppPoolpDereferenceGlobalPool((const void **)v8, v7);
    goto LABEL_17;
  }
  if ( v6 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v7 = &TppPoolpSerializedPoolLock;
    v8 = &TppPoolpSerializedPool;
    goto LABEL_16;
  }
  if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    TppPoolpFree((__int64)v6);
LABEL_17:
  RtlpTpDeleteData(a1 + 40);
  v12 = *(volatile signed __int32 **)(a1 + 72);
  if ( v12 != (volatile signed __int32 *)-1LL )
    RtlReleaseActivationContext(v12);
  v13 = *(_QWORD *)(a1 + 80);
  if ( v13 )
    LdrUnloadDll(v13, v9, v10, v11);
  return RtlFreeHeap_0();
}
