/*
 * XREFs of NvmeFabricControllerQueueProcessCtrlResponse @ 0x1400FD3F0
 * Callers:
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeFabricControllerQueueComputeCtrlResponse @ 0x1400FC1D0 (NvmeFabricControllerQueueComputeCtrlResponse.c)
 *     NvmeFabricControllerQueueComputeHostAugmentedChallenge @ 0x1400FC5F4 (NvmeFabricControllerQueueComputeHostAugmentedChallenge.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueProcessCtrlResponse(__int64 a1)
{
  _BYTE *v2; // rbx
  __int64 v3; // rcx
  const void *v4; // rbp
  unsigned __int16 v5; // dx
  UCHAR *v6; // r8
  int v7; // edi
  __int64 v8; // rbx
  UCHAR Source1[256]; // [rsp+A0h] [rbp-218h] BYREF
  UCHAR v11[256]; // [rsp+1A0h] [rbp-118h] BYREF

  memset_0(v11, 0, sizeof(v11));
  memset_0(Source1, 0, sizeof(Source1));
  v2 = *(_BYTE **)(a1 + 96);
  v3 = a1;
  v4 = v2 + 1592;
  v5 = (unsigned __int8)v2[1582];
  if ( v2[4] )
  {
    v7 = NvmeFabricControllerQueueComputeHostAugmentedChallenge(a1, v5, v11);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v5 = (unsigned __int8)v2[1582];
    v6 = v11;
    v3 = a1;
  }
  else
  {
    v6 = v2 + 1320;
  }
  v7 = NvmeFabricControllerQueueComputeCtrlResponse(v3, v5, v6, Source1);
  if ( v7 >= 0 )
  {
    v8 = (unsigned __int8)v2[1582];
    if ( RtlCompareMemory(Source1, v4, (unsigned int)v8) != v8 )
    {
      StorEtwNvmeControllerEvent(
        *(_QWORD *)(a1 + 88),
        1,
        2LL,
        (__int64)L"Controller response did not match",
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v7;
}
