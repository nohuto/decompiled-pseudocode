/*
 * XREFs of PopAdaptiveStandbyQueryReserveConfiguration @ 0x1407E4E04
 * Callers:
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407E4270 (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E4FE4 (PopAdaptiveStandbySessionStart.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopUmpoSendPowerAdaptiveReserveConfigurationQuery @ 0x1407DF590 (PopUmpoSendPowerAdaptiveReserveConfigurationQuery.c)
 */

int __fastcall PopAdaptiveStandbyQueryReserveConfiguration(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  struct _LIST_ENTRY *ActivityIdThread; // rax
  bool v5; // zf
  __int64 v6; // rcx
  int v7; // esi
  struct _LIST_ENTRY *v8; // rax
  int v10; // [rsp+40h] [rbp-69h] BYREF
  int v11; // [rsp+44h] [rbp-65h] BYREF
  __int64 v12; // [rsp+48h] [rbp-61h] BYREF
  __int64 v13; // [rsp+50h] [rbp-59h] BYREF
  __int128 v14; // [rsp+58h] [rbp-51h] BYREF
  __int128 v15; // [rsp+68h] [rbp-41h]
  __int128 v16; // [rsp+78h] [rbp-31h]
  __int64 v17; // [rsp+88h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v18[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 *v19; // [rsp+B0h] [rbp+7h]
  __int64 v20; // [rsp+B8h] [rbp+Fh]
  __int64 *v21; // [rsp+C0h] [rbp+17h]
  __int64 v22; // [rsp+C8h] [rbp+1Fh]
  __int64 *v23; // [rsp+D0h] [rbp+27h]
  __int64 v24; // [rsp+D8h] [rbp+2Fh]

  v10 = 0;
  v17 = 0LL;
  v1 = (__int64 *)(a1 + 208);
  v3 = *(_QWORD *)(a1 + 208);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( v3 )
  {
    if ( (unsigned int)dword_140E08138 > 5 )
    {
      v12 = v3;
      v19 = &v12;
      v20 = 8LL;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08138,
        (unsigned __int8 *)word_14004FB02,
        (const GUID *)ActivityIdThread,
        0LL,
        3u,
        v18);
    }
    v5 = *(_BYTE *)(a1 + 120) == 0;
    v3 = *v1;
    *(_QWORD *)(a1 + 104) = *v1;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 552);
      if ( !v6 )
        goto LABEL_9;
      *(_QWORD *)&v14 = 0x12C00000001LL;
      *(_QWORD *)&v15 = L"Reserve Configuration Update";
      LODWORD(v3) = Pdcv2ActivationClientActivate(v6, &v14, 0LL, 1LL, L"AdaptiveStandby", 0, a1 + 128, &v10);
      v7 = v3;
      if ( (unsigned int)dword_140E08138 > 5 )
      {
        v11 = v3;
        v19 = (__int64 *)&v11;
        v21 = &v12;
        v13 = *(_QWORD *)(a1 + 128);
        v23 = &v13;
        v20 = 4LL;
        LODWORD(v12) = v10;
        v22 = 4LL;
        v24 = 8LL;
        v8 = IoGetActivityIdThread();
        LODWORD(v3) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140E08138,
                        (unsigned __int8 *)&dword_14004FB44,
                        (const GUID *)v8,
                        0LL,
                        5u,
                        v18);
      }
      if ( v7 >= 0 )
      {
LABEL_9:
        *(_BYTE *)(a1 + 120) = 1;
        LODWORD(v3) = PopUmpoSendPowerAdaptiveReserveConfigurationQuery(v1);
      }
    }
  }
  return v3;
}
