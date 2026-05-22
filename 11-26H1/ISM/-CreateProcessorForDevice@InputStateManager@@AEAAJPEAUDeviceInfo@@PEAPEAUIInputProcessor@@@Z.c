/*
 * XREFs of ?CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z @ 0x180021320
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18007F4F0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18007C270 (-IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801C35F0 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputStateManager::CreateProcessorForDevice(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IInputProcessor **a3)
{
  struct DeviceInfo *v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int (__fastcall *v8)(struct DeviceInfo *); // rax
  struct DeviceInfo *v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IInputProcessor *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v10[2] = 0LL;
  v10[0] = a2;
  if ( this )
    v4 = (InputStateManager *)((char *)this + 8);
  else
    v4 = 0LL;
  v10[1] = v4;
  if ( !a2 || !v4 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL,
      (int)v10[0]);
  v5 = 0;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = 6 * v6;
    if ( IsEdition(*((_QWORD *)&unk_180251360 + 6 * v6 + 3)) )
    {
      v8 = (unsigned int (__fastcall *)(struct DeviceInfo *))*(&funcs_18002139E + v7);
      if ( (!v8 || v8(v10[0])) && (int)funcs_180021410[v7]((struct InputProcessorCreateParams *)v10, &v12) >= 0 )
        break;
    }
    v6 = ++v5;
    if ( (unsigned __int64)v5 >= 0x13 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
        (const char *)0x80070490LL,
        (int)v10[0]);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)0x80070490LL,
        (int)v10[0]);
      return 2147943568LL;
    }
  }
  *a3 = v12;
  return 0LL;
}
