/*
 * XREFs of HmgSetOwner @ 0x140026FC0
 * Callers:
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140025D60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     GreSetBitmapOwner @ 0x140026C00 (GreSetBitmapOwner.c)
 *     GreSetPaletteOwner @ 0x1401F25B0 (GreSetPaletteOwner.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1401FB31C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     bInitPALOBJ @ 0x1402F0008 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1402F039C (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402F4AF8 (bInitBrush.c)
 *     bInitICM @ 0x1402F4C30 (bInitICM.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1400C5A0C (HmgIncProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1400FEB6C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  int v7; // esi
  unsigned int *v8; // r12
  __int64 v9; // rcx
  unsigned int *v10; // rbp
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v18; // ebp
  unsigned int *v19; // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+2Dh] [rbp-3Bh]
  __int64 v22; // [rsp+30h] [rbp-38h]
  HSEMAPHORE v23; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(v4) = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v8 = *(unsigned int **)(W32GetSessionState(a1) + 88);
  v23 = (HSEMAPHORE)(*(_QWORD *)v8 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v9, v23);
  HANDLELOCK::HANDLELOCK((__int64 *)&v19, v8, v5, 1);
  if ( v20 )
  {
    v10 = v19;
    if ( *((_BYTE *)v19 + 14) != a3 || *((_WORD *)v19 + 6) != HIWORD(v5) )
      goto LABEL_6;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v22 + 8) + 96LL))(*(_QWORD *)(v22 + 8), *v19);
    CurrentThread = GreGetCurrentThread(v16, v15);
    if ( CurrentThread && *((_QWORD *)CurrentThread + 8) && (_DWORD)v4 )
      v7 = 1;
    if ( !*(_WORD *)(v14 + 12) || *(struct _KTHREAD **)(v14 + 16) == KeGetCurrentThread() || v7 )
    {
      v6 = 1;
      v18 = v10[2] & 0xFFFFFFFE;
      if ( v7 )
        LODWORD(v4) = UMPDGetThreadClientPID(CurrentThread);
      if ( v18 != (_DWORD)v4 )
      {
        v6 = HmgIncProcessHandleCount((unsigned int)v4);
        if ( v6 )
        {
          HmgDecProcessHandleCount(v8, v18);
          HANDLELOCK::Pid((HANDLELOCK *)&v19, v4);
          if ( !(_DWORD)v4 || (_DWORD)v4 == -2147483630 )
          {
            *(_WORD *)(v14 + 14) &= ~0x10u;
          }
          else if ( *(_WORD *)(v14 + 12) || *(_DWORD *)(v14 + 8) )
          {
            *(_WORD *)(v14 + 14) |= 0x10u;
          }
        }
      }
    }
    else
    {
LABEL_6:
      v21 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v19);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v19);
  SEMOBJ<20>::vUnlock(&v23, v11, v12);
  return v6;
}
