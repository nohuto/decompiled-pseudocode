/*
 * XREFs of sub_1401AED30 @ 0x1401AED30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140046AC0 @ 0x140046AC0 (sub_140046AC0.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_14006C420 @ 0x14006C420 (sub_14006C420.c)
 *     sub_1401AEE2C @ 0x1401AEE2C (sub_1401AEE2C.c)
 */

__int64 __fastcall sub_1401AED30(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-10h]

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x40) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0((__int64)off_140168120->AttachedDevice, 0x1Eu, (__int64)&unk_140148948, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  if ( !sub_140046AC0(a1) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
  {
    v4 = sub_1401AEE2C(a1, a2);
    v5 = v4;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x40) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      v7 = v4;
      sub_1400556F8((__int64)off_140168120->AttachedDevice, 0x1Fu, (__int64)&unk_140148948, a1, a2, v7);
    }
    return v5;
  }
  else
  {
    result = sub_14006C420(a1, a2);
    if ( !(_DWORD)result )
      return 259LL;
  }
  return result;
}
