/*
 * XREFs of ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14002CC5C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     DesktopAlloc @ 0x1400497B0 (DesktopAlloc.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140049CB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     CreateInputContext @ 0x1401BCCC0 (CreateInputContext.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x140285E98 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

struct tagWND *__fastcall xxxCreateDefaultImeWindow(struct tagWND *a1, __int16 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rsi
  int v9; // r12d
  __int64 v10; // rdx
  PVOID *v11; // rbx
  PVOID *v12; // r15
  __int64 v13; // rax
  _WORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 UserSessionState; // rax
  struct tagWND *Window; // rbx
  _BYTE *v26; // rdx
  HANDLE v28; // rbx
  struct tagWND *v29; // [rsp+90h] [rbp-A8h]
  ULONG64 *v30; // [rsp+98h] [rbp-A0h]
  int v31; // [rsp+A0h] [rbp-98h] BYREF
  int v32; // [rsp+A4h] [rbp-94h]
  __int64 v33; // [rsp+A8h] [rbp-90h]
  __int64 v34; // [rsp+B0h] [rbp-88h]
  _QWORD *v35; // [rsp+B8h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v37[3]; // [rsp+D8h] [rbp-60h] BYREF
  _QWORD v38[4]; // [rsp+F0h] [rbp-48h] BYREF
  ULONG64 v39; // [rsp+158h] [rbp+20h]

  v32 = 0;
  v8 = PtiCurrent();
  if ( !*((_QWORD *)v8 + 104) )
  {
    v28 = *(HANDLE *)(W32GetUserSessionState(v7, v6) + 63544);
    if ( PsGetThreadProcessId(*(PETHREAD *)v8) == v28 )
      CreateInputContext(0LL);
  }
  if ( !*((_QWORD *)v8 + 104) )
    return 0LL;
  if ( a2 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872) + 898LL) )
    return 0LL;
  v9 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v10 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL) + 464LL) != *((_QWORD *)v8 + 58)
    && (*(_DWORD *)(v10 + 28) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v11 = (PVOID *)*((_QWORD *)v8 + 62);
  v12 = v11 + 17;
  v35 = v11 + 17;
  if ( !v11[17] )
    return 0LL;
  v13 = DesktopAlloc(v11, 24LL, 9LL);
  v14 = (_WORD *)v13;
  v34 = v13;
  if ( !v13 )
    return 0LL;
  *(_OWORD *)v13 = xmmword_140350BF0;
  *(_QWORD *)(v13 + 16) = 0x45004D0049LL;
  v33 = v13;
  v15 = -1LL;
  do
    ++v15;
  while ( v14[v15] );
  v31 = 2 * v15;
  v32 = (2 * v15 + 2) & 0x7FFFFFFF;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v38, v11);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
  if ( !CurrentProcessWin32Process
    || (-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process) == 0 )
  {
    goto LABEL_29;
  }
  v18 = PsGetCurrentProcessWin32Process(-*(_QWORD *)CurrentProcessWin32Process);
  if ( v18 )
    v18 &= -(__int64)(*(_QWORD *)v18 != 0LL);
  if ( !(unsigned int)IsImmersiveAppRestricted(v18) )
LABEL_29:
    v9 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v37, 0LL);
  v21 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19872);
  v22 = *(unsigned __int16 *)(v21 + 898);
  UserSessionState = W32GetUserSessionState(v21, v23);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 898LL),
                              v22,
                              (int)&v31,
                              -2013265920,
                              0,
                              0,
                              0,
                              0,
                              a1,
                              (__int64)v37,
                              a3,
                              0LL,
                              0,
                              1024,
                              v9,
                              0LL);
  v29 = Window;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v37);
  if ( Window )
  {
    v30 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v30 )
      v39 = *v30;
    else
      v39 = 0LL;
    if ( v39 )
    {
      v26 = (_BYTE *)v39;
      if ( (v39 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v39 >= MmUserProbeAddress )
        v26 = (_BYTE *)MmUserProbeAddress;
      *v26 = *v26;
      v26[55] = v26[55];
      *(_DWORD *)(v39 + 44) |= 8u;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40
        && *(struct tagTHREADINFO **)(*((_QWORD *)a1 + 13) + 16LL) != v8 )
      {
        *(_DWORD *)(v39 + 44) |= 0x10u;
      }
    }
    else
    {
      xxxDestroyWindow(Window);
      v29 = 0LL;
    }
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  RtlFreeHeap(*v12, 0, v14);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v38);
  return v29;
}
