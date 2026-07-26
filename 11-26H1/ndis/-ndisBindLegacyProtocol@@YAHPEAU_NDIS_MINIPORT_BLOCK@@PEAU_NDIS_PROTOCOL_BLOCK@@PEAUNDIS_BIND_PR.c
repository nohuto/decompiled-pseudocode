/*
 * XREFs of ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016E8D0
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140158470 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140058130 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14005B870 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x14005C6F0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x14005F150 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140157F60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

__int64 __fastcall ndisBindLegacyProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct NDIS_BIND_PROTOCOL_LINK *a3)
{
  NTSTATUS v6; // eax
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // eax
  _NDIS_BIND_PATHS *BindPaths; // r14
  _UNICODE_STRING *Paths; // r14
  _DEVICE_OBJECT *PhysicalDeviceObject; // r13
  UNICODE_STRING v11; // xmm0
  __int64 v12; // rdx
  int v13; // r9d
  void *m_AdditionalContext; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  NTSTATUS v19; // eax
  int v20; // r9d
  int Timeout; // [rsp+20h] [rbp-E0h]
  void *v24; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING v30; // [rsp+B0h] [rbp-50h]
  __int128 v31; // [rsp+C0h] [rbp-40h]
  __int128 v32; // [rsp+D0h] [rbp-30h]
  __int128 v33; // [rsp+E0h] [rbp-20h]
  struct _KEVENT Event[4]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+168h] [rbp+68h] BYREF

  v35 = -1073741823;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(Event, 0, 48);
  Destination = 0LL;
  Source = 0LL;
  DestinationString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xAu,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      (char)a1,
      a2);
  v6 = KeWaitForSingleObject(&a2->Mutex, Executive, 0, 0, 0LL);
  if ( v6 )
    ndisBugCheckEx(0x24uLL, 1uLL, v6, 1uLL);
  ++a2->MutexOwnerCount;
  a2->MutexOwnerThread = KeGetCurrentThread();
  if ( ndisIsMiniportStarted(a1)
    && ((PnPDeviceState = a1->PnPDeviceState, PnPDeviceState == NdisPnPDeviceStarted)
     || ((PnPDeviceState - 2) & 0xFFFFFFFD) == 0) )
  {
    mem::ReadNoFence<unsigned long,void>(&a1->Flags);
    if ( a1->EthDB )
    {
      BindPaths = a1->BindPaths;
      a2->BindDeviceName = &a1->MiniportName;
      Paths = BindPaths->Paths;
      a2->RootDeviceName = Paths;
      PhysicalDeviceObject = a1->PhysicalDeviceObject;
      if ( ndisReferenceProtocol(a2, 7u) )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
        Source = *Paths;
        v11 = Source;
        Source.MaximumLength -= ndisDeviceStr.Length;
        Source.Length = _mm_cvtsi128_si32((__m128i)v11) - ndisDeviceStr.Length;
        Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
        v12 = (unsigned __int16)(DestinationString.Length + a2->Name.Length + Paths->Length - ndisDeviceStr.Length + 2);
        Destination.Length = 0;
        Destination.MaximumLength = v12;
        Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, v12, 538985550LL);
        if ( Destination.Buffer )
        {
          RtlCopyUnicodeString(&Destination, &a2->Name);
          RtlAppendUnicodeStringToString(&Destination, &DestinationString);
          RtlAppendUnicodeStringToString(&Destination, &Source);
          ndisUpdateMinimumStackVersion(a1, a2->MajorNdisVersion, a2->MinorNdisVersion);
          *((_QWORD *)&v28 + 1) = a2;
          *((_QWORD *)&v29 + 1) = a1;
          v30 = Destination;
          *(_QWORD *)&v31 = Paths;
          KeInitializeEvent(Event, NotificationEvent, 0);
          if ( !a2->Ref.Closing )
          {
            a2->BindingAdapter = a1;
            m_AdditionalContext = a3->BindState.m_AdditionalContext;
            v35 = 0;
            if ( m_AdditionalContext )
            {
              a3->BindState.m_AdditionalContext = 0LL;
              ndisOpenAdapterLegacyProtocol(
                *(int **)m_AdditionalContext,
                0LL,
                *((void ***)m_AdditionalContext + 1),
                *((unsigned int **)m_AdditionalContext + 2),
                *((enum _NDIS_MEDIUM **)m_AdditionalContext + 3),
                *((_DWORD *)m_AdditionalContext + 8),
                *((struct _NDIS_PROTOCOL_BLOCK **)m_AdditionalContext + 5),
                *((void **)m_AdditionalContext + 6),
                *((struct _UNICODE_STRING **)m_AdditionalContext + 7),
                0,
                0LL,
                (int *)&v35);
              v17 = **((_QWORD **)m_AdditionalContext + 1);
              if ( v17 )
                *(_DWORD *)(v17 + 224) |= 0x20000000u;
            }
            else
            {
              a2->BindAdapterHandler((int *)&v35, &v28, Paths, &Destination, PhysicalDeviceObject);
            }
            v18 = v35;
            if ( v35 == 259 )
            {
              v19 = KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
              if ( v19 )
                ndisBugCheckEx(0x24uLL, 1uLL, v19, 1uLL);
              v18 = DWORD2(v33);
              v35 = DWORD2(v33);
            }
            a2->BindingAdapter = 0LL;
            if ( !v18 )
              ndisNotifyWmiBindUnbind(a1, a2, 1u);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ZZL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v15,
                v16,
                0xCu,
                Timeout,
                &a2->Name.Length,
                &a1->pAdapterInstanceName->Length);
          }
          ExFreePoolWithTag(Destination.Buffer, 0);
          a2->BindDeviceName = 0LL;
          ndisDereferenceProtocol(a2, 0, 7u, v20);
        }
        else
        {
          ndisDereferenceProtocol(a2, 0, 7u, v13);
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      6u,
      0xBu,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      (char)a1,
      a2);
  }
  if ( a2->MutexOwnerCount-- == 1 )
    a2->MutexOwnerThread = 0LL;
  KeReleaseMutex(&a2->Mutex, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v35;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xDu,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      (char)a1,
      (char)a2,
      v24);
  }
  return v35;
}
