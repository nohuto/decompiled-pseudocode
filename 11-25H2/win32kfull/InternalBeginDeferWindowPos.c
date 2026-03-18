/*
 * XREFs of InternalBeginDeferWindowPos @ 0x14004E1DC
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSetWindowRgn @ 0x14004E0F4 (xxxSetWindowRgn.c)
 *     xxxProcessSetWindowPosEvent @ 0x1401D64DC (xxxProcessSetWindowPosEvent.c)
 *     xxxSetWindowPosAndBand @ 0x140236EBC (xxxSetWindowPosAndBand.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402AA50C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     xxxArrangeIconicWindows @ 0x1402EB4A4 (xxxArrangeIconicWindows.c)
 * Callees:
 *     AllocateCvr @ 0x14004E360 (AllocateCvr.c)
 */

_OWORD *__fastcall InternalBeginDeferWindowPos(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _OWORD *v9; // rbx
  __int64 v11; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 66800) & 0x40000000) == 0
    && (signed int)v2 <= *(_DWORD *)(UserSessionState + 63288) )
  {
    v8 = W32GetUserSessionState(v7, v6);
    *(_DWORD *)(v8 + 66800) |= 0x40000000u;
    v9 = (_OWORD *)(UserSessionState + 63256);
    *v9 = 0LL;
    v9[1] = 0LL;
    return v9;
  }
  v11 = Win32AllocPoolWithQuotaZInit(48LL, 2004054869LL);
  v9 = (_OWORD *)v11;
  if ( v11 )
  {
    if ( (unsigned int)AllocateCvr(v11, v2) )
      return v9;
    Win32FreePool(v9);
  }
  return 0LL;
}
