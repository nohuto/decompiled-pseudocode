/*
 * XREFs of CmpFreezeHive @ 0x140A416D8
 * Callers:
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x1408B5C5C (CmpEnumerateAllOpenSubKeys.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpRecordUnloadEventForHive @ 0x140A41774 (CmpRecordUnloadEventForHive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A41830 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpFreezeHive(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  if ( a2 && (v5 = CmpRecordUnloadEventForHive(v2, a2), v5 < 0) )
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  else
  {
    v7[1] = 0LL;
    v7[0] = a1;
    v7[2] = 0LL;
    CmpEnumerateAllOpenSubKeys(a1, 0, (__int64)CmpSearchAndTagNoDelayCloseWorker, (__int64)v7);
    *(_WORD *)(a1 + 8) |= 0x20u;
    v5 = 0;
    *(_BYTE *)(v2 + 2952) = 1;
    *(_QWORD *)(v2 + 2944) = a1;
  }
  return (unsigned int)v5;
}
