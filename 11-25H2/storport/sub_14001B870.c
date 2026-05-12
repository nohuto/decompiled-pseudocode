/*
 * XREFs of sub_14001B870 @ 0x14001B870
 * Callers:
 *     sub_14001C790 @ 0x14001C790 (sub_14001C790.c)
 * Callees:
 *     sub_14001B118 @ 0x14001B118 (sub_14001B118.c)
 *     sub_14001B1A4 @ 0x14001B1A4 (sub_14001B1A4.c)
 *     sub_14001B2D0 @ 0x14001B2D0 (sub_14001B2D0.c)
 *     sub_1400BB92C @ 0x1400BB92C (sub_1400BB92C.c)
 */

__int64 __fastcall sub_14001B870(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // r8d
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  v6 = 0;
  v1 = 90112;
  v8 = 0;
  *(_DWORD *)(a1 + 4896) = 90112;
  *(_BYTE *)(a1 + 4894) = 2;
  if ( (int)sub_14001B2D0(a1, &v6) >= 0 )
  {
    if ( v6 )
    {
      if ( v6 < 0x16000 )
        v1 = v6;
      *(_DWORD *)(a1 + 4896) = v1;
    }
    else
    {
      *(_DWORD *)(a1 + 4896) = 0;
      *(_BYTE *)(a1 + 4894) = 0;
    }
  }
  if ( (int)sub_14001B118(v3, &v7) >= 0 )
    *(_BYTE *)(a1 + 4894) = v7;
  *(_BYTE *)(a1 + 4895) = 0;
  result = sub_14001B1A4(a1, (__int64)&v8);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 4895) = v8;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x400) != 0
    && BYTE1(off_140168120->Timer) >= 5u )
  {
    return sub_1400BB92C(
             off_140168120->AttachedDevice,
             (unsigned int)&off_140168120,
             v5,
             *(unsigned __int8 *)(a1 + 4894),
             *(_DWORD *)(a1 + 4896));
  }
  return result;
}
