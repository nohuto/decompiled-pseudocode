/*
 * XREFs of ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DFA8C
 * Callers:
 *     ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E20D0 (-ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008DCB0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall ndisIovAllocateVF(struct _NDIS_REQ_TRACKER *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // r13
  struct _NDIS_MINIPORT_BLOCK *v3; // r15
  char v5; // si
  int v6; // ebx
  _BYTE *OidSourceHandle; // rax
  _BYTE *v8; // r12
  __int64 v9; // rbp
  _LIST_ENTRY *SwitchBySwitchId; // rax
  _LIST_ENTRY *v11; // r14
  __int64 Pool2; // rax
  __int64 v13; // rsi
  void *v14; // rcx
  _QWORD *v15; // rax
  char v17; // [rsp+28h] [rbp-40h]

  v2 = *((_QWORD *)a1 + 4);
  v3 = a2;
  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      26,
      38,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v17);
  }
  v6 = 0;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 1632;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v2);
  v8 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v9 = *(_QWORD *)(v2 + 40);
    if ( *(_WORD *)(v9 + 1626) == 0xFFFF
      && *(_DWORD *)(v9 + 1628) == -1
      && (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v9 + 8)), (v11 = SwitchBySwitchId) != 0LL)
      && LODWORD(SwitchBySwitchId[4].Blink) != LODWORD(SwitchBySwitchId[39].Blink) )
    {
      Pool2 = ExAllocatePool2(64LL, 1728LL, 1869169742LL);
      v13 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 72) = 1;
        v14 = (void *)(Pool2 + 96);
        *(_QWORD *)(Pool2 + 48) = v3;
        *(_QWORD *)(Pool2 + 56) = v8;
        *(_QWORD *)(Pool2 + 64) = v11;
        v15 = (_QWORD *)(Pool2 + 80);
        v15[1] = v15;
        *v15 = v15;
        memmove(v14, (const void *)v9, 0x660uLL);
        *(_QWORD *)(v2 + 144) = v13;
        v5 = 0;
      }
      else
      {
        v6 = -1073741670;
        v5 = 1;
      }
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  *((_DWORD *)a1 + 10) = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x27u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v3,
      v6);
  return v5;
}
