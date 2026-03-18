/*
 * XREFs of ?Initialize@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x14016DA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::Initialize(DirectComposition::CInteractionMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 332) |= 0xC0u;
  *((_DWORD *)this + 68) = (unsigned int)PsGetCurrentProcessId();
  result = 0LL;
  *((_DWORD *)this + 82) = 4;
  return result;
}
