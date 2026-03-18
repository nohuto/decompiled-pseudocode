/*
 * XREFs of NtDCompositionSendDwmLpcMessage @ 0x140229300
 * Callers:
 *     <none>
 * Callees:
 *     ReferenceDwmProcess @ 0x1400B2E10 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1400B2E60 (CheckOrAcquireDwmStateLock.c)
 *     GreUnlockDwmState @ 0x1400B3070 (GreUnlockDwmState.c)
 *     UserDereferenceDwmProcess @ 0x1400B3390 (UserDereferenceDwmProcess.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline @ 0x140228984 (Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC (Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionSendDwmLpcMessage(void *a1, void *a2, size_t a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  NTSTATUS v9; // ebx
  bool v10; // zf
  __int64 v11; // r13
  __int64 v12; // rsi
  size_t *v13; // r12
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v15; // rcx
  size_t v16; // rbx
  char v17; // bl
  __int64 CurrentProcess; // rax
  size_t v19; // rdx
  size_t *v20; // r9
  struct _KPROCESS *v21; // r12
  void *v22; // rcx
  NTSTATUS v23; // eax
  __int64 i; // rdx
  unsigned int Object; // [rsp+20h] [rbp-148h]
  int v27; // [rsp+30h] [rbp-138h]
  int v28; // [rsp+38h] [rbp-130h]
  char v29; // [rsp+40h] [rbp-128h]
  _WORD v30[2]; // [rsp+44h] [rbp-124h]
  PRKPROCESS PROCESS; // [rsp+48h] [rbp-120h] BYREF
  __int128 v32; // [rsp+50h] [rbp-118h]
  size_t v33; // [rsp+60h] [rbp-108h] BYREF
  int v34; // [rsp+68h] [rbp-100h]
  void *Src; // [rsp+70h] [rbp-F8h]
  PVOID v36; // [rsp+78h] [rbp-F0h]
  HANDLE Handle; // [rsp+80h] [rbp-E8h]
  void *v38; // [rsp+90h] [rbp-D8h]
  void *v39; // [rsp+98h] [rbp-D0h]
  size_t v40; // [rsp+A0h] [rbp-C8h]
  _DWORD v41[20]; // [rsp+B0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-68h] BYREF

  Src = a2;
  Handle = a1;
  v38 = a1;
  v39 = a2;
  v40 = a3;
  v33 = a3;
  v32 = 0LL;
  v30[0] = 0;
  v5 = 0;
  v34 = 0;
  v36 = 0LL;
  PROCESS = 0LL;
  v29 = 0;
  memset(v41, 0, 0x48uLL);
  v9 = a3 > 0x20 ? 0xC000000D : 0;
  if ( a3 > 0x20 )
    goto LABEL_34;
  RtlCopyFromUser(&v41[10], Src, a3);
  v7 = (unsigned int)(v41[10] - 1073741900);
  if ( v41[10] == 1073741900 )
  {
    if ( a3 == 32 )
    {
      *(_QWORD *)&v32 = &v41[11];
      v5 = 1;
      goto LABEL_30;
    }
    goto LABEL_28;
  }
  v7 = (unsigned int)(v41[10] - 1073741953);
  if ( v41[10] == 1073741953 )
  {
    if ( a3 == 28 )
    {
      *(_QWORD *)&v32 = &v41[13];
      *((_QWORD *)&v32 + 1) = &v41[15];
    }
    else
    {
      v9 = -1073741811;
    }
    v5 = 0;
    v10 = a3 == 28;
    goto LABEL_24;
  }
  v7 = (unsigned int)(v41[10] - 1073741954);
  if ( v41[10] != 1073741954 )
  {
    v7 = (unsigned int)(v41[10] - 1073741956);
    if ( v41[10] != 1073741956 )
    {
      v7 = (unsigned int)(v41[10] - 1073741963);
      if ( v41[10] != 1073741963 )
      {
        v7 = (unsigned int)(v41[10] - 1073741968);
        if ( v41[10] != 1073741968 )
        {
          v7 = (unsigned int)(v41[10] - 1073741972);
          if ( v41[10] != 1073741972 )
          {
            if ( v41[10] == 1073741973
              && (unsigned int)Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline() )
            {
              goto LABEL_11;
            }
LABEL_28:
            v9 = -1073741811;
            goto LABEL_30;
          }
          if ( !(unsigned int)Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline() )
            goto LABEL_28;
          if ( a3 == 24 )
          {
            *(_QWORD *)&v32 = &v41[11];
            *((_QWORD *)&v32 + 1) = &v41[13];
            HIBYTE(v30[0]) = 1;
          }
          else
          {
            v9 = -1073741811;
          }
          v5 = 0;
          v10 = a3 == 24;
LABEL_24:
          if ( v10 )
            v5 = 2;
          goto LABEL_30;
        }
      }
    }
  }
LABEL_11:
  if ( a3 == 28 )
    *(_QWORD *)&v32 = &v41[13];
  else
    v9 = -1073741811;
  v5 = a3 == 28;
LABEL_30:
  if ( v9 >= 0 )
  {
    if ( CheckOrAcquireDwmStateLock(v7, v6) )
    {
      v29 = 1;
    }
    else
    {
      v29 = 0;
      v9 = -1073741823;
    }
  }
LABEL_34:
  if ( v9 >= 0 )
  {
    PROCESS = (PRKPROCESS)ReferenceDwmProcess(v7, v6, v8);
    if ( !PROCESS )
      v9 = -1073741823;
  }
  v11 = v5;
  if ( v9 >= 0 && v5 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (size_t *)*((_QWORD *)&v32 + v12);
      if ( *v13 )
      {
        IsEnabledDeviceUsageNoInline = Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline();
        v16 = *v13;
        v33 = *v13;
        if ( IsEnabledDeviceUsageNoInline )
        {
          v17 = *((_BYTE *)v30 + v12);
          CurrentProcess = PsGetCurrentProcess(v15);
          LOBYTE(v28) = 1;
          v27 = v17 != 0 ? 4 : 6;
          Object = v17 != 0 ? 0x80000000 : 0;
          v19 = v33;
        }
        else
        {
          CurrentProcess = PsGetCurrentProcess(v15);
          LOBYTE(v28) = 1;
          v27 = 6;
          Object = 0;
          v19 = v16;
        }
        v20 = v13;
        v21 = PROCESS;
        v9 = ObDuplicateObject(CurrentProcess, v19, PROCESS, v20, Object, 0, v27, v28);
        if ( v9 < 0 )
          break;
      }
      if ( ++v12 >= v11 )
        goto LABEL_51;
    }
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v21, &ApcState);
    while ( v12 > 0 )
    {
      --v12;
      ObCloseHandle(**((HANDLE **)&v32 + v12), 1);
    }
    KeUnstackDetachProcess(&ApcState);
  }
LABEL_51:
  if ( PROCESS )
    UserDereferenceDwmProcess(PROCESS);
  if ( v29 )
    GreUnlockDwmState(v7);
  if ( v9 < 0 )
  {
    v22 = v36;
  }
  else
  {
    PROCESS = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, (PVOID *)&PROCESS, 0LL);
    v22 = PROCESS;
    v36 = PROCESS;
  }
  if ( v9 >= 0 )
  {
    v33 = a3 + 40;
    LOWORD(v41[0]) = a3;
    HIWORD(v41[0]) = a3 + 40;
    LOWORD(v41[1]) = 0x8000;
    v23 = LpcSendWaitReceivePort(v22, 0x20000LL, v41, v41, &v33, 0LL);
    v9 = v23;
    if ( v23 == 192 || v23 == 258 )
      v9 = -1073741823;
    if ( v9 >= 0 )
    {
      if ( v11 )
      {
        for ( i = 0LL; i < v11; ++i )
          **((_QWORD **)&v32 + i) = 0LL;
      }
      RtlCopyToUser(Src, &v41[10], a3);
    }
  }
  if ( v36 )
    ObfDereferenceObject(v36);
  return (unsigned int)v9;
}
