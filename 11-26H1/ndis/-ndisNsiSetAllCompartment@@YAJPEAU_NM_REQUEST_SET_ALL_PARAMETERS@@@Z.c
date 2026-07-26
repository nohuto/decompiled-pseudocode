/*
 * XREFs of ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D0E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ndisIfCreateCompartment @ 0x1400CFBB8 (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1400D0394 (ndisIfDeleteCompartment.c)
 */

__int64 __fastcall ndisNsiSetAllCompartment(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  unsigned __int16 v2; // r9
  int v3; // edx
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  char v8[8]; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+30h] [rbp-28h]
  char v10[4]; // [rsp+38h] [rbp-20h]
  struct _NDIS_IF_COMPARTMENT_BLOCK *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      38,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 )
  {
    v3 = *((_DWORD *)a1 + 12);
    if ( v3 == 1 || v3 == 2 )
    {
      v4 = *((_QWORD *)a1 + 4);
      if ( !v4 || *((_DWORD *)a1 + 10) != 1640 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v10 = *((_DWORD *)a1 + 10);
          WPP_RECORDER_SF_qql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x16u,
            0x28u,
            (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
            (char)a1,
            v4,
            *(_DWORD *)v10);
        }
        goto LABEL_22;
      }
    }
    if ( v3 )
    {
      if ( v3 == 1 || v3 == 2 )
      {
        v5 = ndisIfCreateCompartment((__int64)a1, &v11);
        goto LABEL_17;
      }
      if ( v3 == 3 )
      {
        v5 = ndisIfDeleteCompartment(**((_DWORD **)a1 + 2));
LABEL_17:
        v6 = v5;
        goto LABEL_23;
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v2 = 41;
    v9 = *((_DWORD *)a1 + 12);
    goto LABEL_6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = 39;
    v9 = *((_DWORD *)a1 + 6);
LABEL_6:
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v2,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1,
      v9);
  }
LABEL_22:
  v6 = -1073741811;
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x2Au,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1,
      *(_QWORD *)v8);
  }
  KeLeaveCriticalRegion();
  return v6;
}
