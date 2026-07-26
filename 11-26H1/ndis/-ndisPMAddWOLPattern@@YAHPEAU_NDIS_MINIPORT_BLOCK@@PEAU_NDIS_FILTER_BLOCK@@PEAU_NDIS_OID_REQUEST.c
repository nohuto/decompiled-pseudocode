/*
 * XREFs of ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140049560
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14000E8F0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x14001FAE0 (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1400233E0 (WPP_RECORDER_SF_qqqd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140047930 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x140047E60 (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x14008DC50 (-ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1400B58E4 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPMAddWOLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_PACKET_PATTERN_ENTRY *v6; // rbx
  char v7; // r15
  unsigned int SetMiniport; // eax
  unsigned int v9; // edi
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int v11; // eax
  KIRQL v12; // dl
  int v13; // r15d
  struct _NDIS_PACKET_PATTERN_ENTRY *v14; // rax
  __int64 v15; // r11
  unsigned int PortNumber; // eax
  int v17; // eax
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // dl
  struct _SINGLE_LIST_ENTRY *p_Link; // r15
  int Next_high; // eax
  int WoLPatternSize; // eax
  int v23; // edx
  _QWORD *v24; // rbx
  void *v25; // rcx
  _QWORD *v26; // r15
  struct _NDIS_FILTER_BLOCK *v28; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v29[16]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[248]; // [rsp+70h] [rbp-90h] BYREF

  memset(v31, 0, sizeof(v31));
  v29[0] = 0;
  P[0] = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Du,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  ndisWaitForKernelObject(&a1->PMPatternSemaphore);
  while ( 1 )
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, a2);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, v29);
      if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
        Next = a1->WOLPatternList.Next;
      else
        Next = a1->PatternList.Next;
      v11 = ndisClonePMPatternList(Next, (struct _SINGLE_LIST_ENTRY *)P);
      v12 = v29[0];
      v13 = v11;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v12);
      if ( v13 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_28;
        v18 = 79;
        LODWORD(v28) = v13;
        v19 = 2;
        goto LABEL_27;
      }
      v7 = 1;
    }
    v14 = ndisRemovePMLowestPriorityEntry(
            (struct _SINGLE_LIST_ENTRY *)P,
            *((_DWORD *)a3->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      v17 = *(_DWORD *)(v15 + 8);
      v18 = 80;
      v19 = 4;
LABEL_26:
      LODWORD(v28) = v17;
LABEL_27:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v19,
        0xEu,
        v18,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        v28);
      goto LABEL_28;
    }
    v14->Link.Next = &v6->Link;
    v6 = v14;
    memset(&v31[112], 0, 136);
    *(_QWORD *)&v31[104] = &ndisIntReqGeneric;
    memset(v31, 0, 104);
    *(_DWORD *)&v31[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v31[168]);
    *(_DWORD *)v31 = 15466902;
    *(_DWORD *)&v31[32] = -50265845;
    *(_DWORD *)&v31[4] = 1;
    PortNumber = v6->PortNumber;
    *(_DWORD *)&v31[88] |= 0x1800000u;
    *(_DWORD *)&v31[8] = PortNumber;
    *(_QWORD *)&v31[40] = &v6->Id;
    *(_DWORD *)&v31[48] = 4;
    v17 = ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)v31, 0, 0LL, a2);
    if ( v17 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      v18 = 81;
      v19 = 2;
      goto LABEL_26;
    }
  }
  if ( SetMiniport && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 78;
    LODWORD(v28) = SetMiniport;
    v19 = 2;
    goto LABEL_27;
  }
LABEL_28:
  while ( 1 )
  {
    p_Link = &v6->Link;
    if ( !v6 )
      break;
    v6 = (struct _NDIS_PACKET_PATTERN_ENTRY *)v6->Link.Next;
    *(_QWORD *)&v31[104] = &ndisIntReqGeneric;
    memset(v31, 0, 104);
    memset(&v31[112], 0, 136);
    *(_DWORD *)&v31[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v31[168]);
    *(_DWORD *)v31 = 15466902;
    *(_DWORD *)&v31[32] = -50265846;
    *(_DWORD *)&v31[4] = 1;
    Next_high = HIDWORD(p_Link[5].Next);
    *(_QWORD *)&v31[40] = p_Link + 6;
    *(_DWORD *)&v31[8] = Next_high;
    WoLPatternSize = ndisGetWoLPatternSize((struct _NDIS_PM_WOL_PATTERN *)&p_Link[6]);
    *(_DWORD *)&v31[88] |= 0x1800000u;
    *(_DWORD *)&v31[48] = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)v31, 0, 0LL, a2) )
    {
      p_Link->Next = &v6->Link;
      break;
    }
    ExFreePoolWithTag(p_Link, 0);
  }
  KeReleaseSemaphore(&a1->PMPatternSemaphore, 0, 1, 0);
  ndisCreatePMRejectWorkItem(a1, p_Link, 1073938513);
  v24 = P[0];
  if ( P[0] )
  {
    do
    {
      v25 = v24;
      v26 = v24;
      if ( v24 )
      {
        v26 = (_QWORD *)*v24;
        v24 = (_QWORD *)*v24;
      }
      ExFreePoolWithTag(v25, 0);
    }
    while ( v26 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v23,
      0xBu,
      0x52u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v9);
  return v9;
}
