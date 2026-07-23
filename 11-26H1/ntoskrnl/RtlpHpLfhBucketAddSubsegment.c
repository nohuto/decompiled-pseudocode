/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x14034B2B0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x140349990 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140349DA0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentFree @ 0x14034B3E0 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14034B5AC (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x14034BA20 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 */

char __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // r14
  char v5; // di
  __int16 v6; // ax
  _QWORD *v10; // r8
  __int64 v11; // rax
  int v12; // r15d
  _QWORD *v13; // rdx
  _QWORD *v14; // rax

  v4 = (_QWORD *)*a3;
  v5 = (unsigned __int8)a4 & 0xC;
  LOBYTE(v6) = 8;
  if ( ((unsigned __int8)a4 & 0xC) == 0 )
    v5 = 8;
  if ( v4 != a3 )
  {
    v12 = (unsigned __int8)a4 & 2;
    do
    {
      v13 = v4;
      v4 = (_QWORD *)*v4;
      if ( v12 || (v6 = *((_WORD *)v13 + 17), *((_WORD *)v13 + 16) != v6) )
      {
        if ( (*((_BYTE *)v13 + 51) & 1) != 0 )
        {
          LOBYTE(v6) = *((_BYTE *)v13 + 51) & 0xFE;
          *((_BYTE *)v13 + 51) = v6;
          if ( (v5 & 8) == 0 )
            LOBYTE(v6) = RtlpHpLfhSubsegmentReformatAsMulti(a1, v13, 1LL);
        }
      }
      else
      {
        if ( (_QWORD *)v4[1] != v13 || (v14 = (_QWORD *)v13[1], (_QWORD *)*v14 != v13) )
LABEL_22:
          __fastfail(3u);
        *v14 = v4;
        v4[1] = v14;
        LOBYTE(v6) = RtlpHpLfhSubsegmentFree(a1, v13, a2);
      }
    }
    while ( v4 != a3 );
  }
  if ( (_QWORD *)*a3 != a3 )
  {
    RtlpHpAcquireLockExclusive((int *)(a2 + 16), *(unsigned __int8 *)(a1 + 73), (__int64)a3, a4);
    v10 = (_QWORD *)*a3;
    do
    {
      if ( (_QWORD *)v10[1] != a3 )
        goto LABEL_22;
      v11 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_22;
      *a3 = v11;
      *(_QWORD *)(v11 + 8) = a3;
      RtlpHpLfhOwnerMoveSubsegment(a1, a2, (_DWORD)v10, 0, 0);
      v10 = (_QWORD *)*a3;
    }
    while ( (_QWORD *)*a3 != a3 );
    LOBYTE(v6) = RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a2 + 16));
  }
  return v6;
}
