/*
 * XREFs of NtSignalAndWaitForSingleObject @ 0x1403DEF10
 * Callers:
 *     DifNtSignalAndWaitForSingleObjectWrapper @ 0x1406928F0 (DifNtSignalAndWaitForSingleObjectWrapper.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

NTSTATUS __cdecl NtSignalAndWaitForSingleObject(
        HANDLE SignalHandle,
        HANDLE WaitHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  LARGE_INTEGER *v4; // r14
  KPROCESSOR_MODE PreviousMode; // bl
  int v9; // edi
  char *v10; // r13
  __int64 v11; // r8
  __int64 v12; // rsi
  volatile signed __int64 *v13; // r15
  POBJECT_TYPE *v14; // rax
  unsigned __int8 v15; // si
  signed __int64 v16; // rax
  bool v17; // cc
  signed __int64 v18; // rax
  signed __int64 v19; // rbx
  signed __int64 v20; // rbx
  int v22; // eax
  BOOLEAN v23; // al
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+48h] [rbp-70h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  PVOID v29; // [rsp+58h] [rbp-60h] BYREF
  int v30; // [rsp+60h] [rbp-58h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int8 *v33; // [rsp+80h] [rbp-38h]

  v4 = Timeout;
  HandleInformation = 0LL;
  Object = 0LL;
  v32[0] = 0LL;
  v29 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Timeout && PreviousMode )
  {
    v32[0] = RtlReadULong64FromUser(Timeout);
    v4 = (LARGE_INTEGER *)v32;
  }
  v9 = ObReferenceObjectByHandleWithTag(SignalHandle, 0, 0LL, PreviousMode, 0x7457624Fu, &Object, &HandleInformation);
  if ( v9 >= 0 )
  {
    v9 = ObReferenceObjectByHandleWithTag(WaitHandle, 0x100000u, 0LL, PreviousMode, 0x7457624Fu, &v29, 0LL);
    if ( v9 < 0 )
    {
      v13 = (volatile signed __int64 *)Object;
LABEL_16:
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)(v13 - 6), -1, 0x7457624Fu);
      v19 = _InterlockedExchangeAdd64(v13 - 6, 0xFFFFFFFFFFFFFFFFuLL);
      v17 = v19 <= 1;
      v20 = v19 - 1;
      if ( v17 )
      {
        if ( *((_QWORD *)v13 - 5) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v13 - 48) >> 8)],
            (ULONG_PTR)v13,
            1uLL,
            *((_QWORD *)v13 - 5));
        if ( v20 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v13, 2uLL, v20);
        v23 = KeAreAllApcsDisabled();
        v24 = (__int64)(v13 - 6);
        if ( v23 )
        {
          ObpDeferObjectDeletion(v24);
        }
        else
        {
          v25 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v24);
          if ( v25 )
            ObpHandleRevocationBlockRemoveObject(v25);
          if ( ObpTraceFlags )
            ObpDeregisterObject(v13 - 6);
          ObpRemoveObjectRoutine(v13 - 6, 0LL);
        }
      }
      return v9;
    }
    v10 = (char *)v29 - 48;
    v32[1] = (char *)v29 - 48;
    v27 = (unsigned __int8)((unsigned __int16)((_WORD)v29 - 48) >> 8);
    v33 = (unsigned __int8 *)v29 - 24;
    v11 = ObTypeIndexTable[*v33 ^ v27 ^ (unsigned __int8)ObHeaderCookie];
    v12 = *(_QWORD *)(v11 + 32);
    if ( (v12 & 1) == 0 )
    {
      if ( v12 < 0 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( (v12 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 176) & *(_DWORD *)((_BYTE *)v29 + *(unsigned __int16 *)(v11 + 180))) != *(_DWORD *)(v11 + 176) )
      {
        v12 -= 3LL;
LABEL_6:
        v12 += (__int64)v29;
        goto LABEL_7;
      }
      v12 = *(_QWORD *)((char *)v29 + *(unsigned __int16 *)(v11 + 182));
    }
    else
    {
      v12 = *(_QWORD *)((char *)v29 + v12 - 1);
    }
LABEL_7:
    v13 = (volatile signed __int64 *)Object;
    if ( *(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[64] != v11 )
    {
      v14 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
      v9 = -1073741790;
      if ( v14 == ExEventObjectType )
      {
        if ( !PreviousMode || (~LOBYTE(HandleInformation.GrantedAccess) & 2) == 0 )
        {
          KeSetEvent((PRKEVENT)Object, 1, 1u);
LABEL_12:
          v9 = KeWaitForSingleObject((PVOID)v12, UserRequest, PreviousMode, Alertable, v4);
          v30 = v9;
          v15 = v27;
LABEL_13:
          if ( ObpTraceFlags )
            ObpPushStackInfo((__int64)v10, -1, 0x7457624Fu);
          v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
          v17 = v16 <= 1;
          v18 = v16 - 1;
          if ( v17 )
          {
            if ( *((_QWORD *)v10 + 1) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *v33 ^ (unsigned __int64)v15],
                (ULONG_PTR)v29,
                1uLL,
                *((_QWORD *)v10 + 1));
            if ( v18 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v29, 2uLL, v18);
            if ( KeAreAllApcsDisabled() )
            {
              ObpDeferObjectDeletion(v10);
            }
            else
            {
              v26 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)v10);
              if ( v26 )
                ObpHandleRevocationBlockRemoveObject(v26);
              if ( ObpTraceFlags )
                ObpDeregisterObject(v10);
              ObpRemoveObjectRoutine(v10, 0LL);
            }
          }
          goto LABEL_16;
        }
LABEL_59:
        v15 = v27;
        goto LABEL_13;
      }
      if ( v14 == (POBJECT_TYPE *)ExMutantObjectType )
      {
        v22 = KeReleaseMutantEx((struct _KTHREAD *)Object);
        v9 = v22;
        if ( v22 != 128 && v22 != -1073741754 )
          goto LABEL_12;
        goto LABEL_59;
      }
      if ( v14 == ExSemaphoreObjectType )
      {
        if ( !PreviousMode || (~LOBYTE(HandleInformation.GrantedAccess) & 2) == 0 )
        {
          v9 = KeReleaseSemaphoreEx((_DWORD)Object, 1, 1, (unsigned __int8)ObHeaderCookie, 1, 0LL);
          if ( v9 != -1073741753 )
            goto LABEL_12;
        }
        goto LABEL_59;
      }
    }
    v9 = -1073741788;
    goto LABEL_59;
  }
  return v9;
}
