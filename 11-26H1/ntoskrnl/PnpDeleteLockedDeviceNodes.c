/*
 * XREFs of PnpDeleteLockedDeviceNodes @ 0x1409B6D78
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407BB964 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PipRemoveDevicesInRelationList @ 0x1409B5A28 (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x140499B90 (McTemplateK0z_EtwWriteTransfer.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PipSendGuestAssignedNotification @ 0x1407B7B78 (PipSendGuestAssignedNotification.c)
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     PnpDeleteLockedDeviceNode @ 0x1409B7010 (PnpDeleteLockedDeviceNode.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNodes(
        __int64 a1,
        unsigned int **a2,
        int a3,
        char a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // r10d
  unsigned int v12; // r12d
  unsigned int v13; // edi
  unsigned int *v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r13
  ULONG_PTR v19; // rbx
  __int64 v20; // rcx
  int v21; // edi
  unsigned int v22; // ebx
  unsigned int *v23; // r8
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  ULONG_PTR v27; // rcx
  NTSTATUS v28; // eax
  char v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v8 = 0;
  if ( *((_BYTE *)a2 + 8) )
  {
    v12 = (a3 == 1) + 1;
    v13 = 0;
    while ( *((_BYTE *)a2 + 8) )
    {
      v14 = *a2;
      v15 = **a2;
      if ( v13 >= v15 )
        break;
      if ( v12 > 1 )
      {
        if ( v12 != 2 )
          return (unsigned int)v8;
        v16 = v15 - v13 - 1;
      }
      else
      {
        v16 = v13;
      }
      if ( !v14 || (unsigned int)v16 >= v15 )
        break;
      _mm_lfence();
      ++v13;
      v17 = v14[6 * v16 + 6];
      v18 = *(_QWORD *)&v14[6 * v16 + 4];
      if ( (_DWORD)v17 || a4 )
      {
        if ( v18 )
          v19 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
        else
          v19 = 0LL;
        if ( (unsigned int)(a3 - 2) <= 1 )
        {
          v20 = *(unsigned int *)(v19 + 704);
          *(_DWORD *)(v19 + 704) &= ~0x2000u;
          if ( (v20 & 0x2000) != 0 )
          {
            if ( (byte_140EF412C & 8) != 0 )
              McTemplateK0z_EtwWriteTransfer(
                v20,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_Guest_Unassigned,
                v17,
                *(const wchar_t **)(v19 + 48));
            PnpSetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(v19 + 48),
              1,
              0LL,
              (__int64)DEVPKEY_Device_AssignedToGuest,
              0,
              0LL,
              0,
              0);
            v28 = PipSendGuestAssignedNotification(v19, 0);
            if ( v28 < 0 )
              PnpRequestDeviceRemoval(v19, 0, 57, v28);
          }
        }
        v8 = PnpDeleteLockedDeviceNode(v19, a7, a8);
        if ( v8 < 0 )
        {
          if ( (*(_DWORD *)(v19 + 704) & 4) == 0 )
            KeBugCheckEx(0xCAu, 0xDuLL, v19, 4uLL, 0LL);
          PoFxIdleDevice(*(_QWORD *)(v19 + 32));
          *(_DWORD *)(v19 + 704) &= ~4u;
          if ( a3 == 1 || !v13 )
          {
            v21 = 3;
            v22 = 0;
          }
          else
          {
            v22 = **a2 - v13;
            v21 = 2;
          }
          while ( *((_BYTE *)a2 + 8) )
          {
            v23 = *a2;
            v24 = **a2;
            if ( v22 >= v24 )
              break;
            if ( v21 != 2 )
              break;
            v25 = v24 - v22 - 1;
            if ( !v23 || (unsigned int)v25 >= v24 )
              break;
            _mm_lfence();
            ++v22;
            v26 = *(_QWORD *)&v23[6 * v25 + 4];
            if ( v18 != v26 )
            {
              if ( v26 )
                v27 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
              else
                v27 = 0LL;
              PnpDeleteLockedDeviceNode(v27, a7, a8);
            }
          }
          return (unsigned int)-2147483608;
        }
        a4 = v29;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
