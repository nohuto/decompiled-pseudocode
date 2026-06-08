/*
 * XREFs of HviGetEnlightenmentInformation @ 0x140010184
 * Callers:
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140005B58 (HviIsHypervisorMicrosoftCompatible.c)
 */

char HviGetEnlightenmentInformation()
{
  _DWORD *v1; // r10

  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    *v1 = _RAX;
    v1[1] = _RBX;
    v1[2] = _RCX;
    v1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
  }
  return _RAX;
}
