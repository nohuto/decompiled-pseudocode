/*
 * XREFs of sub_1400285F0 @ 0x1400285F0
 * Callers:
 *     sub_140001008 @ 0x140001008 (sub_140001008.c)
 *     sub_140001B9C @ 0x140001B9C (sub_140001B9C.c)
 *     sub_14000253C @ 0x14000253C (sub_14000253C.c)
 *     sub_14000259C @ 0x14000259C (sub_14000259C.c)
 *     sub_140002614 @ 0x140002614 (sub_140002614.c)
 *     sub_140002688 @ 0x140002688 (sub_140002688.c)
 *     sub_14000274C @ 0x14000274C (sub_14000274C.c)
 *     sub_1400027F8 @ 0x1400027F8 (sub_1400027F8.c)
 *     sub_140002894 @ 0x140002894 (sub_140002894.c)
 *     sub_140002930 @ 0x140002930 (sub_140002930.c)
 *     sub_1400029D8 @ 0x1400029D8 (sub_1400029D8.c)
 *     sub_14002819C @ 0x14002819C (sub_14002819C.c)
 *     sub_1400284D8 @ 0x1400284D8 (sub_1400284D8.c)
 *     sub_1400ABD2C @ 0x1400ABD2C (sub_1400ABD2C.c)
 *     sub_1400ABDBC @ 0x1400ABDBC (sub_1400ABDBC.c)
 *     sub_1400ABF90 @ 0x1400ABF90 (sub_1400ABF90.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_1400285F0(
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
