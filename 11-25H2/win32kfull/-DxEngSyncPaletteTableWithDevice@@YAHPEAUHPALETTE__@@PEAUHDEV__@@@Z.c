/*
 * XREFs of ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x14032575C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401B0310 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14008D870 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7D10 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1401853D0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401C612C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1402306D0 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, struct PALETTE **a2)
{
  unsigned int v3; // edi
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  _BYTE v7[160]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v8; // [rsp+D8h] [rbp+6Fh] BYREF
  struct PALETTE **v9; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v10; // [rsp+E8h] [rbp+7Fh] BYREF

  v9 = a2;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v8, a1);
  if ( a2 )
  {
    if ( v8 )
    {
      SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v10, (__int64)&v9);
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v7, (struct PDEVOBJ *)&v9);
      v5 = Gre::Base::Globals(v4);
      SEMOBJ<13>::SEMOBJ<13>((HSEMAPHORE *)&v9, v5);
      XEPALOBJ::apalColorSet((XEPALOBJ *)&v8, a2[224]);
      v3 = 1;
      SEMOBJ<13>::vUnlock((HSEMAPHORE *)&v9);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v7);
      if ( v10 )
        GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v10);
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
  return v3;
}
