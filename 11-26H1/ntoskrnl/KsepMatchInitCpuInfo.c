/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140CCD868
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140CCD8F8 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x1407BE7F0 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140E62200 = 0LL;
  qword_140E62230 = 0LL;
  v0 = -1LL;
  xmmword_140E62210 = 0LL;
  xmmword_140E62220 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140E61F70, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140E62220) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140E62220) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140E62200 = word_140E61F70;
  }
  return result;
}
