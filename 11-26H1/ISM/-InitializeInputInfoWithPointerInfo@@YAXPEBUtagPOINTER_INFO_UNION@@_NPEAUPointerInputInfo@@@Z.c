/*
 * XREFs of ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x180011008
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180010D88 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180011120 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall InitializeInputInfoWithPointerInfo(
        const struct tagPOINTER_INFO_UNION *a1,
        char a2,
        struct PointerInputInfo *a3)
{
  int v4; // eax
  int v5; // eax
  struct KeyboardModifierState *v6; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct KeyboardModifierState *v9; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)a3 + 1) = *((_DWORD *)a1 + 4);
  *((_DWORD *)a3 + 2) = *((_DWORD *)a1 + 16);
  *((_QWORD *)a3 + 2) = *((_QWORD *)a1 + 10);
  v4 = 2;
  if ( *(_DWORD *)a1 == 2 )
  {
    v4 = 8;
  }
  else if ( *(_DWORD *)a1 == 3 )
  {
    v4 = 16;
  }
  else if ( *(_DWORD *)a1 != 4 )
  {
    if ( *(_DWORD *)a1 == 5 )
      v4 = a2 != 0 ? 0x1000000 : 32;
    else
      v4 = 0;
  }
  *(_DWORD *)a3 = v4;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  v5 = KeyboardModifierState::Create(&v9);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x823,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5,
      v7);
  if ( a3 == (struct PointerInputInfo *)-232LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\ke"
                    "yboardmodifierstate.cpp",
      (const char *)0x80070057LL,
      v7);
    v6 = v9;
  }
  else
  {
    v6 = v9;
    *((_DWORD *)a3 + 58) = *((_DWORD *)v9 + 20);
  }
  if ( v6 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
