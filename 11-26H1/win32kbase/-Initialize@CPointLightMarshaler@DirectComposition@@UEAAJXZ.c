/*
 * XREFs of ?Initialize@CPointLightMarshaler@DirectComposition@@UEAAJXZ @ 0x140233F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPointLightMarshaler::Initialize(DirectComposition::CPointLightMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 56) = 1;
  *((_DWORD *)this + 30) = 1065353216;
  *((_DWORD *)this + 31) = 1065353216;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  *((_DWORD *)this + 34) = 1065353216;
  *((_DWORD *)this + 35) = 1065353216;
  result = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 1120403456;
  return result;
}
