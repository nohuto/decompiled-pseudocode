/*
 * XREFs of ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18006FA14
 * Callers:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180040850 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18006F4DC (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x18006FA60 (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ATL::CComSafeArray<float,4>::Destroy(SAFEARRAY **a1)
{
  HRESULT result; // eax
  SAFEARRAY *v3; // rcx

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    result = SafeArrayUnlock(v3);
    if ( result >= 0 )
    {
      result = SafeArrayDestroy(*a1);
      if ( result >= 0 )
        *a1 = 0LL;
    }
  }
  return result;
}
