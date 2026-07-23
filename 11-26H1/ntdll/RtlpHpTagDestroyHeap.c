/*
 * XREFs of RtlpHpTagDestroyHeap @ 0x180092B10
 * Callers:
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpTaggableHeap @ 0x180092910 (RtlpHpTaggableHeap.c)
 *     RtlpWalkHeap @ 0x180093700 (RtlpWalkHeap.c)
 *     RtlpEnsureSegHeapLockedForWalk @ 0x180094A94 (RtlpEnsureSegHeapLockedForWalk.c)
 *     RtlpHpHeapWalk @ 0x180094AEC (RtlpHpHeapWalk.c)
 */

void __fastcall RtlpHpTagDestroyHeap(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r8
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  __int128 v6; // [rsp+40h] [rbp-18h]

  if ( (RtlpHpHeapFeatures & 4) != 0 && RtlpHpTaggableHeap(a1) )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
      {
        RtlpEnsureSegHeapLockedForWalk(a1);
        LOBYTE(v3) = 1;
        v2 = RtlpHpHeapWalk(a1, &v4, v3);
      }
      else
      {
        v2 = RtlpWalkHeap(a1);
      }
      if ( v2 < 0 )
        break;
      if ( (BYTE2(v5) & 0x11) == 0x11 )
      {
        if ( (_WORD)v6 )
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_1801CBC38 + 8LL * (unsigned __int16)v6 - 8) + 32LL),
            -*((_QWORD *)&v4 + 1));
      }
    }
  }
}
