/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x140001A20
 * Callers:
 *     McTemplateK0_EtwWriteTransfer @ 0x140001A84 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x140001AC8 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x140001B44 (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     McTemplateK0ppuq_EtwWriteTransfer @ 0x140001F34 (McTemplateK0ppuq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x14000202C (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pqun_EtwWriteTransfer @ 0x1400020A8 (McTemplateK0pqun_EtwWriteTransfer.c)
 *     McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer @ 0x140002138 (McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1400023B4 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pqhh_EtwWriteTransfer @ 0x1400066FC (McTemplateK0pqhh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140006790 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x140006820 (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x14000C5B8 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F76C (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pjq_EtwWriteTransfer @ 0x14001CC9C (McTemplateK0pjq_EtwWriteTransfer.c)
 *     McTemplateK0ppn_EtwWriteTransfer @ 0x14001CD20 (McTemplateK0ppn_EtwWriteTransfer.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x14001CDA0 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x14001CE30 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer @ 0x14001CED0 (McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer.c)
 *     McTemplateK0pqqhhhq_EtwWriteTransfer @ 0x14001D200 (McTemplateK0pqqhhhq_EtwWriteTransfer.c)
 *     McTemplateK0pthhhtq_EtwWriteTransfer @ 0x14001D2C4 (McTemplateK0pthhhtq_EtwWriteTransfer.c)
 *     McTemplateK0phuzu_EtwWriteTransfer @ 0x14002E12C (McTemplateK0phuzu_EtwWriteTransfer.c)
 *     McTemplateK0puuhz_EtwWriteTransfer @ 0x14002E200 (McTemplateK0puuhz_EtwWriteTransfer.c)
 *     McTemplateK0phhhquuuuu_EtwWriteTransfer @ 0x1400344CC (McTemplateK0phhhquuuuu_EtwWriteTransfer.c)
 *     McTemplateK0psqzq_EtwWriteTransfer @ 0x1400345CC (McTemplateK0psqzq_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140042AE4 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x140042B6C (McTemplateK0ppq_EtwWriteTransfer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  unsigned int v8; // r9d

  v5 = (unsigned __int16 *)qword_14006D318;
  v6 = 0;
  if ( qword_14006D318 )
  {
    UserData->Ptr = qword_14006D318;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EtwWriteTransfer(MS_USBHUB3_ETW_PROVIDER_Context, a2, a3, 0LL, a4, UserData);
}
