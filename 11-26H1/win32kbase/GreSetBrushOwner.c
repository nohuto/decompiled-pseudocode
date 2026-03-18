/*
 * XREFs of GreSetBrushOwner @ 0x140035090
 * Callers:
 *     SetSysColor @ 0x14003405C (SetSysColor.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgAllocateObjectAttr @ 0x14000DAE0 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x14000E3A0 (HmgFreeObjectAttr.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     GreSetBitmapOwner @ 0x140026C00 (GreSetBitmapOwner.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140033CE0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400346C8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1400C5A0C (HmgIncProcessHandleCount.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1400E59F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1400FEB6C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x140102E20 (-GreEncodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140168140 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v6; // esi
  _QWORD *ObjectAttr; // r15
  struct OBJECT *v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  BOOL v12; // r14d
  __int64 v13; // rdx
  unsigned int *v14; // rbx
  HSURF v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  _QWORD *v18; // rdx
  _QWORD **v19; // rcx
  _QWORD *v20; // rax
  unsigned int *v21; // rbx
  unsigned int CurrentProcessId; // eax
  char v23; // al
  __int64 v24; // rdx
  int v25; // r8d
  unsigned int *v26; // [rsp+20h] [rbp-98h]
  unsigned int v27[2]; // [rsp+28h] [rbp-90h]
  __int64 v28; // [rsp+40h] [rbp-78h] BYREF
  int v29; // [rsp+48h] [rbp-70h]
  char v30; // [rsp+4Dh] [rbp-6Bh]
  HSEMAPHORE v31[9]; // [rsp+70h] [rbp-48h] BYREF
  __int16 v32; // [rsp+C2h] [rbp+Ah]

  v32 = WORD1(a1);
  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v28, a1);
  if ( v28 && (*(_DWORD *)(v28 + 40) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v28);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v28);
  v6 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  v26 = *(unsigned int **)(W32GetSessionState(v5) + 88);
  SEMOBJ<20>::SEMOBJ<20>(v31, v26);
  HANDLELOCK::HANDLELOCK(&v28, v26, v3, 1);
  if ( v29 )
  {
    v8 = HANDLELOCK::pObj((HANDLELOCK *)&v28);
    v9 = v28;
    if ( *(_BYTE *)(v28 + 14) != 16
      || *(_WORD *)(v28 + 12) != v32
      || *((_WORD *)v8 + 6) && *((struct _KTHREAD **)v8 + 2) != KeGetCurrentThread() )
    {
      goto LABEL_42;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v17 = *(_DWORD *)(v28 + 8) & 0xFFFFFFFE;
      if ( v17 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v18 = (_QWORD *)((char *)v8 + 72);
        v19 = (_QWORD **)((char *)v8 + 48);
        v20 = (_QWORD *)*((_QWORD *)v8 + 6);
        if ( v20 == (_QWORD *)((char *)v8 + 72) )
        {
          v21 = v26;
        }
        else
        {
          *v18 = *v20;
          v21 = v26;
          ObjectAttr = *v19;
          *v19 = v18;
          *(_QWORD *)(v28 + 16) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v28, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(v21, CurrentProcessId & 0xFFFFFFFC);
        v6 = 1;
      }
      else
      {
        if ( (*(_DWORD *)(v28 + 8) & 0xFFFFFFFE) == 0x80000012 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v28, a2);
          v6 = 1;
        }
        if ( !v6 )
          goto LABEL_42;
      }
      if ( !a2 )
      {
        v15 = (HSURF)*((_QWORD *)v8 + 3);
        if ( v15 )
        {
          v16 = 0LL;
          goto LABEL_41;
        }
      }
LABEL_42:
      v23 = v30;
      if ( !v6 )
        v23 = 1;
      v30 = v23;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
      goto LABEL_45;
    }
    if ( a2 != -2147483646 )
      goto LABEL_42;
    v10 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_QWORD *)v27 = v10;
    v11 = *(_DWORD *)(v9 + 8) & 0xFFFFFFFE;
    if ( v11 != (_DWORD)v10 && v11 != -2147483630 && v11 )
      goto LABEL_42;
    v12 = 0;
    v6 = 1;
    if ( v11 != (_DWORD)v10 )
    {
      v6 = HmgIncProcessHandleCount((unsigned int)v10);
      v12 = v6 != 0;
    }
    if ( v6 && !*(_QWORD *)(v9 + 16) )
    {
      if ( ObjectAttr )
      {
        *((_QWORD *)v8 + 6) = ObjectAttr;
        *(_QWORD *)(v9 + 16) = GreEncodeUserModePointer(ObjectAttr);
        *ObjectAttr = *((_QWORD *)v8 + 9);
        v13 = *(_QWORD *)v27;
        v14 = v26;
        ObjectAttr = 0LL;
        goto LABEL_25;
      }
      v6 = 0;
    }
    v13 = *(_QWORD *)v27;
    v14 = v26;
LABEL_25:
    if ( !v6 )
    {
      if ( v12 )
        HmgDecProcessHandleCount(v14, v13);
      goto LABEL_42;
    }
    HANDLELOCK::Pid((HANDLELOCK *)&v28, v13);
    v15 = (HSURF)*((_QWORD *)v8 + 3);
    if ( v15 )
    {
      v16 = 2147483650LL;
LABEL_41:
      GreSetBitmapOwner(v15, v16);
      goto LABEL_42;
    }
    goto LABEL_42;
  }
LABEL_45:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v28);
  SEMOBJ<20>::vUnlock(v31, v24, v25);
  if ( ObjectAttr )
    HmgFreeObjectAttr((__int64)ObjectAttr);
  return v6;
}
