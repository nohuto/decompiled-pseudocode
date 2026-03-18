/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x14006F750
 * Callers:
 *     <none>
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001A830 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14001B260 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct OBJECT *__fastcall HmgShareUnlockRemoveObject(unsigned int a1, __int16 a2, int a3, int a4, char a5)
{
  __int64 v9; // rcx
  unsigned int *v10; // rdi
  char v11; // si
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int *v18; // [rsp+20h] [rbp-20h] BYREF
  int v19; // [rsp+28h] [rbp-18h]
  __int16 v20; // [rsp+2Ch] [rbp-14h]
  __int64 v21; // [rsp+30h] [rbp-10h]
  HSEMAPHORE v22; // [rsp+70h] [rbp+30h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v22);
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = *(_QWORD *)(W32GetSessionState(v9) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v18, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0);
  if ( !v19 )
    goto LABEL_16;
  v10 = v18;
  v11 = *((_BYTE *)v18 + 14);
  if ( v11 != a5 || *((_WORD *)v18 + 6) != HIWORD(a1) )
  {
    HIBYTE(v20) = 1;
LABEL_15:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
LABEL_16:
    v13 = 0LL;
    goto LABEL_13;
  }
  EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v21 + 5672), *v18);
  v13 = EntryObject;
  if ( v11 == 5 )
  {
    v14 = *((_QWORD *)EntryObject + 85);
    v15 = 0LL;
    goto LABEL_7;
  }
  if ( v11 == 16 )
  {
    v14 = *((_QWORD *)EntryObject + 17);
    v15 = 2LL;
LABEL_7:
    TrackObjectReferenceDecrement(v15, v14);
  }
  v16 = *((_DWORD *)v13 + 2) - 1;
  *((_DWORD *)v13 + 2) = v16;
  if ( v16 != a3 || *((_WORD *)v13 + 6) != a2 || !a4 && (*((_BYTE *)v10 + 15) & 1) != 0 )
    goto LABEL_15;
  HANDLELOCK::vUnlockAndRelease(&v18);
LABEL_13:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v18);
  SEMOBJ<20>::vUnlock(&v22);
  return v13;
}
