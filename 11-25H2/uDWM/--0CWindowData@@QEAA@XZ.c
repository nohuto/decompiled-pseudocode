/*
 * XREFs of ??0CWindowData@@QEAA@XZ @ 0x180055818
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x1800552F8 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CAB00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E3A30 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     IsOpenThemeDataPresent @ 0x18009BCE0 (IsOpenThemeDataPresent.c)
 */

CWindowData *__fastcall CWindowData::CWindowData(CWindowData *this)
{
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // r8d
  bool v8; // cf
  char v9; // al
  char v10; // cl
  CWindowData *result; // rax

  *((_QWORD *)this + 2) = (char *)this + 804;
  *((_OWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_QWORD *)this + 40) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 82) = 96;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 496, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 536, v2, v3);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 568, v4, v5);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 608, v6, v7);
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  v8 = (unsigned __int8)IsOpenThemeDataPresent() != 0;
  *((_BYTE *)this + 408) = -1;
  v9 = *((_BYTE *)this + 672);
  *((_DWORD *)this + 170) = 4095;
  *((_BYTE *)this + 673) |= 0x40u;
  *((_BYTE *)this + 676) |= 0x10u;
  *((_DWORD *)this + 50) = 0;
  v10 = v9 & 0xF7 | (v8 ? 8 : 0);
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 83) = 1065353216;
  *((_DWORD *)this + 53) = 1065353216;
  *((_DWORD *)this + 54) = 1065353216;
  result = this;
  *((_BYTE *)this + 672) = v10;
  return result;
}
