/*
 * XREFs of ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14012F720
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z @ 0x14012F860 (-InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14012FAE4 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?InputSpace@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE@@K_N@Z @ 0x14012FED4 (-InputSpace@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE@@K_N@Z.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

void __fastcall InputConfig::TraceCurrentConfig(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD **v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  _QWORD **v8; // rcx
  _QWORD *i; // rdi
  _QWORD **v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *j; // rbx
  const struct INPUT_SPACE_REGION *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  tagDomLock *v19; // [rsp+20h] [rbp-48h] BYREF
  tagDomLock *v20; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18632) )
  {
    v4 = *(_QWORD ***)(W32GetUserSessionState(v3, v2) + 18632);
    UserSessionState = W32GetUserSessionState(v6, v5);
    CEResourceLockShared::CEResourceLockShared(
      (CEResourceLockShared *)&v20,
      (struct CEResourceLock *)(UserSessionState + 18640));
    v8 = (_QWORD **)*v4;
    for ( i = (_QWORD *)**v4; ; i = (_QWORD *)*i )
    {
      v10 = 0LL;
      if ( v8 != v4 )
        v10 = v8 + 2;
      if ( !v10 )
        break;
      InputTraceLogging::InputConfig::InputSpace(
        (const struct INPUT_SPACE *)v10,
        *((_DWORD *)v10 + 363),
        *((_BYTE *)v10 + 1448));
      v11 = v10 + 182;
      v14 = W32GetUserSessionState(v13, v12);
      CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v19, (struct CEResourceLock *)(v14 + 18640));
      for ( j = v10[182]; ; j = (_QWORD *)*j )
      {
        v16 = 0LL;
        if ( j != v11 )
          v16 = (const struct INPUT_SPACE_REGION *)(j + 2);
        if ( !v16 )
          break;
        InputTraceLogging::InputConfig::InputSpaceRegion(v16);
        v17 = 488LL;
        if ( j != v11 )
          v17 = (__int64)(j + 63);
        if ( *(_BYTE *)v17 )
        {
          v18 = 496LL;
          if ( j != v11 )
            v18 = (__int64)(j + 64);
          InputTraceLogging::InputConfig::DisplayPath((const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v18);
        }
      }
      tagDomLock::UnLockExclusive((PERESOURCE *)v19);
      v8 = (_QWORD **)i;
    }
    tagDomLock::UnLockExclusive((PERESOURCE *)v20);
  }
}
