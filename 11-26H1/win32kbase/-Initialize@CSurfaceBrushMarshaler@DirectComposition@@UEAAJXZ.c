/*
 * XREFs of ?Initialize@CSurfaceBrushMarshaler@DirectComposition@@UEAAJXZ @ 0x14014DCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::Initialize(
        DirectComposition::CSurfaceBrushMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 15) = 0x80000000;
  *((_DWORD *)this + 16) = 0x80000000;
  *((_DWORD *)this + 17) = 0x7FFFFFFF;
  *((_DWORD *)this + 18) = 0x7FFFFFFF;
  *((_DWORD *)this + 26) = 1056964608;
  *((_DWORD *)this + 27) = 1056964608;
  result = 0LL;
  *((_DWORD *)this + 28) = 2;
  *((_DWORD *)this + 29) = 1;
  return result;
}
