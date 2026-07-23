/*
 * XREFs of PnprCopyReservedMapping @ 0x140507038
 * Callers:
 *     PnprRecopyMirrorPages @ 0x140524E40 (PnprRecopyMirrorPages.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmContainingPageForReservedMapping @ 0x1405250BC (MmContainingPageForReservedMapping.c)
 *     PnprGetPageDestination @ 0x14053371C (PnprGetPageDestination.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 PnprCopyReservedMapping()
{
  __int64 v0; // r15
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r8
  __int64 v4; // rsi
  unsigned int v5; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rsi
  PHYSICAL_ADDRESS v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int16 v28; // ax
  size_t v29; // rdi
  char *v30; // rbx
  char *v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  _QWORD v35[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v37[16]; // [rsp+B8h] [rbp-50h] BYREF

  v35[0] = 0LL;
  v0 = *(_QWORD *)(PnprContext + 144);
  v1 = *(unsigned int *)(PnprContext + 180);
  v2 = 3 * v1;
  v3 = *(_QWORD *)(v0 + 24 * v1);
  v4 = v0 + 24 * v1;
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
    MmUnmapReservedMapping(*(PVOID *)(v4 + 8), 0x51706E50u, (PMDL)v3);
  memset_0(Src, 0, sizeof(Src));
  memset_0(v37, 0, sizeof(v37));
  v5 = 0;
  PhysicalAddress = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v0 + 8 * v2) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)(
              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
              v35) >= 0
    && v35[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = 1;
    v37[0] = v35[0] >> 12;
    Src[0] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  v7 = *(_QWORD *)(v4 + 8);
  v8 = v7 + 0x10000;
  while ( v7 < v8 )
  {
    v9 = MmContainingPageForReservedMapping(v7);
    if ( !v5 || v9 != Src[v5 - 1] )
    {
      v10 = v9 << 12;
      if ( (int)PnprGetPageDestination(v10, v35) >= 0 && v35[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v5 >= 0x10 )
          return 3221225485LL;
        v11 = v5;
        v12 = v35[0] >> 12;
        ++v5;
        Src[v11] = v10 >> 12;
        v37[v11] = v12;
      }
    }
    v7 += 4096LL;
  }
  v13 = *(unsigned int *)(PnprContext + 180);
  v14 = *(_QWORD *)(PnprContext + 136);
  v15 = 3 * v13;
  v16 = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v14 + 24 * v13) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)((PHYSICAL_ADDRESS)v16.QuadPart, v35) >= 0
    && v35[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v5 >= 0x10 )
      return 3221225485LL;
    v17 = v5;
    v18 = v35[0] >> 12;
    ++v5;
    Src[v17] = (unsigned __int64)v16.QuadPart >> 12;
    v37[v17] = v18;
  }
  v19 = *(_QWORD *)(v14 + 8 * v15 + 8);
  v20 = v19 + 0x10000;
  while ( v19 < v20 )
  {
    v21 = MmContainingPageForReservedMapping(v19);
    if ( v5 > 0x10 )
      return 3221225485LL;
    if ( !v5 || v21 != Src[v5 - 1] )
    {
      v22 = v21 << 12;
      if ( (int)PnprGetPageDestination(v22, v35) >= 0 && v35[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v5 >= 0x10 )
          return 3221225485LL;
        v23 = v5;
        v24 = v35[0] >> 12;
        ++v5;
        Src[v23] = v22 >> 12;
        v37[v23] = v24;
      }
    }
    v19 += 4096LL;
  }
  if ( !v5 )
    return 0LL;
  v26 = *(_QWORD *)(v0 + 8 * v2);
  v27 = v5;
  *(_DWORD *)(v26 + 40) = v5 << 13;
  *(_QWORD *)v26 = 0LL;
  v28 = 2 * v5 + 6;
  *(_WORD *)(v26 + 10) = 0;
  v29 = 8LL * v5;
  *(_QWORD *)(v26 + 32) = 0LL;
  *(_DWORD *)(v26 + 44) = 0;
  *(_WORD *)(v26 + 8) = 8 * v28;
  v30 = (char *)(*(_QWORD *)(v0 + 8 * v2) + 48LL);
  memmove(v30, Src, v29);
  memmove(&v30[v29], v37, v29);
  *(_WORD *)(*(_QWORD *)(v0 + 8 * v2) + 10LL) |= *(_WORD *)(v0 + 8 * v2 + 16);
  v31 = (char *)MmMapLockedPagesWithReservedMapping(
                  *(PVOID *)(v0 + 8 * v2 + 8),
                  0x51706E50u,
                  *(PMDL *)(v0 + 8 * v2),
                  MmCached);
  if ( v31 )
  {
    memmove(&v31[4096 * v27], v31, v27 << 12);
    return 0LL;
  }
  v32 = PnprContext;
  v33 = *(_DWORD *)(PnprContext + 33288);
  if ( !v33 )
    v33 = 5438;
  *(_DWORD *)(PnprContext + 33288) = v33;
  v34 = *(_DWORD *)(v32 + 33292);
  if ( !v34 )
    v34 = 10;
  *(_DWORD *)(v32 + 33292) = v34;
  return 3221225626LL;
}
