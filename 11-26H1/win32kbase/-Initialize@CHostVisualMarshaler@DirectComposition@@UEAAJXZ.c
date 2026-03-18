/*
 * XREFs of ?Initialize@CHostVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1401660B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::Initialize(DirectComposition::CHostVisualMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 324) |= 0x40u;
  *((_DWORD *)this + 4) |= 0x10002u;
  *((_DWORD *)this + 68) = 1;
  *(_QWORD *)((char *)this + 276) = 1LL;
  result = 0LL;
  *((_DWORD *)this + 73) = -1;
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 71) = -2;
  return result;
}
