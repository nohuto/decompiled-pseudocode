/*
 * XREFs of bPEBCacheHandle @ 0x140016060
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140016520 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x14004A800 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     Feature_Servicing_LockHandleCache_TVS__private_IsEnabledDeviceUsageNoInline @ 0x1401C8160 (Feature_Servicing_LockHandleCache_TVS__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall bPEBCacheHandle(int a1, _DWORD *a2, unsigned int *a3, HANDLELOCK *a4, OBJECT **a5)
{
  unsigned int v7; // esi
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v9; // r14
  GdiHandleManager **v10; // r13
  GdiHandleManager *v11; // rbx
  struct OBJECT *EntryObject; // r12
  __int64 ProcessPeb; // rbx
  int v14; // eax
  struct _NT_TIB *Self; // rcx
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  struct _NT_TIB *v19; // r8
  signed __int32 v21[8]; // [rsp+0h] [rbp-78h] BYREF
  int v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+24h] [rbp-54h]
  struct _NT_TIB *v24; // [rsp+28h] [rbp-50h]
  struct _NT_TIB *v25; // [rsp+30h] [rbp-48h]

  v7 = 0;
  v22 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v9 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v10 = (GdiHandleManager **)(*(_QWORD *)(W32GetSessionState() + 88) + 5672LL);
  v11 = *v10;
  EntryObject = GdiHandleManager::GetEntryObject(*v10, *a3);
  GdiHandleManager::_IncrementOrDecrementUniqueness(v11, EntryObject, 1);
  ProcessPeb = PsGetProcessPeb(*v9);
  if ( ProcessPeb )
  {
    v14 = ((__int64 (*)(void))Feature_Servicing_LockHandleCache_TVS__private_IsEnabledDeviceUsageNoInline)();
    Self = *(struct _NT_TIB **)(ProcessPeb + 320);
    if ( v14 )
      v7 = v22;
    v16 = 0;
    v23 = 0;
    v17 = 1LL;
    if ( !Self )
    {
      Self = KeGetPcr()->NtTib.Self;
      v25 = Self;
      v16 = v23;
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL) )
        v16 = 1;
      v23 = v16;
      v7 = v22;
    }
    if ( v16 )
    {
      v18 = a1;
      v19 = (struct _NT_TIB *)(unsigned int)dword_1402701F8[a1];
      if ( *(_DWORD *)(ProcessPeb + 4LL * a1 + 328) < (unsigned int)v19 )
      {
        Self = (struct _NT_TIB *)(ProcessPeb + 8 * ((unsigned int)dword_1402701E8[a1] + 43LL));
        v24 = Self;
        v19 = (struct _NT_TIB *)((char *)Self + 8 * (_QWORD)v19);
        while ( Self != v19 )
        {
          if ( !Self->ExceptionList )
          {
            Self->ExceptionList = *(struct _EXCEPTION_REGISTRATION_RECORD **)EntryObject;
            ++*(_DWORD *)(ProcessPeb + 4LL * a1 + 328);
            *a2 &= 0xFFFFFFF5;
            *a2 |= 1u;
            _InterlockedOr(v21, 0);
            v7 = 1;
            v22 = 1;
            HANDLELOCK::vUnlock(a4);
            if ( a5 )
            {
              OBJECT::InterlockedDecrementExclusiveLockCount(*a5);
              *a5 = 0LL;
            }
            break;
          }
          Self = (struct _NT_TIB *)((char *)Self + 8);
          v24 = Self;
        }
      }
      Feature_Servicing_LockHandleCache_TVS__private_IsEnabledDeviceUsageNoInline(Self, v18, v19, v17);
      *(_QWORD *)(ProcessPeb + 320) = 0LL;
    }
  }
  if ( !v7 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(*v10, EntryObject, 0);
  return v7;
}
