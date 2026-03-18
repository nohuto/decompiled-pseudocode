/*
 * XREFs of ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x140143060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::Initialize(DirectComposition::CVisualMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 324) |= 0x40u;
  *((_DWORD *)this + 72) = -1;
  *((_DWORD *)this + 68) = -1;
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 73) = -1;
  *((_DWORD *)this + 69) = -1;
  *((_DWORD *)this + 71) = -1;
  result = 0LL;
  *((_DWORD *)this + 28) = 1065353216;
  return result;
}
