/*
 * XREFs of EtwpThreadEnumCallback @ 0x140A8BF80
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14096EA90 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpTraceThreadRundown @ 0x140412620 (EtwpTraceThreadRundown.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405291D8 (EtwpTraceThreadRundownWithStack.c)
 */

__int64 __fastcall EtwpThreadEnumCallback(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // zf

  if ( (*(_DWORD *)(a2 + 1440) & 1) == 0 || !(unsigned __int8)*(_DWORD *)(a2 + 4) )
  {
    v4 = *(_BYTE *)(a3 + 66) == 0;
    *(_DWORD *)(a3 + 40) = 6297859;
    if ( v4 )
      EtwpTraceThreadRundown(a2, a3);
    else
      EtwpTraceThreadRundownWithStack(a2, a3);
  }
  return 0LL;
}
