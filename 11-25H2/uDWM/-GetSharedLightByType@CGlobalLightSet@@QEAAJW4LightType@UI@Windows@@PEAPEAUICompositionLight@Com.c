/*
 * XREFs of ?GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Composition@34@@Z @ 0x1800359A0
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x180034928 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalLightSet::GetSharedLightByType(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v8; // rcx
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Buffer = 0LL;
  LODWORD(Buffer) = a2;
  v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), &Buffer);
  if ( v6 )
  {
    *a3 = v6[1];
    v8 = v6[1];
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x80070057LL,
      Buffer);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
    return 2147942487LL;
  }
}
