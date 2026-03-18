/*
 * XREFs of ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18013C4E8
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18013BA80 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18013BE80 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18013C658 (-ShouldNotify@CInteractionTracker@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker::SendValuesChangedCallbackIfNecessary(__int64 a1, __int64 *a2, float a3)
{
  char v3; // bl
  __int64 v6; // rcx
  char v7; // r9
  unsigned int ChannelCallbackId; // eax
  __int64 v9; // xmm0_8
  __int64 v10; // r10
  int v11; // eax
  unsigned __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp-78h]
  __int64 v15; // [rsp+50h] [rbp-68h] BYREF
  int v16; // [rsp+58h] [rbp-60h]
  _QWORD v17[2]; // [rsp+60h] [rbp-58h] BYREF

  v3 = 1;
  if ( !(unsigned __int8)CInteractionTracker::ShouldNotify(a1, 1LL) )
    return 0;
  if ( v7 )
    goto LABEL_14;
  v13 = *(_QWORD *)(v6 + 568) - *a2;
  if ( !v13 )
    v13 = *(unsigned int *)(a1 + 576) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v13 && *(float *)(a1 + 580) == a3 )
    return 0;
LABEL_14:
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6384LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6384LL),
         6LL) )
  {
    ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
    v9 = *a2;
    v16 = *((_DWORD *)a2 + 2);
    v14 = *(_DWORD *)(a1 + 288);
    v15 = v9;
    v17[0] = ChannelCallbackId;
    v17[1] = *(unsigned int *)(a1 + 72);
    CoreUICallSend(v10, v17, 2LL, 6LL, 0, &unk_1802F5AE1, (unsigned int)&v15, a3, v14);
  }
  v11 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(a1 + 568) = *a2;
  *(_DWORD *)(a1 + 576) = v11;
  *(float *)(a1 + 580) = a3;
  return v3;
}
