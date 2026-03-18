/*
 * XREFs of ??_GIPTPEngine@@UEAAPEAXI@Z @ 0x140226D60
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

IPTPEngine *__fastcall IPTPEngine::`scalar deleting destructor'(IPTPEngine *this, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)this = &IPTPEngine::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
