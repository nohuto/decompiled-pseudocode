/*
 * XREFs of __alloca_probe @ 0x1400ADEB0
 * Callers:
 *     sub_14001DEFC @ 0x14001DEFC (sub_14001DEFC.c)
 *     sub_14001E180 @ 0x14001E180 (sub_14001E180.c)
 *     sub_14004BBE4 @ 0x14004BBE4 (sub_14004BBE4.c)
 *     sub_14004BFF8 @ 0x14004BFF8 (sub_14004BFF8.c)
 *     sub_14004C0AC @ 0x14004C0AC (sub_14004C0AC.c)
 *     sub_14004C16C @ 0x14004C16C (sub_14004C16C.c)
 *     sub_14004C30C @ 0x14004C30C (sub_14004C30C.c)
 *     sub_14004C5CC @ 0x14004C5CC (sub_14004C5CC.c)
 *     sub_14004FA80 @ 0x14004FA80 (sub_14004FA80.c)
 *     sub_14004FE50 @ 0x14004FE50 (sub_14004FE50.c)
 *     sub_140053838 @ 0x140053838 (sub_140053838.c)
 *     sub_14007CF28 @ 0x14007CF28 (sub_14007CF28.c)
 *     sub_14007FA50 @ 0x14007FA50 (sub_14007FA50.c)
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
