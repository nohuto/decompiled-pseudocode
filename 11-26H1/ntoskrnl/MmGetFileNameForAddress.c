/*
 * XREFs of MmGetFileNameForAddress @ 0x1409FBE08
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404C6E8C (DbgkPostModuleMessage.c)
 *     EtwpProviderArrivalCallback @ 0x14093C304 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027DA30 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmGetFileNameForAddress(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rax
  ULONG_PTR v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rbp
  unsigned int i; // edi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  const void **v11; // rbx
  unsigned int v12; // eax
  unsigned int NameStringMode; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+20h] BYREF

  NameStringMode = 0;
  v15 = 0;
  v3 = MiObtainReferencedVadEx(a1, 2LL, (int *)&NameStringMode);
  v4 = v3;
  if ( !v3 )
    return 3221225793LL;
  if ( (MiReadVadFlags(v3) & 0x80000) != 0 || (v6 = **(_QWORD **)(v5 + 80), (*(_DWORD *)(v6 + 56) & 0x20) == 0) )
  {
    NameStringMode = -1073741751;
    MiUnlockAndDereferenceVadShared(v4);
  }
  else
  {
    v7 = (void *)MiReferenceControlAreaFile(v6);
    MiUnlockAndDereferenceVadShared(v4);
    for ( i = 1040; ; i = v15 )
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(256LL, i, 1850108237, CurrentProcessorColor | 0x80000000);
      v11 = (const void **)PoolMm;
      if ( !PoolMm )
        break;
      v15 = 0;
      NameStringMode = ObQueryNameStringMode((_DWORD)v7, PoolMm, i, (unsigned int)&v15, 0);
      if ( (NameStringMode & 0x80000000) == 0 )
      {
        v12 = *(unsigned __int16 *)v11;
        *(_WORD *)(a2 + 2) = v12;
        *(_WORD *)a2 = v12;
        *(_QWORD *)(a2 + 8) = v11;
        memmove(v11, v11[1], v12);
        goto LABEL_8;
      }
      ExFreePoolWithTag(v11, 0);
      if ( v15 <= i )
        goto LABEL_8;
    }
    NameStringMode = -1073741801;
LABEL_8:
    ObfDereferenceObjectWithTag(v7, 0x63536D4Du);
  }
  return NameStringMode;
}
