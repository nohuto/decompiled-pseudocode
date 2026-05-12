/*
 * XREFs of sub_14003C2CC @ 0x14003C2CC
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 * Callees:
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_14006922C @ 0x14006922C (sub_14006922C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140178334 @ 0x140178334 (sub_140178334.c)
 *     sub_1401B06F4 @ 0x1401B06F4 (sub_1401B06F4.c)
 *     sub_1401B12DC @ 0x1401B12DC (sub_1401B12DC.c)
 */

__int64 __fastcall sub_14003C2CC(__int64 a1)
{
  __int64 result; // rax
  int v3; // r9d
  int v4; // eax
  int v5; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING v6; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  char Dst; // [rsp+60h] [rbp-49h] BYREF
  int v9; // [rsp+61h] [rbp-48h]
  __int16 v10; // [rsp+65h] [rbp-44h]
  char v11; // [rsp+67h] [rbp-42h]
  __int16 v12; // [rsp+B0h] [rbp+7h] BYREF
  __int16 v13; // [rsp+B2h] [rbp+9h]

  v5 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  DestinationString = 0LL;
  v6 = 0LL;
  memset_0(&Dst, 0, 0x41uLL);
  memset_0(&v12, 0, 0x40uLL);
  result = sub_1401B12DC(&Dst, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)sub_14006922C((unsigned int)&Dst, 4, (unsigned int)&v12, v3, 64) >= 0xF )
    {
      if ( v12 == 5197 )
      {
        if ( v13 != 5632 && (unsigned __int16)(v13 + 22528) > 1u )
          return sub_140178334(&Dst);
        RtlInitUnicodeString(&DestinationString, L"Interrupt Management\\MessageSignaledInterruptProperties");
        RtlInitUnicodeString(&v6, L"MSISupported");
        v4 = sub_1401B06F4(
               *(_QWORD *)(a1 + 32),
               (unsigned int)&DestinationString,
               (unsigned int)&v6,
               4,
               (__int64)&v5,
               4);
        if ( v4 < 0
          && off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x100) != 0
          && BYTE1(off_140168120->Timer) >= 2u )
        {
          sub_140055BD4(off_140168120->AttachedDevice, 64LL, &unk_14014A2D8, (unsigned int)v4);
        }
      }
      if ( v12 == 4318 )
        *(_BYTE *)(a1 + 5360) = 1;
    }
    return sub_140178334(&Dst);
  }
  return result;
}
