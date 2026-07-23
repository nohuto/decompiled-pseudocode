/*
 * XREFs of HalpAllocateScratchMemory @ 0x140C182E8
 * Callers:
 *     HalpKdSetupDebuggingDevice @ 0x140C187C0 (HalpKdSetupDebuggingDevice.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x14034478C (HalpMapPhysicalMemory64.c)
 *     HalpAllocPhysicalMemory @ 0x140C86038 (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpAllocateScratchMemory(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  bool v4; // zf
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v3 = *(_DWORD *)(a2 + 192);
  if ( v3 && !*(_QWORD *)(a2 + 184) )
  {
    if ( !*(_QWORD *)(a2 + 176) )
      *(_QWORD *)(a2 + 176) = -1LL;
    v4 = *(_DWORD *)(a2 + 180) == 0;
    v11 = 0;
    if ( v4 )
      v10 = *(_DWORD *)(a2 + 176);
    else
      v10 = -1;
    v5 = ((v3 & 0xFFF) != 0) + (v3 >> 12);
    v6 = HalpAllocPhysicalMemory(a1, &v10, v5, 0LL);
    v7 = v6;
    if ( !v6 )
      return 3221225626LL;
    v9 = HalpMapPhysicalMemory64(v6, v5, 0, 4);
    *(_BYTE *)(a2 + 17) |= 1u;
    *(_QWORD *)(a2 + 184) = v9;
    *(_QWORD *)(a2 + 168) = v7;
  }
  return 0LL;
}
