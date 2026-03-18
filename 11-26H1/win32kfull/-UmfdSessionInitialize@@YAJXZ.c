/*
 * XREFs of ?UmfdSessionInitialize@@YAJXZ @ 0x1401C1238
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140323A20 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     ?Create@?$CSortedVector@_K_K@NSInstrumentation@@SAPEAV12@XZ @ 0x1401C1358 (-Create@-$CSortedVector@_K_K@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?AllocateSessionGlobalsArea@Umfd@Gre@@YA_NXZ @ 0x1401C13F4 (-AllocateSessionGlobalsArea@Umfd@Gre@@YA_NXZ.c)
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1401C1630 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Create@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@SAPEAV12@XZ @ 0x14028BB24 (-Create@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@SAPEA.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1402943E8 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x140294FA4 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x140295404 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 *     ?GrepEnableFontDriver@@YA_NP6A_JXZK@Z @ 0x14029569C (-GrepEnableFontDriver@@YA_NP6A_JXZK@Z.c)
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
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( !Gre::Umfd::AllocateSessionGlobalsArea(v4) )
    return 3221225473LL;
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v3 + 24232));
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v3 + 24128));
  v5 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Create();
  *(_QWORD *)(v3 + 24160) = v5;
  if ( !v5 )
    return 3221225473LL;
  if ( !GrepEnableFontDriver(UmfdEnableDriver, 5u) )
    return 3221225473LL;
  if ( !UmfdHostLifeTimeManager::SessionInitialize() )
    return 3221225473LL;
  v9 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
  v10 = NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::Create();
  *(_QWORD *)(v9 + 24280) = v10;
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
  if ( (int)UmfdCallSessionInitialize() < 0 )
    return 3221225473LL;
  v22 = *(_QWORD *)(W32GetSessionState(v20, v19, v21) + 104);
  result = 0LL;
  *(_DWORD *)(v22 + 80) = 1;
  return result;
}
