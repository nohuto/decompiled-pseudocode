/*
 * XREFs of TpUnreserveTaskPost @ 0x1800E06D8
 * Callers:
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 */

struct _TEB *__fastcall TpUnreserveTaskPost(volatile signed __int32 *a1, __int64 a2)
{
  struct _TEB *result; // rax
  volatile signed __int64 *v3; // rdx
  __int64 *v4; // rcx

  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)TppPoolpSerializedPool, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)TppPoolpGlobalPool;
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v3 = &TppPoolpGlobalPoolLock;
    v4 = &TppPoolpGlobalPool;
    return TppPoolpDereferenceGlobalPool((const void **)v4, v3);
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v3 = &TppPoolpSerializedPoolLock;
    v4 = &TppPoolpSerializedPool;
    return TppPoolpDereferenceGlobalPool((const void **)v4, v3);
  }
  result = (struct _TEB *)(unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (struct _TEB *)TppPoolpFree((__int64)a1);
  return result;
}
