/*
 * XREFs of ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B7CD8
 * Callers:
 *     ?ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6B10 (-ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreWakeUpPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6EE0 (-ndisOidPreWakeUpPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisQueryWakeUpPatternList(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  UINT v3; // ebx
  UINT v5; // r13d
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _SINGLE_LIST_ENTRY *Next; // rsi
  _SINGLE_LIST_ENTRY *i; // r8
  unsigned int v10; // edx
  __int64 Next_low; // rcx
  unsigned __int64 v12; // rcx
  unsigned int v13; // r15d
  char *InformationBuffer; // r12
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  KIRQL v17; // dl
  int v18; // edx
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  v5 = 0;
  NewIrql = 0;
  MiniportHandle = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Cu,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a2,
      (char)a1,
      a3);
  if ( !MiniportHandle )
    MiniportHandle = a1->MiniportHandle;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  if ( a1 )
    Next = a1->PatternList.Next;
  else
    Next = MiniportHandle->PatternList.Next;
  for ( i = Next; i; v3 += v12 )
  {
    v10 = HIDWORD(i[7].Next) + LODWORD(i[8].Next);
    Next_low = LODWORD(i[7].Next);
    i = i->Next;
    v12 = Next_low + 24;
    if ( v12 <= v10 )
      LODWORD(v12) = v10;
  }
  v13 = 0;
  if ( a3->DATA.QUERY_INFORMATION.InformationBufferLength >= v3 )
  {
    InformationBuffer = (char *)a3->DATA.QUERY_INFORMATION.InformationBuffer;
    while ( Next )
    {
      v15 = LODWORD(Next[7].Next) + 24LL;
      if ( v15 <= (unsigned int)(HIDWORD(Next[7].Next) + LODWORD(Next[8].Next)) )
        LODWORD(v15) = HIDWORD(Next[7].Next) + LODWORD(Next[8].Next);
      v16 = (unsigned int)v15;
      memmove(InformationBuffer, &Next[6], (unsigned int)v15);
      Next = Next->Next;
      InformationBuffer += v16;
      v5 += v16;
    }
  }
  else
  {
    a3->DATA.QUERY_INFORMATION.BytesNeeded = v3;
    v13 = -1073676268;
  }
  v17 = NewIrql;
  a3->DATA.QUERY_INFORMATION.BytesWritten = v5;
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, v17);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v18,
      0xBu,
      0x2Du,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a3,
      v13);
  return v13;
}
