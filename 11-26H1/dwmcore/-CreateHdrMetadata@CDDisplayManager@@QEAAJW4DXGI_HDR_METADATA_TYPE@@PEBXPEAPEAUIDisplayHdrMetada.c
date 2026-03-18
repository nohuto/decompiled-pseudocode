/*
 * XREFs of ?CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetadata@Core@Display@Devices@Windows@@@Z @ 0x180210EB8
 * Callers:
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x1801A4940 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::CreateHdrMetadata(
        CDDisplayManager *this,
        enum DXGI_HDR_METADATA_TYPE a2,
        _QWORD *a3,
        struct Windows::Devices::Display::Core::IDisplayHdrMetadata **a4)
{
  struct Windows::Devices::Display::Core::IDisplayHdrMetadata *v4; // r10
  unsigned int v5; // ebx
  int v7; // edx
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  int v11; // eax
  struct Windows::Devices::Display::Core::IDisplayHdrMetadata *v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+48h] [rbp-10h]
  struct Windows::Devices::Display::Core::IDisplayHdrMetadata *v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0;
  v17 = 0LL;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        v5 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1FBu, 0LL);
LABEL_7:
        v12 = v17;
        goto LABEL_10;
      }
    }
    else
    {
      v8 = *(_OWORD *)a3;
      v9 = a3[2];
      v16 = *((_DWORD *)a3 + 6);
      v14 = v8;
      v10 = *(_QWORD *)qword_1803DE720;
      v15 = v9;
      v11 = (*(__int64 (__fastcall **)(__int64, __int128 *, struct Windows::Devices::Display::Core::IDisplayHdrMetadata **))(v10 + 56))(
              qword_1803DE720,
              &v14,
              &v17);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1F4u, 0LL);
        goto LABEL_7;
      }
      v4 = v17;
    }
  }
  v12 = 0LL;
  *a4 = v4;
  v17 = 0LL;
LABEL_10:
  if ( v12 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayHdrMetadata *))(*(_QWORD *)v12 + 16LL))(v12);
  return v5;
}
