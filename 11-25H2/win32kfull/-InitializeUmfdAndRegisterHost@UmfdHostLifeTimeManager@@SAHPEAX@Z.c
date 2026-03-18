/*
 * XREFs of ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x14020C2AC
 * Callers:
 *     ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x14022EA14 (-UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?Create@?$CSortedVector@_K_K@NSInstrumentation@@SAPEAV12@XZ @ 0x14010B73C (-Create@-$CSortedVector@_K_K@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x14020C454 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x14022BC88 (-UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x14026AE4C (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(HANDLE Handle, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 SessionState; // rax
  __int64 v5; // rdx
  int v6; // ecx
  struct W32_PUSH_LOCK *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  struct W32_PUSH_LOCK *v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  _QWORD *v15; // rax
  NTSTATUS v16; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  SessionState = W32GetSessionState((_DWORD)Handle, a2);
  v7 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24248LL);
  if ( *(_QWORD *)(SessionState + 96) != -24248LL )
    GreAcquirePushLockExclusive(v7);
  v8 = *(_QWORD *)(W32GetSessionState(v6, v5) + 96) + 4872LL;
  v11 = W32GetSessionState(v10, v9);
  v12 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(v11 + 96) + 24256LL);
  if ( *(_QWORD *)(v11 + 96) != -24256LL )
    GreAcquirePushLockExclusive(v12);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  if ( Handle )
  {
    v15 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Create();
    *(_QWORD *)(v8 + 19296) = v15;
    if ( v15
      && (Object = 0LL,
          v16 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL),
          *(_QWORD *)(v8 + 19320) = Object,
          v16 >= 0) )
    {
      v3 = 1;
      *(_WORD *)(v8 + 19416) = 257;
      ++*(_QWORD *)(v8 + 19312);
    }
    else
    {
      UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
      *(_QWORD *)(v8 + 19320) = 0LL;
    }
  }
  else if ( !*(_BYTE *)(*(_QWORD *)(W32GetSessionState(v14, v13) + 96) + 24290LL) )
  {
    KeSetEvent(*(PRKEVENT *)(v8 + 19352), 0, 0);
    UmfdPostWinLogonMessage((struct Gre::Font::GLOBALS *)v8, 3u, 4LL);
  }
  KeSetEvent(*(PRKEVENT *)(v8 + 19344), 0, 0);
  if ( v12 )
    GreReleasePushLockExclusive(v12);
  if ( v7 )
    GreReleasePushLockExclusive(v7);
  return v3;
}
