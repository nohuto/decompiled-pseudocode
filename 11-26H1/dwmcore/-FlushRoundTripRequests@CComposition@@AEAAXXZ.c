/*
 * XREFs of ?FlushRoundTripRequests@CComposition@@AEAAXXZ @ 0x1801E088C
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18014EB54 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x18014EC84 (McTemplateU0qqx_EventWriteTransfer.c)
 */

void __fastcall CComposition::FlushRoundTripRequests(CComposition *this, __int64 a2)
{
  unsigned int i; // ebp
  __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+34h] [rbp-24h]
  __int64 v9; // [rsp+44h] [rbp-14h]

  for ( i = 0; i < *((_DWORD *)this + 246); *(_QWORD *)(v4 + 8 * v5 + 8) = 0LL )
  {
    v4 = *((_QWORD *)this + 120);
    v5 = 2LL * i;
    if ( *(_DWORD *)(v4 + 16LL * i + 4) == 1 || *(_DWORD *)(v4 + 16LL * i + 4) == 2 )
    {
      v7 = 8;
      v9 = 0LL;
      v6 = *(_DWORD *)(v4 + 16LL * i);
      v8 = 0LL;
      DWORD1(v8) = v6;
      CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v7);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqx_EventWriteTransfer(
        (__int64)this,
        a2,
        *(unsigned int *)(v4 + 16LL * i + 4),
        *(_DWORD *)(v4 + 16LL * i),
        *(_QWORD *)(v4 + 16LL * i + 8));
    ++i;
    *(_DWORD *)(v4 + 8 * v5 + 4) = 0;
  }
  *((_DWORD *)this + 246) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 960, 0x10u);
}
