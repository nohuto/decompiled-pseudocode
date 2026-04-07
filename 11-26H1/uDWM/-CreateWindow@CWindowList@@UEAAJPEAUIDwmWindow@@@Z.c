/*
 * XREFs of ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E03A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18007FC1C (--0CWindowData@@QEAA@XZ.c)
 *     ??2CWindowData@@SAPEAX_K@Z @ 0x180085D04 (--2CWindowData@@SAPEAX_K@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E55B4 (-AssertW@@YAXPEBG000K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::CreateWindow(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v3; // edi
  CWindowData *v4; // rax
  CWindowData *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+48h] [rbp+10h] BYREF
  CWindowData *v8; // [rsp+50h] [rbp+18h]

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2) )
    AssertW(
      0LL,
      L"pwdData == nullptr",
      L"CWindowList::CreateWindow",
      L"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      0x8E6u);
  v4 = (CWindowData *)CWindowData::operator new();
  v8 = v4;
  if ( v4 )
    v5 = CWindowData::CWindowData(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    *((_QWORD *)v5 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v5);
    *((_QWORD *)v5 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x8E9u, 0LL);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v3;
}
