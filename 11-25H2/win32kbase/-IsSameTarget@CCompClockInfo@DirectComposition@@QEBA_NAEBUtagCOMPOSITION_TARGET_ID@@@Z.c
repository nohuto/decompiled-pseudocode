/*
 * XREFs of ?IsSameTarget@CCompClockInfo@DirectComposition@@QEBA_NAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x140227F24
 * Callers:
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1400C7E8C (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompClockInfo::IsSameTarget(
        DirectComposition::CCompClockInfo *this,
        const struct tagCOMPOSITION_TARGET_ID *a2)
{
  return *(_DWORD *)a2 == *((_DWORD *)this + 1)
      && *((_DWORD *)a2 + 1) == *((_DWORD *)this + 2)
      && *((_DWORD *)a2 + 4) == *((_DWORD *)this + 3);
}
