/*
 * XREFs of sub_140049120 @ 0x140049120
 * Callers:
 *     start @ 0x1400492A0 (start.c)
 * Callees:
 *     sub_14003EB60 @ 0x14003EB60 (sub_14003EB60.c)
 *     sub_14004942C @ 0x14004942C (sub_14004942C.c)
 *     sub_14004946C @ 0x14004946C (sub_14004946C.c)
 *     sub_140049540 @ 0x140049540 (sub_140049540.c)
 *     sub_1400495E0 @ 0x1400495E0 (sub_1400495E0.c)
 *     sub_14004960C @ 0x14004960C (sub_14004960C.c)
 *     sub_140049F10 @ 0x140049F10 (sub_140049F10.c)
 *     sub_140049F20 @ 0x140049F20 (sub_140049F20.c)
 *     sub_140049F44 @ 0x140049F44 (sub_140049F44.c)
 *     sub_14004A0B8 @ 0x14004A0B8 (sub_14004A0B8.c)
 *     sub_14004A104 @ 0x14004A104 (sub_14004A104.c)
 *     _initterm @ 0x14004A4B6 (_initterm.c)
 *     _initterm_e @ 0x14004A4C2 (_initterm_e.c)
 *     _c_exit @ 0x14004A4CE (_c_exit.c)
 *     _register_thread_local_exe_atexit_callback @ 0x14004A4DA (_register_thread_local_exe_atexit_callback.c)
 *     _o__cexit @ 0x14004A56A (_o__cexit.c)
 *     _o__exit @ 0x14004A59A (_o__exit.c)
 *     _o__get_wide_winmain_command_line @ 0x14004A5A6 (_o__get_wide_winmain_command_line.c)
 *     _o__seh_filter_exe @ 0x14004A5F8 (_o__seh_filter_exe.c)
 *     _o_exit @ 0x14004A634 (_o_exit.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140049120()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  char v2; // di
  __int64 v3; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _tls_callback_type *v8; // rax
  __int64 v9; // rcx
  _tls_callback_type *v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 wide_winmain_command_line; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx

  if ( !(unsigned __int8)sub_14004946C(1LL) )
  {
    sub_140049F44(7LL);
    goto LABEL_19;
  }
  v2 = 0;
  LOBYTE(v0) = sub_14004942C(v1);
  v3 = (unsigned int)dword_1400E7C90;
  if ( dword_1400E7C90 == 1 )
  {
LABEL_19:
    sub_140049F44(7LL);
    goto LABEL_20;
  }
  if ( dword_1400E7C90 )
  {
    v2 = 1;
  }
  else
  {
    dword_1400E7C90 = 1;
    if ( initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
      return 255LL;
    initterm((_PVFV *)&qword_1400C2A08, (_PVFV *)&qword_1400C2B28);
    dword_1400E7C90 = 2;
  }
  LOBYTE(v3) = v0;
  sub_1400495E0(v3);
  v6 = (_QWORD *)sub_140049F10(v5);
  if ( *v6 && (unsigned __int8)sub_140049540(v6) )
    sub_1400B6010(0LL);
  v8 = (_tls_callback_type *)sub_140049F20(v7);
  v10 = v8;
  if ( *v8 && (unsigned __int8)sub_140049540(v8) )
    register_thread_local_exe_atexit_callback(*v10);
  v11 = (unsigned __int16)sub_14004A0B8(v9);
  wide_winmain_command_line = o__get_wide_winmain_command_line(v12);
  v0 = sub_14003EB60((__int64)&_ImageBase, 0LL, wide_winmain_command_line, v11);
  if ( !(unsigned __int8)sub_14004A104(v14) )
  {
LABEL_20:
    o_exit(v0);
    o__exit(v0);
    JUMPOUT(0x140049290LL);
  }
  if ( !v2 )
    o__cexit(v15);
  LOBYTE(v15) = 1;
  sub_14004960C(v15, 0LL);
  return v0;
}
