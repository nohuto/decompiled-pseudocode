/*
 * XREFs of xxxSetClassIcon @ 0x1402262F0
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1400C2F84 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxInternalEnumWindow @ 0x14006337C (xxxInternalEnumWindow.c)
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     xxxCreateClassSmIcon @ 0x140069574 (xxxCreateClassSmIcon.c)
 *     DestroyClassSmIcon @ 0x1400B3A20 (DestroyClassSmIcon.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAU_HEAD@@@Z @ 0x1401CC384 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401E47E0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 **a2, __int64 *a3, int a4)
{
  struct tagTHREADINFO *v8; // r13
  __int64 *result; // rax
  BOOL v10; // ebp
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF

  v8 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( a4 == -14 )
    result = *(__int64 **)(**a2 + 80);
  else
    result = *(__int64 **)(**a2 + 112);
  if ( result != a3 )
  {
    v10 = 1;
    if ( result )
      v11 = *result;
    else
      v11 = 0LL;
    if ( a4 == -14 )
    {
      if ( *(_QWORD *)(**a2 + 112) )
        v10 = DestroyClassSmIcon(a2) != 0;
      v12 = *a2;
      *((_QWORD *)&v17 + 1) = a3;
      *(_QWORD *)&v17 = *v12 + 80;
      HMAssignmentLock(&v17, 0LL);
    }
    else
    {
      v14 = DestroyClassSmIcon(a2);
      v17 = *(_OWORD *)LockPointer(&v19, **a2 + 112, a3);
      HMAssignmentLock(&v17, 0LL);
      v15 = 0LL;
      if ( !v14 )
        v15 = v11;
      v11 = v15;
    }
    if ( *(_QWORD *)(**a2 + 80) && !*(_QWORD *)(**a2 + 112) )
      xxxCreateClassSmIcon((__int64 *)a2);
    if ( v10 )
    {
      if ( *(int *)(**a2 + 72) <= 1 )
      {
        xxxSetClassIconEnum(a1, **a2);
      }
      else
      {
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
          BugCheckParameter3,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 62) + 8LL) + 24LL) + 112LL));
        xxxInternalEnumWindow(
          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 62) + 8LL) + 24LL) + 112LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          **a2,
          2u);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v16);
      }
    }
    if ( v11 )
    {
      LOBYTE(v13) = 3;
      return (__int64 *)HMValidateHandleNoRip(v11, v13);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
