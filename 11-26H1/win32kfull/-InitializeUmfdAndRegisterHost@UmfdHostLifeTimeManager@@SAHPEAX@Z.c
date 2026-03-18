/*
 * XREFs of ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1402256F8
 * Callers:
 *     ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x1402254BC (-UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1402258B0 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x140225918 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?Create@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ @ 0x140225960 (-Create@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x140265BBC (-UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(HANDLE Handle, __int64 a2)
{
  unsigned int v3; // edi
  __int64 SessionState; // rax
  __int64 v5; // rdx
  int v6; // ecx
  struct W32_PUSH_LOCK *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  struct W32_PUSH_LOCK *v12; // rbp
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  SessionState = W32GetSessionState((_DWORD)Handle, a2);
  v7 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24232LL);
  if ( *(_QWORD *)(SessionState + 96) != -24232LL )
    GreAcquirePushLockExclusive(v7);
  v8 = *(_QWORD *)(W32GetSessionState(v6, v5) + 96) + 4864LL;
  v11 = W32GetSessionState(v10, v9);
  v12 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(v11 + 96) + 24240LL);
  if ( *(_QWORD *)(v11 + 96) != -24240LL )
    GreAcquirePushLockExclusive(v12);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  if ( Handle )
  {
    v16 = NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Create();
    *(_QWORD *)(v8 + 19288) = v16;
    if ( v16
      && (Object = 0LL,
          v17 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL),
          *(_QWORD *)(v8 + 19312) = Object,
          v17 >= 0) )
    {
      v3 = 1;
      *(_WORD *)(v8 + 19408) = 257;
      ++*(_QWORD *)(v8 + 19304);
    }
    else
    {
      UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
      *(_QWORD *)(v8 + 19312) = 0LL;
    }
  }
  else if ( !*(_BYTE *)(*(_QWORD *)(W32GetSessionState(v14, v13) + 96) + 24274LL) )
  {
    KeSetEvent(*(PRKEVENT *)(v8 + 19344), 0, 0);
    UmfdPostWinLogonMessage((struct Gre::Font::GLOBALS *)v8, 3u, 4LL);
  }
  KeSetEvent(*(PRKEVENT *)(v8 + 19336), 0, 0);
  if ( v12 )
    GreReleasePushLockExclusive(v12);
  if ( v7 )
    GreReleasePushLockExclusive(v7);
  return v3;
}
