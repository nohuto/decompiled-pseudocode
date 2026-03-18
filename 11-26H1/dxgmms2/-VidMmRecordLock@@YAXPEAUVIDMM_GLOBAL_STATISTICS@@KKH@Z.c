/*
 * XREFs of ?VidMmRecordLock@@YAXPEAUVIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x140115EC0
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400E8234 (-LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmRecordLock(struct VIDMM_GLOBAL_STATISTICS *a1, char a2, __int64 a3, int a4)
{
  _InterlockedAdd((volatile signed __int32 *)a1 + 108, 1u);
  if ( (a2 & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)a1 + 109, 1u);
  if ( (a2 & 0x10) != 0 )
    _InterlockedAdd((volatile signed __int32 *)a1 + 110, 1u);
  if ( (a2 & 2) != 0 )
    _InterlockedAdd((volatile signed __int32 *)a1 + 111, 1u);
  if ( a2 < 0 )
    _InterlockedAdd((volatile signed __int32 *)a1 + 112, 1u);
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)a1 + 114, 1u);
}
