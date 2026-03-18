/*
 * XREFs of KiRemoveTimer2 @ 0x140378EB0
 * Callers:
 *     KiTimer2Expiration @ 0x140336A40 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x1403374E8 (KiAdjustTimer2DueTimes.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403789C0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveTimer2(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rbp
  _BYTE *v3; // rdi
  int v5; // r13d
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  bool v18; // cf
  volatile signed __int32 *v19; // rcx

  v1 = 0;
  v2 = 72LL;
  v3 = (_BYTE *)(a1 + 130);
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( (*v3 & 0x10) != 0 )
      goto LABEL_8;
    v7 = 0x140000000LL + 24LL * (*v3 & 7) + 15887360;
    v8 = *(_QWORD *)(0x140000008LL + 24LL * (*v3 & 7) + 15887360);
    v9 = a1 + 24 * (v1 + 1LL);
    if ( (v8 & 1) != 0 )
    {
      if ( v8 == 1 )
        v10 = 0LL;
      else
        v10 = v8 ^ (v7 | 1);
    }
    else
    {
      v10 = *(_QWORD *)(0x140000008LL + 24LL * (*v3 & 7) + 15887360);
    }
    if ( v10 != v9 )
    {
      RtlRbRemoveNode(v7, v9);
      goto LABEL_8;
    }
    RtlRbRemoveNode(v7, v9);
    v12 = *(_QWORD *)(v7 + 8);
    v5 = 1;
    if ( (v12 & 1) != 0 )
    {
      if ( v12 == 1 )
        goto LABEL_16;
      v13 = v12 ^ (v7 | 1);
    }
    else
    {
      v13 = *(_QWORD *)(v7 + 8);
    }
    if ( !v13 )
    {
LABEL_16:
      *(_QWORD *)(v7 + 16) = -1LL;
      goto LABEL_8;
    }
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(v2 - v6 + v13 - 24);
LABEL_8:
    ++v1;
    v2 += 8LL;
    ++v3;
    v6 += 24LL;
  }
  while ( v1 < 2 );
  if ( v5 && KiNextTimer2DueTime == *(_QWORD *)(a1 + 72) )
  {
    v14 = -1LL;
    v15 = (__int64 *)&unk_140F26C10;
    v16 = 7LL;
    do
    {
      v17 = v14;
      v14 = *v15;
      v18 = *v15 < v17;
      v15 += 3;
      if ( !v18 )
        v14 = v17;
      --v16;
    }
    while ( v16 );
    KiNextTimer2DueTime = v14;
  }
  result = *(unsigned __int8 *)(a1 + 129);
  if ( (result & 4) != 0 && _InterlockedExchangeAdd(&KiHrTimerActiveCount, 0xFFFFFFFF) == 1 )
  {
    result = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    v19 = *(volatile signed __int32 **)(result + 36600);
    if ( v19 )
      _InterlockedAnd(v19, 0xFFF7FFFF);
  }
  return result;
}
