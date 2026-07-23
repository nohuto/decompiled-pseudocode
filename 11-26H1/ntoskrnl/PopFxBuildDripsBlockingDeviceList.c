/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x1404CD980
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14061674C (PopDripsWatchdogTakeAction.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B41B9C (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopFxIsDripsBlockingDevice @ 0x1404CDF84 (PopFxIsDripsBlockingDevice.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     IoGetDevicePropertyData @ 0x140A9C5D0 (IoGetDevicePropertyData.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140B41E58 (PopFxDestroyDripsBlockingDeviceList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140B49768 (IoLockUnlockPnpDeviceTree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxBuildDripsBlockingDeviceList(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  NTSTATUS DevicePropertyData; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v6; // r9
  AutoBoost *v7; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  signed __int8 v9; // cf
  AutoBoost *v10; // rsi
  AutoBoost *v11; // rax
  AutoBoost *v12; // rsi
  struct _KTHREAD *i; // rsi
  __int64 *p_OtherOperationCount; // r14
  __int64 **v15; // rax
  __int64 *j; // r13
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 *v19; // rax
  unsigned int v20; // esi
  __int64 *v21; // rbx
  __int64 *k; // rax
  __int64 *v23; // rax
  __int64 Pool2; // r12
  volatile signed __int32 *v25; // rcx
  unsigned int v26; // ebx
  volatile signed __int32 *v27; // rdx
  __int64 v28; // rax
  volatile signed __int32 *v29; // rax
  const GUID *v30; // r8
  unsigned int v32; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  int Data; // [rsp+50h] [rbp-B8h] BYREF
  ULONG v35; // [rsp+54h] [rbp-B4h] BYREF
  ULONG v36; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Type; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG RequiredSize[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v41; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v42; // [rsp+90h] [rbp-78h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44[2]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  unsigned int *v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  __int64 *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  __int64 v51; // [rsp+108h] [rbp+0h] BYREF
  wchar_t v52; // [rsp+110h] [rbp+8h]
  __int64 v53; // [rsp+118h] [rbp+10h] BYREF
  wchar_t v54; // [rsp+120h] [rbp+18h]
  __int64 v55; // [rsp+128h] [rbp+20h] BYREF
  int v56; // [rsp+130h] [rbp+28h]

  v52 = aPci[4];
  v43 = 0LL;
  v2 = a1;
  LOBYTE(a1) = 1;
  v41.Buffer = (wchar_t *)&v51;
  DevicePropertyData = 0;
  v54 = aUsb_0[4];
  v51 = *(_QWORD *)L"PCI\\";
  String1.Buffer = (wchar_t *)&v53;
  v56 = *(_DWORD *)L"\\";
  v53 = *(_QWORD *)L"USB\\";
  v42.Buffer = (wchar_t *)&v55;
  v36 = 0;
  v35 = 0;
  Type = 0;
  *(_QWORD *)&v41.Length = 655368LL;
  *(_QWORD *)&String1.Length = 655368LL;
  v55 = *(_QWORD *)L"USB4\\";
  *(_QWORD *)&v42.Length = 786442LL;
  IoLockUnlockPnpDeviceTree(a1);
  RequiredSize[0] = 0;
  Data = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock, 0LL, 0LL, v6);
  v9 = _interlockedbittestandset64(&PopFxBlockingDeviceListLock.Header.Lock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopFxBlockingDeviceListLock,
      v7,
      (__int64)&PopFxBlockingDeviceListLock);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v10 + 33) |= 2u;
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, v8);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock.Teb, 0LL);
  v12 = v11;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopFxBlockingDeviceListLock.Teb,
      v11,
      (__int64)&PopFxBlockingDeviceListLock.Teb);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v12 + 33) |= 2u;
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  a2[1] = (__int64)a2;
  *a2 = (__int64)a2;
  for ( i = *(struct _KTHREAD **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    p_OtherOperationCount = &i->OtherOperationCount;
    if ( i->StackLimit && (unsigned __int8)PopFxIsDripsBlockingDevice(i, v2, &i->WriteTransferCount) )
    {
      PopFxReferenceDevice((ULONG_PTR)i, 3);
      v15 = (__int64 **)a2[1];
      if ( *v15 != a2 )
        __fastfail(3u);
      *p_OtherOperationCount = (__int64)a2;
      i->ReadTransferCount = (__int64)v15;
      *v15 = p_OtherOperationCount;
      a2[1] = (__int64)p_OtherOperationCount;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  for ( j = (__int64 *)*a2; j != a2; j = (__int64 *)*j )
  {
    v17 = (__int64 *)*(j - 108);
    DevicePropertyData = IoGetDevicePropertyData(
                           (PDEVICE_OBJECT)v17[4],
                           &DEVPKEY_PciDevice_DeviceType,
                           0,
                           0,
                           4u,
                           &Data,
                           RequiredSize,
                           &Type);
    if ( DevicePropertyData >= 0 && Data == 8 )
      goto LABEL_31;
    DevicePropertyData = IoGetDevicePropertyData(
                           (PDEVICE_OBJECT)v17[4],
                           &DEVPKEY_Device_ClassGuid,
                           0,
                           0,
                           0x10u,
                           &v43,
                           &v36,
                           &v35);
    if ( DevicePropertyData < 0 || v35 != 13 || v36 != 16 )
      goto LABEL_72;
    v18 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v43;
    if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == (_QWORD)v43 )
      v18 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - *((_QWORD *)&v43 + 1);
    if ( !v18 )
    {
LABEL_31:
      v19 = (__int64 *)v17[1];
      v20 = 0;
      v21 = v17;
      while ( v19 )
      {
        v21 = v19;
        v19 = (__int64 *)v19[1];
      }
      while ( v21 != v17 )
      {
        if ( *((_DWORD *)v21 + 39) == 1 )
        {
          _InterlockedAnd((volatile signed __int32 *)v21 + 74, 0xFFFFFFDF);
          if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v21 + 5), 0)
            || RtlPrefixUnicodeString(&v41, (PCUNICODE_STRING)(v21 + 5), 0)
            || RtlPrefixUnicodeString(&v42, (PCUNICODE_STRING)(v21 + 5), 0) )
          {
            for ( k = v21; k != v17; k = (__int64 *)k[2] )
            {
              if ( *((_DWORD *)k + 39) != 1 )
                goto LABEL_46;
            }
            _InterlockedOr((volatile signed __int32 *)v21 + 74, 0x20u);
            if ( v20 + 1 < v20 )
              goto LABEL_74;
            ++v20;
            DevicePropertyData = 0;
          }
        }
LABEL_46:
        v23 = (__int64 *)*v21;
        if ( *v21 )
        {
          do
          {
            v21 = v23;
            v23 = (__int64 *)v23[1];
          }
          while ( v23 );
        }
        else
        {
          v21 = (__int64 *)v21[2];
        }
      }
      if ( !v20 )
        continue;
      if ( 8 * (unsigned __int64)v20 > 0xFFFFFFFF )
      {
LABEL_74:
        DevicePropertyData = -1073741675;
LABEL_77:
        PopFxDestroyDripsBlockingDeviceList(a2);
        return (unsigned int)DevicePropertyData;
      }
      DevicePropertyData = 0;
      Pool2 = ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        DevicePropertyData = -1073741670;
        goto LABEL_77;
      }
      v25 = (volatile signed __int32 *)v17[1];
      v26 = 0;
      v27 = (volatile signed __int32 *)v17;
      while ( v25 )
      {
        v27 = v25;
        v25 = (volatile signed __int32 *)*((_QWORD *)v25 + 1);
      }
      while ( v27 != (volatile signed __int32 *)v17 )
      {
        _m_prefetchw((const void *)(v27 + 74));
        if ( (_InterlockedOr(v27 + 74, 0) & 0x20) != 0 )
        {
          if ( v26 >= v20 )
          {
            if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
            {
              v46 = 4LL;
              v33 = v26 + 1;
              v32 = v20;
              v45 = &v33;
              v48 = 4LL;
              v47 = &v32;
              v39 = 0x1000000LL;
              v49 = &v39;
              v50 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E07560,
                (unsigned __int8 *)&byte_14004A07F,
                v30,
                0LL,
                5u,
                v44);
            }
            break;
          }
          _InterlockedAnd(v27 + 74, 0xFFFFFFDF);
          v28 = v26++;
          *(_QWORD *)(Pool2 + 8 * v28) = v27;
        }
        v29 = *(volatile signed __int32 **)v27;
        if ( *(_QWORD *)v27 )
        {
          do
          {
            v27 = v29;
            v29 = (volatile signed __int32 *)*((_QWORD *)v29 + 1);
          }
          while ( v29 );
        }
        else
        {
          v27 = (volatile signed __int32 *)*((_QWORD *)v27 + 2);
        }
      }
      if ( v26 != v20 && (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
      {
        v32 = v26;
        v45 = &v32;
        v46 = 4LL;
        v47 = &v33;
        v33 = v20;
        v49 = &v39;
        v48 = 4LL;
        v39 = 0x1000000LL;
        v50 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07560,
          (unsigned __int8 *)&word_14004A0DE,
          0LL,
          0LL,
          5u,
          v44);
      }
      j[3] = Pool2;
      *((_DWORD *)j + 8) = v26;
    }
    else
    {
LABEL_72:
      DevicePropertyData = 0;
    }
  }
  return (unsigned int)DevicePropertyData;
}
