/*
 * XREFs of xxxFreeDdeConv @ 0x1402B2CE4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x140255BA4 (xxxDDETrackGetMessageHook.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402B1DA8 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1402B2A70 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackWindowDying @ 0x1402B2AA4 (xxxDDETrackWindowDying.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401B3FF8 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402B16B4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402B183C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

struct tagDDECONV *__fastcall xxxFreeDdeConv(struct tagDDECONV *a1, __int64 a2)
{
  struct tagDDECONV *v2; // rbx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a1;
  if ( !a1 )
    return 0LL;
  if ( (*((_DWORD *)a1 + 20) & 2) == 0 && (*(_BYTE *)(_HMPheFromObject(*((_QWORD *)a1 + 6)) + 25) & 1) == 0 )
  {
    v4 = PtiCurrent(v3, a2);
    Win32HM_LockIntoThread<1>((__int64)v4, (__int64)v2, (__int64 *)BugCheckParameter3);
    v5 = (unsigned __int64 *)*((_QWORD *)v2 + 5);
    if ( v5 )
      v6 = *v5;
    else
      v6 = 0LL;
    _PostTransformableMessageExtended(*((struct tagWND **)v2 + 6), 0x3E1u, v6, 0LL, 0LL, 1);
    v2 = (struct tagDDECONV *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v7);
    if ( !v2 )
    {
      Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(BugCheckParameter3, v8);
      return 0LL;
    }
    Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(BugCheckParameter3, v8);
  }
  if ( *((_QWORD *)v2 + 4)
    && (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v2 + 2) + 528LL), 0, 0) & 1) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)v2 + 4) + 80LL) |= 2u;
  }
  UnlinkConv(v2, a2);
  v9 = *((_QWORD *)v2 + 11);
  if ( v9 )
  {
    --*(_WORD *)(v9 + 90);
    v10 = *((_QWORD *)v2 + 11);
    if ( !*(_WORD *)(v10 + 90) && !*(_WORD *)(v10 + 88) )
    {
      SeDeleteClientSecurity(v10 + 16);
      Win32FreePool(*((void **)v2 + 11));
    }
    *((_QWORD *)v2 + 11) = 0LL;
  }
  HMAssignmentUnlock((char *)v2 + 32);
  HMAssignmentUnlock((char *)v2 + 48);
  HMAssignmentUnlock((char *)v2 + 40);
  if ( !(unsigned int)HMMarkObjectDestroy(v2) )
    return v2;
  while ( *((_QWORD *)v2 + 7) )
    PopState(v2, v11);
  HMFreeObject(v2);
  return 0LL;
}
