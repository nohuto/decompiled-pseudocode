/*
 * XREFs of ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009ED20
 * Callers:
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMHaltMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  _ULONG_REFERENCE *p_Ref; // rcx
  unsigned int v4; // edx
  unsigned int v5; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      30,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  p_Ref = &a1->Ref;
  if ( a1->Ref.Closing )
  {
    KeReleaseSpinLock(&p_Ref->SpinLock, v2);
  }
  else
  {
    a1->Ref.Closing = 1;
    KeReleaseSpinLock(&p_Ref->SpinLock, v2);
    if ( (a1->PnPFlags & 0x4000) == 0 )
    {
      v4 = 380;
      if ( (a1->Flags & 0x100) != 0 )
        v4 = 56;
      if ( (a1->Flags & 0x80u) == 0 )
      {
        v5 = v4;
        v4 |= 2u;
        if ( (a1->Flags & 0x100) != 0 )
          v4 = v5;
      }
      ndisMCommonHaltMiniport(a1, v4);
      if ( (a1->Flags & 0x2000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFDFFF);
        KeDeregisterBugCheckCallback(&a1->BugcheckCallbackRecord);
      }
    }
    ndisDereferenceMiniport(a1, 0x18u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      31,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1);
}
