/*
 * XREFs of ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x14005BCE4
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     SelectWindowRgn @ 0x14005B5EC (SelectWindowRgn.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x140165E80 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall tagWND::ClearClipRgnOrMaxClip(tagWND *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 5);
  v3 = *(_QWORD *)(v1 + 168);
  if ( v3 && (*(_WORD *)(v1 + 42) & 0x2FFF) != 0x29D )
    GreDeleteObject(v3);
  *(_QWORD *)(*((_QWORD *)this + 5) + 168LL) = 0LL;
}
