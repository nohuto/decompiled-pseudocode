/*
 * XREFs of ?Initialize@CCaptureControllerMarshaler@DirectComposition@@UEAAJXZ @ 0x14019BE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::Initialize(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 64) = 1;
  result = 0LL;
  *((_BYTE *)this + 88) = 1;
  *((_DWORD *)this + 23) = 0x40000000;
  *((_BYTE *)this + 136) = 0;
  return result;
}
