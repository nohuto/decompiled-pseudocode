/*
 * XREFs of ??0AUTO_TGO@@IEAA@XZ @ 0x14013E2BC
 * Callers:
 *     DrvChangeDisplaySettings @ 0x14013C570 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140157D40 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 */

AUTO_TGO *__fastcall AUTO_TGO::AUTO_TGO(AUTO_TGO *this)
{
  int v2; // eax

  *(_QWORD *)this = &AUTO_TGO::`vftable';
  v2 = PushThreadGuardedObject((_QWORD *)this + 2, (__int64)this, (__int64)AUTO_TGO::_DisposeThis);
  *((_DWORD *)this + 2) = v2;
  if ( !v2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 223;
  }
  return this;
}
