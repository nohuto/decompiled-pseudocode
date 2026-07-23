/*
 * XREFs of MiGetVirtualAddressState @ 0x14024EBD4
 * Callers:
 *     MiGetPhysicalAddress @ 0x14024E9E4 (MiGetPhysicalAddress.c)
 *     HalpAcpiAccessSecureAddress @ 0x14024EA50 (HalpAcpiAccessSecureAddress.c)
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiAllocateProtoPool @ 0x1403988A0 (MiAllocateProtoPool.c)
 *     MiOkToDeleteProtos @ 0x1404500BC (MiOkToDeleteProtos.c)
 *     MmGetPhysicalAddressEx @ 0x1404A95C0 (MmGetPhysicalAddressEx.c)
 *     MmStoreGetPhysicalAddress @ 0x1405321B8 (MmStoreGetPhysicalAddress.c)
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiQueuePinDriverAddressLog @ 0x14024E374 (MiQueuePinDriverAddressLog.c)
 *     MiVaToPfnEx @ 0x14024F870 (MiVaToPfnEx.c)
 *     MiUpdateNonPagedPoolNoSteal @ 0x14024FD1C (MiUpdateNonPagedPoolNoSteal.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiGetVirtualAddressState(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 *v13; // r9
  __int64 v14; // r8
  unsigned __int64 PteShadow; // rbx
  __int64 HasShadow; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 *v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  int v25; // r13d
  int SystemRegionType; // esi
  __int64 v27; // r8
  __int64 result; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r9
  __int64 v31; // r11
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // r11
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD v40[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v41; // [rsp+70h] [rbp+8h]

  memset(v40, 0, sizeof(v40));
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = a2;
  v7 = 0LL;
  *(_BYTE *)(a1 + 12) = 1;
  do
  {
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v40[v7++] = v6;
  }
  while ( v7 < 4 );
  v8 = MI_IS_PHYSICAL_ADDRESS(a2);
  v11 = v8;
  *(_DWORD *)(a1 + 8) = v8;
  if ( v8 )
  {
    v12 = MiVaToPfnEx(a2);
    v13 = (unsigned __int64 *)v40[v11];
    v14 = v12;
    PteShadow = *v13;
    if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (PteShadow & 1) != 0
      && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, *v13, v12);
      if ( HasShadow )
      {
        v19 = *(_QWORD *)(HasShadow + 1288);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 8 * ((v18 >> 3) & 0x1FF));
          if ( (v20 & 0x20) != 0 )
            v17 |= 0x20uLL;
          PteShadow = v17 | 0x42;
          if ( (v20 & 0x42) == 0 )
            PteShadow = v17;
        }
      }
    }
  }
  else
  {
    v21 = 4LL;
    do
    {
      v22 = (__int64 *)v40[--v21];
      v23 = *v22;
      if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v10 = *v22;
        if ( (v23 & 1) == 0 )
          return 3221225473LL;
        if ( (v23 & 0x20) == 0 || (v23 & 0x42) == 0 )
        {
          v29 = MiPteHasShadow(v9, v23, v10);
          if ( v29 )
          {
            v32 = *(_QWORD *)(v29 + 1288);
            if ( v32 )
            {
              v33 = *(_QWORD *)(v32 + 8 * (v31 & (v30 >> 3)));
              if ( (v33 & 0x20) != 0 )
                v10 |= 0x20uLL;
              LOBYTE(v23) = v10 | 0x42;
              if ( (v33 & 0x42) == 0 )
                LOBYTE(v23) = v10;
            }
          }
        }
      }
      if ( (v23 & 1) == 0 )
        return 3221225473LL;
    }
    while ( v21 != 1 );
    v24 = v40[0];
    PteShadow = *(_QWORD *)v40[0];
    if ( v40[0] >= 0xFFFFF6FB7DBED000uLL
      && v40[0] <= 0xFFFFF6FB7DBED7F8uLL
      && (PteShadow & 1) != 0
      && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
    {
      v34 = MiPteHasShadow(v9, *(_QWORD *)v40[0], v10);
      if ( v34 )
      {
        v37 = *(_QWORD *)(v34 + 1288);
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 8 * (v36 & (v24 >> 3)));
          if ( (v38 & 0x20) != 0 )
            v35 |= 0x20uLL;
          PteShadow = v35 | 0x42;
          if ( (v38 & 0x42) == 0 )
            PteShadow = v35;
        }
      }
    }
    v25 = a3 & 1;
    if ( v25 )
    {
      SystemRegionType = 0;
    }
    else
    {
      SystemRegionType = MiGetSystemRegionType(a2);
      if ( SystemRegionType == 11 )
        MiQueuePinDriverAddressLog(a2, PteShadow, 0);
    }
    if ( (PteShadow & 1) == 0 )
      return 3221225473LL;
    if ( !v25 && SystemRegionType == 4 )
    {
      MiUpdateNonPagedPoolNoSteal(a2, 1LL);
      PteShadow = *(_QWORD *)v24;
      if ( v24 >= 0xFFFFF6FB7DBED000uLL && v24 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v24, *(_QWORD *)v24);
    }
    v14 = (PteShadow >> 12) & 0xFFFFFFFFFFLL;
  }
  v27 = v14 << 12;
  HIDWORD(v41) = HIDWORD(v27);
  LODWORD(v41) = (a2 & 0xFFF) + v27;
  *(_QWORD *)(a1 + 16) = v41;
  result = 0LL;
  *(_QWORD *)a1 = PteShadow;
  return result;
}
