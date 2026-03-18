/*
 * XREFs of NtUserfnINLPHLPSTRUCT @ 0x1402A39A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserfnINLPHLPSTRUCT(__int64 a1, __int64 a2, __int64 a3, const void *a4, __int64 a5, char a6)
{
  unsigned int v8; // r13d
  ULONG64 v9; // rax
  int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _WORD *v14; // rdi
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+48h] [rbp-60h] BYREF
  void (*v22)(void *); // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+70h] [rbp-38h]

  v8 = a2;
  PtiCurrent(a1, a2);
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  v9 = (ULONG64)a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v23 = *(_QWORD *)(v9 + 16);
  v10 = *(_DWORD *)v9;
  if ( (unsigned __int16)*(_DWORD *)v9 >= 0x18u )
  {
    v14 = (_WORD *)Win32AllocPoolWithQuotaZInit((unsigned __int16)v10, 1818784597LL);
    if ( !v14 )
      ExRaiseStatus(-1073741801);
    if ( v22 != (void (*)(void *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v13, v12);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v14, (ULONG_PTR)BugCheckParameter4);
    }
    v16 = PtiCurrent(v13, v12);
    BugCheckParameter2[0] = *((_QWORD *)v16 + 48);
    *((_QWORD *)v16 + 48) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v14;
    v22 = Win32FreePool;
    memmove(v14, a4, (unsigned __int16)v10);
    *v14 = v10;
    UserSessionState = W32GetUserSessionState(v18, v17);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _WORD *, __int64))(UserSessionState
                                                                                + 8LL * ((a6 + 6) & 0x1F)
                                                                                + 70920))(
            a1,
            v8,
            a3,
            v14,
            a5);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    v11 = 0LL;
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  return v11;
}
