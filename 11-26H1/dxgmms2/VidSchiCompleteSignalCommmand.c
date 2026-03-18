/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x140012020
 * Callers:
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiSubmitSignalCommand @ 0x14000DC50 (VidSchiSubmitSignalCommand.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     ??1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ @ 0x1400129BC (--1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ.c)
 *     McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer @ 0x14001360C (McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer.c)
 *     VmBusSendSignalGuestEvent @ 0x14003D3E0 (VmBusSendSignalGuestEvent.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VidSchiCompleteSignalCommmand(HwQueueStagingList *a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // r15
  unsigned int v6; // esi
  int *v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  _BYTE *Pool2; // rax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v14; // edi
  unsigned __int64 v15; // r13
  _BYTE *v16; // rax
  _BYTE *v17; // rcx
  __int64 v18; // r10
  __int64 v19; // r9
  _QWORD *v20; // r8
  char *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  struct _KEVENT *v26; // rcx
  _BYTE *v29; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v30[16]; // [rsp+90h] [rbp-78h] BYREF
  int v31; // [rsp+A0h] [rbp-68h]
  _BYTE *v32; // [rsp+A8h] [rbp-60h]
  _BYTE *v33; // [rsp+B0h] [rbp-58h]
  _BYTE v34[8]; // [rsp+B8h] [rbp-50h] BYREF
  int v35; // [rsp+C0h] [rbp-48h]
  _BYTE *v36; // [rsp+C8h] [rbp-40h]
  _BYTE *v37; // [rsp+D0h] [rbp-38h]
  _BYTE v38[16]; // [rsp+D8h] [rbp-30h] BYREF
  int v39; // [rsp+E8h] [rbp-20h]
  _BYTE *v40; // [rsp+F0h] [rbp-18h]

  v4 = *(_QWORD *)(a2 + 800);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 104LL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 808) = *(_QWORD *)(a2 + 808);
  }
  else if ( !*(_QWORD *)(a2 + 808) )
  {
    v6 = 0;
    v7 = (int *)(a2 + 280);
    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
    {
LABEL_19:
      if ( (*v7 & 2) != 0 )
      {
        v26 = *(struct _KEVENT **)(a2 + 544);
        if ( (*v7 & 8) != 0 )
        {
          VmBusSendSignalGuestEvent(v26, 0LL);
        }
        else
        {
          KeSetEvent(v26, 0, 0);
          ObfDereferenceObject(*(PVOID *)(a2 + 544));
        }
        *(_QWORD *)(a2 + 544) = 0LL;
      }
      else
      {
        v14 = 0;
        if ( *(_DWORD *)(a2 + 284) )
        {
          do
          {
            VidSchiCompleteSignalSyncObject(
              a1,
              *(struct _VIDSCH_SYNC_OBJECT **)(a2 + 8LL * v14 + 288),
              (*v7 & 4) != 0,
              (unsigned __int64 *)(a2 + 544 + 8LL * v14),
              a3);
            ++v14;
          }
          while ( v14 < *(_DWORD *)(a2 + 284) );
          v6 = 0;
        }
      }
      goto LABEL_11;
    }
    v8 = *(unsigned int *)(a2 + 284);
    v29 = 0LL;
    v31 = 0;
    v33 = 0LL;
    v35 = 0;
    v37 = 0LL;
    v39 = 0;
    if ( (unsigned int)v8 <= 2 )
    {
      Pool2 = v30;
      v29 = v30;
      if ( (_DWORD)v8 )
      {
        memset(v30, 0, 8 * v8);
        Pool2 = v29;
      }
    }
    else
    {
      v9 = (unsigned int)v8;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 8 )
      {
        v32 = 0LL;
        v15 = v8;
        goto LABEL_41;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v8, 945908054LL);
      v29 = Pool2;
    }
    v31 = v8;
    v15 = v8;
    v32 = Pool2;
    v9 = v8;
    if ( (unsigned int)v8 <= 2 )
    {
      v16 = v34;
      v33 = v34;
      if ( (_DWORD)v8 )
      {
        memset(v34, 0, 4 * v8);
        v16 = v33;
      }
      goto LABEL_28;
    }
LABEL_41:
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 4 )
    {
      v36 = 0LL;
      v17 = 0LL;
      goto LABEL_32;
    }
    v16 = (_BYTE *)ExAllocatePool2(64LL, 4 * v9, 945908054LL);
    v33 = v16;
