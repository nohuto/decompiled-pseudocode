/*
 * XREFs of CheckForLargePageUpgrade @ 0x1400B1318
 * Callers:
 *     PageInAllocation_0 @ 0x1400D2924 (PageInAllocation_0.c)
 * Callees:
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1400417C8 (McTemplateK0_EtwWriteTransfer.c)
 *     ?VidMmQueryAllocationContiguity@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@_K1PEA_K2@Z @ 0x1400B4BC8 (-VidMmQueryAllocationContiguity@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@_K1PEA_K2@Z.c)
 */

bool __fastcall CheckForLargePageUpgrade(struct VIDMM_PHYSICAL_ALLOC *a1, _BYTE *a2, __int64 a3)
{
  int v3; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a1 + 14);
  *a2 = 1;
  if ( (v3 & 4) == 0 )
    return 0;
  v6 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x20000000) == 0 || !*(_QWORD *)(*(_QWORD *)(v6 + 48) + 16LL) )
    return 0;
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)a1, &LargePageUpgrade_QueryContiguityStart, a3);
  v7 = *(_QWORD *)(v6 + 48);
  v8 = *((_QWORD *)a1 + 2);
  v13 = 0LL;
  v14 = 0LL;
  if ( !VidMmQueryAllocationContiguity(a1, *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 16) + v8, &v13, &v14) )
    return 0;
  v10 = v13;
  v11 = v14;
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(
      v13 << 16,
      &LargePageUpgrade_QueryContiguityEnd,
      v9,
      v6,
      (v14 + v13) << 16,
      v13 << 16);
  if ( !v11 )
  {
    *a2 = 0;
    return 0;
  }
  if ( dword_14008A690 )
  {
    if ( 100 * v11 / (v11 + v10) >= (unsigned int)dword_14008A690 )
      return 1;
    if ( !dword_14008A694 )
      return 0;
  }
  else if ( !dword_14008A694 )
  {
    return 1;
  }
  return v11 << 16 >= (unsigned int)dword_14008A694;
}
