/*
 * XREFs of ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x140411924
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::RemoveVidPnOwnership(DXGDEVICE *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rax

  v2 = *((_DWORD *)this + 477);
  if ( a2 > v2 )
  {
    v5 = a2;
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 477));
    v6 = *((unsigned int *)this + 477);
    v4 = 0;
    WdLogGlobalForLineNumber = 11976;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Trying to adjust VidPn ownership count down by %d but only %d to remove",
      v5,
      v6,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v4 = v2 - a2;
  }
  *((_DWORD *)this + 477) = v4;
}
