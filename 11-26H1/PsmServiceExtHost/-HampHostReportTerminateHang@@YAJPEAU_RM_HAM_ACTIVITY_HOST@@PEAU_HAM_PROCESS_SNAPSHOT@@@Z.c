/*
 * XREFs of ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007921C
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180017954 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z @ 0x1800177F4 (-HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z.c)
 *     ?HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z @ 0x180079D5C (-HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z.c)
 *     ?HampUtilDeleteTempFile@@YAJPEBG@Z @ 0x180079E28 (-HampUtilDeleteTempFile@@YAJPEBG@Z.c)
 *     ?HampSystemWerUploadLiveDump@@YAJPEBG0@Z @ 0x18008BDC0 (-HampSystemWerUploadLiveDump@@YAJPEBG0@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostReportTerminateHang(struct _RM_HAM_ACTIVITY_HOST *a1, struct _HAM_PROCESS_SNAPSHOT *a2)
{
  unsigned int v4; // edx
  const unsigned __int16 *v5; // rcx
  __int64 v6; // r8
  __int64 i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  const unsigned __int16 *v12; // rcx
  __int64 v13; // rdi
  NTSTATUS v14; // ebx
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD InputBuffer[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  HANDLE v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+78h] [rbp-88h]
  unsigned __int16 v25[528]; // [rsp+80h] [rbp-80h] BYREF

  v16 = 0;
  v17 = 0;
  memset_0(InputBuffer, 0, 0x40uLL);
  i = 0LL;
  Handle = (HANDLE)-1LL;
  while ( (unsigned int)i < *((_DWORD *)a2 + 4) )
  {
    v8 = *(_QWORD *)a2;
    v16 = 0;
    if ( (int)HampUtilActOnThreads(*(HANDLE *)(v8 + 8 * i), 0, v6, HampProcessCountThreads, &v16) >= 0 && v16 == 1 )
    {
      if ( (_DWORD)i != -1 )
      {
LABEL_12:
        v10 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * i);
        HampUtilActOnThreads(
          *(HANDLE *)(*(_QWORD *)a2 + 8 * i),
          0,
          v6,
          (__int64 (__fastcall *)(void *, HANDLE, void *))HampProcessQueryFirstThreadId,
          &v17);
        goto LABEL_14;
      }
      break;
    }
    i = (unsigned int)(i + 1);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 4); i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)a2;
    v16 = 0;
    HampUtilActOnThreads(*(HANDLE *)(v9 + 8 * i), 0, v6, HampProcessCountThreads, &v16);
    if ( v16 > 1 )
    {
      if ( (_DWORD)i != -1 )
        goto LABEL_12;
      break;
    }
  }
  v10 = 0;
LABEL_14:
  v11 = HampUtilCreateTempFile(v5, v4, &Handle, v25);
  v13 = (__int64)Handle;
  v14 = v11;
  if ( v11 >= 0 )
  {
    v24 |= 8u;
    v21 = v10;
    InputBuffer[0] = 1;
    InputBuffer[1] = 513;
    v20 = 1LL;
    v22 = v17;
    v23 = Handle;
    v14 = NtSystemDebugControl(SysDbgClearUmAttachPid|SysDbgQueryTraceInformation, InputBuffer, 0x40u, 0LL, 0, 0LL);
    if ( v14 >= 0 )
    {
      NtClose((HANDLE)v13);
      v13 = -1LL;
      v14 = HampSystemWerUploadLiveDump(v25, (const unsigned __int16 *)a1 + 12);
      if ( v14 < 0 )
      {
LABEL_21:
        HampUtilDeleteTempFile(v12);
        return (unsigned int)v14;
      }
      v14 = 0;
    }
  }
  if ( v13 != -1 )
    NtClose((HANDLE)v13);
  if ( v14 < 0 )
    goto LABEL_21;
  return (unsigned int)v14;
}
