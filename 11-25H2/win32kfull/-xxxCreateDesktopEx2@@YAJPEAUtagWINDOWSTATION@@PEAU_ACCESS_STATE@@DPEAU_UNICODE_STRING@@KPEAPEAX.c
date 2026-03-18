/*
 * XREFs of ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401EBDA8
 * Callers:
 *     EditionParseDesktop @ 0x1400D86C0 (EditionParseDesktop.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DesktopAlloc @ 0x1400497B0 (DesktopAlloc.c)
 *     CreateDesktopHeap @ 0x1401EC250 (CreateDesktopHeap.c)
 *     GetDesktopHeapSize @ 0x1401EC380 (GetDesktopHeapSize.c)
 */

__int64 __fastcall xxxCreateDesktopEx2(
        struct tagWINDOWSTATION *a1,
        struct _ACCESS_STATE *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5,
        void **a6)
{
  unsigned __int16 v9; // si
  char v10; // r12
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KPROCESS *v15; // r14
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int DesktopHeapSize; // ebx
  struct tagTHREADINFO *v20; // rax
  __int64 DesktopHeap; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  PVOID v24; // rcx
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  void *v27; // rsi
  struct tagTHREADINFO *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  unsigned __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 UserSessionState; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  __int64 v44; // rdx
  __int64 GenericAll; // rcx
  PVOID v46; // rbx
  HANDLE v47; // rbx
  struct tagTHREADINFO *v48; // rax
  PVOID v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // [rsp+40h] [rbp-20h]
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  __int64 v54; // [rsp+50h] [rbp-10h] BYREF

  Object = 0LL;
  v52 = 0;
  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(a1, 8LL, a2) )
    return v52;
  CurrentProcess = PsGetCurrentProcess(v11);
  v14 = *((unsigned int *)a1 + 16);
  v15 = (struct _KPROCESS *)CurrentProcess;
  if ( (v14 & 2) != 0 )
  {
    v47 = *(HANDLE *)(W32GetUserSessionState(v14, v13) + 63544);
    if ( PsGetProcessId(v15) != v47 )
    {
      v54 = 0LL;
      GetProcessLuid(0LL, &v54);
      if ( v54 == *((_QWORD *)a1 + 22) )
        return 3221226091LL;
    }
  }
  result = CreateDesktopObObject(a4, a1, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      v9 = 3;
    }
    else if ( *((_QWORD *)a1 + 2) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v18, v17) + 62984) )
      {
        v18 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 62984);
        if ( *((_QWORD *)a1 + 2) == v18 )
          v10 = 1;
      }
      else
      {
        v9 = 2;
      }
    }
    else
    {
      v9 = 1;
    }
    if ( a5 )
      DesktopHeapSize = a5 << 10;
    else
      DesktopHeapSize = GetDesktopHeapSize(v9);
    if ( DesktopHeapSize < 0x2000 )
      DesktopHeapSize = 0x2000;
    v20 = PtiCurrent(v18, v17);
    *((_QWORD *)v20 + 170) |= 0x40uLL;
    DesktopHeap = CreateDesktopHeap((char *)Object + 136, DesktopHeapSize);
    v24 = Object;
    *((_QWORD *)Object + 16) = DesktopHeap;
    if ( *((_QWORD *)Object + 16) )
    {
      *((_DWORD *)Object + 36) = DesktopHeapSize;
      v27 = (void *)DesktopAlloc((__int64)Object, 72LL, 2LL, v23);
      if ( v27 )
      {
        v28 = PtiCurrent((__int64)v26, v25);
        *((_QWORD *)v28 + 170) &= ~0x40uLL;
        v29 = (_QWORD *)Win32AllocPoolZInit(240LL, 1684763477LL);
        v31 = v29;
        if ( v29 )
        {
          *v29 = v27;
          *((_QWORD *)Object + 1) = v29;
          v32 = (char *)Object + 176;
          *((_QWORD *)Object + 23) = (char *)Object + 176;
          *v32 = v32;
          v33 = (char *)Object + 312;
          *((_QWORD *)Object + 40) = (char *)Object + 312;
          *v33 = v33;
          v34 = (unsigned __int64)Object;
          UserSessionState = W32GetUserSessionState(v31, v30);
          if ( ++*(_QWORD *)(UserSessionState + 62952) == 0xFFFFFFFFLL )
            *(_QWORD *)(UserSessionState + 62952) = 1LL;
          v38 = W32GetUserSessionState(v36, v35);
          ***((_QWORD ***)Object + 1) = *(unsigned int *)(UserSessionState + 62952) | ((v34 ^ *(_QWORD *)(v38 + 42568)) << 32);
          v39 = *((_QWORD *)Object + 17);
          *((_QWORD *)Object + 2) = v39;
          *((_QWORD *)Object + 3) = v39 + DesktopHeapSize;
          LockObjectAssignment((char *)Object + 40, a1);
          if ( !*((_QWORD *)a1 + 2) )
          {
            if ( (*((_DWORD *)a1 + 16) & 4) == 0 )
            {
              v49 = Object;
              v50 = W32GetUserSessionState(v41, v40);
              LockObjectAssignment(v50 + 62976, v49);
            }
            LockObjectAssignment(*(_QWORD *)(*((_QWORD *)a1 + 7) + 8LL) + 24LL, Object);
          }
          LockObjectAssignment((char *)Object + 32, *((_QWORD *)a1 + 2));
          LockObjectAssignment((char *)a1 + 16, Object);
          p_RemainingDesiredAccess = &a2->RemainingDesiredAccess;
          RemainingDesiredAccess = a2->RemainingDesiredAccess;
          if ( (RemainingDesiredAccess & 0x2000000) != 0 )
            *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
          RtlMapGenericMask(&a2->RemainingDesiredAccess, DesktopMapping);
          GenericAll = DesktopMapping->GenericAll;
          LODWORD(GenericAll) = GenericAll | 0x1000000;
          *p_RemainingDesiredAccess &= GenericAll;
          v46 = Object;
          *a6 = Object;
          if ( v10 )
          {
            v51 = W32GetUserSessionState(GenericAll, v44);
            LockObjectAssignment(v51 + 62840, v46);
          }
          return 0LL;
        }
        RtlFreeHeap(*((PVOID *)Object + 17), 0, v27);
      }
    }
    else
    {
      v26 = *(_DWORD **)(W32GetUserSessionState(v24, v22) + 19872);
      if ( (*v26 & 0x100) != 0 )
      {
        _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v26, v25) + 19872), 0xFFFFFEFF);
        UserLogError(2147483892LL);
      }
    }
    v48 = PtiCurrent((__int64)v26, v25);
    *((_QWORD *)v48 + 170) &= ~0x40uLL;
    v52 = -1073741801;
    ObfDereferenceObject(Object);
    return v52;
  }
  return result;
}
