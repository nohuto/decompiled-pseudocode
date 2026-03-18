/*
 * XREFs of ??0ENTER_GRE_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@AEAVPDEVOBJ@@@Z @ 0x14009FA00
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006B734 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAB8 (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB18 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14009FB50 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB84 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

ENTER_GRE_DWM_CRIT *__fastcall ENTER_GRE_DWM_CRIT::ENTER_GRE_DWM_CRIT(
        ENTER_GRE_DWM_CRIT *this,
        struct Gre::Base::SESSION_GLOBALS *a2,
        struct PDEVOBJ *a3)
{
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared(this, a2);
  SEMOBJ<2>::SEMOBJ<2>((char *)this + 16, a2);
  SEMOBJ<3>::SEMOBJ<3>((char *)this + 24, a2);
  SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)this + 4, (__int64)a3);
  SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)this + 5, a2);
  SEMOBJ<7>::SEMOBJ<7>((char *)this + 48, a2);
  SEMOBJ<8>::SEMOBJ<8>((char *)this + 56, a3);
  return this;
}
