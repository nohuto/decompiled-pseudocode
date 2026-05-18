/*
 * XREFs of sub_18001C968 @ 0x18001C968
 * Callers:
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 *     sub_18004DC48 @ 0x18004DC48 (sub_18004DC48.c)
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_18004EA04 @ 0x18004EA04 (sub_18004EA04.c)
 *     sub_18005E0AC @ 0x18005E0AC (sub_18005E0AC.c)
 *     sub_18007A950 @ 0x18007A950 (sub_18007A950.c)
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 *     sub_18007CB2C @ 0x18007CB2C (sub_18007CB2C.c)
 * Callees:
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_1800142EC @ 0x1800142EC (sub_1800142EC.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

__int64 *__fastcall sub_18001C968(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  void *Src; // rax
  size_t v6; // rdx
  unsigned __int64 v7; // r8
  size_t Size; // r9
  const void *v9; // r10

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  if ( 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a3 + 16) < v4 )
    sub_180012A10();
  Src = (void *)sub_1800148EC(a3);
  sub_1800142EC(a1, v6, v7, v9, Size, Src, v6);
  return a1;
}
