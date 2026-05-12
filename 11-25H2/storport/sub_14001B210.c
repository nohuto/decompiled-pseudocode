/*
 * XREFs of sub_14001B210 @ 0x14001B210
 * Callers:
 *     sub_14001B960 @ 0x14001B960 (sub_14001B960.c)
 *     sub_14001C020 @ 0x14001C020 (sub_14001C020.c)
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     StorPortSetDeviceQueueDepth @ 0x140029490 (StorPortSetDeviceQueueDepth.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_14001B210(__int64 a1, int a2)
{
  __int64 (__fastcall *v2)(_QWORD *); // r14
  __int64 (__fastcall *v3)(__int64, unsigned __int64); // r15
  unsigned __int64 v4; // rbp
  _QWORD **v5; // rsi
  __int64 v6; // rdi
  _QWORD *i; // rbx
  __int64 v8; // rax
  int v9; // eax

  v2 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 192);
  v3 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 200);
  v4 = BYTE2(a2) | (unsigned __int64)((((unsigned __int8)a2 << 8) | (unsigned int)BYTE1(a2)) << 8);
  v5 = (_QWORD **)(*(_QWORD *)(a1 + 184)
                 + 16LL * ((*(unsigned int (__fastcall **)(unsigned __int64))(a1 + 208))(v4) % *(_DWORD *)(a1 + 172)));
  v6 = 0LL;
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v8 = v2(i);
    v9 = v3(v8, v4);
    if ( !v9 )
      return i - 10;
    if ( v9 < 0 )
      return (_QWORD *)v6;
  }
  return (_QWORD *)v6;
}
