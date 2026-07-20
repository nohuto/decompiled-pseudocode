/*
 * XREFs of SmpStopCsr @ 0x140007420
 * Callers:
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 * Callees:
 *     SmpReleaseControlBlock @ 0x140003C60 (SmpReleaseControlBlock.c)
 *     SmpTerminateCSR @ 0x1400056C0 (SmpTerminateCSR.c)
 *     SmpLookupControlBlock @ 0x140007480 (SmpLookupControlBlock.c)
 *     SmpDestroyControlBlock @ 0x1400075E8 (SmpDestroyControlBlock.c)
 */

__int64 __fastcall SmpStopCsr(__int64 a1)
{
  unsigned int v1; // ebx
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  char *v5; // rdi
  unsigned int v6; // ebx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (char *)SmpLookupControlBlock(v1);
  v5 = v2;
  if ( v2 )
  {
    v6 = SmpDestroyControlBlock(v2);
    SmpReleaseControlBlock(v5);
  }
  else
  {
    return (unsigned int)SmpTerminateCSR(v1, v3, v4);
  }
  return v6;
}
