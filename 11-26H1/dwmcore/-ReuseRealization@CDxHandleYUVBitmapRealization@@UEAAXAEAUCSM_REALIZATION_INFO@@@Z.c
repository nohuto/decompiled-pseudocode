/*
 * XREFs of ?ReuseRealization@CDxHandleYUVBitmapRealization@@UEAAXAEAUCSM_REALIZATION_INFO@@@Z @ 0x1801DBDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleYUVBitmapRealization::ReuseRealization(
        CDxHandleYUVBitmapRealization *this,
        struct CSM_REALIZATION_INFO *a2)
{
  *((_DWORD *)this - 19) = *((_DWORD *)a2 + 1);
}
