/*
 * XREFs of StorpTelemetrySendAdapterUfsHealthInfo @ 0x1400C14F4
 * Callers:
 *     StorpAdapterHealthWorkItemRoutine @ 0x1400B7090 (StorpAdapterHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline @ 0x1400B2840 (Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetrySendAdapterUfsHealthInfo(__int64 a1)
{
  __int64 v1; // r9
  _DWORD *OutputBuffer; // rbx
  PIRP v4; // rax
  NTSTATUS Status; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  const wchar_t *v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  __int16 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v15; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  __int64 v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  _BYTE v27[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  __int16 *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int16 *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  __int64 *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  __int64 *v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]

  v1 = *(_QWORD *)(a1 + 8);
  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  OutputBuffer = (_DWORD *)RaidAllocatePool(64LL, 93LL, 1700028754LL, v1);
  *(_QWORD *)OutputBuffer = 49LL;
  OutputBuffer[2] = 5;
  OutputBuffer[3] = 1;
  *((_QWORD *)OutputBuffer + 2) = 9LL;
  OutputBuffer[6] = 40;
  OutputBuffer[7] = 45;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(
         0x2D1400u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         OutputBuffer,
         0x5Du,
         OutputBuffer,
         0x5Du,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v4 )
    goto LABEL_18;
  v4->IoStatus.Status = -1073741637;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v4);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( *OutputBuffer != 48 )
      goto LABEL_18;
    if ( OutputBuffer[1] != 48 )
      goto LABEL_18;
    v7 = (unsigned int)OutputBuffer[6];
    if ( (unsigned int)v7 < 0x28 )
      goto LABEL_18;
    if ( (_DWORD *)((char *)OutputBuffer + v7 + 8)
      && (unsigned int)dword_140172178 > 5
      && tlgKeywordOn(v6, 0x400000000000LL) )
    {
      v8 = *(const wchar_t **)(a1 + 4784);
      v23 = &v17;
      v17 = 0x1000000LL;
      v25 = a1 + 5128;
      v24 = 8LL;
      v26 = 16LL;
      tlgCreate1Sz_wchar_t((__int64)v27, v8);
      v10 = *(unsigned __int8 *)(v9 + 3);
      v28 = &v14;
      v15 = *(unsigned __int8 *)(v9 + 4);
      v30 = &v15;
      v16 = *(unsigned __int8 *)(v9 + 2);
      v32 = &v16;
      v18 = *(unsigned int *)(v9 + 37);
      v34 = &v18;
      v19 = *(unsigned int *)(v9 + 41);
      v36 = &v19;
      v14 = v10;
      v29 = 2LL;
      v31 = 2LL;
      v33 = 2LL;
      v35 = 8LL;
      v37 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(v10, (unsigned __int8 *)dword_140161568, v11, v9, 0xAu, &v22);
    }
  }
  if ( (unsigned int)Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (*(_DWORD *)(a1 + 5408) & 0x10) == 0 )
    {
      v12 = StorpTelemetrySendAdapterSurfaceUfsHealthInfo(a1);
      if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741670 )
      {
        v13 = *(_DWORD *)(a1 + 5408);
        if ( (v13 & 2) == 0 )
          *(_DWORD *)(a1 + 5408) = v13 | 0x10;
      }
    }
  }
LABEL_18:
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x65546152u);
}
