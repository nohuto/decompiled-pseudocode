/*
 * XREFs of ?Initialize@CCursorVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x140233DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::Initialize(
        DirectComposition::CCursorVisualMarshaler *this)
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
  *((_BYTE *)this + 360) = 1;
  return result;
}
