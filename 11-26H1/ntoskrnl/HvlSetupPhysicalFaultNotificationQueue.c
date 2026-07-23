/*
 * XREFs of HvlSetupPhysicalFaultNotificationQueue @ 0x1405BC0A0
 * Callers:
 *     KiEpfInitialize @ 0x140CD1B44 (KiEpfInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     HvlpAllocateOverlayPages @ 0x1405C22B8 (HvlpAllocateOverlayPages.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlSetupPhysicalFaultNotificationQueue(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  void *OverlayPages; // rax
  unsigned int v7; // r14d
  void *v8; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rdx
  __int16 v13; // ax
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  unsigned __int64 v26; // [rsp+58h] [rbp-8h]

  v24 = 0LL;
  v25 = 0LL;
  LODWORD(v26) = 0;
  LODWORD(v23) = 0;
  OverlayPages = (void *)HvlpAllocateOverlayPages(a1, a2, a3, a4, 0LL, 0LL, 0LL);
  v7 = 0;
  v8 = OverlayPages;
  if ( OverlayPages )
  {
    memset_0(OverlayPages, 0, 0x1000uLL);
    PhysicalAddress = MmGetPhysicalAddress(v8);
    v10 = HvlpAcquireHypercallPage((__int64)&v24, 1, 0LL, 24LL);
    v11 = HvlpAcquireHypercallPage((__int64)&v22, 2, 0LL, 8LL);
    *v10 = 1LL;
    v12 = v26;
    v10[2] = 1LL;
    v10[1] = PhysicalAddress.QuadPart / 4096;
    v13 = HvcallInitiateHypercall(32772LL, v12);
    v14 = *(_DWORD *)v11;
    LOWORD(PhysicalAddress.LowPart) = v13;
    HvlpReleaseHypercallPage((unsigned int *)&v22, v15, v16, v17);
    HvlpReleaseHypercallPage((unsigned int *)&v24, v18, v19, v20);
    if ( LOWORD(PhysicalAddress.LowPart) )
    {
      v7 = -1073741823;
      MmFreeContiguousMemory(v8);
    }
    else
    {
      *a2 = v14 << 12;
      *a1 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
