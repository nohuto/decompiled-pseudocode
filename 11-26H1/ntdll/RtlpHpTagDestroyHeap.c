/*
 * XREFs of RtlpHpTagDestroyHeap @ 0x180072524
 * Callers:
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpTaggableHeap @ 0x180072350 (RtlpHpTaggableHeap.c)
 *     RtlpWalkHeap @ 0x180073110 (RtlpWalkHeap.c)
 *     RtlpEnsureSegHeapLockedForWalk @ 0x1800744A4 (RtlpEnsureSegHeapLockedForWalk.c)
 *     RtlpHpHeapWalk @ 0x1800744FC (RtlpHpHeapWalk.c)
 */

void __fastcall RtlpHpTagDestroyHeap(__int64 a1)
{
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // r8
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int128 v7; // [rsp+40h] [rbp-18h]

  if ( (RtlpHpHeapFeatures & 4) != 0 && RtlpHpTaggableHeap(a1) )
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
      {
        RtlpEnsureSegHeapLockedForWalk(a1);
        LOBYTE(v4) = 1;
        v3 = RtlpHpHeapWalk(a1, &v5, v4);
      }
      else
      {
        LOBYTE(v2) = 1;
        v3 = RtlpWalkHeap(a1, &v5, v2);
      }
      if ( v3 < 0 )
        break;
      if ( (BYTE2(v6) & 0x11) == 0x11 )
      {
        if ( (_WORD)v7 )
        {
          v2 = -*((_QWORD *)&v5 + 1);
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_1801CCBF8 + 8LL * (unsigned __int16)v7 - 8) + 32LL),
            -*((_QWORD *)&v5 + 1));
        }
      }
    }
  }
}
