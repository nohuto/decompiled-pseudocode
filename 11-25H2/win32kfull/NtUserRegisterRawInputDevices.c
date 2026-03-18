/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x14011D7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _RegisterRawInputDevices @ 0x14011DA34 (_RegisterRawInputDevices.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(volatile void *a1, unsigned int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // r13
  __int64 v9; // r12
  SIZE_T v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rbx
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  unsigned int v17; // ebx
  unsigned int *v18; // rdi
  __int64 v19; // rcx
  char *v21; // [rsp+60h] [rbp-68h]
  _BYTE v22[16]; // [rsp+70h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-48h] BYREF
  void (*v24)(void *); // [rsp+90h] [rbp-38h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v22);
  PsGetCurrentProcessWin32Process(v5);
  v8 = PtiCurrent(v7, v6);
  if ( a1 && a2 && a3 == 16 )
  {
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    v9 = a2;
    v10 = 16LL * a2;
    ProbeForRead(a1, v10, 8u);
    if ( v10 > 0xFFFFFFFF )
    {
      v17 = 0;
      UserSetLastError(87);
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    }
    else
    {
      v11 = v10;
      v14 = (char *)Win32AllocPoolWithQuotaZInit((unsigned int)v10, 1769108309LL);
      v21 = v14;
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      if ( v24 != (void (*)(void *))-1LL )
      {
        BugCheckParameter4 = PtiCurrent(v13, v12);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v14, (ULONG_PTR)BugCheckParameter4);
      }
      v15 = PtiCurrent(v13, v12);
      BugCheckParameter2[0] = *((_QWORD *)v15 + 48);
      *((_QWORD *)v15 + 48) = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)v14;
      v24 = Win32FreePool;
      if ( (unsigned int)v10 >= v10 )
        v11 = 16 * a2;
      memmove(v14, (const void *)a1, v11);
      v17 = RegisterRawInputDevices(v14, a2, 0LL);
      v18 = (unsigned int *)(v21 + 4);
      do
      {
        EtwTraceAuditApiRegisterRawInputDevices(
          v17,
          *((unsigned __int16 *)v18 - 2),
          *((unsigned __int16 *)v18 - 1),
          *v18,
          *(_QWORD *)(v18 + 1),
          v8,
          *(_QWORD *)(*(_QWORD *)v8 + 1376LL),
          *(_QWORD *)(*(_QWORD *)v8 + 1216LL),
          *(_DWORD *)(*(_QWORD *)v8 + 1296LL));
        v18 += 4;
        --v9;
      }
      while ( v9 );
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    }
  }
  else
  {
    v17 = 0;
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v22);
  UserSessionSwitchLeaveCrit(v19);
  return (int)v17;
}
