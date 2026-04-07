/*
 * XREFs of ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E3A30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180055818 (--0CWindowData@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E9940 (-AssertW@@YAXPEBG000K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CreateWindow(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v3; // ebx
  CWindowData *v4; // rax
  CWindowData *v5; // rax
  CWindowData *v6; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h] BYREF
  CWindowData *v9; // [rsp+50h] [rbp+18h]

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2) )
    AssertW(
      0LL,
      L"pwdData == nullptr",
      L"CWindowList::CreateWindow",
      L"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      0x7BFu);
  v4 = (CWindowData *)DefaultHeap::AllocClear(0x360uLL);
  v9 = v4;
  if ( v4 && (v5 = CWindowData::CWindowData(v4), (v6 = v5) != 0LL) )
  {
    *((_QWORD *)v5 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v5);
    *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x7C2u, 0LL);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v3;
}
