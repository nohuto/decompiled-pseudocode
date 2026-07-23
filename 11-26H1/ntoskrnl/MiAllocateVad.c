/*
 * XREFs of MiAllocateVad @ 0x140A02E80
 * Callers:
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 *     MiCreatePlaceholderStorage @ 0x14099782C (MiCreatePlaceholderStorage.c)
 *     MiAllocateProcessVads @ 0x140A03904 (MiAllocateProcessVads.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiUpdateVadStartVpn @ 0x140494C34 (MiUpdateVadStartVpn.c)
 *     MiInitializeQuotaTracker @ 0x140995B34 (MiInitializeQuotaTracker.c)
 *     MiAddSecureEntry @ 0x140A03278 (MiAddSecureEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateVad(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3, unsigned __int64 a4, char a5)
{
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // rax

  *a1 = 0LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x48uLL, 1399087446, CurrentProcessorColor | 0x80000000);
  v11 = PoolMm;
  if ( PoolMm )
  {
    MiInitializeQuotaTracker((_BYTE *)(PoolMm + 68), a2, 0);
    *(_QWORD *)(v12 + 16) = -2LL;
    MiUpdateVadStartVpn(v12, a3 >> 12);
    *(_DWORD *)(v13 + 28) = a4 >> 12;
    *(_BYTE *)(v13 + 33) = a4 >> 44;
    *(_QWORD *)(v13 + 40) = 0LL;
    v14 = *(_DWORD *)(v13 + 48) & 0xFFF7FC1F | 0x80020;
    *(_DWORD *)(v11 + 48) = v14;
    if ( (a5 & 1) != 0 )
    {
      v15 = (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32))
          - (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32))
          + 1;
      *(_DWORD *)(v11 + 48) |= 0x400000u;
    }
    else if ( (a5 & 2) != 0 )
    {
      *(_DWORD *)(v11 + 48) = v14 & 0xFFFFFC1F | 0x300;
      v15 = 0x7FFFFFFFDLL;
    }
    else
    {
      v15 = 0x7FFFFFFFFLL;
    }
    *(_DWORD *)(v11 + 52) = v15;
    *(_BYTE *)(v11 + 34) = BYTE4(v15);
    if ( (a5 & 2) != 0 || MiAddSecureEntry(v11, a3, a4, -2147483647, 0) )
    {
      *a1 = v11;
      return 0LL;
    }
    ExFreePoolWithTag((PVOID)v11, 0);
  }
  return 3221225626LL;
}
