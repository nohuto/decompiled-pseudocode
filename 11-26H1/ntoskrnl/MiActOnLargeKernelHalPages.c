/*
 * XREFs of MiActOnLargeKernelHalPages @ 0x14086A38C
 * Callers:
 *     MiProtectSystemImage @ 0x1409E4B80 (MiProtectSystemImage.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140D047E0 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140D06644 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiActOnLargeKernelHalPages(void *a1)
{
  unsigned __int64 v1; // rsi
  PIMAGE_NT_HEADERS v2; // rax
  int v3; // r8d
  PIMAGE_NT_HEADERS v4; // r14
  __int64 *v5; // rbx
  unsigned __int64 v6; // rbp
  int v7; // edi
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // r15d
  __int64 result; // rax
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]
  int v16; // [rsp+48h] [rbp-50h]
  __int128 v17; // [rsp+4Ch] [rbp-4Ch]
  int v18; // [rsp+5Ch] [rbp-3Ch]

  v1 = (unsigned __int64)a1;
  v2 = RtlImageNtHeader(a1);
  v3 = 0x40000000;
  v15 = 0LL;
  v14 = 0LL;
  v4 = v2;
  v18 = 0x40000000;
  v5 = &v14;
  v6 = v1;
  v7 = v2->FileHeader.NumberOfSections + 1;
  LODWORD(v15) = v2->OptionalHeader.SizeOfHeaders;
  v8 = v1;
  v16 = v15;
  v17 = 0LL;
  while ( v7 )
  {
    v9 = *((unsigned int *)v5 + 3) + v1;
    v10 = *((_DWORD *)v5 + 4);
    if ( v10 < *((_DWORD *)v5 + 2) )
      v10 = *((_DWORD *)v5 + 2);
    v11 = *((_DWORD *)v5 + 9) & 0xE0000000;
    v6 = v9 + ((v10 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
    if ( v11 != v3 )
    {
      if ( v8 < v9 )
      {
        result = guard_dispatch_icall_no_overrides(v8, v9);
        if ( (int)result < 0 )
          return result;
      }
      v3 = v11;
      v8 = v9;
    }
    if ( v5 == &v14 )
      v5 = (__int64 *)((char *)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader);
    else
      v5 += 5;
    v1 = (unsigned __int64)a1;
    --v7;
  }
  return guard_dispatch_icall_no_overrides(v8, (v6 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL);
}
