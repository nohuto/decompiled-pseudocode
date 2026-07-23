/*
 * XREFs of RtlpCSparseBitmapWaitOnAddress @ 0x140353B34
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x140353424 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140353684 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140478630 (ExTimedWaitForUnblockPushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpCSparseBitmapWaitOnAddress(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  signed __int64 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed __int64 v11; // rdx
  _BYTE v12[24]; // [rsp+20h] [rbp-48h] BYREF
  signed __int64 v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-14h]

  v4 = 0;
  if ( *(_BYTE *)(a4 + 48) )
  {
    while ( a1 == (_QWORD *)*a2 )
      _mm_pause();
    return 0LL;
  }
  else
  {
    v8 = (signed __int64 *)(a4 + 40);
    memset_0(v12, 0, 0x40uLL);
    v14 = 2;
    _m_prefetchw(v8);
    v13 = *v8;
    v10 = v13;
    v9 = _InterlockedCompareExchange64(v8, (signed __int64)v12, v13);
    if ( v10 != v9 )
    {
      do
      {
        v11 = v9;
        v13 = v9;
        v9 = _InterlockedCompareExchange64(v8, (signed __int64)v12, v9);
      }
      while ( v9 != v11 );
    }
    if ( *a1 == *a2 )
      return (unsigned int)ExTimedWaitForUnblockPushLock(v8, v12, 0LL);
    else
      ExpUnblockPushLock(v8, v12, 0LL);
    return v4;
  }
}
