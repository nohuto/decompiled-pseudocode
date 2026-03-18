/*
 * XREFs of PnpRemoveDeviceActionRequests @ 0x1404822A4
 * Callers:
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140483348 (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x140B03630 (PnpDeleteDeviceActionRequest.c)
 */

_QWORD **__fastcall PnpRemoveDeviceActionRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rbx
  KIRQL v4; // r15
  __int64 *v5; // rdi
  _QWORD **result; // rax
  PVOID *v7; // rbx
  PVOID *v8; // rax
  __int64 **v9; // rax
  _DWORD *v10; // rax
  struct _KEVENT *v11; // rcx
  __int64 v12; // r14
  KIRQL v13; // al
  bool v14; // zf
  KIRQL v15; // si
  KIRQL v16; // al
  _QWORD *v17; // rax
  _QWORD *v18; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+28h] [rbp-8h]

  P = &v18;
  v18 = &v18;
  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = (__int64 *)PnpEnumerationRequestList;
  v4 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v5 = (__int64 *)*v3;
      if ( v3[2] == a1 )
      {
        if ( (__int64 *)v5[1] != v3 )
          goto LABEL_22;
        v9 = (__int64 **)v3[1];
        if ( *v9 != v3 )
          goto LABEL_22;
        *v9 = v5;
        v5[1] = (__int64)v9;
        v10 = (_DWORD *)v3[7];
        if ( v10 )
          *v10 = -1073741810;
        v11 = (struct _KEVENT *)v3[6];
        if ( v11 )
          KeSetEvent(v11, 0, 0);
        v12 = *((unsigned int *)v3 + 6);
        v13 = KeAcquireSpinLockRaiseToDpc(&qword_140F12D00);
        v14 = dword_140F12D08-- == 1;
        v15 = v13;
        if ( v14 )
          PopDirectedDripsClearDisengageReason(4LL);
        KeReleaseSpinLock(&qword_140F12D00, v15);
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink);
        if ( !--LODWORD(PopDirectedDripsUmLock.Queue) && PopDirectedDripsUmLock.WaitBlockFill5[40] )
        {
          PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink
                                                                                         + MEMORY[0xFFFFF78000000008]
                                                                                         - (unsigned __int64)PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Blink);
          *(_OWORD *)&PopDirectedDripsUmLock.WaitBlockFill11[48] = (unsigned __int64)PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink;
        }
        --*((_DWORD *)&PopDirectedDripsUmLock.Teb + v12);
        KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink, v16);
        v17 = P;
        if ( *(_QWORD ***)P != &v18 )
LABEL_22:
          __fastfail(3u);
        v3[1] = (__int64)P;
        *v3 = (__int64)&v18;
        *v17 = v3;
        P = v3;
      }
      v3 = v5;
    }
    while ( v5 != &PnpEnumerationRequestList );
  }
  KeReleaseSpinLock(&PnpSpinLock, v4);
  while ( 1 )
  {
    result = &v18;
    if ( v18 == &v18 )
      return result;
    v7 = (PVOID *)P;
    if ( *(_QWORD ***)P != &v18 )
      goto LABEL_22;
    v8 = (PVOID *)*((_QWORD *)P + 1);
    if ( *v8 != P )
      goto LABEL_22;
    P = (PVOID)*((_QWORD *)P + 1);
    *v8 = &v18;
    ObfDereferenceObjectWithTag(v7[2], 0x746C6644u);
    v7[2] = 0LL;
    PnpDeleteDeviceActionRequest(v7);
  }
}
