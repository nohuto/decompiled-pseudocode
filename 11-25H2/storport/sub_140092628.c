/*
 * XREFs of sub_140092628 @ 0x140092628
 * Callers:
 *     sub_14009D8DC @ 0x14009D8DC (sub_14009D8DC.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_140090338 @ 0x140090338 (sub_140090338.c)
 *     sub_14009038C @ 0x14009038C (sub_14009038C.c)
 *     sub_140090698 @ 0x140090698 (sub_140090698.c)
 *     sub_1400B4D38 @ 0x1400B4D38 (sub_1400B4D38.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140092628(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  _DWORD *v4; // rax

  if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
  {
    if ( (byte_1401694F4 & 4) != 0 )
    {
      v2 = *(_DWORD *)(a1 + 104);
      sub_140090698(
        v2 >> 8,
        &stru_14014AC70,
        a1 + 242,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5064LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 2104,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        4);
    }
    sub_1400B4D38(a1);
    *(_BYTE *)(a1 + 506) &= ~2u;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055C18((__int64)off_140168120->AttachedDevice, 0x32u, (__int64)&unk_14014D880, a1);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 112LL) & 2) != 0 )
    {
      v3 = 0LL;
      if ( sub_1400215B0(a1, 31) )
      {
        if ( !(unsigned int)sub_140090338() )
          sub_14009038C();
        v4 = *(_DWORD **)(a1 + 24);
        if ( *v4 == 1094997074 )
        {
          v3 = (__int64)(v4 + 94);
        }
        else if ( *v4 == 1314275652 )
        {
          v3 = (__int64)(v4 + 42);
        }
        sub_140021760(v3);
      }
    }
  }
  return 0LL;
}
