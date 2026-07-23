/*
 * XREFs of EtwpAddProviderTrackingInfo @ 0x180067658
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180067224 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     EtwpAddDebugInfoEvents @ 0x180040C88 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x180040DE0 (EtwpAddBinaryInfoEvents.c)
 */

int __fastcall EtwpAddProviderTrackingInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // r9
  _QWORD *v5; // rax
  _QWORD *v8; // rbp

  v3 = (_QWORD *)(a1 + 464);
  v5 = (_QWORD *)(a1 + 448);
  if ( (_QWORD *)*v3 == v3 )
  {
    if ( (_QWORD *)*v5 == v5 )
      return (int)v5;
    v8 = (_QWORD *)(a1 + 464);
  }
  else
  {
    v8 = (_QWORD *)(a1 + 464);
  }
  if ( *(_DWORD *)(a2 + 48) < a3 && *(_DWORD *)(a2 + 48) >= 0x180u )
  {
    if ( (_QWORD *)*v5 != v5 )
    {
      LODWORD(v5) = EtwpAddDebugInfoEvents(a1, a2, a3);
      v3 = v8;
    }
    if ( (_QWORD *)*v3 != v3 )
      LODWORD(v5) = EtwpAddBinaryInfoEvents(a1, a2, a3);
  }
  return (int)v5;
}
