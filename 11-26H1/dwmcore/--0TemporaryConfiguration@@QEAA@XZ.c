/*
 * XREFs of ??0TemporaryConfiguration@@QEAA@XZ @ 0x1801AB610
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1801AB4B0 (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

TemporaryConfiguration *__fastcall TemporaryConfiguration::TemporaryConfiguration(TemporaryConfiguration *this)
{
  TemporaryConfiguration *result; // rax

  *(_BYTE *)this = 0;
  result = this;
  *((_DWORD *)this + 1) = -805306369;
  *((_DWORD *)this + 2) = 0;
  return result;
}
