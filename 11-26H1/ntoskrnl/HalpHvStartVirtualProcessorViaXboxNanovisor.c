/*
 * XREFs of HalpHvStartVirtualProcessorViaXboxNanovisor @ 0x140588378
 * Callers:
 *     HalpHvStartProcessor @ 0x1405953B4 (HalpHvStartProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

__int64 __fastcall HalpHvStartVirtualProcessorViaXboxNanovisor(unsigned __int8 a1, _OWORD *a2)
{
  unsigned __int64 v2; // rbp
  _OWORD *v3; // rdx
  __int64 result; // rax
  _DWORD v5[1024]; // [rsp+1020h] [rbp+0h] BYREF

  v2 = (unsigned __int64)v5 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)v2 = -1073741823;
  *(_OWORD *)(v2 + 4096) = *a2;
  *(_OWORD *)(v2 + 4112) = a2[1];
  *(_OWORD *)(v2 + 4128) = a2[2];
  *(_OWORD *)(v2 + 4144) = a2[3];
  *(_OWORD *)(v2 + 4160) = a2[4];
  *(_OWORD *)(v2 + 4176) = a2[5];
  *(_OWORD *)(v2 + 4192) = a2[6];
  *(_OWORD *)(v2 - 16 + 4224) = a2[7];
  v3 = a2 + 8;
  *(_OWORD *)(v2 + 4224) = *v3;
  *(_OWORD *)(v2 + 4240) = v3[1];
  *(_OWORD *)(v2 + 4256) = v3[2];
  *(_OWORD *)(v2 + 4272) = v3[3];
  *(_OWORD *)(v2 + 4288) = v3[4];
  *(_OWORD *)(v2 + 4304) = v3[5];
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFF000uLL) + 0x10B8) |= 0x400uLL;
  __writemsr(
    0x40000074u,
    MmGetPhysicalAddress((PVOID)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFF000uLL) + 4096)).QuadPart & 0xFFFFFFFFFFFFF000uLL | a1);
  result = 0LL;
  *(_DWORD *)v2 = 0;
  return result;
}
