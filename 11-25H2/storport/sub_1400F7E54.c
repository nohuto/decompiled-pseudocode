/*
 * XREFs of sub_1400F7E54 @ 0x1400F7E54
 * Callers:
 *     sub_1400BCF34 @ 0x1400BCF34 (sub_1400BCF34.c)
 *     sub_1400BD9F4 @ 0x1400BD9F4 (sub_1400BD9F4.c)
 *     sub_1400E00D0 @ 0x1400E00D0 (sub_1400E00D0.c)
 *     sub_1400E5964 @ 0x1400E5964 (sub_1400E5964.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400A9114 @ 0x1400A9114 (sub_1400A9114.c)
 *     sub_1400E0B68 @ 0x1400E0B68 (sub_1400E0B68.c)
 *     sub_1400F7344 @ 0x1400F7344 (sub_1400F7344.c)
 *     sub_1400FA008 @ 0x1400FA008 (sub_1400FA008.c)
 *     sub_1400FA19C @ 0x1400FA19C (sub_1400FA19C.c)
 *     sub_1400FA240 @ 0x1400FA240 (sub_1400FA240.c)
 *     sub_1400FAE88 @ 0x1400FAE88 (sub_1400FAE88.c)
 *     sub_1400FAEEC @ 0x1400FAEEC (sub_1400FAEEC.c)
 *     sub_1401106CC @ 0x1401106CC (sub_1401106CC.c)
 *     sub_1401114CC @ 0x1401114CC (sub_1401114CC.c)
 *     sub_1401222E8 @ 0x1401222E8 (sub_1401222E8.c)
 *     sub_140122570 @ 0x140122570 (sub_140122570.c)
 *     sub_14012CDB4 @ 0x14012CDB4 (sub_14012CDB4.c)
 *     sub_14012D540 @ 0x14012D540 (sub_14012D540.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400F7E54(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  int v8; // edi
  _DWORD *DeviceExtension; // rbx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  struct _IO_WORKITEM *v11; // rcx
  __int64 v12; // rdx
  void *v13; // rcx
  void *v14; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v15; // rcx
  PDEVICE_OBJECT v17; // rax
  unsigned __int8 v18; // al
  int v19; // edx
  const wchar_t *v20; // r9
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int16 v26; // ax
  PIO_WORKITEM WorkItem; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  DeviceObject = 0LL;
  v8 = IoCreateDevice(*(PDRIVER_OBJECT *)(*(_QWORD *)(v4 + 8) + 8LL), 0x2C0u, 0LL, 0x2Du, 0x180u, 0, &DeviceObject);
  if ( v8 >= 0 )
  {
    DeviceExtension = DeviceObject->DeviceExtension;
    memset_0(DeviceExtension, 0, 0x2C0uLL);
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection((POOL_TYPE)512, 0x6D526152u);
    *((_QWORD *)DeviceExtension + 15) = CacheAwareRundownProtection;
    if ( !CacheAwareRundownProtection )
    {
      v8 = -1073741801;
      goto LABEL_4;
    }
    *DeviceExtension = 1314278989;
    *((_QWORD *)DeviceExtension + 4) = DeviceExtension + 6;
    *((_QWORD *)DeviceExtension + 3) = DeviceExtension + 6;
    v17 = DeviceObject;
    *((_QWORD *)DeviceExtension + 14) |= 2uLL;
    *((_QWORD *)DeviceExtension + 1) = v17;
    *((_QWORD *)DeviceExtension + 2) = a1;
    DeviceExtension[14] = a2;
    *((_BYTE *)DeviceExtension + 60) = 0;
    DeviceExtension[24] = 2;
    *((_BYTE *)DeviceExtension + 100) = *(_BYTE *)(a1 + 616);
    *((_BYTE *)DeviceExtension + 101) = *(_BYTE *)(a1 + 617);
    *((_BYTE *)DeviceExtension + 102) = a2;
    *((_WORD *)DeviceExtension + 208) = *(_WORD *)(*(_QWORD *)(a1 + 128) + 1092LL);
    KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 13);
    v8 = sub_1400FA240(DeviceExtension);
    if ( v8 >= 0 )
    {
      _interlockedbittestandset(*((volatile signed __int32 **)DeviceExtension + 32), 2u);
      KeInitializeEvent((PRKEVENT)(DeviceExtension + 118), SynchronizationEvent, 0);
      if ( (*(_BYTE *)(*((_QWORD *)DeviceExtension + 2) + 136LL) & 2) != 0 )
      {
        v18 = *((_BYTE *)DeviceExtension + 60);
        v19 = DeviceExtension[14];
        *((_QWORD *)DeviceExtension + 14) |= 4uLL;
        v8 = sub_1400E0B68(a1, v19, 0, 0, v18, (_QWORD *)DeviceExtension + 22);
        if ( v8 < 0 )
        {
          v20 = L"Identify namespace failed";
LABEL_22:
          sub_1400A9114((__int64)DeviceExtension, 1, 2, (__int64)v20, L"NtStatus", v8, (void *)&dword_140149108, 0);
          goto LABEL_4;
        }
        v8 = sub_1400E0B68(a1, DeviceExtension[14], 3, 0, 0, (_QWORD *)DeviceExtension + 23);
        if ( v8 < 0 )
        {
          v20 = L"Identify namespace descriptor failed";
          goto LABEL_22;
        }
        if ( sub_1400F7344(*((_QWORD *)DeviceExtension + 22)) )
        {
          sub_1400A9114(
            (__int64)DeviceExtension,
            1,
            3,
            (__int64)L"Inactive namespace",
            L"NSZE",
            *(_QWORD *)v21,
            L"LBADS",
            *(_BYTE *)(v21 + 4LL * (*(_BYTE *)(v21 + 26) & 0xF) + 130));
          v8 = -1073741637;
          goto LABEL_4;
        }
        if ( *(_QWORD *)(a1 + 624) )
        {
          v22 = *(_WORD *)(v21 + 100);
          if ( v22 <= *(_WORD *)(a1 + 618) )
            *((_WORD *)DeviceExtension + 31) = v22;
        }
        if ( !*((_BYTE *)DeviceExtension + 60) )
          sub_1400FA008(DeviceExtension);
      }
      v23 = sub_1400143E0(72LL, 2320LL, 1700028754LL, *((_QWORD *)DeviceExtension + 1));
      *((_QWORD *)DeviceExtension + 76) = v23;
      if ( !v23 )
        goto LABEL_37;
      v8 = sub_14012CDB4(DeviceExtension);
      if ( v8 >= 0 )
      {
        v8 = sub_1400FA19C(DeviceExtension);
        if ( v8 >= 0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)DeviceExtension + 2) + 136LL) & 2) != 0 )
            goto LABEL_41;
          KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 68);
          *((_QWORD *)DeviceExtension + 71) = DeviceExtension + 140;
          *((_QWORD *)DeviceExtension + 70) = DeviceExtension + 140;
          *((_QWORD *)DeviceExtension + 74) = DeviceExtension + 146;
          *((_QWORD *)DeviceExtension + 73) = DeviceExtension + 146;
          v24 = sub_1401222E8(*((_QWORD *)DeviceExtension + 2));
          *((_QWORD *)DeviceExtension + 66) = v24;
          v25 = v24;
          if ( v24 )
          {
            v26 = 10;
            if ( (unsigned int)(3 * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 2) + 128LL) + 1092LL)) > 0xA )
              v26 = 3 * *(_WORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 2) + 128LL) + 1092LL);
            *(_WORD *)(v25 + 52) = v26;
            WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)DeviceExtension + 1));
            *((_QWORD *)DeviceExtension + 67) = WorkItem;
            if ( WorkItem )
            {
LABEL_41:
              *a4 = DeviceExtension;
              return (unsigned int)v8;
            }
          }
LABEL_37:
          v8 = -1073741670;
        }
      }
    }
LABEL_4:
    if ( DeviceExtension )
    {
      v11 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 67);
      if ( v11 )
      {
        IoFreeWorkItem(v11);
        *((_QWORD *)DeviceExtension + 67) = 0LL;
      }
      v12 = *((_QWORD *)DeviceExtension + 66);
      if ( v12 )
      {
        sub_140122570(*((_QWORD *)DeviceExtension + 2), v12);
        *((_QWORD *)DeviceExtension + 66) = 0LL;
      }
      sub_1400FAE88(DeviceExtension);
      sub_14012D540(DeviceExtension);
      sub_1401106CC(DeviceExtension);
      v13 = (void *)*((_QWORD *)DeviceExtension + 23);
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0x52436152u);
        *((_QWORD *)DeviceExtension + 23) = 0LL;
      }
      v14 = (void *)*((_QWORD *)DeviceExtension + 22);
      if ( v14 )
      {
        ExFreePoolWithTag(v14, 0x52436152u);
        *((_QWORD *)DeviceExtension + 22) = 0LL;
      }
      sub_1401114CC(DeviceExtension);
      sub_1400FAEEC(DeviceExtension);
      v15 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)DeviceExtension + 15);
      if ( v15 )
      {
        ExFreeCacheAwareRundownProtection(v15);
        *((_QWORD *)DeviceExtension + 15) = 0LL;
      }
    }
  }
  if ( DeviceObject )
    IoDeleteDevice(DeviceObject);
  return (unsigned int)v8;
}
