/*
 * XREFs of USBMidiInPipePrimer @ 0x1400399C8
 * Callers:
 *     USBHwSelectStreamingMIDIInterface @ 0x1400363BC (USBHwSelectStreamingMIDIInterface.c)
 * Callees:
 *     Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8 (Feature_MIDI2__private_IsEnabledDeviceUsageNoInline.c)
 *     USBHwAllocateAndBag @ 0x14002D6A0 (USBHwAllocateAndBag.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x140037D78 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x140041024 (USBMidiInInitializeUrbAndIrp.c)
 */

__int64 __fastcall USBMidiInPipePrimer(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // edx
  int v8; // edi
  __int64 v9; // r15
  __int64 v11; // r12
  unsigned int v12; // r14d
  __int64 v13; // r10
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  __int64 v16; // rbx
  void *v17; // rdx
  NTSTATUS v18; // eax
  __int64 v19; // rbx
  unsigned __int8 *MIDIStreamingEndpointDescriptor; // rax
  int v21; // ebx
  __int64 v22; // r14
  unsigned __int64 v23; // r8
  __int64 v24; // r15
  __int64 v25; // rbx
  PIRP Irp; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  _BYTE *v29; // r15
  unsigned int v30; // ebx
  unsigned int v31; // r15d
  PIRP *v32; // r14
  NTSTATUS v33; // eax
  unsigned __int64 v34; // [rsp+20h] [rbp-48h]
  unsigned int v35; // [rsp+78h] [rbp+10h]
  int v36; // [rsp+80h] [rbp+18h]

  v5 = *(_DWORD *)(a2 + 32);
  v8 = -1073741438;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  if ( a3 >= v5 )
    return 3221225485LL;
  LODWORD(v11) = 0;
  v12 = 0;
  if ( v5 )
  {
    v13 = *(_QWORD *)(a2 + 40);
    v14 = 168LL * a3;
    while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v12) + 2LL) != *(_BYTE *)(v14 + v13 + 2) )
    {
      if ( ++v12 >= v5 )
        return (unsigned int)v8;
    }
    *(_BYTE *)(v14 + v13 + 41) = 0;
    v8 = -1073741670;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v14 + 72) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v14 + 64) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v14 + 68) = 0;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v14 + 40) = 0;
    KeInitializeEvent((PRKEVENT)(v14 + *(_QWORD *)(a2 + 40) + 136LL), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v14 + *(_QWORD *)(a2 + 40) + 112LL), NotificationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)(v14 + *(_QWORD *)(a2 + 40) + 104LL));
    v15 = (_QWORD *)(v14 + *(_QWORD *)(a2 + 40) + 80LL);
    v15[1] = v15;
    *v15 = v15;
    if ( !a4 )
    {
      _mm_lfence();
      v27 = *(_QWORD *)(a2 + 40);
      v21 = *(_DWORD *)(v27 + v14 + 24);
      v22 = *(_QWORD *)(v27 + v14 + 160);
      if ( 16 * v21 )
      {
        v28 = *(_QWORD *)(v27 + v14 + 160);
        v11 = (unsigned int)(16 * v21);
        v29 = (_BYTE *)(v22 + 48);
        do
        {
          *v29 = 0;
          USBMidiInInitializeUrbAndIrp(v28);
          v28 += 64LL;
          v29 += 64;
          --v11;
        }
        while ( v11 );
      }
      v8 = v11;
      goto LABEL_32;
    }
    v16 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(v16 + v14 + 96) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 40));
    v17 = *(void **)(*(_QWORD *)(a2 + 40) + v14 + 96);
    if ( v17 )
    {
      v18 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v17, (PFNKSFREE)IoFreeWorkItem);
      v19 = *(_QWORD *)(a2 + 40);
      v8 = v18;
      if ( v18 < 0 )
      {
        ExFreePool(*(PVOID *)(v14 + v19 + 96));
      }
      else
      {
        MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(v9, a2, v12);
        if ( MIDIStreamingEndpointDescriptor )
        {
          *(_QWORD *)(v14 + v19 + 32) = MIDIStreamingEndpointDescriptor + 4;
          v21 = MIDIStreamingEndpointDescriptor[3];
        }
        else
        {
          *(_QWORD *)(v14 + v19 + 32) = 0LL;
          v21 = 0;
        }
        v8 = -1073741438;
        *(_DWORD *)(*(_QWORD *)(a2 + 40) + v14 + 24) = v21;
        if ( v21 )
        {
          v8 = USBHwAllocateAndBag(
                 (PVOID *)(v14 + *(_QWORD *)(a2 + 40) + 160LL),
                 16 * v21 * ((unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v14) + 192),
                 64LL,
                 *(void **)(a1 + 8));
          if ( v8 >= 0 )
          {
            _mm_lfence();
            v22 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v14 + 160);
            v23 = v22 + ((unsigned __int64)(unsigned int)(16 * v21) << 6) + (unsigned int)(v21 << 11);
            v35 = 16 * v21;
            v34 = v23;
            if ( 16 * v21 )
            {
              v36 = v21;
              v24 = v22 + 48;
              v25 = v22 + ((unsigned __int64)(unsigned int)(16 * v21) << 6);
              do
              {
                if ( v8 < 0 )
                  break;
                *(_QWORD *)(v24 - 32) = a1;
                *(_BYTE *)v24 = 0;
                *(_QWORD *)(v24 + 8) = v14 + *(_QWORD *)(a2 + 40);
                *(_QWORD *)(v24 - 16) = v25 + (unsigned int)((_DWORD)v11 << 7);
                *(_QWORD *)(v24 - 8) = v23 + (unsigned int)v11 * *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v14);
                Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
                *(_QWORD *)(v24 - 24) = Irp;
                if ( Irp )
                {
                  v8 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
                  if ( v8 < 0 )
                    IoFreeIrp(*(PIRP *)(v24 - 24));
                  else
                    USBMidiInInitializeUrbAndIrp(v22 + ((unsigned __int64)(unsigned int)v11 << 6));
                }
                else
                {
                  v8 = -1073741670;
                }
                v23 = v34;
                LODWORD(v11) = v11 + 1;
                v24 += 64LL;
              }
              while ( (unsigned int)v11 < v35 );
              v21 = v36;
            }
            LODWORD(v11) = 0;
LABEL_32:
            if ( v22 )
            {
              v30 = 16 * v21;
              v31 = v11;
              if ( v30 )
              {
                v32 = (PIRP *)(v22 + 24);
                do
                {
                  if ( v8 < 0 )
                    break;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 40) + v14 + 64));
                  v33 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), *v32);
                  ++v31;
                  v32 += 8;
                  v8 = v33;
                }
                while ( v31 < v30 );
              }
              if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() )
              {
                if ( v8 >= 0 )
                  return (unsigned int)v11;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v8;
}
