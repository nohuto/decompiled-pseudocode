/*
 * XREFs of USBParseGetMIDIStreamingDatarange @ 0x140037AA4
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x140037860 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x14002D6A0 (USBHwAllocateAndBag.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1400363BC (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x140037D78 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseFindDescriptorInConfiguration @ 0x14003B40C (USBParseFindDescriptorInConfiguration.c)
 */

__int64 __fastcall USBParseGetMIDIStreamingDatarange(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        int a3,
        LONG a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v8; // r14
  int v10; // edi
  PUSB_INTERFACE_DESCRIPTOR v11; // rsi
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  _QWORD *i; // rdx
  __int64 v18; // r15
  _QWORD *v19; // rax
  __int64 DescriptorInConfiguration; // rcx
  __int64 j; // rdi
  unsigned __int8 *v22; // r8
  __int64 v23; // rbp
  __int64 MIDIStreamingEndpointDescriptor; // rax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned __int8 *v27; // r8
  __int64 v29; // rdx
  int v30; // eax
  _QWORD *v31; // rax
  int v32; // eax
  bool v33; // zf
  __int64 (__fastcall **v34)(); // rax
  _QWORD *v35; // [rsp+70h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v10 = -1073741438;
  v11 = USBD_ParseConfigurationDescriptorEx(a2, a2, a4, -1, 1, 3, -1);
  if ( !v11 )
    return (unsigned int)v10;
  v12 = (_QWORD *)(v8 + 192);
  v13 = (_QWORD *)*v12;
  v35 = v13;
  v14 = v13;
  v15 = v13;
  v16 = v13;
  for ( i = v13; ; i = v14 )
  {
    v18 = a6;
    if ( v14 == v12 )
      break;
    if ( v11 == (PUSB_INTERFACE_DESCRIPTOR)i[3] )
    {
      *(_QWORD *)(a6 + 200) = v13;
      v10 = 0;
      v15 = v16;
      break;
    }
    v14 = (_QWORD *)*v13;
    v13 = v14;
    v35 = v14;
    v15 = v14;
    v16 = v14;
  }
  if ( v15 != v12 )
  {
LABEL_17:
    if ( v10 < 0 )
      return (unsigned int)v10;
    goto LABEL_18;
  }
  v10 = USBHwAllocateAndBag((PVOID *)&v35, 8 * (unsigned int)v11->bNumEndpoints + 56, 64LL, *(void **)(a1 + 8));
  if ( v10 < 0 )
    return (unsigned int)v10;
  v19 = (_QWORD *)*v12;
  if ( *(_QWORD **)(*v12 + 8LL) != v12 )
    __fastfail(3u);
  v13 = v35;
  *v35 = v19;
  v13[1] = v12;
  v19[1] = v13;
  *v12 = v13;
  v13[3] = v11;
  v13[6] = v13 + 7;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a2, v11, 36LL);
  if ( DescriptorInConfiguration )
  {
    for ( j = 0LL; (unsigned int)j < v11->bNumEndpoints; DescriptorInConfiguration = (__int64)&v22[*v22] )
    {
      *(_QWORD *)(v13[6] + 8 * j) = USBParseFindDescriptorInConfiguration(a2, DescriptorInConfiguration, 5LL);
      v22 = *(unsigned __int8 **)(v13[6] + 8 * j);
      if ( !v22 )
        break;
      j = (unsigned int)(j + 1);
    }
    if ( (_DWORD)j != v11->bNumEndpoints )
      return (unsigned int)-1073741438;
    v10 = USBHwSelectStreamingMIDIInterface(a1, (__int64)v13, 1);
    goto LABEL_17;
  }
LABEL_18:
  v23 = 0LL;
  if ( !v11->bNumEndpoints )
    return (unsigned int)-1073741438;
  while ( 1 )
  {
    MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(a2, v13, (unsigned int)v23);
    if ( !MIDIStreamingEndpointDescriptor )
      goto LABEL_25;
    v25 = *(unsigned __int8 *)(MIDIStreamingEndpointDescriptor + 3);
    v26 = 0;
    if ( *(_BYTE *)(MIDIStreamingEndpointDescriptor + 3) )
      break;
LABEL_24:
    if ( v26 < v25 )
      goto LABEL_28;
LABEL_25:
    v23 = (unsigned int)(v23 + 1);
    if ( (unsigned int)v23 >= v11->bNumEndpoints )
      return (unsigned int)-1073741438;
  }
  v27 = (unsigned __int8 *)(MIDIStreamingEndpointDescriptor + 4);
  while ( a3 != *v27 )
  {
    ++v26;
    ++v27;
    if ( v26 >= v25 )
      goto LABEL_24;
  }
LABEL_28:
  *(_DWORD *)(v18 + 208) = a3;
  *(_DWORD *)(v18 + 212) = v26;
  *(_QWORD *)(v18 + 136) = v11;
  v29 = *(_QWORD *)(v13[6] + 8 * v23);
  *(_QWORD *)(v18 + 168) = v29;
  *(_QWORD *)(v18 + 200) = v13;
  v30 = *(char *)(v29 + 2);
  *(_OWORD *)v18 = MIDIStreamingPinDataFormat;
  *(_OWORD *)(v18 + 16) = xmmword_1400204D0;
  *(_DWORD *)(v18 + 96) = ((v30 >> 7) & 8) + 8;
  v31 = a5;
  *(_OWORD *)(v18 + 32) = xmmword_1400204E0;
  *(_OWORD *)(v18 + 48) = xmmword_1400204F0;
  *(_OWORD *)(v18 + 64) = xmmword_140020500;
  *(_OWORD *)(v18 + 80) = xmmword_140020510;
  *v31 = v18;
  v32 = 32864;
  v33 = *(_DWORD *)(v18 + 96) == 16;
  if ( *(_DWORD *)(v18 + 96) != 16 )
    v32 = 88;
  *(_DWORD *)(v18 + 112) = v32;
  v34 = USBMidiInPinDispatch;
  if ( !v33 )
    v34 = USBMidiOutPinDispatch;
  *(_QWORD *)(v18 + 128) = v34;
  return (unsigned int)v10;
}
