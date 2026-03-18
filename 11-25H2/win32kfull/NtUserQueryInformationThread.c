/*
 * XREFs of NtUserQueryInformationThread @ 0x14002C490
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     xxxQueryInformationThread @ 0x14002C784 (xxxQueryInformationThread.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  size_t v4; // rsi
  __int64 v7; // rbx
  _BYTE *v8; // rbx
  ULONG_PTR v9; // rbx
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  unsigned int InformationThread; // edi
  _BYTE *Src; // [rsp+38h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-A8h] BYREF
  void (*v17)(void *); // [rsp+50h] [rbp-98h]
  _BYTE v18[64]; // [rsp+70h] [rbp-78h] BYREF

  v4 = a4;
  memset_0(v18, 0, sizeof(v18));
  EnterCrit(0LL, 0LL);
  v7 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( PsGetCurrentProcess() == v7 )
  {
    PtiCurrent();
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v9 = Win32AllocPoolWithQuotaZInit(v4, 1230271317LL);
        Src = (_BYTE *)v9;
        if ( !v9 )
          ExRaiseStatus(-1073741801);
        if ( v17 != (void (*)(void *))-1LL )
        {
          BugCheckParameter4 = PtiCurrent();
          KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v9, (ULONG_PTR)BugCheckParameter4);
        }
        v10 = PtiCurrent();
        BugCheckParameter2[0] = *((_QWORD *)v10 + 48);
        *((_QWORD *)v10 + 48) = BugCheckParameter2;
        BugCheckParameter2[1] = v9;
        v17 = Win32FreePool;
      }
      else
      {
        Src = v18;
      }
      v8 = Src;
      memmove(Src, (const void *)a3, v4);
    }
    else
    {
      v8 = 0LL;
      Src = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v8, (unsigned int)v4);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, Src, v4);
    }
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit();
  return InformationThread;
}
