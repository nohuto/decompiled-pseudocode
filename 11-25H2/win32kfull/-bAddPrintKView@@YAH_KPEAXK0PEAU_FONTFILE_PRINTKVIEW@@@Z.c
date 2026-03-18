/*
 * XREFs of ?bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x14030F5A4
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x14030F828 (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1401BD16C (--0-$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

__int64 __fastcall bAddPrintKView(__int64 a1, void *a2, int a3, __int64 a4, struct _FONTFILE_PRINTKVIEW *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  HSEMAPHORE v11; // rbx
  struct _GRETHREAD *v12; // rax
  bool v13; // zf
  HSEMAPHORE v15; // rbx
  struct _GRETHREAD *v16; // rax
  HSEMAPHORE v17; // [rsp+20h] [rbp-18h] BYREF

  v9 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<23>::SEMOBJ<23>(&v17, v9 + 4872);
  if ( a5 )
  {
    *((_QWORD *)a5 + 2) = a2;
LABEL_5:
    v11 = v17;
    if ( v17 )
    {
      EtwTraceGreLockReleaseSemaphore(L"PrintKView", v17);
      v12 = GreGetCurrentThreadCrossSessionCheck();
      if ( v12 )
      {
        v13 = (*(_QWORD *)v12 & 0xFFFFFFFFFF7FFFFFuLL) == 0;
        *(_QWORD *)v12 &= ~0x800000uLL;
        if ( v13 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v11);
    }
    return 1LL;
  }
  v10 = Win32AllocPoolZInit(40LL, 1886221383LL);
  if ( v10 )
  {
    *(_QWORD *)v10 = a1;
    *(_QWORD *)(v10 + 16) = a2;
    *(_DWORD *)(v10 + 8) = a3;
    *(_DWORD *)(v10 + 12) = 1;
    *(_QWORD *)(v10 + 24) = a4;
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(v9 + 24032);
    *(_QWORD *)(v9 + 24032) = v10;
    goto LABEL_5;
  }
  v15 = v17;
  if ( v17 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PrintKView", v17);
    v16 = GreGetCurrentThreadCrossSessionCheck();
    if ( v16 )
    {
      v13 = (*(_QWORD *)v16 & 0xFFFFFFFFFF7FFFFFuLL) == 0;
      *(_QWORD *)v16 &= ~0x800000uLL;
      if ( v13 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v15);
  }
  return 0LL;
}
