/*
 * XREFs of IvtAllocateTranslationStructures @ 0x140503418
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1405A8178 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x1405A8660 (IvtConfigureAts.c)
 *     IvtProcessDeviceExceptions @ 0x140BF6684 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140BF730C (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtAllocateScalableModePasidTables @ 0x1405034FC (IvtAllocateScalableModePasidTables.c)
 *     IvtAllocateContextTable @ 0x140508E08 (IvtAllocateContextTable.c)
 *     IvtGetPasidGranularTranslationType @ 0x1405288AC (IvtGetPasidGranularTranslationType.c)
 */

__int64 __fastcall IvtAllocateTranslationStructures(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v3; // zf
  _DWORD *v4; // r9
  unsigned int *v5; // rax
  __int64 v6; // rdi
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rcx
  int PasidGranularTranslationType; // eax
  int v12; // ecx
  __int64 result; // rax
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  size_t Size; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a1 + 320) == 0;
  v4 = a3;
  v5 = *(unsigned int **)(a2 + 72);
  v6 = a2;
  v14 = 0LL;
  Size = 0LL;
  v8 = *v5;
  if ( v3 )
    return IvtAllocateContextTable(a1, v8, a3, v4);
  v9 = a3[1];
  LOBYTE(a2) = 0;
  v10 = (unsigned int)a3[12];
  LOBYTE(a3) = 0;
  if ( v9 == 1 )
    goto LABEL_3;
  if ( !v9 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 319) != 0;
    goto LABEL_8;
  }
  if ( *v4 == 1 )
LABEL_3:
    LOBYTE(a3) = 1;
  else
    LOBYTE(a2) = *v4 == 0;
LABEL_8:
  PasidGranularTranslationType = IvtGetPasidGranularTranslationType(v10, a2, a3);
  result = IvtAllocateScalableModePasidTables(
             a1,
             v6,
             v12,
             0,
             0,
             3,
             PasidGranularTranslationType,
             (__int64)&v14,
             (size_t)&Size);
  if ( (int)result < 0 )
    return result;
  if ( Size != v14 )
    *(_QWORD *)(v6 + 88) = v14;
  return IvtAllocateContextTable(a1, v8, a3, v4);
}
