/*
 * XREFs of ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B98B8
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F940 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x14014293C (--$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U.c)
 *     ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x140142AE0 (--$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA-AV-$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U-$KF.c)
 */

__int64 __fastcall ndisXlateAddWolPatternToPacketPatternOid(struct _NDIS_OID_REQUEST *a1, unsigned __int8 *a2)
{
  _DWORD *InformationBuffer; // r15
  unsigned int v3; // esi
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // r8
  int v10; // edx
  _DWORD *v11; // rdi
  char *v12; // rcx
  int v13; // eax
  UINT v15; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  InformationBuffer = a1->DATA.QUERY_INFORMATION.InformationBuffer;
  v3 = 0;
  v15 = 0;
  *a2 = 0;
  if ( InformationBuffer[3] == 1 )
  {
    MakePoolPtr<_NDIS_WOL_XLATION_CONTEXT>(&P);
    v7 = P;
    if ( P )
    {
      *(_DWORD *)P = a1->DATA.QUERY_INFORMATION.Oid;
      v7[1] = a1->DATA.QUERY_INFORMATION.InformationBuffer;
      *((_DWORD *)v7 + 4) = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
      v8 = InformationBuffer[41];
      v9 = v8 + InformationBuffer[43];
      if ( (unsigned int)v9 < v8 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v6,
            11,
            111,
            (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
            (char)a1);
        }
        v3 = -1073741811;
      }
      else
      {
        MakeExtendedPoolPtr<_NDIS_PM_PACKET_PATTERN>(&P, v6, v9, &v15);
        v11 = P;
        if ( P )
        {
          v12 = (char *)P + 24;
          *((_DWORD *)P + 1) = InformationBuffer[37];
          *v11 = InformationBuffer[2];
          v13 = InformationBuffer[41];
          v11[2] = v13;
          v11[3] = v13 + 24;
          v11[4] = InformationBuffer[43];
          memmove(v12, (char *)InformationBuffer + (unsigned int)InformationBuffer[40], (unsigned int)v11[2]);
          memmove(
            (char *)v11 + (unsigned int)v11[3],
            (char *)InformationBuffer + (unsigned int)InformationBuffer[42],
            (unsigned int)v11[4]);
          a1->DATA.QUERY_INFORMATION.InformationBufferLength = v15;
          a1->DATA.QUERY_INFORMATION.Oid = -50265853;
          a1->DATA.QUERY_INFORMATION.InformationBuffer = v11;
          v7[3] = v11;
          *(_QWORD *)&a1->NdisReserved[72] = v7;
          return v3;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v10,
            (_DWORD)P + 11,
            (_DWORD)P + 112,
            (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
            (char)a1);
        }
        v3 = -1073741670;
      }
      *a2 = 1;
      ExFreePoolWithTag(v7, 0);
      return v3;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        (_DWORD)P + 11,
        (_DWORD)P + 110,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        (char)a1);
    }
    v3 = -1073741670;
    *a2 = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x6Du,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        (char)a1,
        InformationBuffer[3]);
    *a2 = 1;
    return (unsigned int)-1073741637;
  }
  return v3;
}
