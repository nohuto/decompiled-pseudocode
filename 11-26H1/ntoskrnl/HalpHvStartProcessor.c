/*
 * XREFs of HalpHvStartProcessor @ 0x1405953B4
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140BF0190 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x14058778C (HalpIsXboxNanovisorPresent.c)
 *     HalpHvStartVirtualProcessorViaXboxNanovisor @ 0x140588378 (HalpHvStartVirtualProcessorViaXboxNanovisor.c)
 *     HalpHvInitSegRegister @ 0x1405952DC (HalpHvInitSegRegister.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpHvStartProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r10d
  int v5; // r11d
  unsigned __int16 v6; // dx
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // r11
  unsigned __int16 v13; // dx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned __int8 v17; // r11
  _DWORD v20[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h]
  _BYTE v23[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v24[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v28[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v29[14]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v30; // [rsp+B6h] [rbp-4Ah]
  _BYTE v31[22]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v32; // [rsp+CEh] [rbp-32h]
  __int64 v33; // [rsp+D0h] [rbp-30h]
  __int16 v34; // [rsp+DEh] [rbp-22h]
  __int64 v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int64 v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  __int64 v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]

  v20[0] = 0;
  if ( qword_140FBB4A0 )
  {
    v4 = guard_dispatch_icall_no_overrides(a1, v20);
  }
  else if ( HalpIsXboxNanovisorPresent() )
  {
    v20[0] = v5;
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
    memset_0(v23, 0, 0xC8uLL);
    v6 = *(_WORD *)(a3 + 488);
    *(_QWORD *)&v21 = HalpLMStubForVM;
    *((_QWORD *)&v21 + 1) = *(_QWORD *)(a3 + 96);
    v22 = 2LL;
    HalpHvInitSegRegister(a3 + 240, v6, (__int64)v23);
    HalpHvInitSegRegister(v7, *(_WORD *)(a3 + 490), (__int64)v24);
    HalpHvInitSegRegister(v8, *(_WORD *)(a3 + 492), (__int64)v25);
    HalpHvInitSegRegister(v9, *(_WORD *)(a3 + 494), (__int64)v26);
    HalpHvInitSegRegister(v10, *(_WORD *)(a3 + 496), (__int64)v27);
    HalpHvInitSegRegister(v11, *(_WORD *)(a3 + 498), (__int64)v28);
    HalpHvInitSegRegister(v12, *(_WORD *)(a3 + 272), (__int64)v29);
    v13 = *(_WORD *)(a3 + 274);
    v30 |= 2u;
    HalpHvInitSegRegister(v14, v13, (__int64)v31);
    v15 = *(_QWORD *)(a3 + 264);
    v32 = *(_WORD *)(a3 + 262);
    v35 = *(_QWORD *)(v16 + 8);
    v34 = *(_WORD *)(v16 + 6);
    v37 = *(_QWORD *)(a3 + 160);
    v38 = *(_QWORD *)(a3 + 176);
    v39 = *(_QWORD *)(a3 + 184);
    v36 = *(_QWORD *)(a3 + 112);
    v40 = *(_QWORD *)(a3 + 104);
    v33 = v15;
    if ( qword_140FBB498 )
      return (unsigned int)guard_dispatch_icall_no_overrides(v20[0], &v21);
    if ( HalpIsXboxNanovisorPresent() )
      return (unsigned int)HalpHvStartVirtualProcessorViaXboxNanovisor(v17, &v21);
  }
  return (unsigned int)v4;
}
