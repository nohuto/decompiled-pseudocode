/*
 * XREFs of ViIovIoBuildSynchronousFsdRequest_Exit @ 0x140698E40
 * Callers:
 *     <none>
 * Callees:
 *     ViSetIoBuildRequestFlag @ 0x140698EB0 (ViSetIoBuildRequestFlag.c)
 */

__int64 __fastcall ViIovIoBuildSynchronousFsdRequest_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 72) )
    return ViSetIoBuildRequestFlag();
  return result;
}
