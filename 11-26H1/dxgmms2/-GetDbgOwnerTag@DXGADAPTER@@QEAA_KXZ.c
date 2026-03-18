/*
 * XREFs of ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x1400541C8
 * Callers:
 *     VidSchiResetEngine @ 0x1400454F8 (VidSchiResetEngine.c)
 *     VidSchiReportHwHang @ 0x140048588 (VidSchiReportHwHang.c)
 *     VidSchiResetHwEngine @ 0x140058740 (VidSchiResetHwEngine.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DXGADAPTER::GetDbgOwnerTag(DXGADAPTER *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 75);
  if ( !result )
  {
    result = *((_QWORD *)this + 214);
    if ( !result )
      return *((_QWORD *)this + 57);
  }
  return result;
}
