/*
 * XREFs of RtlWalkHeap @ 0x1800725D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x1800744A4 (RtlpEnsureSegHeapLockedForWalk.c)
 */

__int64 __fastcall RtlWalkHeap(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpEnsureSegHeapLockedForWalk(a1);
    LOBYTE(v6) = 1;
    return RtlpHpHeapWalk(a1, a2, v6);
  }
  else
  {
    LOBYTE(a3) = 1;
    return RtlpWalkHeap(a1, a2, a3);
  }
}
