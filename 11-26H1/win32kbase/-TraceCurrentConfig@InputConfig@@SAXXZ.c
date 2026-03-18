/*
 * XREFs of ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14008E5EC
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x14008DB84 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ?InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z @ 0x14008E750 (-InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14008E9DC (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?InputSpace@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE@@K_N@Z @ 0x14008EDB8 (-InputSpace@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE@@K_N@Z.c)
 */

void __fastcall InputConfig::TraceCurrentConfig(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  _QWORD **v6; // r15
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rbp
  _QWORD **v11; // rdx
  _QWORD *i; // rdi
  _QWORD **v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // r14
  _QWORD *v18; // rsi
  _QWORD *j; // rbx
  const struct INPUT_SPACE_REGION *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18680) )
  {
    v6 = *(_QWORD ***)(W32GetUserSessionState(v4, v3, v5) + 18680);
    UserSessionState = W32GetUserSessionState(v8, v7, v9);
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
    v11 = (_QWORD **)*v6;
    for ( i = (_QWORD *)**v6; ; i = (_QWORD *)*i )
    {
      v13 = 0LL;
      if ( v11 != v6 )
        v13 = v11 + 2;
      if ( !v13 )
        break;
      InputTraceLogging::InputConfig::InputSpace(
        (const struct INPUT_SPACE *)v13,
        *((_DWORD *)v13 + 363),
        *((_BYTE *)v13 + 1448));
      v17 = W32GetUserSessionState(v15, v14, v16);
      ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v17 + 18688));
      v18 = v13 + 182;
      for ( j = v13[182]; ; j = (_QWORD *)*j )
      {
        v20 = 0LL;
        if ( j != v18 )
          v20 = (const struct INPUT_SPACE_REGION *)(j + 2);
        if ( !v20 )
          break;
        InputTraceLogging::InputConfig::InputSpaceRegion(v20);
        v21 = 488LL;
        if ( j != v18 )
          v21 = (__int64)(j + 63);
        if ( *(_BYTE *)v21 )
        {
          v22 = 496LL;
          if ( j != v18 )
            v22 = (__int64)(j + 64);
          InputTraceLogging::InputConfig::DisplayPath((const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v22);
        }
      }
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v17 + 18688));
      v11 = (_QWORD **)i;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  }
}
