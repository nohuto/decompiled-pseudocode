/*
 * XREFs of ??0XDCOBJ@@QEAA@XZ @ 0x1400BB3C0
 * Callers:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14008E5C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngUpdateDeviceSurface @ 0x1401787B0 (EngUpdateDeviceSurface.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140178B78 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 * Callees:
 *     <none>
 */

XDCOBJ *__fastcall XDCOBJ::XDCOBJ(XDCOBJ *this)
{
  __int64 v2; // rdx
  XDCOBJ *result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  result = this;
  *((_QWORD *)this + 2) = v2;
  return result;
}
