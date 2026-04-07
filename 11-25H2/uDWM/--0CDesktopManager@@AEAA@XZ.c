/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x1800ABE5C
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1800812A8 (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x18000F33C (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18008AC20 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::CDesktopManager(CDesktopManager *this)
{
  __int64 v2; // r9
  char v3; // r9
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // r9

  CBaseObject::CBaseObject(this);
  *((_BYTE *)this + 23) = 1;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CDesktopManager::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CDesktopManager *)((char *)this + 104));
  *((_QWORD *)this + 26) = v2;
  *((_QWORD *)this + 27) = v2;
  *((_QWORD *)this + 54) = v2;
  CGlassColorizationParameters::CGlassColorizationParameters((CDesktopManager *)((char *)this + 476));
  *((_BYTE *)this + 508) = v3;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 520, 0LL, 0);
  *((_WORD *)this + 576) = v4;
  *((_DWORD *)this + 300) = 1050253722;
  *((_DWORD *)this + 303) = 1050253722;
  *((_BYTE *)this + 1154) = v4;
  *(_QWORD *)((char *)this + 1156) = v4;
  *(_QWORD *)((char *)this + 1164) = v4;
  *(_QWORD *)((char *)this + 1172) = 1065353216LL;
  *((_DWORD *)this + 295) = 1062836634;
  *((_DWORD *)this + 296) = 1084227584;
  *((_DWORD *)this + 297) = 1090519040;
  *((_DWORD *)this + 298) = -1065353216;
  *((_DWORD *)this + 299) = 1058642330;
  *((_DWORD *)this + 301) = 10;
  *((_DWORD *)this + 302) = 1056964608;
  *((_DWORD *)this + 304) = 1020054733;
  *((_DWORD *)this + 305) = 1041865114;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 1248, v5, v6);
  *((_QWORD *)this + 162) = v7;
  CDesktopManager::s_pDesktopManagerInstance = this;
  CDesktopManager::UpdateWindowShadows(this);
  return this;
}
