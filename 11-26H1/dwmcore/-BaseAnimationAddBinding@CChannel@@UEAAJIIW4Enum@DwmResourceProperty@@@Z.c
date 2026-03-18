/*
 * XREFs of ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x180119B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::BaseAnimationAddBinding(CChannel *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  int v9; // eax
  unsigned int v10; // ebx
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)a1 + 8);
  v6 = a4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  CChannel::CheckHandle((__int64)a1, a2, 9);
  CChannel::CheckHandle((__int64)a1, a3, 0);
  v12[0] = 12;
  v12[1] = a2;
  v12[2] = a3;
  if ( (unsigned int)v6 >= 8 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x807,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x590,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  else
  {
    v12[3] = dword_1802F5460[v6];
    v9 = CChannel::SendCommand(a1, v12, 0x10u);
    v10 = v9;
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x591,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  return v10;
}
