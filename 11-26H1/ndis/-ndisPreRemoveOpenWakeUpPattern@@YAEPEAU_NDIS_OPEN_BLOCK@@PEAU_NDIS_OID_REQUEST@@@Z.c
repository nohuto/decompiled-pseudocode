/*
 * XREFs of ?ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B7A64
 * Callers:
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6D20 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

unsigned __int8 __fastcall ndisPreRemoveOpenWakeUpPattern(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned __int8 v4; // bp
  _SINGLE_LIST_ENTRY *i; // rbx
  _DWORD *InformationBuffer; // rdi
  int Next_high; // eax
  PVOID v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r12
  int v11; // r13d
  size_t v12; // r8
  int v14; // [rsp+70h] [rbp+8h]

  v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Fu,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      a2);
  for ( i = a1->PatternList.Next; i; i = i->Next )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( InformationBuffer[4] == LODWORD(i[8].Next) && InformationBuffer[2] == LODWORD(i[7].Next) )
    {
      Next_high = HIDWORD(i[6].Next);
      v8 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      v9 = (unsigned int)InformationBuffer[3];
      v10 = HIDWORD(i[7].Next);
      v11 = InformationBuffer[1];
      InformationBuffer[3] = 0;
      HIDWORD(i[7].Next) = 0;
      InformationBuffer[1] = 0;
      v12 = LODWORD(i[7].Next) + 24LL;
      v14 = Next_high;
      HIDWORD(i[6].Next) = 0;
      if ( !memcmp(v8, &i[6], v12) && !memcmp((char *)InformationBuffer + v9, (char *)&i[6] + v10, LODWORD(i[8].Next)) )
      {
        InformationBuffer[3] = v9;
        HIDWORD(i[7].Next) = v10;
        *(_DWORD *)&a2->NdisReserved[80] = i[5].Next;
        goto LABEL_13;
      }
      InformationBuffer[3] = v9;
      HIDWORD(i[7].Next) = v10;
      InformationBuffer[1] = v11;
      HIDWORD(i[6].Next) = v14;
    }
  }
  v4 = 0;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x20u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)a2,
      v4);
  return v4;
}
