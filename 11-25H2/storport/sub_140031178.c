/*
 * XREFs of sub_140031178 @ 0x140031178
 * Callers:
 *     sub_140030B40 @ 0x140030B40 (sub_140030B40.c)
 * Callees:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 *     sub_140090500 @ 0x140090500 (sub_140090500.c)
 *     sub_140090698 @ 0x140090698 (sub_140090698.c)
 *     sub_14009FD14 @ 0x14009FD14 (sub_14009FD14.c)
 *     sub_1400A163C @ 0x1400A163C (sub_1400A163C.c)
 *     sub_1400B4EA8 @ 0x1400B4EA8 (sub_1400B4EA8.c)
 */

__int64 __fastcall sub_140031178(__int64 a1, struct tagVARIANT *a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 104);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
  {
    if ( (HIDWORD(off_140168120->Timer) & 8) != 0 && BYTE1(off_140168120->Timer) >= 3u )
      sub_140055930(off_140168120->AttachedDevice, 63LL, &unk_14014D880);
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 8) != 0
      && BYTE1(off_140168120->Timer) >= 3u )
    {
      sub_140067F78(off_140168120->AttachedDevice, 64LL, &unk_14014D880, (unsigned __int8)v2, BYTE1(v2), BYTE2(v2));
    }
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && (*(_BYTE *)(v4 + 108) & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 2184));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5296LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2264));
  if ( *(_DWORD *)(a1 + 1396) )
  {
    if ( (byte_1401694F4 & 1) != 0 )
      sub_140090500(
        a1 + 177,
        a1 + 168,
        a1 + 2104,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5064LL,
        *(_BYTE *)(a1 + 104),
        a1 + 2104,
        a1 + 168,
        a1 + 177,
        a1 + 242,
        *(_BYTE *)(a1 + 506) & 1,
        3);
LABEL_25:
    LOBYTE(a2) = *(_BYTE *)(a1 + 104);
    return CMSPAddress::get_DynamicTerminalClasses(*(CMSPAddress **)(a1 + 24), a2);
  }
  if ( (unsigned __int8)sub_1400A163C(a1) )
  {
    sub_1400B4EA8(a1, 0LL);
    *(_BYTE *)(a1 + 506) |= 2u;
    if ( (byte_1401694F4 & 2) != 0 )
      sub_140090698(
        a1 + 177,
        (unsigned int)&unk_14014AF78,
        a1 + 2104,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5064LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 2104,
        a1 + 168,
        a1 + 177,
        a1 + 242,
        2);
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 8) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055C18(off_140168120->AttachedDevice, 65LL, &unk_14014D880, a1);
    }
  }
  result = sub_14009FD14(a1);
  if ( !(_BYTE)result )
  {
    if ( (byte_1401694F4 & 1) != 0 )
      sub_140090500(
        a1 + 177,
        a1 + 168,
        a1 + 2104,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5064LL,
        *(_BYTE *)(a1 + 104),
        a1 + 2104,
        a1 + 168,
        a1 + 177,
        a1 + 242,
        *(_BYTE *)(a1 + 506) & 1,
        2);
    goto LABEL_25;
  }
  return result;
}
