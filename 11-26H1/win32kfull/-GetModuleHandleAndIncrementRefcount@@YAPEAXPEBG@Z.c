/*
 * XREFs of ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x14031BD5C
 * Callers:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x14031BE44 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14031BD24 (--0-$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 *__fastcall GetModuleHandleAndIncrementRefcount(wchar_t *Str1)
{
  __int64 *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  __int64 **v4; // rsi
  __int64 *i; // rbx
  HSEMAPHORE v6; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  HSEMAPHORE v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = Gre::Base::Globals((Gre::Base *)Str1);
  v4 = (__int64 **)((char *)v3 + 3136);
  SEMOBJ<27>::SEMOBJ<27>(&v11, v3);
  for ( i = *v4; i != (__int64 *)v4 && !v2; i = (__int64 *)*i )
  {
    if ( !_wcsicmp(Str1, (const wchar_t *)((char *)i - *((unsigned int *)i + 5) + 24)) )
    {
      ++*((_DWORD *)i + 4);
      v2 = i + 3;
    }
  }
  v6 = v11;
  if ( v11 )
  {
    GlobalLockName = GrepGetGlobalLockName(27);
    EtwTraceGreLockReleaseSemaphore(GlobalLockName, v6);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      v9 = (*(_QWORD *)v8 & 0xFFFFFFFFF7FFFFFFuLL) == 0;
      *(_QWORD *)v8 &= ~0x8000000uLL;
      if ( v9 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v6);
  }
  return v2;
}
