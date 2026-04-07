/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x180071F78
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x180071E9C (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x180020190 (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180072A64 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::CDesktopManager(CDesktopManager *this)
{
  __int64 v2; // rdx

  CBaseObject::CBaseObject(this);
  *((_BYTE *)this + 23) = 1;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CDesktopManager::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  CGlassColorizationParameters::CGlassColorizationParameters((CDesktopManager *)((char *)this + 484));
  *((_BYTE *)this + 516) = v2;
  *((_QWORD *)this + 66) = v2;
  *((_QWORD *)this + 67) = v2;
  *((_QWORD *)this + 68) = v2;
  *((_DWORD *)this + 138) = v2;
  *((_WORD *)this + 580) = v2;
  *((_BYTE *)this + 1162) = v2;
  *(_QWORD *)((char *)this + 1164) = v2;
  *((_DWORD *)this + 293) = v2;
  *((_DWORD *)this + 294) = 1062836634;
  *((_DWORD *)this + 295) = 1058642330;
  *((_DWORD *)this + 296) = 1050253722;
  *((_DWORD *)this + 297) = 10;
  *((_DWORD *)this + 298) = 1056964608;
  *((_DWORD *)this + 299) = 1050253722;
  *((_DWORD *)this + 300) = 1020054733;
  *((_DWORD *)this + 301) = 1041865114;
  *((_QWORD *)this + 152) = v2;
  *((_QWORD *)this + 153) = v2;
  *((_QWORD *)this + 154) = v2;
  *((_DWORD *)this + 310) = v2;
  *((_QWORD *)this + 159) = v2;
  CDesktopManager::s_pDesktopManagerInstance = this;
  CDesktopManager::UpdateWindowShadows(this);
  return this;
}
