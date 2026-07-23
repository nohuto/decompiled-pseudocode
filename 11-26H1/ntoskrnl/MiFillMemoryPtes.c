/*
 * XREFs of MiFillMemoryPtes @ 0x14047D2D0
 * Callers:
 *     MiInitializePrototypePtes @ 0x140988FE0 (MiInitializePrototypePtes.c)
 * Callees:
 *     <none>
 */

void __fastcall MiFillMemoryPtes(_QWORD *a1, __int64 a2, __int64 a3)
{
  for ( ; a2; --a2 )
    *a1++ = a3;
}
