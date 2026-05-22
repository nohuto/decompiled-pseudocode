/*
 * XREFs of ?InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ @ 0x18008DC78
 * Callers:
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x1800851A0 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Initialize@DesktopSystemCursorService@@QEAAJXZ @ 0x18008DD8C (-Initialize@DesktopSystemCursorService@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController2::InitializeDesktopCursorService(
        SystemCursorController2 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebp
  std::_Ref_count_base *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_QWORD *)this + 10) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      a4);
  v5 = (char *)operator new(0x38uLL);
  *(_OWORD *)v5 = 0LL;
  *((_DWORD *)v5 + 2) = 1;
  *((_DWORD *)v5 + 3) = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<DesktopSystemCursorService>::`vftable';
  *((_QWORD *)v5 + 3) = this;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 2) = &DesktopSystemCursorService::`vftable';
  *((_QWORD *)v5 + 5) = 0LL;
  *((_DWORD *)v5 + 12) = 0;
  *((_DWORD *)v5 + 13) = 0x10000;
  v6 = DesktopSystemCursorService::Initialize((DesktopSystemCursorService *)(v5 + 16));
  v7 = v6;
  if ( v6 >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    *((_QWORD *)this + 10) = v5 + 16;
    v9 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = v5;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller2.cpp",
      (const char *)(unsigned int)v6,
      (_DWORD)v5 + 16);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    return v7;
  }
}
