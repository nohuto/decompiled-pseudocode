/*
 * XREFs of IvtProcessDeviceExceptions @ 0x140BF6684
 * Callers:
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtAllocateTranslationStructures @ 0x140503418 (IvtAllocateTranslationStructures.c)
 *     IvtUpdateTranslationStructures @ 0x14052B598 (IvtUpdateTranslationStructures.c)
 *     HalpIommuGetExceptionList @ 0x14058E730 (HalpIommuGetExceptionList.c)
 *     IvtGetScalableModePasidTables @ 0x1405A91D8 (IvtGetScalableModePasidTables.c)
 *     IvtAllocateDevice @ 0x1405B1BDC (IvtAllocateDevice.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140BF730C (HalpIvtpInitializeReservedDomain.c)
 */

__int64 __fastcall IvtProcessDeviceExceptions(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // esi
  unsigned int v4; // ebx
  __int64 *ExceptionList; // r14
  __int64 j; // rbx
  unsigned int v7; // r15d
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 *ScalableModePasidTables; // rax
  __int64 v11; // r8
  __int64 v13; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v14[40]; // [rsp+48h] [rbp-80h] BYREF
  int v15; // [rsp+70h] [rbp-58h]
  __int64 i; // [rsp+D0h] [rbp+8h] BYREF

  memset_0(&v13, 0, 0x70uLL);
  v2 = *(unsigned int **)(a1 + 352);
  v3 = 0;
  v4 = 0;
  for ( i = 0LL; v4 < *v2; ++v4 )
  {
    v3 = HalpIvtpInitializeReservedDomain(a1, &v2[4 * v4 + 2]);
    if ( v3 < 0 )
      break;
    v2 = *(unsigned int **)(a1 + 352);
  }
  if ( v3 >= 0 )
  {
    ExceptionList = HalpIommuGetExceptionList();
    for ( j = *ExceptionList; (__int64 *)j != ExceptionList; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 16) == *(_DWORD *)(a1 + 252) )
      {
        memset_0(v14, 0, 0x68uLL);
        v7 = *(_DWORD *)(j + 24);
        v13 = 1LL;
        v3 = IvtAllocateDevice(v7, 0, 0LL, v8, &i);
        if ( v3 < 0 )
          return (unsigned int)v3;
        v9 = i;
        *(_QWORD *)(j + 32) = i;
        ScalableModePasidTables = IvtGetScalableModePasidTables(a1, v7);
        if ( ScalableModePasidTables )
        {
          *(_QWORD *)(v9 + 80) = ScalableModePasidTables;
          v15 = *((_DWORD *)ScalableModePasidTables + 11);
        }
        else
        {
          v3 = IvtAllocateTranslationStructures(a1, v9, &v13);
          if ( v3 < 0 )
            return (unsigned int)v3;
          if ( *(_BYTE *)(a1 + 320) )
          {
            *(_QWORD *)(v9 + 80) = *(_QWORD *)(v9 + 88);
            *(_QWORD *)(v9 + 88) = 0LL;
          }
        }
        IvtUpdateTranslationStructures(a1, v9, v11, 0LL, (__int64)&v13, 1, 0x10000LL);
        i = 0LL;
      }
    }
  }
  return (unsigned int)v3;
}
