/*
 * XREFs of PiControlGetSetDeviceStatus @ 0x140967F20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PnpCancelDeviceActionRequest @ 0x1405DDFE4 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405DE0A8 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140968268 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpDeleteDeviceActionRequest @ 0x140B05244 (PnpDeleteDeviceActionRequest.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetSetDeviceStatus(__int64 a1, unsigned __int16 *a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  size_t v5; // r15
  unsigned __int16 *v8; // r12
  void *v9; // rdi
  _QWORD *v10; // rbx
  _QWORD **v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rdi
  int v14; // eax
  int v15; // r14d
  int v16; // eax
  int v17; // edi
  void *Pool2; // rax
  PVOID v20; // rcx
  ULONG v21; // edx
  int v22; // eax
  int v23; // eax
  PVOID v24; // rsi
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  unsigned __int16 *v29; // rax
  __int64 *v30; // rdx
  __int64 *v31; // rcx
  struct _KEVENT *p_Event; // rax
  PVOID v33; // [rsp+48h] [rbp-19h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v35; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int16 *v36; // [rsp+68h] [rbp+7h]
  _QWORD Buffer[2]; // [rsp+70h] [rbp+Fh] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v39; // [rsp+D0h] [rbp+6Fh] BYREF

  v4 = *a2;
  v5 = a3;
  v33 = 0LL;
  LODWORD(v39) = 0;
  v8 = 0LL;
  *(_OWORD *)P = 0LL;
  WORD1(P[0]) = v4;
  LOWORD(P[0]) = v4;
  memset(&Event, 0, sizeof(Event));
  if ( (_WORD)v4 && (unsigned __int16)v4 <= 0x190u && (v4 & 1) == 0 )
  {
    v9 = (void *)*((_QWORD *)a2 + 1);
    if ( a4 )
    {
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      P[1] = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v17 = PiControlCopyUserModeCallersBuffer(Pool2, v9, v4, 2, a4, 1);
      if ( v17 < 0 )
      {
        v20 = P[1];
        v21 = 0;
LABEL_23:
        ExFreePoolWithTag(v20, v21);
        return (unsigned int)v17;
      }
    }
    else
    {
      P[1] = *((PVOID *)a2 + 1);
    }
    Buffer[0] = 0LL;
    Buffer[1] = P;
    v10 = 0LL;
    ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
    v11 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
    if ( v11 )
    {
      v10 = *v11;
      if ( *v11 )
      {
        if ( *(_WORD *)v10 == 3 && (v12 = *(_QWORD *)(v10[39] + 40LL)) != 0 && *(_QWORD **)(v12 + 32) == v10 )
          ObfReferenceObjectWithTag(v10, 0x53706E50u);
        else
          v10 = 0LL;
      }
    }
    KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
    if ( a4 && P[1] )
      ExFreePoolWithTag(P[1], 0);
    if ( !v10 )
      return (unsigned int)-1073741810;
    v13 = *(_DWORD **)(v10[39] + 40LL);
    if ( !v13 )
    {
      v17 = -1073741810;
      goto LABEL_18;
    }
    if ( v13 == IopRootDeviceNode && *((_DWORD *)a2 + 4) )
    {
      v17 = -1073741790;
      goto LABEL_18;
    }
    v14 = *((_DWORD *)a2 + 4);
    v15 = *((_DWORD *)a2 + 7) & 1;
    if ( !v14 )
    {
      PiControlGetUserFlagsFromDeviceNode(v13, a2 + 10);
      *((_DWORD *)a2 + 6) = v13[101];
      v16 = v13[102];
      v17 = 0;
      *((_DWORD *)a2 + 8) = v16;
      goto LABEL_18;
    }
    v22 = v14 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v23 = PnpRequestDeviceAction(v10, 1u, 0, 0LL, (__int64)&Event, (__int64)&v39, (__int64 *)&v33);
        v17 = v23;
LABEL_36:
        if ( v23 >= 0 )
        {
          v25 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
          v24 = v33;
          v17 = v25;
          if ( v25 == 257 )
          {
            if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(v33) )
            {
              v17 = -1073741536;
LABEL_38:
              if ( v24 )
                PnpDeleteDeviceActionRequest(v24);
              goto LABEL_18;
            }
            PnpCancelDeviceActionRequest((__int64)v24, v26, v27, v28);
            v17 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          }
          if ( !v17 )
            v17 = v39;
          goto LABEL_38;
        }
LABEL_37:
        v24 = v33;
        goto LABEL_38;
      }
      v17 = -1073741808;
LABEL_18:
      ObfDereferenceObjectWithTag(v10, 0x53706E50u);
      if ( v17 >= 0 || !v8 )
        return (unsigned int)v17;
      v21 = 1433431632;
      v20 = v8;
      goto LABEL_23;
    }
    if ( v15 )
    {
      v29 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      v8 = v29;
      if ( !v29 )
      {
        v17 = -1073741670;
        goto LABEL_18;
      }
      memmove(v29, a2, v5);
      v36 = v8;
    }
    else
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v36 = a2;
    }
    v35 = 0LL;
    v30 = (__int64 *)&v33;
    if ( v15 )
      v30 = 0LL;
    v31 = &v39;
    if ( v15 )
      v31 = 0LL;
    p_Event = &Event;
    if ( v15 )
      p_Event = 0LL;
    v23 = PnpRequestDeviceAction(v10, 0xFu, 0, &v35, (__int64)p_Event, (__int64)v31, v30);
    v17 = v23;
    if ( v15 )
      goto LABEL_37;
    goto LABEL_36;
  }
  return 3221225485LL;
}