LABEL_28:
    v35 = v8;
    v36 = v16;
    if ( (unsigned int)v8 <= 2 )
    {
      v17 = v38;
      v37 = v38;
      if ( (_DWORD)v8 )
      {
        memset(v38, 0, 8 * v9);
        v17 = v37;
      }
      goto LABEL_31;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 >= 8 )
    {
      v17 = (_BYTE *)ExAllocatePool2(64LL, 8 * v9, 945908054LL);
      v37 = v17;
LABEL_31:
      v39 = v8;
      goto LABEL_32;
    }
    v17 = 0LL;
LABEL_32:
    v40 = v17;
    if ( v36 && v32 && v17 && (_DWORD)v8 )
    {
      v18 = a2 + 288;
      if ( a2 == -544 )
      {
        v23 = 0LL;
        v24 = 0LL;
        do
        {
          v25 = *(_QWORD *)(v18 + v23);
          v23 += 8LL;
          v24 += 4LL;
          *(_QWORD *)&v32[v23 - 8] = *(_QWORD *)(v25 + 16);
          *(_DWORD *)&v36[v24 - 4] = *(unsigned __int8 *)(*(_QWORD *)(v18 + v23 - 8) + 29LL);
          *(_QWORD *)&v40[v23 - 8] = 0LL;
          --v15;
        }
        while ( v15 );
        v17 = v40;
      }
      else
      {
        v19 = 0LL;
        v20 = (_QWORD *)(a2 + 288);
        do
        {
          v19 += 4LL;
          v21 = (char *)v20 - v18;
          *(_QWORD *)&v32[(_QWORD)v21] = *(_QWORD *)(*v20 + 16LL);
          *(_DWORD *)&v36[v19 - 4] = *(unsigned __int8 *)(*v20 + 29LL);
          v22 = v20[32];
          ++v20;
          *(_QWORD *)&v40[(_QWORD)v21] = v22;
          --v15;
        }
        while ( v15 );
        v17 = v40;
      }
    }
    else
    {
      v18 = a2 + 288;
    }
    if ( v32 && v36 && v17 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer(
        (_DWORD)v17,
        (_DWORD)v32,
        (_DWORD)v36,
        *(_DWORD *)(a2 + 284),
        v18,
        (__int64)v32,
        (__int64)v17,
        (__int64)v36,
        *v7,
        *(_QWORD *)(a2 + 544),
        *(_QWORD *)(a2 + 544));
    TraceDxgkSignalSynchronizationObjectArrays::~TraceDxgkSignalSynchronizationObjectArrays((TraceDxgkSignalSynchronizationObjectArrays *)&v29);
    goto LABEL_19;
  }
  v11 = *(_QWORD *)(a2 + 808);
  if ( v11 )
    *(_QWORD *)(v11 + 800) = *(_QWORD *)(a2 + 800);
  v6 = 0;
  v7 = (int *)(a2 + 280);
  *(_QWORD *)(a2 + 800) = 0LL;
  *(_QWORD *)(a2 + 808) = 0LL;
LABEL_11:
  v12 = *v7;
  *(_DWORD *)(a2 + 80) |= 4u;
  if ( (v12 & 2) == 0 && *(_DWORD *)(a2 + 284) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(PVOID *)(a2 + 8LL * v6++ + 288));
    while ( v6 < *(_DWORD *)(a2 + 284) );
  }
  return VidSchiCheckPendingDeviceCommand(v5);
}
