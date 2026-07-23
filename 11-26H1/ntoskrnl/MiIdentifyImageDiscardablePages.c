/*
 * XREFs of MiIdentifyImageDiscardablePages @ 0x140876784
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
 */

__int64 __fastcall MiIdentifyImageDiscardablePages(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v3; // ebp
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 PteAddress; // r15
  int v8; // esi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v11 = 0LL;
  v12 = 0LL;
  v3 = (*(_DWORD *)(v1 + 64) >> 12) + ((*(_DWORD *)(v1 + 64) & 0xFFF) != 0);
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 8 * ((v3 >> 6) + ((v3 & 0x3F) != 0)), 1296188496, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    return 3221225626LL;
  a1[11] = PoolMm;
  a1[10] = v3;
  PteAddress = MiGetPteAddress(*(_QWORD *)(*a1 + 48LL));
  v8 = 0;
  do
  {
    v8 = MiSnapDriverRange(*a1, v8, 2, 0, (__int64)&v11, (__int64)&v12);
    if ( v11 )
    {
      v9 = (v11 - PteAddress) >> 3;
      v10 = (v12 - PteAddress) >> 3;
      if ( v9 < v3 )
      {
        if ( v10 >= v3 )
          v10 = v3 - 1;
        RtlSetBitsEx((__int64)(a1 + 10), v9, v10 - v9 + 1);
      }
    }
  }
  while ( v8 );
  return 0LL;
}
