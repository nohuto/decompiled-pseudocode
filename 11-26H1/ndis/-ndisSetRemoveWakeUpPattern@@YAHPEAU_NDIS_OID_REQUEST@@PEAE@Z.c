/*
 * XREFs of ?ndisSetRemoveWakeUpPattern@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B9128
 * Callers:
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6D20 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisSetRemoveWakeUpPattern(struct _NDIS_OID_REQUEST *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rsi
  UINT InformationBufferLength; // r8d
  UINT v5; // eax
  _DWORD *InformationBuffer; // rdx
  unsigned int v7; // ebx
  int v8; // ecx
  UINT v9; // r9d
  UINT v10; // ecx
  int v11; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      41,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1);
  }
  InformationBufferLength = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
  v5 = 24;
  *v2 = 1;
  if ( InformationBufferLength >= 0x18 )
  {
    InformationBuffer = a1->DATA.QUERY_INFORMATION.InformationBuffer;
    v7 = 0;
    v8 = InformationBuffer[2];
    if ( !v8
      || (v9 = v8 + 24, (unsigned int)(v8 + 24) < 0x18)
      || (v10 = InformationBuffer[3], v10 < v9)
      || (v5 = v10 + InformationBuffer[4], v5 < v10) )
    {
      v7 = -1073676267;
      goto LABEL_13;
    }
    if ( InformationBufferLength >= v5 )
    {
      *v2 = 0;
      goto LABEL_13;
    }
  }
  v11 = (int)a1;
  v7 = -1073676268;
  a1->DATA.QUERY_INFORMATION.BytesNeeded = v5;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v7;
  LOBYTE(v11) = 2;
  WPP_RECORDER_SF_q(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v11,
    11,
    42,
    (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
    (char)a1);
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(InformationBuffer) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)InformationBuffer,
      11,
      43,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1);
  }
  return v7;
}
