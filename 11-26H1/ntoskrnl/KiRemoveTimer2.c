/*
 * XREFs of KiRemoveTimer2 @ 0x14037AC60
 * Callers:
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x140339568 (KiAdjustTimer2DueTimes.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14037A770 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveTimer2(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rbp
  _BYTE *v3; // rdi
  int v5; // r13d
  __int64 v6; // rsi
  _RTL_RB_TREE *v7; // r15
  __int64 v8; // rcx
  _RTL_BALANCED_NODE *v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  _RTL_BALANCED_NODE *Min; // rax
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
    v7 = (_RTL_RB_TREE *)(0x140000000LL + 24LL * (*v3 & 7) + 15887776);
    v8 = *(_QWORD *)(0x140000008LL + 24LL * (*v3 & 7) + 15887776);
    v9 = (_RTL_BALANCED_NODE *)(a1 + 24 * (v1 + 1LL));
    if ( (v8 & 1) != 0 )
    {
      if ( v8 == 1 )
        v10 = 0LL;
      else
        v10 = v8 ^ ((unsigned __int64)v7 | 1);
    }
    else
    {
      v10 = *(_QWORD *)(0x140000008LL + 24LL * (*v3 & 7) + 15887776);
    }
    if ( (_RTL_BALANCED_NODE *)v10 != v9 )
    {
      RtlRbRemoveNode(v7, v9);
      goto LABEL_8;
    }
    RtlRbRemoveNode(v7, v9);
    Min = v7->Min;
    v5 = 1;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Min == (_RTL_BALANCED_NODE *)1 )
        goto LABEL_16;
      v13 = (unsigned __int64)Min ^ ((unsigned __int64)v7 | 1);
    }
    else
    {
      v13 = (__int64)v7->Min;
    }
    if ( !v13 )
    {
LABEL_16:
      v7[1].Root = (_RTL_BALANCED_NODE *)-1LL;
      goto LABEL_8;
    }
    v7[1].Root = *(_RTL_BALANCED_NODE **)(v2 - v6 + v13 - 24);
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
    v15 = (__int64 *)&unk_140F26DB0;
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
