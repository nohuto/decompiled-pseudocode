/*
 * XREFs of MiUnlockDriverPages @ 0x140AC7404
 * Callers:
 *     MiUnlockAndFreeDvPatchImage @ 0x1406FBA88 (MiUnlockAndFreeDvPatchImage.c)
 *     MmWriteSystemImageTracepoint @ 0x1406FCF64 (MmWriteSystemImageTracepoint.c)
 *     MiUnlockEntireDriver @ 0x14086D940 (MiUnlockEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     MiCompleteSecureDriverLoad @ 0x140AC7384 (MiCompleteSecureDriverLoad.c)
 *     MmReapplyBootPatchImports @ 0x140CFBA34 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiUnlockCodePage @ 0x140367FA8 (MiUnlockCodePage.c)
 *     RtlFindSetBitsEx @ 0x140419C40 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     KeReservePrivilegedPages @ 0x1404F64F4 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(unsigned __int64 *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 PteAddress; // r14
  unsigned __int64 i; // r8
  unsigned __int64 SetBits; // rax
  unsigned __int64 v9; // rsi

  v2 = (void *)a1[7];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[7] = 0LL;
  }
  v3 = (void *)a1[9];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[9] = 0LL;
  }
  v4 = (void *)a1[11];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[11] = 0LL;
  }
  if ( a1[5] )
  {
    v5 = *a1;
    if ( (a1[12] & 1) != 0 )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(v5 + 48));
    for ( i = 0LL; ; i = v9 )
    {
      SetBits = RtlFindSetBitsEx(a1 + 4, 1uLL, i);
      v9 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits, (*((_DWORD *)a1 + 24) >> 1) & 1);
      *(_BYTE *)((v9 >> 3) + a1[5]) &= ~(1 << (v9 & 7));
    }
    ExFreePoolWithTag((PVOID)a1[5], 0);
    a1[5] = 0LL;
  }
}
