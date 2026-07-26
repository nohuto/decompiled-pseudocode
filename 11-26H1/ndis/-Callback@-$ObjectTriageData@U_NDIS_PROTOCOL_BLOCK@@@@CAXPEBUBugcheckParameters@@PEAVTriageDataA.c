/*
 * XREFs of ?Callback@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataArray@@PEAX@Z @ 0x1400BAAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMemoryValid@@YA_NPEAX_K@Z @ 0x140093E14 (-IsMemoryValid@@YA_NPEAX_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

char __fastcall ObjectTriageData<_NDIS_PROTOCOL_BLOCK>::Callback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(_QWORD, __int64, __int64); // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi

  LOBYTE(v6) = IsMemoryValid(*(char **)(a3 + 104), 0x380uLL);
  if ( (_BYTE)v6 )
  {
    v7 = 0LL;
    if ( *(_QWORD *)(a3 + 96) )
    {
      v8 = 0LL;
      do
      {
        v6 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(a3 + 88) + v8 + 8);
        if ( v6 )
          LOBYTE(v6) = v6(*(_QWORD *)(a3 + 104), a2, a1);
        ++v7;
        v8 += 16LL;
      }
      while ( v7 < *(_QWORD *)(a3 + 96) );
    }
  }
  return (char)v6;
}
