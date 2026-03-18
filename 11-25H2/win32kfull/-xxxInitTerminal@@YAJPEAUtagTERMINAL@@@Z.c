/*
 * XREFs of ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x14020EC4C
 * Callers:
 *     xxxCreateWindowStation @ 0x14028CAA0 (xxxCreateWindowStation.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxInitInput @ 0x140212530 (xxxInitInput.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

NTSTATUS __fastcall xxxInitTerminal(struct tagTERMINAL *a1)
{
  void *v2; // rsi
  NTSTATUS result; // eax
  NTSTATUS Event; // ebx
  NTSTATUS v5; // eax
  void *v6; // rcx
  char v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C8h] BYREF
  void *EventHandle; // [rsp+48h] [rbp-C0h] BYREF
  void *ObjectAttributes[7]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v24[52]; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+BCh] [rbp-4Ch]

  EventHandle = 0LL;
  memset(ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset_0(v24, 0, 0x3B8uLL);
  if ( *((_QWORD *)a1 + 7) )
  {
    v2 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v2);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v20, 1);
    KeWaitForSingleObject(v2, WrUserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v20);
    goto LABEL_23;
  }
  LODWORD(ObjectAttributes[1]) = 48;
  ObjectAttributes[2] = 0LL;
  LODWORD(ObjectAttributes[4]) = 512;
  ObjectAttributes[3] = 0LL;
  *(_OWORD *)&ObjectAttributes[5] = 0LL;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], NotificationEvent, 0);
  if ( result < 0 )
    return result;
  Object = 0LL;
  Event = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  *((_QWORD *)a1 + 7) = Object;
  ZwClose(EventHandle);
  if ( Event < 0 )
    return Event;
  if ( (*(_DWORD *)a1 & 2) == 0 && !(unsigned int)xxxInitInput(a1) )
  {
    Event = -1073741801;
LABEL_11:
    ObfDereferenceObject(*((PVOID *)a1 + 7));
    *((_QWORD *)a1 + 7) = 0LL;
    return Event;
  }
  Event = ZwCreateEvent(ObjectAttributes, 0x1F0003u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], NotificationEvent, 0);
  if ( Event < 0 )
    goto LABEL_11;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(ObjectAttributes[0], 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  v6 = ObjectAttributes[0];
  Event = v5;
  *((_QWORD *)a1 + 5) = Object;
  ZwClose(v6);
  if ( Event < 0 )
    goto LABEL_11;
  v2 = (void *)*((_QWORD *)a1 + 5);
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v24, 1LL, a1) )
    goto LABEL_13;
  v7 = 0;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v20, 1);
  v9 = *(_QWORD *)(W32GetUserGdiSessionState(v8) + 40);
  if ( PsGetCurrentProcess(v10) == v9 )
  {
    UserSessionState = W32GetUserSessionState(v12, v11);
    v14 = LpcRequestPort(*(_QWORD *)(UserSessionState + 71288), v24);
  }
  else
  {
    Object = (PVOID)952;
    v16 = W32GetUserSessionState(v12, v11);
    v14 = LpcSendWaitReceivePort(*(_QWORD *)(v16 + 71288), 0x20000LL, v24, v24, &Object, 0LL);
  }
  if ( v14 >= 0 )
  {
    v17 = *(_QWORD *)(W32GetUserGdiSessionState(v15) + 40);
    if ( PsGetCurrentProcess(v18) == v17 || v25 >= 0 )
    {
      KeWaitForSingleObject(v2, WrUserRequest, 0, 0, 0LL);
      v7 = 1;
    }
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v20);
  if ( !v7 )
  {
LABEL_13:
    ObfDereferenceObject(*((PVOID *)a1 + 7));
    ObfDereferenceObject(v2);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_QWORD *)a1 + 5) = 0LL;
    return -1073741801;
  }
LABEL_23:
  ObfDereferenceObject(v2);
  v19 = *(_DWORD *)a1;
  *((_QWORD *)a1 + 5) = 0LL;
  if ( (v19 & 8) != 0 )
  {
    *(_DWORD *)a1 = v19 & 0xFFFFFFF7;
    return -1073741801;
  }
  *(_DWORD *)a1 = v19 | 1;
  return 0;
}
