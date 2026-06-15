/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801481A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18006E2F4 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801487C0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CSpatialAudioDolbyHeadphones::IsTechnologySupported(
        CSpatialAudioDolbyHeadphones *this,
        struct IAudioEndpointInfo *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        SpatialAudio *a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  unsigned int *v8; // rbx
  bool result; // al
  bool *v10; // rdi
  unsigned int v13; // ebp
  SpatialAudio *v14; // [rsp+20h] [rbp-28h]

  v8 = a6;
  result = 0;
  v10 = a7;
  *a6 = 0;
  *v10 = 0;
  if ( *((_QWORD *)this + 1) || !byte_1801D52FA )
  {
    LODWORD(v14) = (_DWORD)a5;
    result = CSpatialAudioTechHRTF::IsTechnologySupported(this, a2, a3, a4, v14, v8, v10, a8);
    LOBYTE(a6) = result;
    if ( result )
    {
      v13 = (*(__int64 (__fastcall **)(struct IAudioEndpointInfo *))(*(_QWORD *)a2 + 8LL))(a2);
      CSpatialAudioTech::AssignPriority(this, v13, Headphones, 2u, v8, (bool *)&a6);
      result = (char)a6;
      if ( (_BYTE)a6 )
      {
        if ( *v8 )
        {
          *v10 = 1;
        }
        else
        {
          CSpatialAudioTech::AssignPriority(this, v13, Speakers, 2u, v8, (bool *)&a6);
          return (char)a6;
        }
      }
    }
  }
  return result;
}
