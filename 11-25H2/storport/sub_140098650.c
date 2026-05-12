/*
 * XREFs of sub_140098650 @ 0x140098650
 * Callers:
 *     sub_14009D8DC @ 0x14009D8DC (sub_14009D8DC.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_14006D4DC @ 0x14006D4DC (sub_14006D4DC.c)
 *     sub_140090338 @ 0x140090338 (sub_140090338.c)
 *     sub_14009038C @ 0x14009038C (sub_14009038C.c)
 *     sub_140090500 @ 0x140090500 (sub_140090500.c)
 *     sub_140090698 @ 0x140090698 (sub_140090698.c)
 *     sub_14009FD14 @ 0x14009FD14 (sub_14009FD14.c)
 *     sub_1400B4EA8 @ 0x1400B4EA8 (sub_1400B4EA8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140098650(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rax
  __int16 v5; // cx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  struct tagVARIANT *v8; // rdx
  __int128 v10; // [rsp+70h] [rbp-19h] BYREF
  __int64 v11; // [rsp+80h] [rbp-9h]
  __int128 v12; // [rsp+88h] [rbp-1h]
  __int128 v13; // [rsp+98h] [rbp+Fh]
  __int128 v14; // [rsp+A8h] [rbp+1Fh]
  __int64 v15; // [rsp+B8h] [rbp+2Fh]

  if ( (*(_BYTE *)(a1 + 506) & 2) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 104);
    v11 = 0LL;
    v10 = 0LL;
    v15 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    if ( (byte_1401694F4 & 2) != 0 )
      sub_140090698(
        *(_QWORD *)(a1 + 24) + 5064LL,
        &stru_14014AF78,
        a1 + 177,
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
        5);
    v3 = *(_QWORD *)(a1 + 24);
    *(_BYTE *)(a1 + 506) |= 2u;
    if ( (*(_BYTE *)(v3 + 112) & 2) != 0 && sub_1400215B0(a1, 31) )
    {
      LODWORD(v12) = 56;
      *(_QWORD *)((char *)&v12 + 4) = 0x100000038LL;
      BYTE12(v12) = 0;
      if ( (unsigned int)sub_140090338() || (unsigned int)sub_14009038C() )
      {
        v4 = *(_QWORD *)(a1 + 24);
        WORD4(v14) = 1;
        HIDWORD(v14) = 4;
        v5 = *(_WORD *)(v4 + 56);
        LOWORD(v15) = *(_WORD *)(a1 + 104);
        BYTE2(v15) = *(_BYTE *)(a1 + 106);
        WORD5(v14) = v5;
      }
      v6 = *(_DWORD **)(a1 + 24);
      if ( *v6 == 1094997074 )
      {
        v7 = (__int64)(v6 + 94);
      }
      else if ( *v6 == 1314275652 )
      {
        v7 = (__int64)(v6 + 42);
      }
      else
      {
        v7 = 0LL;
      }
      sub_140021760(v7);
    }
    sub_1400B4EA8(a1, 0LL);
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055C18((__int64)off_140168120->AttachedDevice, 0x33u, (__int64)&unk_14014D880, a1);
    }
    sub_14006D4DC(a1 + 720, (__int64)&v10);
    if ( DWORD2(v10) && !(unsigned __int8)sub_14009FD14(a1) )
    {
      if ( (byte_1401694F4 & 1) != 0 )
        sub_140090500(
          *(_BYTE *)(a1 + 506) & 1,
          (__int64)v8,
          a1 + 177,
          *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_QWORD *)(a1 + 24) + 5064LL,
          *(_BYTE *)(a1 + 104),
          a1 + 2104,
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          *(_BYTE *)(a1 + 506) & 1,
          2);
      LOBYTE(v8) = v2;
      CMSPAddress::get_DynamicTerminalClasses(*(CMSPAddress **)(a1 + 24), v8);
    }
  }
  return 0LL;
}
