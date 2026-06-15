/*
 * XREFs of ?TryGetResourceManagerService@CCustomAudioEndpointResourceManagerCache@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F8430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCustomAudioEndpointResourceManagerCache::TryGetResourceManagerService(
        CCustomAudioEndpointResourceManagerCache *this,
        struct CEndpointCharacteristics *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int128 Buf1; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  Buf1 = *(_OWORD *)((char *)a2 + 8252);
  if ( memcmp_0(&Buf1, &GUID_00000000_0000_0000_0000_000000000000, 0x10uLL) )
  {
    if ( memcmp_0(&Buf1, &BLUETOOTH_AUDIO_RESOURCE_MANAGER, 0x10uLL) && memcmp_0(&Buf1, "?", 0x10uLL) )
    {
      v8 = -2147418113;
      v9 = 254LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct CEndpointCharacteristics *, const struct _GUID *, void **))(**((_QWORD **)this + 2) + 24LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
    if ( v8 < 0 )
    {
      v9 = 255LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
