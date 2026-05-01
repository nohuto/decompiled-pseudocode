/*
 * XREFs of ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z @ 0x1800336CC
 * Callers:
 *     ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x1802F8390 (-Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetPropSetMap(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( !v2 )
    return 2147500035LL;
  v3 = (**v2)(v2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B,
    (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
