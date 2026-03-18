/*
 * XREFs of TR_SendCompleteStageRequest @ 0x1400292EC
 * Callers:
 *     Isoch_Stage_CompleteTD @ 0x140013290 (Isoch_Stage_CompleteTD.c)
 *     Control_Transfer_CompleteCancelable @ 0x140020920 (Control_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140029130 (Isoch_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140029210 (Bulk_Stage_FreeScatterGatherList.c)
 *     Control_Transfer_Complete @ 0x140029650 (Control_Transfer_Complete.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall TR_SendCompleteStageRequest(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  GUID v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 296);
  v3 = *(_QWORD *)(a1 + 40);
  v8 = 0LL;
  DWORD2(v8) = a2;
  v6 = 0LL;
  v7 = v2;
  v5 = 0LL;
  LODWORD(v8) = 43;
  return SecureChannel_SendRequestSynchronously(*(_QWORD *)(v3 + 112), &v5, 48, 0LL, 0);
}
