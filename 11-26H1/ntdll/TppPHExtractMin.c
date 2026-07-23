/*
 * XREFs of TppPHExtractMin @ 0x180088E30
 * Callers:
 *     TppWaitCompletion @ 0x180016C30 (TppWaitCompletion.c)
 *     TppTimerQueueExpiration @ 0x180088790 (TppTimerQueueExpiration.c)
 *     TppCancelTimer @ 0x180088B20 (TppCancelTimer.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppPHExtractMin(__int64 *a1)
{
  __int64 v1; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v7; // r10
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdx

  v1 = *a1;
  if ( !*a1 )
    return v1;
  v3 = *(_QWORD **)(v1 + 16);
  v4 = (_QWORD *)(v1 + 16);
  if ( v3 != (_QWORD *)(v1 + 16) )
  {
    if ( (_QWORD *)v3[1] != v4 || (v5 = *(_QWORD **)(v1 + 24), (_QWORD *)*v5 != v4) )
LABEL_5:
      __fastfail(3u);
    *v5 = v3;
    v3[1] = v5;
    *(_QWORD *)(v1 + 24) = v1 + 16;
    *v4 = v4;
    while ( (_QWORD *)*v3 != v3 )
    {
      v7 = (_QWORD *)*v3;
      if ( *(_QWORD *)(*v3 + 32LL) < v3[4] )
      {
        v7 = v3;
        v3 = (_QWORD *)*v3;
      }
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_5;
      v9 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v9 != v7 )
        goto LABEL_5;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = v3 + 2;
      v11 = v3[2];
      if ( *(_QWORD **)(v11 + 8) != v3 + 2 )
        goto LABEL_5;
      *v7 = v11;
      v7[1] = v10;
      *(_QWORD *)(v11 + 8) = v7;
      *v10 = v7;
      v3 = (_QWORD *)*v3;
    }
    *a1 = (__int64)v3;
    return v1;
  }
  *a1 = 0LL;
  return v1;
}
