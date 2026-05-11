/*
 * XREFs of memset @ 0x14001CAC0
 * Callers:
 *     USBType1BuildIsochUrbRequest @ 0x1400025D0 (USBType1BuildIsochUrbRequest.c)
 *     USBType1AsyncEndpointPoll @ 0x140003EE0 (USBType1AsyncEndpointPoll.c)
 *     McGenControlCallbackV2 @ 0x140005600 (McGenControlCallbackV2.c)
 *     ??2@YAPEAX_KW4_POOL_TYPE@@K@Z @ 0x14000ED4C (--2@YAPEAX_KW4_POOL_TYPE@@K@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400156B4 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400169C4 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBDInternal_BuildServicePath @ 0x14001976C (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x140019A48 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBD_CreateHandle @ 0x140019E3C (USBD_CreateHandle.c)
 *     memset$thunk$772440563353939046 @ 0x14001D020 (memset$thunk$772440563353939046.c)
 *     WppTraceCallback @ 0x14002FD70 (WppTraceCallback.c)
 *     FilterCreateFilterContext @ 0x140030498 (FilterCreateFilterContext.c)
 *     USBParseFeatureUnit @ 0x1400375B0 (USBParseFeatureUnit.c)
 *     GetD3LastState @ 0x140038EAC (GetD3LastState.c)
 *     USBType1AsyncEndpointInitialize @ 0x14003965C (USBType1AsyncEndpointInitialize.c)
 *     USBCaptureSubmitRequest @ 0x14003A5B0 (USBCaptureSubmitRequest.c)
 *     USBParseGetAudioStreamingDataranges @ 0x14003B6E4 (USBParseGetAudioStreamingDataranges.c)
 *     USBMidiOutAllocateRequest @ 0x14003E754 (USBMidiOutAllocateRequest.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x140041024 (USBMidiInInitializeUrbAndIrp.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
