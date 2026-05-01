/*
 * XREFs of ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x180089A44
 * Callers:
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x1800898D0 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18004A13C (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ?GetGhostWindowIfHung@CWin32ApplicationView@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x180089B54 (-GetGhostWindowIfHung@CWin32ApplicationView@@AEAAPEAUHWND__@@PEAU2@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::CopyCloakableWindowsFromGatherer(
        CWin32ApplicationView *this,
        unsigned int *a2,
        HWND **a3)
{
  unsigned int v6; // ebp
  HWND *v7; // rax
  unsigned int v8; // ebx
  size_t v10; // rax
  _QWORD *v11; // rbx
  HWND v12; // rax
  CWin32ApplicationView *v13; // rcx
  CWin32ApplicationView *v14; // rcx
  unsigned int v15; // esi
  HWND *v16; // rbx
  HWND *v17; // r15
  HWND GhostWindowIfHung; // rax
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0;
  *a3 = 0LL;
  v6 = *((_DWORD *)this + 60) + 1;
  if ( !is_mul_ok(v6, 8uLL) )
  {
    v8 = -2147024362;
    goto LABEL_4;
  }
  v7 = (HWND *)CoTaskMemAlloc(8LL * (unsigned int)(*((_DWORD *)this + 60) + 1));
  *a3 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A4,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v8);
    return v8;
  }
  v10 = CTCoAllocPolicy::_CoTaskMemSize(v7);
  memset_0(*a3, 0, v10);
  v11 = *a3;
  v12 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  *v11 = CWin32ApplicationView::GetGhostWindowIfHung(v13, v12);
  v15 = 1;
  v16 = (HWND *)*((_QWORD *)this + 29);
  v17 = &v16[*((_QWORD *)this + 30)];
  while ( v16 != v17 )
  {
    GhostWindowIfHung = CWin32ApplicationView::GetGhostWindowIfHung(v14, *v16);
    v14 = (CWin32ApplicationView *)*a3;
    v19 = v15++;
    ++v16;
    (*a3)[v19] = GhostWindowIfHung;
  }
  *a2 = v6;
  return 0LL;
}
