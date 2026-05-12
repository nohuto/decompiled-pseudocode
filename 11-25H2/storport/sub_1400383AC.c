/*
 * XREFs of sub_1400383AC @ 0x1400383AC
 * Callers:
 *     sub_140026E80 @ 0x140026E80 (sub_140026E80.c)
 *     sub_140037B4C @ 0x140037B4C (sub_140037B4C.c)
 *     sub_14003C734 @ 0x14003C734 (sub_14003C734.c)
 *     sub_140041308 @ 0x140041308 (sub_140041308.c)
 *     sub_1400B0998 @ 0x1400B0998 (sub_1400B0998.c)
 *     sub_1400B0CAC @ 0x1400B0CAC (sub_1400B0CAC.c)
 *     sub_1400B3E8C @ 0x1400B3E8C (sub_1400B3E8C.c)
 *     sub_1400D474C @ 0x1400D474C (sub_1400D474C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1400383AC(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a8)
{
  ULONGLONG v8; // rax
  unsigned __int16 *v9; // rdx
  EVENT_DESCRIPTOR v11; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v11.Id = *a2 << 24;
  *(_DWORD *)&v11.Level = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = (unsigned __int16 *)(a2 + 11);
  v11.Keyword = v8;
  a8->Ptr = (ULONGLONG)off_140168180;
  a8->Size = *(unsigned __int16 *)off_140168180;
  a8[1].Ptr = (ULONGLONG)v9;
  a8->Reserved = 2;
  a8[1].Size = *v9;
  a8[1].Reserved = 1;
  return EtwWriteEx(qword_140168198, &v11, 0LL, 1u, 0LL, 0LL, UserDataCount, a8);
}
