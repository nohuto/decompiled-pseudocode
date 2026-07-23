/*
 * XREFs of MiUnlockDriverPages @ 0x140AC8FF4
 * Callers:
 *     MiUnlockAndFreeDvPatchImage @ 0x140700758 (MiUnlockAndFreeDvPatchImage.c)
 *     MmWriteSystemImageTracepoint @ 0x140701C34 (MmWriteSystemImageTracepoint.c)
 *     MiUnlockEntireDriver @ 0x140873D10 (MiUnlockEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MiCompleteSecureDriverLoad @ 0x140AC8F74 (MiCompleteSecureDriverLoad.c)
 *     MmReapplyBootPatchImports @ 0x140D01DB4 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     RtlFindSetBitsEx @ 0x140411490 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     KeReservePrivilegedPages @ 0x1404EFB04 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(_RTL_BITMAP_EX *a1)
{
  unsigned __int64 *Buffer; // rcx
  unsigned __int64 *v3; // rcx
  unsigned __int64 *v4; // rcx
  unsigned __int64 SizeOfBitMap; // rdi
  __int64 PteAddress; // r14
  ULONG64 i; // r8
  ULONG64 SetBits; // rax
  ULONG64 v9; // rsi

  Buffer = a1[3].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    a1[3].Buffer = 0LL;
  }
  v3 = a1[4].Buffer;
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[4].Buffer = 0LL;
  }
  v4 = a1[5].Buffer;
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[5].Buffer = 0LL;
  }
  if ( a1[2].Buffer )
  {
    SizeOfBitMap = a1->SizeOfBitMap;
    if ( (a1[6].SizeOfBitMap & 1) != 0 )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(SizeOfBitMap + 48));
    for ( i = 0LL; ; i = v9 )
    {
      SetBits = RtlFindSetBitsEx(a1 + 2, 1uLL, i);
      v9 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits, (LODWORD(a1[6].SizeOfBitMap) >> 1) & 1);
      *((_BYTE *)a1[2].Buffer + (v9 >> 3)) &= ~(1 << (v9 & 7));
    }
    ExFreePoolWithTag(a1[2].Buffer, 0);
    a1[2].Buffer = 0LL;
  }
}
