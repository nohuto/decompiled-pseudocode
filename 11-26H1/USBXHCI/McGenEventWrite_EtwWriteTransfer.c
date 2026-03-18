/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x14000EF70
 * Callers:
 *     McTemplateK0_EtwWriteTransfer @ 0x140002294 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x140003178 (McTemplateK0pppnnn_EtwWriteTransfer.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x140003224 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer @ 0x140003468 (McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x140007E44 (McTemplateK0qqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x140007EC4 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0ppb16_EtwWriteTransfer @ 0x14000DD10 (McTemplateK0ppb16_EtwWriteTransfer.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x14000EDE0 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x14000EE70 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000EF10 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x14002B840 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002D650 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x14002F8DC (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1400321FC (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032598 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14003380C (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x140033FB4 (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     McTemplateK0ppb16u_EtwWriteTransfer @ 0x1400358EC (McTemplateK0ppb16u_EtwWriteTransfer.c)
 *     McTemplateK0pjqq_EtwWriteTransfer @ 0x140035E5C (McTemplateK0pjqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x14003C940 (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x140045014 (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqhq_EtwWriteTransfer @ 0x1400450D8 (McTemplateK0pqqhq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x14004517C (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0ptqqp_EtwWriteTransfer @ 0x1400451EC (McTemplateK0ptqqp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer @ 0x14004FF60 (McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer @ 0x140050164 (McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer.c)
 *     McTemplateK0pqzr1q_EtwWriteTransfer @ 0x140050374 (McTemplateK0pqzr1q_EtwWriteTransfer.c)
 *     McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer @ 0x140050414 (McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer.c)
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
  int v7; // eax
  unsigned int v8; // r9d

  v5 = (unsigned __int16 *)qword_14006AEC8;
  if ( qword_14006AEC8 )
  {
    UserData->Ptr = qword_14006AEC8;
    v7 = 2;
    v8 = *v5;
  }
  else
  {
    v7 = 0;
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v7;
  return EtwWriteTransfer(MS_USBXHCI_ETW_PROVIDER_Context, a2, a3, 0LL, a4, UserData);
}
