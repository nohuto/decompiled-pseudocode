/*
 * XREFs of EtwInitializeProcessor @ 0x140824894
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     EtwpStackDeleteProcessor @ 0x1406C6A00 (EtwpStackDeleteProcessor.c)
 *     EtwpStackInitializeProcessor @ 0x1406C6A48 (EtwpStackInitializeProcessor.c)
 *     EtwpCCSwapDeleteProcessor @ 0x1406C8DA4 (EtwpCCSwapDeleteProcessor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwInitializeProcessor(__int64 a1)
{
  __int64 Pool2; // rax
  union _SLIST_HEADER *v4; // rdi
  int v5; // ebx
  __int64 *v6; // rsi
  unsigned __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  void *Region; // rcx
  void *Alignment; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !EtwpHostSiloState )
    return 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v4 = (union _SLIST_HEADER *)Pool2;
  if ( Pool2 )
  {
    v6 = (__int64 *)(Pool2 + 408);
    for ( i = 0LL; i < 0x14; i += 4LL )
    {
      if ( *(_DWORD *)((char *)&CCSwapNumLoggersPerClockType + i) )
      {
        if ( !*v6 )
        {
          v8 = ExAllocatePool2(0x40uLL);
          *v6 = v8;
          if ( !v8 )
            goto LABEL_13;
        }
      }
      ++v6;
    }
    v5 = EtwpStackInitializeProcessor(v4, *(_DWORD *)(a1 + 36));
    if ( v5 < 0 )
      goto LABEL_14;
    v9 = ExAllocatePool2(0x48uLL);
    v4[20].Region = v9;
    if ( v9 )
    {
      v13 = ExAllocatePool2(0x48uLL);
      v4[20].Alignment = v13;
      if ( v13 )
      {
        v14 = ExAllocatePool2(0x48uLL);
        v4[21].Alignment = v14;
        if ( v14 )
        {
          *(_QWORD *)(a1 + 35816) = v4;
          return (unsigned int)v5;
        }
      }
    }
LABEL_13:
    v5 = -1073741801;
LABEL_14:
    Region = (void *)v4[20].Region;
    if ( Region )
      ExFreePoolWithTag(Region, 0);
    Alignment = (void *)v4[20].Alignment;
    if ( Alignment )
      ExFreePoolWithTag(Alignment, 0);
    v12 = (void *)v4[21].Alignment;
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    EtwpStackDeleteProcessor(v4);
    EtwpCCSwapDeleteProcessor((__int64)v4);
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 35816) = 0LL;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
