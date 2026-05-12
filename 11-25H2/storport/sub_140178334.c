/*
 * XREFs of sub_140178334 @ 0x140178334
 * Callers:
 *     sub_14003C2CC @ 0x14003C2CC (sub_14003C2CC.c)
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_1400C9020 @ 0x1400C9020 (sub_1400C9020.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void *__fastcall sub_140178334(__int64 a1)
{
  void *result; // rax

  if ( *(_BYTE *)a1 )
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 16));
    *(_BYTE *)a1 = 0;
    return memset_0((void *)(a1 + 8), 0, 0x40uLL);
  }
  return result;
}
