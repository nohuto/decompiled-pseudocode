/*
 * XREFs of HalpMcaPopulateErrorData @ 0x14044AB14
 * Callers:
 *     HalpMcaReadError @ 0x14044BC70 (HalpMcaReadError.c)
 * Callees:
 *     HalpWheaReadMsrMisc @ 0x14044B1DC (HalpWheaReadMsrMisc.c)
 *     HalpWheaReadMsrAddress @ 0x14044B228 (HalpWheaReadMsrAddress.c)
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     HalpWheaGetApicId @ 0x14044C290 (HalpWheaGetApicId.c)
 *     HalpReadExtendedMcaRegistersIntel @ 0x14044C378 (HalpReadExtendedMcaRegistersIntel.c)
 *     HalpMcaPopulateErrorDataEx @ 0x14057D618 (HalpMcaPopulateErrorDataEx.c)
 *     HalpReadExtendedMcaRegistersAMD @ 0x140580DC4 (HalpReadExtendedMcaRegistersAMD.c)
 *     HalpHvGetMachineCheckContext @ 0x1405881D8 (HalpHvGetMachineCheckContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaPopulateErrorData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbp
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // di
  int v16; // eax
  bool v17; // zf
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+38h] [rbp-50h] BYREF

  v6 = 0LL;
  if ( a6 )
    return HalpMcaPopulateErrorDataEx(a1, a2, a3, a5, a6 - 1);
  *(_DWORD *)a5 = 5;
  LOBYTE(v11) = HalpGetCpuVendor();
  if ( (_BYTE)v11 == 2 )
  {
    *(_DWORD *)(a5 + 4) = 1;
  }
  else
  {
    v16 = 0;
    if ( (_BYTE)v11 == 1 )
      v16 = 2;
    *(_DWORD *)(a5 + 4) = v16;
  }
  *(_QWORD *)(a5 + 8) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(a5 + 16) = a1;
  *(_DWORD *)(a5 + 68) = HalpWheaGetApicId(a1, v11);
  v18 = guard_dispatch_icall_no_overrides(a1, 378LL);
  *(_DWORD *)(a5 + 36) = a2;
  *(_QWORD *)(a5 + 40) = a3;
  if ( (a3 & 0x400000000000000LL) != 0 )
    *(_QWORD *)(a5 + 48) = HalpWheaReadMsrAddress(a1, a2);
  if ( (a3 & 0x800000000000000LL) != 0 && HalpMcaMiscImplemented )
    *(_QWORD *)(a5 + 56) = HalpWheaReadMsrMisc(a1, a2);
  result = guard_dispatch_icall_no_overrides(a1, 377LL);
  v14 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v14 == 1 )
  {
    result = HalpReadExtendedMcaRegistersIntel(result, v13, a1, a5);
  }
  else if ( (_DWORD)v14 == 2 )
  {
    result = HalpReadExtendedMcaRegistersAMD(v14, a2, a1, a5);
  }
  v15 = v18;
  if ( (v18 & 4) != 0 )
  {
    v17 = HalpHvWheaEnlightenedCpuManager == 0;
    *(_QWORD *)(a5 + 20) = v18;
    if ( !v17 )
    {
      v19 = 0LL;
      if ( (int)HalpHvGetMachineCheckContext((unsigned int)a1, &v19) >= 0 && (_DWORD)v19 != 2 )
        v15 = v18 & 0xFD;
    }
    if ( a4 && (v15 & 2) != 0 )
      *(_QWORD *)(a5 + 28) = *(_QWORD *)(a4 + 360);
    result = HalpGetCpuVendor();
    if ( (_BYTE)result == 2 )
    {
      result = guard_dispatch_icall_no_overrides(a1, 377LL);
      v6 = result;
    }
    *(_QWORD *)(a5 + 264) = v6;
  }
  return result;
}
