/*
 * XREFs of TpUnreserveTaskPost @ 0x1800DDF78
 * Callers:
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 */

void __fastcall TpUnreserveTaskPost(char *a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdx
  const void **v3; // rcx

  if ( !a1 )
  {
    if ( !a2 || (a1 = (char *)TppPoolpSerializedPool, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (char *)TppPoolpGlobalPool;
  }
  if ( a1 == (char *)TppPoolpGlobalPool )
  {
    v2 = &TppPoolpGlobalPoolLock;
    v3 = (const void **)&TppPoolpGlobalPool;
LABEL_9:
    TppPoolpDereferenceGlobalPool(v3, v2);
    return;
  }
  if ( a1 == TppPoolpSerializedPool )
  {
    v2 = &TppPoolpSerializedPoolLock;
    v3 = (const void **)&TppPoolpSerializedPool;
    goto LABEL_9;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    TppPoolpFree(a1);
}
