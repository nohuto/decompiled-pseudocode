/*
 * XREFs of HvlpSetupSchedulerAssist @ 0x1405BDADC
 * Callers:
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlpSetupSchedulerAssist(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax
  PHYSICAL_ADDRESS *v3; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  unsigned __int64 v11; // [rsp+38h] [rbp-10h]

  v1 = *(_DWORD **)(a1 + 36600);
  result = 0LL;
  v10 = 0LL;
  LODWORD(v11) = 0;
  v9 = 0LL;
  if ( v1 )
  {
    *v1 = 2056;
    v1[1] = 0;
    v3 = (PHYSICAL_ADDRESS *)HvlpAcquireHypercallPage((__int64)&v9, 1, 0LL, 16LL);
    v3->LowPart = 5;
    v3->HighPart = 1;
    PhysicalAddress = MmGetPhysicalAddress(v1);
    v5 = v11;
    v3[1] = PhysicalAddress;
    HvcallInitiateHypercall(32773LL, v5);
    return HvlpReleaseHypercallPage((unsigned int *)&v9, v6, v7, v8);
  }
  return result;
}
