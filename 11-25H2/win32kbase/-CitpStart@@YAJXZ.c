/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1401329F0
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x140132ACC (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x140132F7C (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14019C554 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14019C85C (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401A17C0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14023FCDC (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

__int64 __fastcall CitpStart(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  struct _CIT_IMPACT_CONTEXT *v4; // rax
  const char *v5; // rdx
  struct _CIT_IMPACT_CONTEXT *v6; // rdi
  int v7; // ebp
  __int16 v8; // ax

  v2 = 0;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  if ( *(_BYTE *)(v3 + 1) )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v4 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPoolZInitImpl(256LL, 0x138uLL, 0x49637355u);
    v6 = v4;
    if ( v4 )
    {
      CitpContextInitialize(v4);
      v7 = CitpContextTrackingDataStart(v6);
      if ( v7 < 0 )
      {
        CitpContextCleanup(v6);
        GreDeleteFastMutex((char *)v6);
        return (unsigned int)v7;
      }
      else
      {
        v8 = MEMORY[0xFFFFF780000002C4];
        if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
          v8 = -1;
        *((_WORD *)v6 + 58) = v8;
        *(_QWORD *)(v3 + 32) = v6;
      }
    }
    else
    {
      v2 = -1073741670;
      CitpLogFailureWorker(-1073741670, v5, 0x98u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
