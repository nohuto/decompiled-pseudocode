/*
 * XREFs of __alloca_probe @ 0x1800D7C10
 * Callers:
 *     sub_18000DCEC @ 0x18000DCEC (sub_18000DCEC.c)
 *     sub_18000DD9C @ 0x18000DD9C (sub_18000DD9C.c)
 *     sub_18000E044 @ 0x18000E044 (sub_18000E044.c)
 *     sub_180011150 @ 0x180011150 (sub_180011150.c)
 *     sub_18001DB38 @ 0x18001DB38 (sub_18001DB38.c)
 *     sub_18003A374 @ 0x18003A374 (sub_18003A374.c)
 *     sub_180060724 @ 0x180060724 (sub_180060724.c)
 *     sub_18008D758 @ 0x18008D758 (sub_18008D758.c)
 *     sub_18008D824 @ 0x18008D824 (sub_18008D824.c)
 *     sub_18009F158 @ 0x18009F158 (sub_18009F158.c)
 *     sub_1800A8AAC @ 0x1800A8AAC (sub_1800A8AAC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}
