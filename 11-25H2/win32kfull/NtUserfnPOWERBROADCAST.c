/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x14002C1D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // r14d
  ULONG_PTR v14; // rbx
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  __int64 UserSessionState; // rax
  __int128 v19; // [rsp+40h] [rbp-58h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-48h] BYREF
  void (*v21)(void *); // [rsp+60h] [rbp-38h]

  PtiCurrent();
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  if ( (a3 & 0x8000) == 0 || (v12 = 0LL, !a4) )
  {
LABEL_10:
    UserSessionState = W32GetUserSessionState(v11, v10);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _DWORD *, __int64))(UserSessionState
                                                                                 + 8LL * ((a6 + 6) & 0x1F)
                                                                                 + 70920))(
            a1,
            a2,
            a3,
            a4,
            a5);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
    return v12;
  }
  ProbeForRead(a4, 0x14uLL, 1u);
  v19 = *(_OWORD *)a4;
  v13 = a4[4];
  if ( v13 + 20 < v13 )
  {
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
  }
  else
  {
    ProbeForRead(a4, v13 + 20, 1u);
    v14 = Win32AllocPoolWithQuotaZInit(v13 + 20, 1651536725LL);
    if ( v14 )
    {
      if ( v21 != (void (*)(void *))-1LL )
      {
        BugCheckParameter4 = PtiCurrent();
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v14, (ULONG_PTR)BugCheckParameter4);
      }
      v15 = PtiCurrent();
      BugCheckParameter2[0] = *((_QWORD *)v15 + 48);
      *((_QWORD *)v15 + 48) = BugCheckParameter2;
      BugCheckParameter2[1] = v14;
      v21 = Win32FreePool;
      *(_OWORD *)v14 = v19;
      *(_DWORD *)(v14 + 16) = v13;
      memmove((void *)(v14 + 20), a4 + 5, v13);
      a4 = (_DWORD *)v14;
      goto LABEL_10;
    }
    UserSetLastError(8);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
  }
  return v12;
}
