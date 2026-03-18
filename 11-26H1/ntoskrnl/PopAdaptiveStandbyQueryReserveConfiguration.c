/*
 * XREFs of PopAdaptiveStandbyQueryReserveConfiguration @ 0x140610F34
 * Callers:
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407DF87C (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E03B4 (PopAdaptiveStandbySessionStart.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopUmpoSendPowerAdaptiveReserveConfigurationQuery @ 0x1407DB584 (PopUmpoSendPowerAdaptiveReserveConfigurationQuery.c)
 */

int __fastcall PopAdaptiveStandbyQueryReserveConfiguration(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rcx
  int v6; // esi
  int v8; // [rsp+40h] [rbp-69h] BYREF
  int v9; // [rsp+44h] [rbp-65h] BYREF
  __int64 v10; // [rsp+48h] [rbp-61h] BYREF
  __int64 v11; // [rsp+50h] [rbp-59h] BYREF
  __int128 v12; // [rsp+58h] [rbp-51h] BYREF
  __int128 v13; // [rsp+68h] [rbp-41h]
  __int128 v14; // [rsp+78h] [rbp-31h]
  __int64 v15; // [rsp+88h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v16[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 *v17; // [rsp+B0h] [rbp+7h]
  __int64 v18; // [rsp+B8h] [rbp+Fh]
  __int64 *v19; // [rsp+C0h] [rbp+17h]
  __int64 v20; // [rsp+C8h] [rbp+1Fh]
  __int64 *v21; // [rsp+D0h] [rbp+27h]
  __int64 v22; // [rsp+D8h] [rbp+2Fh]

  v8 = 0;
  v15 = 0LL;
  v1 = (__int64 *)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 192);
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( v3 )
  {
    if ( (unsigned int)dword_140E08090 > 5 )
    {
      v10 = v3;
      v18 = 8LL;
      v17 = &v10;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08090,
        (unsigned __int8 *)word_14004F922,
        (const GUID *)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
        0LL,
        3u,
        v16);
    }
    v4 = *(_BYTE *)(a1 + 120) == 0;
    v3 = *v1;
    *(_QWORD *)(a1 + 104) = *v1;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 536);
      if ( !v5 )
        goto LABEL_9;
      *(_QWORD *)&v12 = 0x12C00000001LL;
      *(_QWORD *)&v13 = L"Reserve Configuration Update";
      LODWORD(v3) = Pdcv2ActivationClientActivate(v5, &v12, 0LL, 1LL, L"AdaptiveStandby", 0, a1 + 128, &v8);
      v6 = v3;
      if ( (unsigned int)dword_140E08090 > 5 )
      {
        v9 = v3;
        LODWORD(v10) = v8;
        v17 = (__int64 *)&v9;
        v18 = 4LL;
        v19 = &v10;
        v11 = *(_QWORD *)(a1 + 128);
        v21 = &v11;
        v20 = 4LL;
        v22 = 8LL;
        LODWORD(v3) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140E08090,
                        (unsigned __int8 *)&dword_14004F964,
                        (const GUID *)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
                        0LL,
                        5u,
                        v16);
      }
      if ( v6 >= 0 )
      {
LABEL_9:
        *(_BYTE *)(a1 + 120) = 1;
        LODWORD(v3) = PopUmpoSendPowerAdaptiveReserveConfigurationQuery(v1);
      }
    }
  }
  return v3;
}
