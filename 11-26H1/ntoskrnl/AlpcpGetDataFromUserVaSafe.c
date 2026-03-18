/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1408E6480
 * Callers:
 *     AlpcpGetDataFromMessage @ 0x1408E63B4 (AlpcpGetDataFromMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlCopyToUserFromUser @ 0x14077F2E8 (RtlCopyToUserFromUser.c)
 */

__int64 (*__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2, char a3))(void)
{
  size_t v4; // r10
  void *v5; // rdx
  char v6; // r9

  v4 = *(unsigned __int16 *)(a1 + 240);
  v5 = (void *)(*(_QWORD *)(a1 + 176) & 0xFFFFFFFFFFFFFFFEuLL);
  v6 = *(_BYTE *)(a1 + 176) & 1;
  if ( a3 == 1 )
  {
    if ( v6 )
      return (__int64 (*)(void))RtlCopyToUserFromUser(a2, v5, v4);
    else
      return (__int64 (*)(void))RtlCopyToUser(a2, v5, v4);
  }
  else if ( v6 )
  {
    return RtlCopyFromUser(a2, v5, *(unsigned __int16 *)(a1 + 240));
  }
  else
  {
    return (__int64 (*)(void))RtlCopyVolatileMemory(a2, v5, *(unsigned __int16 *)(a1 + 240));
  }
}
