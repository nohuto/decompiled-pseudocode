/*
 * XREFs of ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x18004E148
 * Callers:
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AD514 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA?AU?$pair@KK@std@@PEAVInputContext@@@Z @ 0x18014AEC0 (-GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA-AU-$pair@KK@std@@PEAVInputCont.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rsi
  int (__fastcall ***v6)(_QWORD, GUID *, unsigned __int64 *); // r14
  int (__fastcall *v7)(_QWORD, GUID *, unsigned __int64 *); // rbp
  __int64 v8; // rdx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v4 != v5 )
  {
    while ( 1 )
    {
      v6 = *(int (__fastcall ****)(_QWORD, GUID *, unsigned __int64 *))(v4 + 8);
      v7 = **v6;
      if ( v3 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
      if ( v7(v6, &GUID_d3573f80_52a7_d2c9_ece4_38e96aede26c, &v10) >= 0 )
        break;
      v4 += 16LL;
      if ( v4 == v5 )
        break;
      v3 = v10;
    }
    v3 = v10;
  }
  v8 = (v3 - 8) & ((unsigned __int128)-(__int128)v3 >> 64);
  *a2 = v8;
  if ( v8 )
  {
    (**(void (__fastcall ***)(__int64))(v8 + 16))(v8 + 16);
    v3 = v10;
  }
  if ( v3 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return a2;
}
