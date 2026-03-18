/*
 * XREFs of ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768
 * Callers:
 *     EngpMovePointer @ 0x14001AD74 (EngpMovePointer.c)
 *     GreSetPointer @ 0x14001AE9C (GreSetPointer.c)
 *     ?vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z @ 0x14001C0F4 (-vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z.c)
 *     GreOnCURSINFODestroy @ 0x140029974 (GreOnCURSINFODestroy.c)
 *     GreMovePointer @ 0x14006B170 (GreMovePointer.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006B734 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     GreSfmCloseCompositorRef @ 0x14009F798 (GreSfmCloseCompositorRef.c)
 *     EngSetPointerShape @ 0x1400A0BB0 (EngSetPointerShape.c)
 *     GreHidePointer @ 0x1400A4E00 (GreHidePointer.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     GreRealizePalette @ 0x1401FD0C8 (GreRealizePalette.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     ??0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z @ 0x14020DB64 (--0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z.c)
 *     GreRealizeDefaultPalette @ 0x14021B5C0 (GreRealizeDefaultPalette.c)
 *     GreDesktopSwitch @ 0x140230AF8 (GreDesktopSwitch.c)
 *     ?GreHidePointerInternal@@YAXAEAVPDEVOBJ@@@Z @ 0x14024A848 (-GreHidePointerInternal@@YAXAEAVPDEVOBJ@@@Z.c)
 *     GreDwmShutdown @ 0x140253E18 (GreDwmShutdown.c)
 *     GreDwmStartup @ 0x1402931FC (GreDwmStartup.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *GrepAcquireLockValidate<4>()
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v2; // rbx
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax

  result = GreGetCurrentThreadCrossSessionCheck();
  v2 = result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFFFF0uLL) != 0 && (v3 & 0x10) == 0 )
    {
      v4 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v5 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          v5 = v4;
        v4 = v5;
      }
      if ( v5 > 4 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v5);
    }
    LOBYTE(i) = *((_BYTE *)v2 + 12);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v2 + 12) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v2 |= 0x10uLL;
  }
  return result;
}
