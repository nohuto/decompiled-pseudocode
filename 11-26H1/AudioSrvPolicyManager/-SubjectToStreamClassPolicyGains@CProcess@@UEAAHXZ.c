/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180023C90
 * Callers:
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x180023B4C (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( *((_DWORD *)this + 123) )
    return *(_DWORD *)((char *)this + (*((_DWORD *)this + 120) != 0 ? 0xAC : 0) + 312) != 0;
  return v1;
}
