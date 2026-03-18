/*
 * XREFs of VerifierEngAllocMem @ 0x140331E60
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0BN@@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x140331CB8 (--0-$SEMOBJ@$0BN@@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x140331D44 (-VerifierRandomFailure@@YAHK@Z.c)
 */

__int64 __fastcall VerifierEngAllocMem(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  char v5; // di
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // rcx
  HSEMAPHORE v15; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v17; // rax
  bool v18; // zf
  HSEMAPHORE v20; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = (unsigned int)a2;
  v7 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( (unsigned int)VerifierRandomFailure(v9, v8) || !v4 )
    return 0LL;
  if ( (*(_DWORD *)(v7 + 4768) & 8) != 0 )
  {
    if ( v4 > 0xFFFFFFDF )
      return 0LL;
    v4 += 32;
  }
  if ( v4 > 0xFFFFFFDF )
    return 0LL;
  v10 = v4 + 32;
  if ( v10 >= 0x2710000 )
    return 0LL;
  v11 = (-(__int64)((v5 & 2) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  if ( (v5 & 1) != 0 )
    v12 = Win32AllocPoolWithPriorityZInit(v11, v10, a3, 40LL);
  else
    v12 = Win32AllocPoolWithPriority(v11, v10, a3, 40LL);
  v13 = v12;
  if ( v12 )
  {
    MultiUserGreTrackAddEngResource(v12, 2LL);
    v13 += 32LL;
    if ( (*(_DWORD *)(v7 + 4768) & 8) != 0 )
    {
      *(_QWORD *)(v13 + 16) = v6;
      *(_DWORD *)(v13 + 24) = a3;
      SEMOBJ<29>::SEMOBJ<29>(&v20, v7);
      v14 = *(__int64 **)(v7 + 4808);
      if ( *v14 != v7 + 4800 )
        __fastfail(3u);
      v15 = v20;
      *(_QWORD *)v13 = v7 + 4800;
      *(_QWORD *)(v13 + 8) = v14;
      *v14 = v13;
      *(_QWORD *)(v7 + 4808) = v13;
      if ( v15 )
      {
        GlobalLockName = GrepGetGlobalLockName(29);
        EtwTraceGreLockReleaseSemaphore(GlobalLockName, v15);
        v17 = GreGetCurrentThreadCrossSessionCheck();
        if ( v17 )
        {
          v18 = (*(_QWORD *)v17 & 0xFFFFFFFFDFFFFFFFuLL) == 0;
          *(_QWORD *)v17 &= ~0x20000000uLL;
          if ( v18 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v15);
      }
      v13 += 32LL;
    }
  }
  return v13;
}
