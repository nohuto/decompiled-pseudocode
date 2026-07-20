/*
 * XREFs of SmpStopCsr @ 0x140007B00
 * Callers:
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 * Callees:
 *     SmpReleaseControlBlock @ 0x140005FF0 (SmpReleaseControlBlock.c)
 *     SmpTerminateCSR @ 0x140006C40 (SmpTerminateCSR.c)
 *     SmpLookupControlBlock @ 0x140007B60 (SmpLookupControlBlock.c)
 *     SmpDestroyControlBlock @ 0x140007BF4 (SmpDestroyControlBlock.c)
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
