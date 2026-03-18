/*
 * XREFs of ?Initialize@CRectangleClipMarshaler@DirectComposition@@UEAAJXZ @ 0x140158CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::Initialize(
        DirectComposition::CRectangleClipMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 4) |= 2u;
  *((_DWORD *)this + 24) = -905969664;
  *((_DWORD *)this + 25) = -905969664;
  result = 0LL;
  *((_DWORD *)this + 21) = 1065353216;
  *((_DWORD *)this + 27) = 1241513984;
  *((_DWORD *)this + 26) = 1241513984;
  return result;
}
