/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x14016B80C
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x14016B920 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14016B8E8 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x14016BE78 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1401B76E0 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1401B7AF8 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpStart(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  struct _CIT_IMPACT_CONTEXT *v5; // rax
  const char *v6; // rdx
  struct _CIT_IMPACT_CONTEXT *v7; // rdi
  int v8; // ebp
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v3 = 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18952);
  if ( *(_BYTE *)(v4 + 1) )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v5 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPoolZInitImpl(256LL, 0x138uLL, 0x49637355u);
    v7 = v5;
    if ( v5 )
    {
      CitpContextInitialize(v5);
      v8 = CitpContextTrackingDataStart(v7);
      if ( v8 < 0 )
      {
        CitpContextCleanup(v7);
        GreDeleteFastMutex((char *)v7, v10, v11, v12);
        return (unsigned int)v8;
      }
      else
      {
        v9 = MEMORY[0xFFFFF780000002C4];
        if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
          v9 = -1;
        *((_WORD *)v7 + 58) = v9;
        *(_QWORD *)(v4 + 32) = v7;
      }
    }
    else
    {
      v3 = -1073741670;
      CitpLogFailureWorker(-1073741670, v6, 0x98u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
