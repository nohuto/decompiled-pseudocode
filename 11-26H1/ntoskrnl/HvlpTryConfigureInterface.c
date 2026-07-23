/*
 * XREFs of HvlpTryConfigureInterface @ 0x1405C405C
 * Callers:
 *     HvlRestoreEnlightenment @ 0x1405BB88C (HvlRestoreEnlightenment.c)
 *     HvlPhase0Initialize @ 0x14079419C (HvlPhase0Initialize.c)
 *     HvlEnableVsmCalls @ 0x140CBF76C (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     HvlpAllocateEarlyPages @ 0x1405C229C (HvlpAllocateEarlyPages.c)
 *     HvlpMapEarlyPages @ 0x1405C24F8 (HvlpMapEarlyPages.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406E0BE4 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpTryConfigureInterface(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 (__fastcall *EarlyPages)(); // r8
  bool v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 result; // rax
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF

  v10 = 0LL;
  HviGetHypervisorFeatures(&v10);
  v2 = ((unsigned __int64)v10 >> 44) & 1;
  if ( (unsigned __int8)HviIsHypervisorMicrosoftCompatible()
    && (v10 = 0LL, HviGetHypervisorFeatures(&v10), (v10 & 0x20) != 0) )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 240);
      EarlyPages = *(__int64 (__fastcall **)())(v3 + 2952);
      v5 = (*(_DWORD *)(v3 + 132) & 0x200) != 0;
      if ( EarlyPages )
      {
LABEL_15:
        HvcallCodeVa = EarlyPages;
        result = 0LL;
        _InterlockedExchange64((volatile __int64 *)&HvlpHypercallCodeVa, (__int64)EarlyPages);
        return result;
      }
    }
    else
    {
      v5 = 0;
    }
    __writemsr(
      0x40000000u,
      (unsigned __int16)NtBuildNumber | (((unsigned __int16)CmNtCSDVersion & 0xFF00 | 0x1040A000000LL) << 8));
    v6 = __readmsr(0x40000001u);
    v7 = v6 | 1;
    if ( (_BYTE)v2 || v5 )
    {
      EarlyPages = (__int64 (__fastcall *)())HvlpMapEarlyPages(v6 & 0xFFFFFFFFFFFFF000uLL);
      if ( EarlyPages )
        goto LABEL_14;
    }
    else
    {
      if ( !a1 )
      {
        PhysicalAddress = MmGetPhysicalAddress(HvlpHypercallCodeVa);
        EarlyPages = (__int64 (__fastcall *)())HvlpHypercallCodeVa;
        goto LABEL_13;
      }
      EarlyPages = (__int64 (__fastcall *)())HvlpAllocateEarlyPages(a1, 1LL);
      if ( EarlyPages )
      {
        PhysicalAddress.QuadPart = 0LL;
LABEL_13:
        v7 = PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFF000uLL | v7 & 0xFFF;
LABEL_14:
        __writemsr(0x40000001u, v7);
        goto LABEL_15;
      }
    }
    return 3221225626LL;
  }
  else
  {
    HvlpHypercallCodeVa = 0LL;
    return 3224702976LL;
  }
}
