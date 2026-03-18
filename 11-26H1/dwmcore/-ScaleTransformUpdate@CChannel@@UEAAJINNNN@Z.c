/*
 * XREFs of ?ScaleTransformUpdate@CChannel@@UEAAJINNNN@Z @ 0x1801170E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::ScaleTransformUpdate(
        CChannel *this,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  __int64 v6; // rbx
  float v9; // xmm0_4
  int v10; // eax
  int v11; // edi
  float v12; // xmm0_4
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-2Ch]
  float v17; // [rsp+28h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v6 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  CChannel::CheckHandle(this, a2, 115LL);
  v15 = 607;
  v16 = a2;
  v9 = a3;
  v17 = v9;
  v10 = CChannel::SendCommand(this, &v15, 0xCu);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x665,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
    return (unsigned int)v11;
  }
  v15 = 608;
  v16 = a2;
  v12 = a4;
  v17 = v12;
  v11 = CChannel::SendCommand(this, &v15, 0xCu);
  if ( v11 < 0 )
  {
    v13 = 1644LL;
    goto LABEL_5;
  }
  v15 = 609;
  v16 = a2;
  v17 = a5;
  v11 = CChannel::SendCommand(this, &v15, 0xCu);
  if ( v11 < 0 )
  {
    v13 = 1651LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
    return (unsigned int)v11;
  }
  v15 = 610;
  v16 = a2;
  v17 = a6;
  v11 = CChannel::SendCommand(this, &v15, 0xCu);
  if ( v11 < 0 )
  {
    v13 = 1658LL;
    goto LABEL_5;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
  return 0LL;
}
