/*
 * XREFs of ?RemoveAll@?$CSimpleArray@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAXXZ @ 0x18005AA08
 * Callers:
 *     ??_ECCompositeSystemEffect@@UEAAPEAXI@Z @ 0x18005A990 (--_ECCompositeSystemEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioSystemEffects2>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioSystemEffects2>>>::RemoveAll(
        __int64 a1)
{
  int *v2; // rdi
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rcx

  v2 = (int *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    v3 = 0;
    if ( *v2 > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *(_QWORD *)(v4 + *(_QWORD *)a1);
        if ( v5 )
        {
          *(_QWORD *)(v4 + *(_QWORD *)a1) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *v2 );
    }
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v2 = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
