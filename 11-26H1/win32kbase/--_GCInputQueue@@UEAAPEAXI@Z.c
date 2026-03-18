/*
 * XREFs of ??_GCInputQueue@@UEAAPEAXI@Z @ 0x14014A860
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x14014A8A0 (-MarkInvalid@CInputQueue@@UEAAXXZ.c)
 */

CInputQueue *__fastcall CInputQueue::`scalar deleting destructor'(CInputQueue *Buffer, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  *(_QWORD *)Buffer = &CInputQueue::`vftable';
  CInputQueue::MarkInvalid(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
