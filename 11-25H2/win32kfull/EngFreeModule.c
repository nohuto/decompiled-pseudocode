/*
 * XREFs of EngFreeModule @ 0x140304590
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140229BB0 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     ??0?$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140304244 (--0-$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __stdcall EngFreeModule(HANDLE h)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  char *v3; // rsi
  bool v4; // zf
  int v5; // ebp
  __int64 v6; // rcx
  char **v7; // rax
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v9; // rax
  HSEMAPHORE v10; // [rsp+30h] [rbp+8h] BYREF

  if ( h )
  {
    v2 = Gre::Base::Globals((Gre::Base *)h);
    v3 = (char *)h - 24;
    SEMOBJ<27>::SEMOBJ<27>(&v10, v2);
    v4 = (*((_DWORD *)h - 2))-- == 1;
    v5 = *((_DWORD *)h - 2);
    if ( v4 )
    {
      v6 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = (char **)*((_QWORD *)v3 + 1), *v7 != v3) )
        __fastfail(3u);
      *v7 = (char *)v6;
      *(_QWORD *)(v6 + 8) = v7;
    }
    if ( v10 )
    {
      GlobalLockName = GrepGetGlobalLockName(27);
      EtwTraceGreLockReleaseSemaphore(GlobalLockName, v10);
      v9 = GreGetCurrentThreadCrossSessionCheck();
      if ( v9 )
      {
        v4 = (*(_QWORD *)v9 & 0xFFFFFFFFF7FFFFFFuLL) == 0;
        *(_QWORD *)v9 &= ~0x8000000uLL;
        if ( v4 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v10);
    }
    if ( !v5 )
    {
      vUnmapFile((struct FILEVIEW *)h);
      Win32FreePool((char *)h - *((unsigned int *)v3 + 5));
    }
  }
}
