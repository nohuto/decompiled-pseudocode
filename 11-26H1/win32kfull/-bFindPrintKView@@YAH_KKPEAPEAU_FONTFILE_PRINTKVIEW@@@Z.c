/*
 * XREFs of ?bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x140327CB8
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x140327EBC (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140215EE4 (--0-$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

__int64 __fastcall bFindPrintKView(__int64 a1, __int64 a2, struct _FONTFILE_PRINTKVIEW **a3)
{
  int v4; // esi
  __int64 v6; // rbx
  __int64 i; // rax
  HSEMAPHORE v8; // rbx
  struct _GRETHREAD *v9; // rax
  bool v10; // zf
  HSEMAPHORE v12; // rbx
  struct _GRETHREAD *v13; // rax
  HSEMAPHORE v14; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = a2;
  v6 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<23>::SEMOBJ<23>(&v14, v6 + 4864);
  for ( i = *(_QWORD *)(v6 + 24008); i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_QWORD *)i == a1 && *(_DWORD *)(i + 8) == v4 )
    {
      v8 = v14;
      *a3 = (struct _FONTFILE_PRINTKVIEW *)i;
      if ( v8 )
      {
        EtwTraceGreLockReleaseSemaphore(L"PrintKView", v8);
        v9 = GreGetCurrentThreadCrossSessionCheck();
        if ( v9 )
        {
          v10 = (*(_QWORD *)v9 & 0xFFFFFFFFFF7FFFFFuLL) == 0;
          *(_QWORD *)v9 &= ~0x800000uLL;
          if ( v10 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v8);
      }
      return 1LL;
    }
  }
  v12 = v14;
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PrintKView", v14);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      v10 = (*(_QWORD *)v13 & 0xFFFFFFFFFF7FFFFFuLL) == 0;
      *(_QWORD *)v13 &= ~0x800000uLL;
      if ( v10 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v12);
  }
  return 0LL;
}
