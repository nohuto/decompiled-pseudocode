/*
 * XREFs of EtwpAddProviderTrackingInfo @ 0x180078E38
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180078A04 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     EtwpAddDebugInfoEvents @ 0x180056708 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x180056860 (EtwpAddBinaryInfoEvents.c)
 */

_QWORD *__fastcall EtwpAddProviderTrackingInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // r9
  _QWORD *result; // rax
  _QWORD *v8; // rbp

  v3 = (_QWORD *)(a1 + 464);
  result = (_QWORD *)(a1 + 448);
  if ( (_QWORD *)*v3 == v3 )
  {
    if ( (_QWORD *)*result == result )
      return result;
    v8 = (_QWORD *)(a1 + 464);
  }
  else
  {
    v8 = (_QWORD *)(a1 + 464);
  }
  if ( *(_DWORD *)(a2 + 48) < a3 && *(_DWORD *)(a2 + 48) >= 0x180u )
  {
    if ( (_QWORD *)*result != result )
    {
      result = (_QWORD *)EtwpAddDebugInfoEvents(a1, a2, a3);
      v3 = v8;
    }
    if ( (_QWORD *)*v3 != v3 )
      return (_QWORD *)EtwpAddBinaryInfoEvents(a1, a2, a3);
  }
  return result;
}
