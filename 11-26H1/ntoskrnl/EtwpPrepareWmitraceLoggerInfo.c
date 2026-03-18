/*
 * XREFs of EtwpPrepareWmitraceLoggerInfo @ 0x14082C5E4
 * Callers:
 *     EtwWmitraceWorker @ 0x14082C2B8 (EtwWmitraceWorker.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall EtwpPrepareWmitraceLoggerInfo(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0xB0uLL);
  *a1 = 176;
  a1[11] = 0x20000;
  result = (unsigned __int16)EtwpWmitraceParams;
  if ( !EtwpWmitraceParams )
    result = 0xFFFFLL;
  *((_WORD *)a1 + 4) = result;
  return result;
}
