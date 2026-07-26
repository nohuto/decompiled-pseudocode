/*
 * XREFs of ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14005D340
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x14005D4B0 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisNsiGetCompartmentIdForGuid(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // esi
  const struct _GUID *v3; // rdi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  KIRQL v5; // r8

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      47,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1);
  v3 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  if ( v3
    && *((_DWORD *)a1 + 6) == 16
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 4
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(v3);
    if ( CompartmentBlockByGuid )
      **((_DWORD **)a1 + 5) = *((_DWORD *)CompartmentBlockByGuid + 4);
    else
      v2 = -1073741772;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v5);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x30u,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1,
      v2);
  return v2;
}
