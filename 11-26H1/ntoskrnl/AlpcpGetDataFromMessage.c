/*
 * XREFs of AlpcpGetDataFromMessage @ 0x1408E63B4
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x1408E5AC4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x1408E7654 (AlpcpProcessConnectionRequest.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1408F806C (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACBE7C (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1408E6480 (AlpcpGetDataFromUserVaSafe.c)
 */

void *__fastcall AlpcpGetDataFromMessage(__int64 a1, char *a2, char a3)
{
  __int64 v3; // rax
  __int64 v7; // rbx
  size_t v8; // rbx
  size_t v9; // rdi
  void *v10; // rdx
  char *v11; // rcx

  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 && (char *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) != a2 )
    return (void *)AlpcpGetDataFromUserVaSafe();
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 32) - 40LL;
  else
    v8 = 512LL;
  v9 = *(unsigned __int16 *)(a1 + 240);
  v10 = (void *)(a1 + 280);
  v11 = a2;
  if ( v9 > v8 )
  {
    if ( a3 )
      RtlCopyToUser(a2, v10, v8);
    else
      RtlCopyVolatileMemory(a2, v10, v8);
    v10 = *(void **)(a1 + 224);
    v11 = &a2[v8];
    v9 -= v8;
  }
  if ( a3 )
    return RtlCopyToUser(v11, v10, v9);
  else
    return RtlCopyVolatileMemory(v11, v10, v9);
}
