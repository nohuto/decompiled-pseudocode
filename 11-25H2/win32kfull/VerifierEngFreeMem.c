/*
 * XREFs of VerifierEngFreeMem @ 0x140332360
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0BN@@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x140331CB8 (--0-$SEMOBJ@$0BN@@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 */

void __fastcall VerifierEngFreeMem(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  HSEMAPHORE v6; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  HSEMAPHORE v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = a1;
    v3 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
    if ( (*(_DWORD *)(v3 + 4768) & 8) != 0 )
    {
      v2 -= 4;
      SEMOBJ<29>::SEMOBJ<29>(&v10, v3);
      v4 = *v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v5 = (_QWORD *)v2[1], (_QWORD *)*v5 != v2) )
        __fastfail(3u);
      v6 = v10;
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      if ( v6 )
      {
        GlobalLockName = GrepGetGlobalLockName(29);
        EtwTraceGreLockReleaseSemaphore(GlobalLockName, v6);
        v8 = GreGetCurrentThreadCrossSessionCheck();
        if ( v8 )
        {
          v9 = (*(_QWORD *)v8 & 0xFFFFFFFFDFFFFFFFuLL) == 0;
          *(_QWORD *)v8 &= ~0x20000000uLL;
          if ( v9 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v6);
      }
    }
    MultiUserGreTrackRemoveEngResource(v2 - 4);
    Win32FreePool(v2 - 4);
  }
}
