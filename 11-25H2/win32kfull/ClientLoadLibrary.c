/*
 * XREFs of ClientLoadLibrary @ 0x1400C82EC
 * Callers:
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

ULONG_PTR __fastcall ClientLoadLibrary(void **a1, void **a2)
{
  ULONG_PTR v4; // rdx
  __int64 v5; // rax
  unsigned int *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  int v14; // ebx
  ULONG_PTR v15; // rbx
  ULONG_PTR v16; // [rsp+30h] [rbp-2C8h] BYREF
  int v17; // [rsp+38h] [rbp-2C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2B8h] BYREF
  _BYTE *v19; // [rsp+48h] [rbp-2B0h]
  void *Src; // [rsp+50h] [rbp-2A8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-2A0h] BYREF
  void (*v22)(void *); // [rsp+68h] [rbp-290h]
  ULONG_PTR v23; // [rsp+70h] [rbp-288h]
  _BYTE v24[80]; // [rsp+80h] [rbp-278h] BYREF
  _BYTE v25[512]; // [rsp+D0h] [rbp-228h] BYREF

  memset_0(v24, 0, 0x48uLL);
  Src = 0LL;
  v17 = 0;
  v4 = (*((unsigned __int16 *)a1 + 1) + *((unsigned __int16 *)a2 + 1) + 14LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v4;
  if ( v4 <= 0x800 )
  {
    if ( v4 + 88 <= 0x200 )
    {
      v6 = (unsigned int *)v25;
      v19 = v25;
      memset_0(v25, 0, sizeof(v25));
    }
    else
    {
      v6 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v4 + 88), 1667461973LL);
      v19 = v6;
      if ( !v6 )
        return 0LL;
    }
    *((_QWORD *)v6 + 2) = v6 + 22;
    *((_QWORD *)v6 + 4) = 0LL;
    *v6 = RegionSize + 88;
  }
  else
  {
    v5 = Win32AllocPoolWithQuotaZInit(88LL, 1667461973LL);
    v6 = (unsigned int *)v5;
    v19 = (_BYTE *)v5;
    if ( !v5 )
      return 0LL;
    v7 = (_QWORD *)(v5 + 32);
    *(_QWORD *)(v5 + 32) = 0LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v5 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    {
      Win32FreePool(v6);
      return 0LL;
    }
    *((_QWORD *)v6 + 2) = *v7;
    *v6 = 88;
  }
  v6[1] = RegionSize;
  v6[2] = 0;
  v6[6] = 72;
  PtiCurrent(v9, v8);
  v21 = 0LL;
  v22 = 0LL;
  if ( v6 != (unsigned int *)v24 && v6 != (unsigned int *)v25 )
  {
    v13 = PtiCurrent(v12, v11);
    *(_QWORD *)&v21 = *((_QWORD *)v13 + 48);
    *((_QWORD *)v13 + 48) = &v21;
    *((_QWORD *)&v21 + 1) = v6;
    v22 = Win32FreePool;
  }
  *((_WORD *)v6 + 20) = *(_WORD *)a1;
  *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v6,
              a1[1],
              (unsigned int)*(unsigned __int16 *)a1 + 2,
              (void **)v6 + 6) < 0 )
    goto LABEL_19;
  *((_WORD *)v6 + 28) = *(_WORD *)a2;
  *((_WORD *)v6 + 29) = *((_WORD *)a2 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v6,
              a2[1],
              (unsigned int)*(unsigned __int16 *)a2 + 2,
              (void **)v6 + 8) < 0 )
    goto LABEL_19;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v16);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v14 = KeUserModeCallback(75LL, v6, *v6, &Src, &v17);
  EtwTraceEndCallback(75LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v16);
  if ( v14 >= 0 && v17 == 24 )
  {
    v16 = 0LL;
    RtlCopyFromUser(&v16, Src, 8uLL);
    v15 = v16;
    v23 = v16;
  }
  else
  {
LABEL_19:
    v15 = 0LL;
  }
  if ( v6 != (unsigned int *)v24 && v6 != (unsigned int *)v25 )
  {
    if ( *((_QWORD *)v6 + 4) )
    {
      v16 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &v16, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v21);
  }
  return v15;
}
