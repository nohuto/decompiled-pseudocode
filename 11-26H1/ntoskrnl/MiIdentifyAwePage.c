/*
 * XREFs of MiIdentifyAwePage @ 0x140409D94
 * Callers:
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 * Callees:
 *     MiGetPfnPidSafe @ 0x14040A730 (MiGetPfnPidSafe.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 */

unsigned __int64 __fastcall MiIdentifyAwePage(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // r10
  __int64 v3; // r11
  unsigned int PfnPidSafe; // ecx
  unsigned __int64 v5; // rcx

  result = MiGetLeafPfnBuddy(a1, 1LL);
  if ( (result < 0xFFFFDE0000000000uLL || result >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL) && (PfnPidSafe = 0, result) )
  {
    if ( *(_QWORD *)result != 399680LL )
      PfnPidSafe = MiGetPfnPidSafe(v3, 3LL);
    result = *v2 & 0xFE000000000001FFuLL;
    v5 = result | ((unsigned __int64)PfnPidSafe << 9);
  }
  else
  {
    v5 = *v2 & 0xFFFFFFFFFFFFFF8FuLL | 0x10;
  }
  *v2 = v5 & 0xFFFFFFFFFFFFFFF0uLL | 9;
  return result;
}
