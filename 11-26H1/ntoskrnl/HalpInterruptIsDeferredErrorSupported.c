/*
 * XREFs of HalpInterruptIsDeferredErrorSupported @ 0x14057FA0C
 * Callers:
 *     HalpIsCmciImplemented @ 0x140BF0724 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1404336FC (HalpInterruptFindLines.c)
 *     HalpGetCpuInfo @ 0x1404BEF80 (HalpGetCpuInfo.c)
 */

bool HalpInterruptIsDeferredErrorSupported()
{
  char CpuInfo; // al
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  LOBYTE(v2) = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&v2);
  if ( ((unsigned __int8)v2 & (unsigned __int8)-(CpuInfo != 0)) != 1 || *(_DWORD *)(HalpInterruptController + 240) != 2 )
    return 0;
  v2 = *(_DWORD *)(HalpInterruptController + 256);
  v3 = -8;
  return HalpInterruptFindLines(&v2) != 0LL;
}
