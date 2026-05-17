/*
 * XREFs of RtlQueryPointerMapping @ 0x180145C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockShared(&RtlpPtrTreeLock);
  v4 = RtlpPtrTree;
  if ( (qword_1801C60A8 & 1) != 0 && RtlpPtrTree )
    v4 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  while ( v4 )
  {
    if ( a1 - *(_QWORD *)(v4 + 24) < 0 )
    {
      v5 = *(_QWORD *)v4;
    }
    else
    {
      if ( a1 - *(_QWORD *)(v4 + 24) <= 0 )
        break;
      v5 = *(_QWORD *)(v4 + 8);
    }
    if ( (qword_1801C60A8 & 1) != 0 && v5 )
      v4 ^= v5;
    else
      v4 = v5;
  }
  if ( v4 )
    *a2 = *(_QWORD *)(v4 + 32);
  RtlReleaseSRWLockShared(&RtlpPtrTreeLock);
  return v4 == 0 ? 0xC0000225 : 0;
}
