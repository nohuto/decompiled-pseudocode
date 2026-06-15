/*
 * XREFs of ?Find@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@@Z @ 0x180068B24
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180125D30 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::Find(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        __int64 a3)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // r9
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 i; // rdx
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  v3 = a2;
  v5 = 0LL;
  v10 = 0LL;
  v6 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    (**a2)(a2, &GUID_04c50d49_105a_4a6b_8af7_0de59e20ce12, &v9);
    v6 = v9;
  }
  if ( v6 )
  {
    a3 = (unsigned int)v6 % *(_DWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8 * a3); i; i = *(_QWORD *)(i + 104) )
      {
        if ( *(_DWORD *)(i + 112) == (_DWORD)v6 && *(_QWORD **)i == v6 )
        {
          v5 = i + 8;
          break;
        }
      }
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6 + 16LL))(
      v6,
      *v6,
      a3,
      v3);
  return v5;
}
