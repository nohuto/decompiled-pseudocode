/*
 * XREFs of LdrpInitializationComplete @ 0x1800CEC50
 * Callers:
 *     LdrpInitializeInternal @ 0x1800CEA78 (LdrpInitializeInternal.c)
 *     LdrpProcessInitializationComplete @ 0x1800CEC30 (LdrpProcessInitializationComplete.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 */

struct _PEB *__fastcall LdrpInitializationComplete(volatile signed __int32 *a1, _QWORD *a2, __int16 a3)
{
  struct _PEB *result; // rax
  __int64 v7; // r9
  __int64 v8; // rcx

  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v7 = (__int64)result->SharedData + 554;
  }
  else
  {
    v7 = 2147353476LL;
  }
  if ( *(_BYTE *)v7 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v8 = (__int64)result->SharedData + 555;
      }
      else
      {
        v8 = 2147353477LL;
      }
      if ( (*(_BYTE *)v8 & 0x20) != 0 )
        result = (struct _PEB *)LdrpLogEtwEvent(a3, -1LL, 255, 255, 0LL, 0LL);
    }
  }
  _InterlockedIncrement(a1);
  if ( *a2 )
    return (struct _PEB *)ZwSetEvent(*a2, 0LL);
  return result;
}
