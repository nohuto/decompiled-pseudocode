/*
 * XREFs of ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x14003F230
 * Callers:
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x14003F070 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x14003F0D0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x14004A9F0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x14005D4B0 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReferenceCompartmentForUser(
        struct _GUID *a1,
        unsigned int a2,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a3)
{
  int v6; // ebx
  KIRQL v7; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v8; // rcx
  KIRQL v9; // r10
  int v10; // eax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v12; // rax

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x31u,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      a2);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v8 = *a3;
  v9 = v7;
  if ( !*a3 )
  {
    v12 = a1 ? ndisIfFindCompartmentBlockByGuid(a1) : ndisIfFindCompartmentBlock(a2);
    v8 = v12;
    if ( !v12 )
    {
      v6 = -1073741772;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v9);
LABEL_13:
      *a3 = 0LL;
      goto LABEL_8;
    }
  }
  if ( (*((_DWORD *)v8 + 10) & 1) != 0 || (v10 = *((_DWORD *)v8 + 12), v10 == 0x7FFFFFFF) )
  {
    v6 = -1073741811;
  }
  else
  {
    *((_DWORD *)v8 + 12) = v10 + 1;
    *a3 = v8;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v9);
  if ( v6 < 0 )
    goto LABEL_13;
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x32u,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      v6,
      a3);
  return (unsigned int)v6;
}
