/*
 * XREFs of sub_140037A5C @ 0x140037A5C
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_140037680 @ 0x140037680 (sub_140037680.c)
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 *     sub_14003C424 @ 0x14003C424 (sub_14003C424.c)
 *     sub_14003CF28 @ 0x14003CF28 (sub_14003CF28.c)
 *     sub_14003DD40 @ 0x14003DD40 (sub_14003DD40.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_140044D20 @ 0x140044D20 (sub_140044D20.c)
 *     sub_14004E598 @ 0x14004E598 (sub_14004E598.c)
 *     sub_140054228 @ 0x140054228 (sub_140054228.c)
 *     sub_140054CA4 @ 0x140054CA4 (sub_140054CA4.c)
 *     sub_140055130 @ 0x140055130 (sub_140055130.c)
 *     sub_14005E1B0 @ 0x14005E1B0 (sub_14005E1B0.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 *     sub_140077D58 @ 0x140077D58 (sub_140077D58.c)
 *     sub_14007842C @ 0x14007842C (sub_14007842C.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_14009FFCC @ 0x14009FFCC (sub_14009FFCC.c)
 *     DoScreenSave_0 @ 0x1400A0338 (DoScreenSave_0.c)
 *     sub_1400AEA8C @ 0x1400AEA8C (sub_1400AEA8C.c)
 *     sub_1400AFDF4 @ 0x1400AFDF4 (sub_1400AFDF4.c)
 *     sub_1400B0394 @ 0x1400B0394 (sub_1400B0394.c)
 *     sub_1400B125C @ 0x1400B125C (sub_1400B125C.c)
 *     sub_1400B14D4 @ 0x1400B14D4 (sub_1400B14D4.c)
 *     sub_1400B25F4 @ 0x1400B25F4 (sub_1400B25F4.c)
 *     sub_1400B2878 @ 0x1400B2878 (sub_1400B2878.c)
 *     sub_1400B2AFC @ 0x1400B2AFC (sub_1400B2AFC.c)
 *     sub_1400B2FE8 @ 0x1400B2FE8 (sub_1400B2FE8.c)
 *     sub_1400B34DC @ 0x1400B34DC (sub_1400B34DC.c)
 *     sub_1400B37EC @ 0x1400B37EC (sub_1400B37EC.c)
 *     sub_1400B3B48 @ 0x1400B3B48 (sub_1400B3B48.c)
 *     sub_1400B4064 @ 0x1400B4064 (sub_1400B4064.c)
 *     sub_1400B44A4 @ 0x1400B44A4 (sub_1400B44A4.c)
 *     sub_1400B48DC @ 0x1400B48DC (sub_1400B48DC.c)
 *     sub_1400B4B00 @ 0x1400B4B00 (sub_1400B4B00.c)
 *     sub_1400B4D38 @ 0x1400B4D38 (sub_1400B4D38.c)
 *     sub_1400B4EA8 @ 0x1400B4EA8 (sub_1400B4EA8.c)
 *     sub_1400B5134 @ 0x1400B5134 (sub_1400B5134.c)
 *     sub_1400B53E4 @ 0x1400B53E4 (sub_1400B53E4.c)
 *     sub_1400B5694 @ 0x1400B5694 (sub_1400B5694.c)
 *     sub_1400B59A0 @ 0x1400B59A0 (sub_1400B59A0.c)
 *     sub_1400B5B48 @ 0x1400B5B48 (sub_1400B5B48.c)
 *     sub_1400B5E8C @ 0x1400B5E8C (sub_1400B5E8C.c)
 *     sub_1400B7798 @ 0x1400B7798 (sub_1400B7798.c)
 *     privateDnsDebugPrint @ 0x1400B8408 (privateDnsDebugPrint.c)
 *     sub_1400B86BC @ 0x1400B86BC (sub_1400B86BC.c)
 *     sub_1400CB254 @ 0x1400CB254 (sub_1400CB254.c)
 *     sub_1400FB018 @ 0x1400FB018 (sub_1400FB018.c)
 *     sub_140110708 @ 0x140110708 (sub_140110708.c)
 *     sub_14012F368 @ 0x14012F368 (sub_14012F368.c)
 *     sub_1401942EC @ 0x1401942EC (sub_1401942EC.c)
 *     sub_14019EDA4 @ 0x14019EDA4 (sub_14019EDA4.c)
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140037A5C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a6)
{
  ULONGLONG v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR v9; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  v9.Keyword = v6;
  a6->Ptr = (ULONGLONG)off_140168180;
  a6->Size = *(unsigned __int16 *)off_140168180;
  a6[1].Ptr = (ULONGLONG)v7;
  a6->Reserved = 2;
  a6[1].Size = *v7;
  a6[1].Reserved = 1;
  return EtwWriteTransfer(qword_140168198, &v9, 0LL, 0LL, UserDataCount, a6);
}
