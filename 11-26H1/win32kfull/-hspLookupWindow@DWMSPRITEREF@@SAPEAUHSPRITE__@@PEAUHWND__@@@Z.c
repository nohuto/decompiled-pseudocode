/*
 * XREFs of ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104
 * Callers:
 *     GreZorderSprite @ 0x14001DFD4 (GreZorderSprite.c)
 *     GreGetSpriteAttributes @ 0x140041B20 (GreGetSpriteAttributes.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14009CB84 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400A67DC (GreDwmNotifySpriteMonitorChange.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreGetSprite @ 0x14014B798 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x14014CB00 (GreUpdateSpriteClipRgn.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1401D1464 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401D14AC (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401F5C28 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1401F77A0 (GreWindowLayoutComplete.c)
 *     GreIsWindowResizeInProgress @ 0x1402036EC (GreIsWindowResizeInProgress.c)
 *     GreWindowBeginLayoutUpdate @ 0x14021874C (GreWindowBeginLayoutUpdate.c)
 *     GreWindowResizeComplete @ 0x1402259FC (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x14022FFF0 (GreWindowResizeStarted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSPRITEREF::hspLookupWindow(Gre::Base *a1)
{
  __int64 v1; // rdi
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  struct W32_PUSH_LOCK *v3; // rbx
  _QWORD *v4; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  v1 = 0LL;
  Buffer[0] = a1;
  v2 = Gre::Base::Globals(a1);
  v3 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v2 + 28) + 72LL);
  if ( *((_QWORD *)v2 + 28) != -72LL )
    GreAcquirePushLockExclusive(v3);
  v4 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v2 + 28), Buffer);
  if ( v4 )
    v1 = v4[1];
  if ( v3 )
    GreReleasePushLockExclusive(v3);
  return v1;
}
