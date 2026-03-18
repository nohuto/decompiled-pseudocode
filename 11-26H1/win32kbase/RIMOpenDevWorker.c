/*
 * XREFs of RIMOpenDevWorker @ 0x140093824
 * Callers:
 *     RIMOpenDev @ 0x1400944B4 (RIMOpenDev.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdDSd @ 0x1401FD92C (WPP_RECORDER_AND_TRACE_SF_qdDSd.c)
 *     rimSleep @ 0x1401FDBE0 (rimSleep.c)
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
  int v15; // edx
  int v16; // r8d
  bool v18; // r12
  ULONG_PTR v19; // r13
  int v20; // ecx
  char v21; // r12
  unsigned int v22; // esi
  __int64 v23; // rdi
  char v24; // bl
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rax
  int v29; // edx
  int v30; // r8d
  unsigned int v31; // esi
  __int64 v32; // rdi
  char v33; // bl
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 UserSessionState; // rax
  int v38; // r8d
  int v39; // edx
  int AllocationSize; // [rsp+20h] [rbp-88h]
  ULONG FileAttributes; // [rsp+28h] [rbp-80h]
  ULONG CreateDisposition; // [rsp+38h] [rbp-70h]
  struct _OBJECT_ATTRIBUTES *v43; // [rsp+B8h] [rbp+10h]
  bool v46; // [rsp+D0h] [rbp+28h]

  v43 = a2;
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
    v20 = *(_DWORD *)(a1 + 184);
    if ( (v20 & 0x80u) == 0 && !*(_DWORD *)(W32GetUserSessionState(v20, v15, v16) + 324) )
    {
      if ( v11 == -1073741757 || v11 == -1073741790 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v13 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = *(_DWORD *)(a1 + 48);
          v19 = a1 + 192;
          v32 = *(_QWORD *)(a1 + 200);
          v33 = RimDeviceTypeToRimInputType(a1, v31);
          UserSessionState = W32GetUserSessionState(v35, v34, v36);
          LOBYTE(v38) = v18;
          LOBYTE(v39) = v13;
          WPP_RECORDER_AND_TRACE_SF_qdDSd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v39,
            v38,
            *(_QWORD *)(UserSessionState + 19368),
            AllocationSize,
            FileAttributes,
            19,
            CreateDisposition,
            a1,
            v31,
            v33,
            v32,
            v11);
        }
        else
        {
          v19 = a1 + 192;
        }
        if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
          KeBugCheckEx(0x164u, 5uLL, v19, 0LL, 0LL);
      }
      return v11;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v21 = 0;
    }
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = *(_DWORD *)(a1 + 48);
      v23 = *(_QWORD *)(a1 + 200);
      v24 = RimDeviceTypeToRimInputType(a1, v22);
      v28 = W32GetUserSessionState(v26, v25, v27);
      LOBYTE(v29) = v21;
      LOBYTE(v30) = v46;
      WPP_RECORDER_AND_TRACE_SF_qdDSd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v30,
        *(_QWORD *)(v28 + 19368),
        AllocationSize,
        FileAttributes,
        18,
        CreateDisposition,
        a1,
        v22,
        v24,
        v23,
        v11);
    }
    rimSleep();
    ShareAccess = a4;
    ++v12;
    v9 = a3;
    a2 = v43;
  }
  return v11;
}
