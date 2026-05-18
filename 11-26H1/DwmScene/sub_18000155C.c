/*
 * XREFs of sub_18000155C @ 0x18000155C
 * Callers:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_180001184 @ 0x180001184 (sub_180001184.c)
 *     sub_1800012C8 @ 0x1800012C8 (sub_1800012C8.c)
 *     sub_180001600 @ 0x180001600 (sub_180001600.c)
 *     sub_180001774 @ 0x180001774 (sub_180001774.c)
 *     sub_180001918 @ 0x180001918 (sub_180001918.c)
 *     sub_180001A18 @ 0x180001A18 (sub_180001A18.c)
 *     sub_180001B4C @ 0x180001B4C (sub_180001B4C.c)
 *     sub_180001C50 @ 0x180001C50 (sub_180001C50.c)
 *     sub_180001DE8 @ 0x180001DE8 (sub_180001DE8.c)
 *     sub_1800020D4 @ 0x1800020D4 (sub_1800020D4.c)
 *     sub_180002274 @ 0x180002274 (sub_180002274.c)
 *     sub_180002500 @ 0x180002500 (sub_180002500.c)
 *     sub_180002648 @ 0x180002648 (sub_180002648.c)
 *     sub_1800029C0 @ 0x1800029C0 (sub_1800029C0.c)
 *     sub_180002B08 @ 0x180002B08 (sub_180002B08.c)
 *     sub_180002C84 @ 0x180002C84 (sub_180002C84.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_18000155C(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONGLONG v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v6;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData[1].Ptr = (ULONGLONG)v7;
  UserData->Reserved = 2;
  UserData[1].Size = *v7;
  UserData[1].Reserved = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, UserDataCount, UserData);
}
