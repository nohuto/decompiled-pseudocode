/*
 * XREFs of PpmHeteroGetWorkloadClassCountAMD64 @ 0x140C03DB0
 * Callers:
 *     PoGetWorkloadClassCount @ 0x140C03D54 (PoGetWorkloadClassCount.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmHeteroGetWorkloadClassCountAMD64(_DWORD *a1)
{
  char v1; // r8
  unsigned __int8 CpuVendor; // dl
  int v14; // eax

  v1 = 0;
  CpuVendor = KeGetCurrentPrcb()->CpuVendor;
  if ( CpuVendor == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 6LL;
      __asm { cpuid }
      if ( (_RAX & 0x800000) != 0 )
      {
        v14 = BYTE1(_RCX);
LABEL_8:
        v1 = 1;
        *a1 = v14;
      }
    }
  }
  else if ( CpuVendor == 1 )
  {
    _RAX = 2147483681LL;
    __asm { cpuid }
    if ( (_RAX & 0x400000) != 0 )
    {
      _RAX = 2147483687LL;
      __asm { cpuid }
      v14 = _RAX & 0xF;
      goto LABEL_8;
    }
  }
  return v1;
}
