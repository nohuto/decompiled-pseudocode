/*
 * XREFs of KiSetControlEnforcement @ 0x140BFD410
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1405F71E0 (Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall KiSetControlEnforcement(__int64 a1, _QWORD *a2)
{
  char v9; // cl
  unsigned __int64 v14; // rax

  _RAX = 0LL;
  __asm { cpuid }
  v9 = *(_BYTE *)(a1 + 141);
  if ( (v9 == 2 || v9 == 1) && (unsigned int)_RAX >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RCX & 0x80u) != 0LL )
      KiCetCapable = 1;
  }
  if ( KiCetCapable )
  {
    LOBYTE(_RAX) = _bittest64(&KeEnabledSupervisorXStateFeatures, 0xBu);
    if ( (((*a2 & 0x800000LL) != 0) & (unsigned __int8)_RAX) != 0 )
    {
      *a2 |= 0x400000000000uLL;
      *(_QWORD *)(a1 + 36832) |= 0x400000000000uLL;
      v14 = __readcr4();
      _RAX = v14 | 0x800000;
      __writecr4(_RAX);
      KiUserCetAllowed = 1;
      if ( !*(_DWORD *)(a1 + 36) && *(_BYTE *)(a1 + 141) == 1 && *(_BYTE *)(a1 + 64) == 25 )
      {
        LODWORD(_RAX) = Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_IsEnabledDeviceUsageNoInline();
        if ( (_DWORD)_RAX )
        {
          LOBYTE(_RAX) = -1;
          KiUserCetPl3SspCanonicalizeMask = 0x7FFFFFFFFFFFLL;
        }
        else
        {
          KiUserCetPl3SspCanonicalizeUpperMask = 0x7FFF;
        }
      }
    }
  }
  return _RAX;
}
