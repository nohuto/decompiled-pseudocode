/*
 * XREFs of RtlpHpLfhOwnerFreeListProcess @ 0x14034B470
 * Callers:
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403488A0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140349DA0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14034B5AC (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x14034B930 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 */

void __fastcall RtlpHpLfhOwnerFreeListProcess(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // rbx
  int v6; // edi
  int v8; // esi
  _QWORD *v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r12
  _WORD *v12; // r12
  int v13; // r8d
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // r8

  v4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8), 0LL);
  v6 = a2;
  if ( v4 )
  {
    v8 = a4 & 1;
    do
    {
      v9 = (_QWORD *)v4;
      v10 = v4;
      v11 = v4;
      v4 = *(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFFF000uLL;
      if ( v8 && *(_WORD *)(v11 + 18) )
      {
        v12 = (_WORD *)(v11 + 34);
      }
      else
      {
        v12 = (_WORD *)(v10 + 34);
        if ( *(unsigned __int16 *)(v10 + 18) + *(unsigned __int16 *)(v10 + 32) != *(unsigned __int16 *)(v10 + 34) )
          goto LABEL_7;
      }
      RtlpHpLfhSubsegmentDelayFreeProcess(a1, v10, 1LL);
LABEL_7:
      if ( *(_WORD *)(v10 + 32) == *v12 )
      {
        RtlpHpLfhOwnerMoveSubsegment(a1, v6, v10, 3, 2);
        v15 = *a3;
        if ( *(unsigned __int64 **)(*a3 + 8) != a3 )
LABEL_10:
          __fastfail(3u);
        *v9 = v15;
        *(_QWORD *)(v10 + 8) = a3;
        *(_QWORD *)(v15 + 8) = v10;
        *a3 = v10;
      }
      else if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, v6, v10, 0, 2) )
      {
        RtlpHpLfhOwnerMoveSubsegment(a1, v6, v13, 3, 2);
        v14 = (unsigned __int64 *)a3[1];
        if ( (unsigned __int64 *)*v14 != a3 )
          goto LABEL_10;
        *v9 = a3;
        *(_QWORD *)(v10 + 8) = v14;
        *v14 = v10;
        a3[1] = v10;
      }
    }
    while ( v4 );
  }
}
