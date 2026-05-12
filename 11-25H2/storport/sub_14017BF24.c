/*
 * XREFs of sub_14017BF24 @ 0x14017BF24
 * Callers:
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_140075FA8 @ 0x140075FA8 (sub_140075FA8.c)
 *     sub_1400A2018 @ 0x1400A2018 (sub_1400A2018.c)
 *     sub_1400C9020 @ 0x1400C9020 (sub_1400C9020.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_140195D40 @ 0x140195D40 (sub_140195D40.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14017BF24(_QWORD *a1, __int64 a2)
{
  char v3; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)a1 + 8) && *((_DWORD *)a1 + 7) == 3 )
  {
    v3 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*a1 + 8LL) + 24LL))(
      *a1,
      *(unsigned int *)(a2 + 16),
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)a2,
      v3);
  }
  else
  {
    MmFreeContiguousMemory(*(PVOID *)a2);
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
}
