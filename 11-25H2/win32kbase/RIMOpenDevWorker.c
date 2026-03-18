/*
 * XREFs of RIMOpenDevWorker @ 0x1401307BC
 * Callers:
 *     RIMOpenDev @ 0x1401D57E0 (RIMOpenDev.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdDSd @ 0x1401D5A38 (WPP_RECORDER_AND_TRACE_SF_qdDSd.c)
 *     rimSleep @ 0x1401D5CEC (rimSleep.c)
 */

__int64 __fastcall RIMOpenDevWorker(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        ACCESS_MASK a3,
        ULONG a4,
        __int64 a5,
        unsigned int a6,
        void **FileHandle,
        struct _IO_STATUS_BLOCK *IoStatusBlock)
{
  ULONG ShareAccess; // eax
  ACCESS_MASK v9; // r10d
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  char v13; // r14
  NTSTATUS File; // eax
  __int64 v15; // rdx
  bool v17; // r12
  int v18; // esi
  __int64 v19; // rdi
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rcx
  char v27; // r12
  int v28; // esi
  __int64 v29; // rdi
  char v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  int AllocationSize; // [rsp+20h] [rbp-88h]
  ULONG FileAttributes; // [rsp+28h] [rbp-80h]
  ULONG CreateDisposition; // [rsp+38h] [rbp-70h]
  struct _OBJECT_ATTRIBUTES *v39; // [rsp+B8h] [rbp+10h]
  bool v42; // [rsp+D0h] [rbp+28h]

  v39 = a2;
  ShareAccess = a4;
  v9 = a3;
  v11 = 0;
  v12 = 0;
  v13 = 1;
  while ( v12 < a6 )
  {
    File = ZwCreateFile(FileHandle, v9, a2, IoStatusBlock, 0LL, 0, ShareAccess, 3u, 0, 0LL, 0);
    v11 = File;
    if ( File != -1073741757 && File != -1073741790 )
      break;
    v26 = *(unsigned int *)(a1 + 184);
    if ( (v26 & 0x80u) == 0LL && !*(_DWORD *)(W32GetUserSessionState(v26, v15) + 324) )
    {
      if ( v11 == -1073741757 || v11 == -1073741790 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v13 = 0;
        }
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = *(_DWORD *)(a1 + 48);
          v19 = *(_QWORD *)(a1 + 200);
          v20 = RimDeviceTypeToRimInputType(a1, v18);
          UserSessionState = W32GetUserSessionState(v22, v21);
          LOBYTE(v24) = v17;
          LOBYTE(v25) = v13;
          WPP_RECORDER_AND_TRACE_SF_qdDSd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            v24,
            *(_QWORD *)(UserSessionState + 19336),
            AllocationSize,
            FileAttributes,
            19,
            CreateDisposition,
            a1,
            v18,
            v20,
            v19,
            v11);
        }
        if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
          KeBugCheckEx(0x164u, 5uLL, a1 + 192, 0LL, 0LL);
      }
      return v11;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v27 = 0;
    }
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = *(_DWORD *)(a1 + 48);
      v29 = *(_QWORD *)(a1 + 200);
      v30 = RimDeviceTypeToRimInputType(a1, v28);
      v33 = W32GetUserSessionState(v32, v31);
      LOBYTE(v34) = v27;
      LOBYTE(v35) = v42;
      WPP_RECORDER_AND_TRACE_SF_qdDSd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v35,
        *(_QWORD *)(v33 + 19336),
        AllocationSize,
        FileAttributes,
        18,
        CreateDisposition,
        a1,
        v28,
        v30,
        v29,
        v11);
    }
    rimSleep();
    ShareAccess = a4;
    ++v12;
    v9 = a3;
    a2 = v39;
  }
  return v11;
}
