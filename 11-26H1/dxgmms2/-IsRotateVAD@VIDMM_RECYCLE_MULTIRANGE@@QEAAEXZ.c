/*
 * XREFs of ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x140109F00
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x1401097D4 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x14010BEC0 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // r8
  char v3; // r9
  __int64 v4; // rcx
  __int64 v6; // rdx

  v1 = *((_QWORD *)this + 8);
  v3 = 0;
  while ( !v3 )
  {
    v4 = *(_QWORD *)(v1 + 72);
    if ( (*(_BYTE *)(v4 + 148) & 1) == 0 )
      return 0;
    if ( v1 == *((_QWORD *)this + 9) )
    {
      v3 = 1;
    }
    else
    {
      v6 = *(_QWORD *)(v1 + 120);
      v1 = 0LL;
      if ( v6 != v4 + 72 )
        v1 = v6 - 120;
    }
  }
  return 1;
}
