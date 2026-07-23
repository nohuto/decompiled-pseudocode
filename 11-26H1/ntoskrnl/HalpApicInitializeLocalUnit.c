/*
 * XREFs of HalpApicInitializeLocalUnit @ 0x1405A40B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicSetupRegisterAccess @ 0x140593B28 (HalpApicSetupRegisterAccess.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     HalpApicDescribeLocalLines @ 0x1405A3AC8 (HalpApicDescribeLocalLines.c)
 *     HalpApicIsCmciImplemented @ 0x1405A42DC (HalpApicIsCmciImplemented.c)
 *     HalpApicSetPriority @ 0x1405A4820 (HalpApicSetPriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicInitializeLocalUnit(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // eax
  bool v20; // zf
  unsigned int *v21; // rcx
  _DWORD v22[6]; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+40h] [rbp+8h] BYREF

  v23 = 0;
  v22[0] = 0;
  if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
  {
    if ( !HalpLocalApicPhysical.QuadPart )
      return 3221225486LL;
    if ( !HalpLocalApic )
    {
      HalpLocalApic = (__int64)HalMapIoSpace(HalpLocalApicPhysical, 0x1000uLL, MmNonCached);
      if ( !HalpLocalApic )
        return 3221225626LL;
    }
  }
  result = HalpApicSetupRegisterAccess();
  if ( (int)result >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 27) && (unsigned __int8)HalpApicIsCmciImplemented(&v23, v22) )
    {
      *(_DWORD *)(a1 + 32) = v23;
      *(_DWORD *)(a1 + 36) = v22[0];
    }
    v10 = *(unsigned int *)(a1 + 32);
    v11 = a4 | 0x10000;
    if ( (_DWORD)v10 )
      guard_dispatch_icall_no_overrides(v10, v11);
    v12 = *(unsigned int *)(a1 + 36);
    if ( (_DWORD)v12 )
      guard_dispatch_icall_no_overrides(v12, v11);
    HalpApicSetPriority(0LL, 15LL);
    v14 = a3 | 0x100;
    if ( byte_140F87A70 && (guard_dispatch_icall_no_overrides(48LL, v13) & 0x1000000) != 0 )
      v14 |= 0x1000u;
    guard_dispatch_icall_no_overrides(240LL, v14);
    guard_dispatch_icall_no_overrides(800LL, a4 | 0x30000u);
    guard_dispatch_icall_no_overrides(992LL, 11LL);
    guard_dispatch_icall_no_overrides(880LL, a5);
    guard_dispatch_icall_no_overrides(832LL, v11);
    v16 = guard_dispatch_icall_no_overrides(848LL, v15);
    v17 = v16;
    LODWORD(v17) = v16 | 0x10000;
    guard_dispatch_icall_no_overrides(848LL, v17);
    guard_dispatch_icall_no_overrides(848LL, v11);
    guard_dispatch_icall_no_overrides(864LL, a4 | 0x18400u);
    v19 = guard_dispatch_icall_no_overrides(32LL, v18);
    v20 = HalpApicX2Mode == 0;
    v21 = a6;
    *a6 = v19;
    if ( v20 )
      *v21 = HIBYTE(v19);
    if ( !*(_BYTE *)(a1 + 27) )
    {
      result = HalpApicDescribeLocalLines((_DWORD *)a1);
      if ( (int)result < 0 )
        return result;
      *(_BYTE *)(a1 + 27) = 1;
    }
    return 0LL;
  }
  return result;
}
