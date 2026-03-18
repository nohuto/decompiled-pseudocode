/*
 * XREFs of ?GetDriverColorimetryOverride@KernelDriver@@UEBAJAEAU_DXGK_COLORIMETRY@@@Z @ 0x14027E8A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetMonitorColorimetryOverride @ 0x140255CF8 (DpiGetMonitorColorimetryOverride.c)
 */

__int64 __fastcall KernelDriver::GetDriverColorimetryOverride(KernelDriver *this, struct _DXGK_COLORIMETRY *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    return DpiGetMonitorColorimetryOverride(
             *(_QWORD *)(*(_QWORD *)(v4 + 16) + 216LL),
             *((_DWORD *)this + 8),
             (__int64)a2);
  WdLogSingleEntry1(2LL);
  result = 3221225664LL;
  WdLogGlobalForLineNumber = 53;
  return result;
}
