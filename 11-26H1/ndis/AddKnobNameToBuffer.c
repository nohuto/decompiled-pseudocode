/*
 * XREFs of AddKnobNameToBuffer @ 0x14014F0F4
 * Callers:
 *     ?EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z @ 0x14014F32C (-EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z.c)
 * Callees:
 *     AddStringToBufferContext @ 0x1400E6328 (AddStringToBufferContext.c)
 */

void *__fastcall AddKnobNameToBuffer(_DWORD *a1, _WORD *a2)
{
  __int64 v2; // r8

  ++*a1;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  return AddStringToBufferContext((__int64)a1, a2, (int)v2 + 1);
}
