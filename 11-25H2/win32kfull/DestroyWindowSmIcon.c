/*
 * XREFs of DestroyWindowSmIcon @ 0x14006630C
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401E47E0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x140226FA0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

__int64 __fastcall DestroyWindowSmIcon(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct tagCURSOR *v5; // rbx

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL);
  if ( !v3 )
    return 0LL;
  LOBYTE(a2) = 3;
  v4 = HMValidateHandleNoRip(v3, a2);
  v5 = (struct tagCURSOR *)v4;
  if ( !v4 || (*(_DWORD *)(v4 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) = 0LL;
  _DestroyCursor(v5, 0);
  return 1LL;
}
