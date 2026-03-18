/*
 * XREFs of GreSetBrushOwner @ 0x1400711D0
 * Callers:
 *     SetSysColor @ 0x1400AADC8 (SetSysColor.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140018960 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x14003DED8 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140071190 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400715A4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreSetBitmapOwner @ 0x14008CDB0 (GreSetBitmapOwner.c)
 *     HmgFreeObjectAttr @ 0x14008E9D0 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x14008EC40 (HmgAllocateObjectAttr.c)
 *     ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x14008EE10 (-GreEncodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1400D9490 (HmgIncProcessHandleCountEx.c)
 *     HmgDecProcessHandleCount @ 0x140179250 (HmgDecProcessHandleCount.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, int a2)
{
  unsigned int v3; // r12d
  unsigned int v5; // esi
  _QWORD *ObjectAttr; // r15
  unsigned int *v7; // r12
  struct OBJECT *EntryObject; // r13
  unsigned int v9; // ebx
  _QWORD *v10; // rdx
  _QWORD **v11; // rcx
  _QWORD *v12; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v14; // rcx
  char v15; // al
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  BOOL v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int v21[2]; // [rsp+20h] [rbp-98h]
  HSEMAPHORE v22; // [rsp+30h] [rbp-88h] BYREF
  unsigned int *v23; // [rsp+38h] [rbp-80h] BYREF
  int v24; // [rsp+40h] [rbp-78h]
  char v25; // [rsp+45h] [rbp-73h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  _QWORD v27[13]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v28; // [rsp+C2h] [rbp+Ah]

  v28 = WORD1(a1);
  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v27, a1);
  if ( v27[0] && (*(_DWORD *)(v27[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v27);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v27);
  v5 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  SEMOBJ<20>::SEMOBJ<20>(&v22);
  HANDLELOCK::HANDLELOCK((__int64)&v23, v3, 1u);
  if ( v24 )
  {
    v7 = v23;
    EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v26 + 5672), *v23);
    if ( *((_BYTE *)v7 + 14) != 16 || *((_WORD *)v7 + 6) != v28 )
      goto LABEL_19;
    if ( *((_WORD *)EntryObject + 6) )
    {
      if ( *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
        goto LABEL_19;
      v7 = v23;
    }
    if ( a2 != -2147483630 && a2 )
    {
      if ( a2 != -2147483646 )
        goto LABEL_19;
      v16 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
      *(_QWORD *)v21 = v16;
      v17 = v7[2] & 0xFFFFFFFE;
      if ( v17 != (_DWORD)v16 && v17 != -2147483630 && v17 )
        goto LABEL_19;
      v18 = 0;
      v5 = 1;
      if ( v17 != (_DWORD)v16 )
      {
        v5 = HmgIncProcessHandleCountEx((unsigned int)v16, 0LL);
        v18 = v5 != 0;
      }
      if ( v5 && !*((_QWORD *)v7 + 2) )
      {
        if ( ObjectAttr )
        {
          *((_QWORD *)EntryObject + 6) = ObjectAttr;
          *((_QWORD *)v7 + 2) = GreEncodeUserModePointer(ObjectAttr);
          *ObjectAttr = *((_QWORD *)EntryObject + 9);
          v19 = *(_QWORD *)v21;
          ObjectAttr = 0LL;
          goto LABEL_43;
        }
        v5 = 0;
      }
      v19 = *(_QWORD *)v21;
LABEL_43:
      if ( !v5 )
      {
        if ( v18 )
          HmgDecProcessHandleCount(v19);
        goto LABEL_19;
      }
      HANDLELOCK::Pid((HANDLELOCK *)&v23, v19);
      v14 = *((_QWORD *)EntryObject + 3);
      if ( v14 )
      {
        v20 = 2147483650LL;
LABEL_50:
        GreSetBitmapOwner(v14, v20);
      }
LABEL_19:
      v15 = v25;
      if ( !v5 )
        v15 = 1;
      v25 = v15;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
      goto LABEL_22;
    }
    v9 = v7[2] & 0xFFFFFFFE;
    if ( v9 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v10 = (_QWORD *)((char *)EntryObject + 72);
      v11 = (_QWORD **)((char *)EntryObject + 48);
      v12 = (_QWORD *)*((_QWORD *)EntryObject + 6);
      if ( v12 != (_QWORD *)((char *)EntryObject + 72) )
      {
        *v10 = *v12;
        ObjectAttr = *v11;
        *v11 = v10;
        *((_QWORD *)v7 + 2) = 0LL;
      }
      HANDLELOCK::Pid((HANDLELOCK *)&v23, a2);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
    }
    else
    {
      if ( (v7[2] & 0xFFFFFFFE) != 0x80000012 )
      {
LABEL_16:
        if ( !v5 )
          goto LABEL_19;
        if ( a2 )
          goto LABEL_19;
        v14 = *((_QWORD *)EntryObject + 3);
        if ( !v14 )
          goto LABEL_19;
        v20 = 0LL;
        goto LABEL_50;
      }
      HANDLELOCK::Pid((HANDLELOCK *)&v23, a2);
    }
    v5 = 1;
    goto LABEL_16;
  }
LABEL_22:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v23);
  SEMOBJ<20>::vUnlock(&v22);
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v5;
}
