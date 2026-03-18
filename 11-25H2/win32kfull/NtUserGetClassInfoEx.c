/*
 * XREFs of NtUserGetClassInfoEx @ 0x1402970E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     _GetClassInfoEx @ 0x140034694 (_GetClassInfoEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140128970 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     RegisterDefaultClass @ 0x140240D24 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x140240F54 (RegisterIconTitleClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, unsigned int *a2, _OWORD *a3, _QWORD *a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagTHREADINFO *v11; // r15
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  ULONG64 v15; // rdx
  __int64 v16; // rcx
  wchar_t *v17; // rbx
  unsigned __int64 v18; // rsi
  ULONG_PTR v19; // rax
  void *v20; // rdi
  __int64 v21; // rax
  _BYTE *v22; // rdx
  _DWORD *v23; // rdx
  unsigned __int16 ClassInfo; // ax
  int v26; // [rsp+30h] [rbp-E8h]
  wchar_t *Str1_8; // [rsp+50h] [rbp-C8h]
  _QWORD v28[3]; // [rsp+58h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+90h] [rbp-88h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-78h]
  __int128 v32; // [rsp+B0h] [rbp-68h]
  __int128 v33; // [rsp+C0h] [rbp-58h]
  __int128 v34; // [rsp+D0h] [rbp-48h]

  v28[0] = 0LL;
  memset_0(&v30, 0, 0x50uLL);
  EnterCrit(0LL, 0LL);
  v11 = PtiCurrent(v9, v8);
  v12 = *((_QWORD *)v11 + 58);
  if ( (*(_DWORD *)(v12 + 12) & 0x10000000) != 0 || (unsigned int)RegisterIconTitleClass(v12, v10) )
  {
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    v16 = *a2;
    v26 = *a2;
    v17 = (wchar_t *)*((_QWORD *)a2 + 1);
    Str1_8 = v17;
    if ( ((unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( ((unsigned __int8)v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (ULONG64)v17 + (unsigned __int16)v16 + 2;
      if ( v15 <= (unsigned __int64)v17 || v15 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v16 > HIWORD(v26) || (v16 & 1) != 0 )
      {
        if ( (v16 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10116);
        ExRaiseAccessViolation();
      }
    }
    if ( ((unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v18 = (unsigned __int16)v16;
      v19 = Win32AllocPoolWithQuotaZInit((unsigned __int16)v16 + 2LL, 2020897621LL);
      v20 = (void *)v19;
      Str1_8 = (wchar_t *)v19;
      if ( !v19 )
        ExRaiseStatus(-1073741801);
      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        BugCheckParameter2,
        v19,
        (__int64)Win32FreePool);
      memmove(v20, v17, (unsigned int)v18);
      *((_WORD *)v20 + (v18 >> 1)) = 0;
    }
    v21 = -PsGetCurrentProcessWow64Process(v16, v15);
    v28[2] = (-(__int64)(v21 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
    v22 = a3;
    if ( ((v21 != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v22 = (_BYTE *)MmUserProbeAddress;
    *v22 = *v22;
    v22[79] = v22[79];
    v23 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = *v23;
    v30 = *a3;
    v31 = a3[1];
    v32 = a3[2];
    v33 = a3[3];
    v34 = a3[4];
    if ( (*(_DWORD *)(*((_QWORD *)v11 + 58) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(Str1_8) )
    {
      ClassInfo = GetClassInfoEx(a1, (unsigned __int64)Str1_8, (__int64)&v30, v28, a5);
      v13 = ClassInfo;
      if ( ClassInfo )
      {
        *a3 = v30;
        a3[1] = v31;
        a3[2] = v32;
        a3[3] = v33;
        a3[4] = v34;
        *a4 = v28[0];
      }
    }
    else
    {
      v13 = 0;
      UserSetLastError(87);
    }
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    v13 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v14);
  return v13;
}
