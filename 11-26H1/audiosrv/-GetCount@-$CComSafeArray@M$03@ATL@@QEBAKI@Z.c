/*
 * XREFs of ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x1800CE56C
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18006F4DC (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CComSafeArray<float,4>::GetCount(SAFEARRAY **a1, LONG a2)
{
  SAFEARRAY *v3; // rcx
  HRESULT LBound; // eax
  HRESULT UBound; // eax
  LONG v7; // [rsp+30h] [rbp+8h] BYREF
  LONG plUbound; // [rsp+38h] [rbp+10h] BYREF

  plUbound = a2;
  v7 = 0;
  v3 = *a1;
  plUbound = 0;
  LBound = SafeArrayGetLBound(v3, 1u, &v7);
  if ( LBound < 0 )
    ATL::AtlThrowImpl(LBound);
  UBound = SafeArrayGetUBound(*a1, 1u, &plUbound);
  if ( UBound < 0 )
    ATL::AtlThrowImpl(UBound);
  return (unsigned int)(plUbound - v7 + 1);
}
