/*
 * XREFs of PiDrvDbCreateNode @ 0x1407B808C
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x14049F620 (KeInitializeTimerEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1407288C0 (ZwCreateEvent.c)
 *     PiDrvDbDestroyNode @ 0x1407B8388 (PiDrvDbDestroyNode.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDrvDbCreateNode(PCWSTR Source, int a2, const WCHAR *a3, const WCHAR *a4, _QWORD *a5)
{
  NTSTATUS appended; // ebx
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  _WORD *v12; // r13
  __int16 v14; // ax
  __int64 v15; // rax
  __int16 v16; // ax
  __int64 v17; // rax
  int v18; // eax
  _QWORD *v19; // rax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  Handle = 0LL;
  appended = 0;
  memset(&ObjectAttributes, 0, 44);
  Pool2 = ExAllocatePool2(0x40uLL);
  v11 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v12 = (_WORD *)(Pool2 + 16);
  *(_DWORD *)(Pool2 + 64) = a2;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 16), Source) )
    goto LABEL_4;
  if ( a3 )
  {
    if ( !RtlCreateUnicodeString((PUNICODE_STRING)v11 + 2, a3) )
      goto LABEL_4;
  }
  else
  {
    v14 = *v12 + 38;
    *((_WORD *)v11 + 16) = 0;
    *((_WORD *)v11 + 17) = v14;
    v15 = ExAllocatePool2(0x100uLL);
    v11[5] = v15;
    if ( !v15 )
      goto LABEL_4;
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 2, L"\\REGISTRY\\MACHINE\\");
    if ( appended < 0 )
      goto LABEL_5;
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 2, Source);
    if ( appended < 0 )
      goto LABEL_5;
  }
  if ( !a4 )
  {
    v16 = *v12 + 58;
    *((_WORD *)v11 + 24) = 0;
    *((_WORD *)v11 + 25) = v16;
    v17 = ExAllocatePool2(0x100uLL);
    v11[7] = v17;
    if ( v17 )
    {
      appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 3, L"\\SystemRoot\\System32\\config\\");
      if ( appended < 0 )
        goto LABEL_5;
      appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 3, Source);
      if ( appended < 0 )
        goto LABEL_5;
      goto LABEL_19;
    }
LABEL_4:
    appended = -1073741670;
    goto LABEL_5;
  }
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)v11 + 3, a4) )
    goto LABEL_4;
LABEL_19:
  if ( (v11[8] & 4) != 0 )
  {
    appended = ExInitializeResourceLite((PERESOURCE)(v11 + 11));
    if ( appended < 0 )
      goto LABEL_5;
    *((_BYTE *)v11 + 192) = 1;
    KeInitializeTimerEx((PKTIMER)(v11 + 33), NotificationTimer);
    KeInitializeDpc((PRKDPC)(v11 + 41), (PKDEFERRED_ROUTINE)PiDrvDbUnloadNodeDpcRoutine, v11);
    v11[53] = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwCreateEvent((PHANDLE)v11 + 59, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( appended < 0 )
      goto LABEL_5;
    *((_BYTE *)v11 + 489) = 1;
    v11[60] = 0xFFFFFFFFLL;
  }
  if ( (v11[8] & 0x10) != 0 )
  {
    appended = PnpCtxRegOpenKey(0, 0, v11[5], 0, 0x2000000, (__int64)&Handle);
    if ( appended < 0
      || (appended = PnpCtxRegOpenKey(
                       0,
                       (_DWORD)Handle,
                       (unsigned int)L"DriverDatabase",
                       0,
                       0x2000000,
                       (__int64)(v11 + 9)),
          ZwClose(Handle),
          appended < 0) )
    {
LABEL_5:
      PiDrvDbDestroyNode(v11);
      return (unsigned int)appended;
    }
  }
  v18 = *((_DWORD *)v11 + 16);
  *((_DWORD *)v11 + 124) = 259;
  if ( (v18 & 0x40) == 0 )
  {
    v19 = (_QWORD *)qword_140F82908;
    if ( *(__int64 **)qword_140F82908 != &PiDrvDbNodeList )
      __fastfail(3u);
    *v11 = &PiDrvDbNodeList;
    v11[1] = v19;
    *v19 = v11;
    qword_140F82908 = (__int64)v11;
  }
  *a5 = v11;
  return (unsigned int)appended;
}
