/*
 * XREFs of ??_ECCompositeSystemEffect@@UEAAPEAXI@Z @ 0x18005A990
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAXXZ @ 0x18005AA08 (-RemoveAll@-$CSimpleArray@V-$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V-$CSimpleArrayEqualH.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCompositeSystemEffect *__fastcall CCompositeSystemEffect::`vector deleting destructor'(
        CCompositeSystemEffect *this,
        char a2)
{
  void *v4; // rcx

  ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioSystemEffects2>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioSystemEffects2>>>::RemoveAll((char *)this + 128);
  ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioSystemEffects2>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioSystemEffects2>>>::RemoveAll((char *)this + 112);
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    free(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 17) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
