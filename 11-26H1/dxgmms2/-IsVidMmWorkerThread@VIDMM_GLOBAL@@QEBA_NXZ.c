/*
 * XREFs of ?IsVidMmWorkerThread@VIDMM_GLOBAL@@QEBA_NXZ @ 0x14010EC28
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140047988 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::IsVidMmWorkerThread(VIDMM_GLOBAL *this)
{
  return KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL);
}
