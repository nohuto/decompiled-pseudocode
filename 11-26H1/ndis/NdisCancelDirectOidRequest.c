/*
 * XREFs of NdisCancelDirectOidRequest @ 0x1400CCEF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400CCA6C (ndisDoCancelDirectOidRequest.c)
 */

void __stdcall NdisCancelDirectOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  struct _NDIS_FILTER_BLOCK *v3; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  char v6; // r15
  KSPIN_LOCK *DirectRequestHandle; // rsi
  KIRQL v8; // dl
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF

  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v3 = 0LL;
  v4 = 0LL;
  NewIrql = 0;
  v6 = (char)NdisBindingHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
      (char)NdisBindingHandle,
      RequestId);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  DirectRequestHandle = (KSPIN_LOCK *)v2->Next.DirectRequestHandle;
  if ( *(_BYTE *)DirectRequestHandle == 5 )
  {
    v10 = 0;
    v3 = (struct _NDIS_FILTER_BLOCK *)((unsigned __int64)DirectRequestHandle & -(__int64)ndisReferenceRefEx(
                                                                                           DirectRequestHandle + 39,
                                                                                           2u,
                                                                                           (enum _NDIS_REFERENCE_STATUS *)&v10));
  }
  else
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)v2->Next.DirectRequestHandle;
  }
  v8 = NewIrql;
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(&v2->Lock, v8);
  if ( v4 || v3 )
    ndisDoCancelDirectOidRequest(v4, v3, RequestId);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
      v6,
      RequestId);
}
