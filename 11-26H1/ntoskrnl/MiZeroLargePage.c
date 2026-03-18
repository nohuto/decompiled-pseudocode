/*
 * XREFs of MiZeroLargePage @ 0x1402A1A04
 * Callers:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiZeroAndConvertPage @ 0x1402A14B0 (MiZeroAndConvertPage.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14031070C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiGetLargePage @ 0x14051E3C4 (MiGetLargePage.c)
 *     MiPartitionTransferAllocateLargePages @ 0x14087CA30 (MiPartitionTransferAllocateLargePages.c)
 * Callees:
 *     MiAssignDefaultChannel @ 0x140284390 (MiAssignDefaultChannel.c)
 *     MiGetUltraMapping @ 0x1402881D0 (MiGetUltraMapping.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiZeroWithUltraSpace @ 0x1402A0EE0 (MiZeroWithUltraSpace.c)
 *     MiWriteLargePte @ 0x1402A10E0 (MiWriteLargePte.c)
 *     AccelFillMemory @ 0x1402A19C4 (AccelFillMemory.c)
 *     MiZeroPhysicalPage @ 0x1402D8B20 (MiZeroPhysicalPage.c)
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033C7D0 (MiMakeProtectionPfnCompatible.c)
 *     MiReferenceAccelerator @ 0x140507D64 (MiReferenceAccelerator.c)
 *     MiDereferenceAccelerator @ 0x14070F68C (MiDereferenceAccelerator.c)
 *     MiInitializeAcceleratorDescriptor @ 0x14070F72C (MiInitializeAcceleratorDescriptor.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1407307E0 (KeZeroPages.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall MiZeroLargePage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // r12
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int v10; // r9d
  int ProtectionPfnCompatible; // edi
  unsigned int v12; // r14d
  void *MmInternal; // rcx
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  unsigned __int8 v16; // al
  unsigned int v17; // r10d
  char v18; // r9
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // r11
  __int64 UltraMapping; // r14
  unsigned int v23; // edi
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned int v28; // edi
  unsigned int v29; // r14d
  __int64 v30; // rax
  void *v31; // rsp
  unsigned int v32; // [rsp+30h] [rbp+0h] BYREF
  __int64 v33; // [rsp+38h] [rbp+8h]
  __int64 v34; // [rsp+40h] [rbp+10h] BYREF
  int v35; // [rsp+48h] [rbp+18h]
  int v36; // [rsp+4Ch] [rbp+1Ch]
  _OWORD v37[4]; // [rsp+50h] [rbp+20h] BYREF
  _BYTE v38[64]; // [rsp+90h] [rbp+60h] BYREF

  v5 = a3;
  v33 = a1;
  v32 = a4;
  v36 = 0;
  memset_0(v37, 0, 0x80uLL);
  v8 = (a2 + 0x220000000000LL) / 48;
  v9 = MiPageSizes[v5];
  if ( v8 <= qword_140E2D7A0 && (*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, a2);
  }
  else
  {
    v10 = 4;
    ProtectionPfnCompatible = 4;
  }
  if ( (_DWORD)v5 )
  {
    v12 = v10;
    if ( (_DWORD)v5 == 1 )
      v12 = 2;
  }
  else
  {
    v12 = 1;
  }
  if ( a5 )
  {
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
    {
      MiZeroWithUltraSpace((__int64)MmInternal + 8, 0LL, a2, v10);
    }
    else
    {
      for ( ; v9; --v9 )
        MiZeroPhysicalPage(0LL, v8++, 2LL, a4);
    }
    return;
  }
  v14 = MiPageToNode((a2 + 0x220000000000LL) / 48);
  if ( v14 == -1 )
    v15 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  else
    v15 = v14;
  v16 = MiAssignDefaultChannel(v15);
  v19 = 0LL;
  v20 = 0LL;
  v35 = (v16 & 1 | (2 * (v18 & 0x3F | 0x380))) << 8;
  v34 = v21 + 34640;
  if ( !v33 )
  {
    if ( _bittest64(&MiFlags, 0x28u) )
    {
      v25 = MiReferenceAccelerator(v17);
      v20 = v25;
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 32) + 32LL;
        v27 = *(_QWORD *)(v25 + 32) + 47LL;
        if ( v27 <= v26 )
          v27 = 0xFFFFFFFFFFFFFF0LL;
        v31 = alloca(v27 & 0xFFFFFFFFFFFFFFF0uLL);
        v19 = MiInitializeAcceleratorDescriptor(v20, &v32);
      }
    }
  }
  if ( !KeGetCurrentPrcb()->MmInternal || !(unsigned int)MiCreateUltraThreadContext(v37, &v34, v12, 0LL) )
  {
    v28 = 0;
    if ( v9 )
    {
      v29 = v32;
      v30 = 0LL;
      do
      {
        MiZeroPhysicalPage(v19, v30 + v8, 0LL, v29);
        v30 = ++v28;
      }
      while ( v28 < v9 );
    }
    goto LABEL_24;
  }
  UltraMapping = MiGetUltraMapping((__int64)&v37[2 * v5], (unsigned int)v5, v9, 0);
  if ( (_DWORD)v5 == 2 )
  {
    UltraMapping = MiGetUltraMapping((__int64)v38, 2uLL, v9, 0);
    v23 = ProtectionPfnCompatible | 0xA0000000;
  }
  else
  {
    v23 = ProtectionPfnCompatible | 0xA0000000;
    if ( (unsigned int)v5 <= 1 )
      v23 |= 0x4000000u;
  }
  MiWriteLargePte(UltraMapping, v8, v5, v23);
  v24 = v9 << 12;
  if ( v19 )
  {
    if ( (int)AccelFillMemory(v19, UltraMapping, v24, 0, 3LL) >= 0 )
      goto LABEL_23;
    _InterlockedIncrement(&dword_140EF4A84);
  }
  KeZeroPages(UltraMapping, v24);
LABEL_23:
  MiWriteLargePte(UltraMapping, v8, v5, 0);
  MiDeleteUltraThreadContext((__int64)v37);
LABEL_24:
  if ( v20 )
    MiDereferenceAccelerator(v20);
}
