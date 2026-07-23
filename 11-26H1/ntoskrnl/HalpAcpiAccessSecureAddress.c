/*
 * XREFs of HalpAcpiAccessSecureAddress @ 0x14024EA50
 * Callers:
 *     <none>
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     MiMirrorInSingleProcessorMode @ 0x1402A2284 (MiMirrorInSingleProcessorMode.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     HalpPCIConfig @ 0x14042CDA0 (HalpPCIConfig.c)
 */

__int64 __fastcall HalpAcpiAccessSecureAddress(char a1, const void *a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned __int64 v9; // rbx
  unsigned int i; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 result; // rax
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-28h]

  *a5 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v9 = 0LL;
  if ( (int)MiGetVirtualAddressState(&v18, a2, 0LL) < 0 )
  {
    if ( !(unsigned int)MiMirrorInSingleProcessorMode() )
      DbgPrintEx(0x66u, 0, "MM:MmGetPhysicalAddress failed base address was %p\n", a2);
  }
  else
  {
    v9 = v19;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= HalpPciMcfgTableCount )
      return 3221225793LL;
    v11 = HalpPciMcfgTable + 16LL * i;
    v12 = *(_QWORD *)(v11 + 44);
    if ( v9 >= v12
      && v9 < v12 + ((*(unsigned __int8 *)(v11 + 55) - (unsigned int)*(unsigned __int8 *)(v11 + 54) + 1) << 20)
      && (!HalpPciUseNvidiaAlternateAddress || (v9 & 0xF00) == 0) )
    {
      break;
    }
  }
  v13 = *(unsigned __int16 *)(v11 + 52);
  v14 = (unsigned __int16)a2 & 0xFFF;
  v15 = ((__int64)(v9 - v12) >> 15) & 0x1F | (32 * ((unsigned int)((__int64)(v9 - v12) >> 12) & 7));
  v16 = (__int64)(v9 - v12) >> 20;
  if ( a1 )
  {
    ++HalpSecureWriteAccessCount;
    HalpPCIConfig(v13, v16, v15, a3, v14, a4, 1);
  }
  else
  {
    ++HalpSecureReadAccessCount;
    HalpPCIConfig(v13, v16, v15, a3, v14, a4, 0);
  }
  result = 0LL;
  *a5 = a4;
  return result;
}
