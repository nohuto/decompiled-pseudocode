/*
 * XREFs of EtwpDequeueBufferPendingCompressionFromQueue @ 0x1406CC0A8
 * Callers:
 *     EtwpDequeueBufferPendingCompression @ 0x1406CBFA4 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     EtwpBufferQueueRemoveAfter @ 0x14048F94C (EtwpBufferQueueRemoveAfter.c)
 */

__int64 __fastcall EtwpDequeueBufferPendingCompressionFromQueue(_QWORD *a1, volatile signed __int32 *a2, __int64 a3)
{
  _QWORD *i; // rdx
  _QWORD *v6; // r10
  __int64 v7; // r9
  _QWORD *v8; // r11
  _QWORD *v9; // rdx

  for ( i = a1 + 1; ; i = (_QWORD *)*i )
  {
    v6 = (_QWORD *)*i;
    if ( !*i )
      return 0LL;
    if ( *((_DWORD *)v6 + 3) == 4 && *((char *)v6 + 20) >= 0 )
      break;
  }
  _InterlockedDecrement(a2);
  EtwpBufferQueueRemoveAfter(a1, (_QWORD **)i);
  *(_QWORD *)(a3 + 32) = *v9;
  *v9 = a3 + 32;
  if ( v9 == (_QWORD *)*v8 )
    *v8 = a3 + 32;
  return v7;
}
