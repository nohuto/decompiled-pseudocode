/*
 * XREFs of ?Initialize@CDistantLightMarshaler@DirectComposition@@UEAAJXZ @ 0x140233E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDistantLightMarshaler::Initialize(
        DirectComposition::CDistantLightMarshaler *this)
{
  *((_BYTE *)this + 56) = 1;
  *((_DWORD *)this + 30) = 1065353216;
  *((_DWORD *)this + 31) = 1065353216;
  *((_DWORD *)this + 32) = 1065353216;
  *(_QWORD *)((char *)this + 132) = 1065353216LL;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = -1082130432;
  *((_DWORD *)this + 37) = 1065353216;
  return 0LL;
}
