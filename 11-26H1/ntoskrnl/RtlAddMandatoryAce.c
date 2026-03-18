/*
 * XREFs of RtlAddMandatoryAce @ 0x140926CB0
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14085B164 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1409FF1D0 (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140AD4890 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepInitSystemDacls @ 0x140CDA288 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140CE7040 (ExpKeyedEventInitialization.c)
 * Callees:
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 */

__int64 __fastcall RtlAddMandatoryAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        char a5,
        int a6)
{
  int v10; // ecx
  unsigned __int8 v11; // cl
  __int64 result; // rax
  unsigned __int8 v13; // al
  unsigned __int8 v14; // si
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned __int64 v17; // r9
  unsigned __int16 v18; // dx

  if ( !a1 )
    return 3221225591LL;
  if ( a5 != 17 )
    return 3221225485LL;
  if ( !MmIsKernelAddress((unsigned __int64)a4) || !a4 || (*a4 & 0xF) != 1 || a4[1] > 0xFu )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2);
  if ( !v10 )
    v10 = *((unsigned __int16 *)a4 + 3) - 4096;
  if ( v10 )
    return 3221225485LL;
  v11 = *a1;
  if ( a2 > 4 || v11 > 4u )
    return 3221225561LL;
  v13 = a2;
  v14 = *a1;
  if ( v11 <= v13 )
    v14 = v13;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v15 = (unsigned __int64)(a1 + 8);
  v16 = 0;
  v17 = (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)];
  while ( v16 < *((unsigned __int16 *)a1 + 2) )
  {
    if ( v15 >= v17 )
      return 3221225591LL;
    ++v16;
    v15 += *(unsigned __int16 *)(v15 + 2);
  }
  if ( v15 > v17 )
    v15 = 0LL;
  v18 = 4 * (a4[1] + 4);
  if ( !v15 || v15 + v18 > v17 )
    return 3221225625LL;
  *(_WORD *)(v15 + 2) = v18;
  *(_BYTE *)(v15 + 1) = a3;
  *(_BYTE *)v15 = 17;
  *(_DWORD *)(v15 + 4) = a6;
  memmove((void *)(v15 + 8), a4, 4LL * a4[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v14;
  return result;
}
