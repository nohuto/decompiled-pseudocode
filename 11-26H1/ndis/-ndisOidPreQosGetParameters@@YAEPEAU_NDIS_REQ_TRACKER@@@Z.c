/*
 * XREFs of ?ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BEE70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall ndisOidPreQosGetParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  char v4; // bl
  int v5; // eax
  __int64 v6; // rax
  unsigned __int16 *v7; // r14
  unsigned int v8; // eax
  KIRQL v9; // dl
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v12[3]; // [rsp+48h] [rbp-60h] BYREF
  int v13; // [rsp+78h] [rbp-30h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Bu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v3,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  v13 = 0;
  memset(v12, 0, sizeof(v12));
  NewIrql[0] = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x34u )
  {
    v5 = *(_DWORD *)(v1 + 4);
    if ( v5 && v5 != 2 )
      goto LABEL_7;
    if ( !v3 )
      goto LABEL_19;
    if ( v3->QosHwCapabilities )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, NewIrql);
      v6 = 4928LL;
      if ( *(_DWORD *)(v1 + 32) != -66781180 )
        v6 = 4944LL;
      v7 = *(unsigned __int16 **)(&v3->Header.Type + v6);
      if ( !v7 )
      {
        LODWORD(v12[0]) = 3408310;
        v7 = (unsigned __int16 *)v12;
      }
      *((_DWORD *)a1 + 10) = 0;
      v8 = v7[1];
      if ( *(_DWORD *)(v1 + 48) >= v8 )
      {
        memmove(*(void **)(v1 + 40), v7, v7[1]);
        *(_DWORD *)(v1 + 52) = v7[1];
      }
      else
      {
        *(_DWORD *)(v1 + 56) = v8;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      v9 = NewIrql[0];
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, v9);
    }
    else
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 52;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  v4 = 1;
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Cu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v3,
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
