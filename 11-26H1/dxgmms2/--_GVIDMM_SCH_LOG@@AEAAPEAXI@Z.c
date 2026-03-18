/*
 * XREFs of ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x14004BE08
 * Callers:
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x140025FB4 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     VidSchiCreateNativeFenceLog @ 0x1400476F8 (VidSchiCreateNativeFenceLog.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140047988 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1400574B8 (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x140057C78 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x14004BE30 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 */

VIDMM_SCH_LOG *__fastcall VIDMM_SCH_LOG::`scalar deleting destructor'(VIDMM_SCH_LOG *this)
{
  VIDMM_SCH_LOG::~VIDMM_SCH_LOG(this);
  operator delete(this);
  return this;
}
