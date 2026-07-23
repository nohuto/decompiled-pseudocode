/*
 * XREFs of MmProtectMdlSystemAddress @ 0x1402F1A90
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x1405D0720 (IopLiveDumpBufferDumpData.c)
 *     DifMmProtectMdlSystemAddressWrapper @ 0x14066BCB0 (DifMmProtectMdlSystemAddressWrapper.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMappingHasIoReferences @ 0x14024F7D4 (MiMappingHasIoReferences.c)
 *     MiMappingHasIoTracker @ 0x1402810D0 (MiMappingHasIoTracker.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiLookupIoPageNode @ 0x140369BEC (MiLookupIoPageNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // r14
  unsigned int ProtectionMask; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  ULONG_PTR *v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r11
  int HasIoTracker; // r12d
  unsigned __int64 v12; // r15
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 TransitionPte; // rax
  unsigned __int64 v16; // r11
  int ProtectionPfnCompatible; // edi
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v20; // rbx
  int v21; // eax
  unsigned __int64 v22; // [rsp+30h] [rbp-128h]
  int v23; // [rsp+38h] [rbp-120h]
  _BYTE v24[208]; // [rsp+40h] [rbp-118h] BYREF

  memset_0(v24, 0, 0xC8uLL);
  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(MappedSystemVa) )
    return -1073741637;
  ProtectionMask = MiMakeProtectionMask(NewProtect);
  v6 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  v7 = ProtectionMask >> 3;
  if ( ProtectionMask >> 3 == 2 || v7 == 1 || v7 == 3 && (ProtectionMask & 7) != 0 )
    return -1073741755;
  if ( (ProtectionMask & 5) == 5 )
    return -1073741755;
  v22 = ((MappedSystemVa & 0xFFF) + MemoryDescriptorList->ByteCount + 4095LL) >> 12;
  v8 = (ULONG_PTR *)(((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  MiInitializeTbFlushList((unsigned int)v24, (unsigned int)&unk_140E37340, 20, 8, 1);
  HasIoTracker = 0;
  v12 = v9;
  while ( v10 )
  {
    v13 = *v8;
    if ( (*v8 & 1) != 0 )
    {
      v23 = 1;
      v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
      MiInsertTbFlushEntry(v24, v12, 1LL);
      if ( v12 == v9 )
        HasIoTracker = MiMappingHasIoTracker(v9);
    }
    else
    {
      if ( (v13 & 0x800) == 0 || ((v13 >> 5) & 0x1F) != 0x18 )
        KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v8, *v8);
      v20 = *v8;
      if ( qword_140E2D8C0 )
      {
        if ( (v13 & 0x10) != 0 )
          v20 = v13 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v20 = v13 & qword_140E2D8C8;
      }
      v14 = (v20 >> 12) & 0xFFFFFFFFFFLL;
      v23 = 0;
      if ( v12 == v9 && (v13 & 8) != 0 )
        HasIoTracker = 1;
    }
    if ( v6 == 24 )
    {
      TransitionPte = MiMakeTransitionPte(v14, 24);
      if ( HasIoTracker )
      {
        if ( v12 == v9 )
          TransitionPte |= 8uLL;
      }
      *v8 = TransitionPte;
    }
    else
    {
      if ( v14 <= qword_140E2D920 && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v6, 48 * v14 - 0x220000000000LL);
      }
      else
      {
        ProtectionPfnCompatible = v6 & 7;
        v21 = MiLookupIoPageNode(v14);
        if ( v21 )
        {
          if ( v21 == 2 )
            ProtectionPfnCompatible |= 0x18u;
        }
        else
        {
          ProtectionPfnCompatible |= 0x10u;
        }
      }
      ValidPte = MiMakeValidPte((unsigned __int64)v8, v14, ProtectionPfnCompatible | 0xA0000000);
      if ( v23 )
        MiWriteValidPteNewProtection((__int64 *)v8, ValidPte);
      else
        *v8 = ValidPte;
      if ( HasIoTracker && v12 == v9 )
        MiMappingHasIoReferences(v9);
      v16 = v22;
    }
    v12 += 4096LL;
    ++v8;
    v10 = v16 - 1;
    v22 = v10;
  }
  MiFlushTbList(v24);
  return 0;
}
