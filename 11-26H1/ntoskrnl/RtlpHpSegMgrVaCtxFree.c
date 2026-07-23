/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x1404A5E54
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x140350500 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1403526A0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegMgrLock @ 0x1404BDE5C (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrUnlock @ 0x1404C24DC (RtlpHpSegMgrUnlock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdi
  char v9; // al
  __int16 *v10; // r10
  int v11; // r11d
  unsigned __int64 v12; // rdx
  __int16 v13; // r9
  unsigned __int64 v14; // r8
  _QWORD *v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h]

  v6 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&ExpUuidLock.TrapFrame, a2 & 0xFFFFFFFFFFE00000uLL, (__int64)&v17);
  v8 = (a2 - v6) / *a3;
  v9 = RtlpHpSegMgrLock(a1);
  v10 = (__int16 *)v18;
  v11 = (unsigned __int16)(*(_WORD *)(v18 + 2) ^ (1 << v8));
  *(_WORD *)(v18 + 2) = v11;
  v12 = 0x200000uLL % *a3;
  v13 = *v10;
  v14 = (unsigned __int64)(unsigned __int16)*v10 >> 15;
  if ( v11 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    v12 = (unsigned __int64)(v10 + 4);
    if ( *((_QWORD *)v10 + 1) != -1LL )
    {
      if ( v13 >= 0 )
        *v10 = v13 ^ (v13 ^ (v13 - 1)) & 0x7FF;
      while ( 1 )
      {
        v15 = *(_QWORD **)(a1 + 8 * v14 + 128);
        if ( !v15 )
          NT_ASSERT("Link != ((void *)0)");
        *(_QWORD *)(a1 + 8 * v14 + 128) = *v15;
        if ( v15 == (_QWORD *)v12 )
          break;
        *v15 = v7;
        v7 = v15;
      }
      while ( 1 )
      {
        v12 = (unsigned __int64)v7;
        if ( !v7 )
          break;
        v7 = (_QWORD *)*v7;
        *(_QWORD *)v12 = *(_QWORD *)(a1 + 8 * v14 + 128);
        *(_QWORD *)(a1 + 8 * v14 + 128) = v12;
      }
    }
  }
  else
  {
    if ( ((v11 - 1) & v11) == 0 )
    {
      *((_QWORD *)v10 + 1) = *(_QWORD *)(a1 + 8 * v14 + 128);
      *(_QWORD *)(a1 + 8 * v14 + 128) = v10 + 4;
    }
    v6 = 0LL;
  }
  LOBYTE(v12) = v9;
  RtlpHpSegMgrUnlock(a1, v12);
  if ( v6 )
    *a3 = 0x200000LL;
  return v6;
}
