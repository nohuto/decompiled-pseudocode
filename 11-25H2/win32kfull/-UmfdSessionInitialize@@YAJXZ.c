/*
 * XREFs of ?UmfdSessionInitialize@@YAJXZ @ 0x14010B620
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x14010B930 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x14010B0E4 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Create@?$CSortedVector@_K_K@NSInstrumentation@@SAPEAV12@XZ @ 0x14010B73C (-Create@-$CSortedVector@_K_K@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?AllocateSessionGlobalsArea@Umfd@Gre@@YA_NXZ @ 0x14010B7D0 (-AllocateSessionGlobalsArea@Umfd@Gre@@YA_NXZ.c)
 *     ?Create@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@SAPEAV12@XZ @ 0x140268478 (-Create@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@SAPEA.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x14026CB58 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x14026D794 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x14026DCC0 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 *     bEnableFontDriver @ 0x14026DE20 (bEnableFontDriver.c)
 */

__int64 __fastcall UmfdSessionInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  Gre::Umfd *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct NSInstrumentation::CPointerHashTable **v14; // rbx
  bool v15; // cl
  struct NSInstrumentation::CPointerHashTable *v16; // rax
  struct NSInstrumentation::CPointerHashTable *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( !Gre::Umfd::AllocateSessionGlobalsArea(v4) )
    return 3221225473LL;
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v3 + 24248));
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v3 + 24144));
  v5 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Create();
  *(_QWORD *)(v3 + 24176) = v5;
  if ( !v5 )
    return 3221225473LL;
  if ( !(unsigned int)bEnableFontDriver(UmfdEnableDriver, 5LL) )
    return 3221225473LL;
  if ( !UmfdHostLifeTimeManager::SessionInitialize() )
    return 3221225473LL;
  v9 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
  v10 = NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::Create();
  *(_QWORD *)(v9 + 24296) = v10;
  if ( !v10 )
    return 3221225473LL;
  v14 = *(struct NSInstrumentation::CPointerHashTable ***)(W32GetSessionState(v12, v11, v13) + 104);
  v16 = NSInstrumentation::CPointerHashTable::Create(v15);
  *v14 = v16;
  if ( !v16 )
    return 3221225473LL;
  v17 = (struct NSInstrumentation::CPointerHashTable *)EngAllocMem(0, 8u, 0x61646647u);
  v14[1] = v17;
  if ( !v17 )
  {
    UmfdAllocation::Uninitialize();
    return 3221225473LL;
  }
  *(_QWORD *)v17 = 0LL;
  if ( (int)UmfdCallSessionInitialize(v19, v18, v20) < 0 )
    return 3221225473LL;
  v25 = *(_QWORD *)(W32GetSessionState(v23, v22, v24) + 104);
  result = 0LL;
  *(_DWORD *)(v25 + 80) = 1;
  return result;
}
