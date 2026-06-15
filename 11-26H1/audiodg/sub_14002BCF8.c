/*
 * XREFs of sub_14002BCF8 @ 0x14002BCF8
 * Callers:
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_14002BCF8(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]

  v11 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v12 = 8LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v9 = *(unsigned __int16 *)(a2 + 11);
  v8 = a2 + 11;
  UserData.Reserved = 2;
  v10 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
}
