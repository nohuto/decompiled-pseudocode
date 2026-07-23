/*
 * XREFs of EtwpReferenceCurrentBuffer @ 0x140218DC0
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x14021A2DC (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14021B348 (EtwpLockBufferList.c)
 */

unsigned __int64 __fastcall EtwpReferenceCurrentBuffer(__int64 a1, signed __int64 *a2)
{
  signed __int64 v4; // rbx
  signed __int64 v5; // r9
  signed __int64 v6; // rax
  int v7; // r9d
  unsigned __int64 v8; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  char v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0;
  _m_prefetchw(a2);
  v4 = *a2;
  v5 = *a2;
  if ( (*a2 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(a2, v4 - 1, v4);
      if ( v4 == v6 )
        break;
      v4 = v6;
      LOBYTE(v5) = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  if ( !v4 )
    return 0LL;
  v7 = v5 & 0xF;
  if ( !v7 )
  {
    EtwpLockBufferList(a1, &v12);
    v8 = *a2 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
    EtwpUnlockBufferList(a1, &v12);
    return v8;
  }
  v8 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v7 != 1 )
    return v8;
  _InterlockedAdd((volatile signed __int32 *)(v8 + 12), 0xFu);
  _m_prefetchw(a2);
  v10 = *a2;
  while ( (v10 & 0xF) == 0 && v8 == (v10 & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange64(a2, v10 + 15, v10);
    if ( v11 == v10 )
      return v8;
  }
  _InterlockedAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFF1);
  return v8;
}
