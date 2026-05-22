/*
 * XREFs of ?SetCursorShellVisibility@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K_N@Z @ 0x1800F9910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180068C78 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1864 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursorController2::SetCursorShellVisibility(
        SystemCursorController2 *this,
        struct BamoSystemCursorControllerStub *a2,
        __int64 a3,
        char a4)
{
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    if ( (unsigned int)Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6)
                                                                                                  + 16LL)) != *((_DWORD *)this + 18) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        118LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller2.cpp",
        (const char *)0x80070005LL,
        v12);
    v8 = *((_QWORD *)this + 10);
    if ( !v8 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x77,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller2.cpp",
        (const char *)0x8000FFFFLL,
        v12);
    LOBYTE(v7) = a4;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a3, v7);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        120LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller2.cpp",
        (const char *)(unsigned int)v9,
        v12);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      v10);
  }
  return 0LL;
}
