/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1401FB31C
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     UserIsCurrentProcessImmersiveAppContainer @ 0x140119700 (UserIsCurrentProcessImmersiveAppContainer.c)
 *     ?set_AppContainerW32PID@SURFACE@@QEAAXK@Z @ 0x1401BBF80 (-set_AppContainerW32PID@SURFACE@@QEAAXK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(__int64 a1)
{
  char v1; // si
  unsigned int v2; // r15d
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  int v9; // r8d
  _BYTE *v10; // rax
  SURFACE *v11; // rax
  unsigned int v12; // ebx
  char v13; // al
  __int64 v14; // rbx
  _BYTE *v15; // r8
  _BYTE *v16; // [rsp+58h] [rbp+38h] BYREF
  HSEMAPHORE v17; // [rsp+60h] [rbp+40h] BYREF

  v1 = a1;
  v16 = 0LL;
  v2 = 0;
  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_DWORD *)(v4 + 3112)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3)) == 0
    || !*(_QWORD *)CurrentProcessWin32Process
    || *(_DWORD *)(CurrentProcessWin32Process + 64)
    || v1 == 5 && (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v6) )
  {
    SEMOBJ<20>::SEMOBJ<20>(&v17);
    v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    while ( 1 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE **))(**(_QWORD **)(v4 + 8) + 32LL))(
             *(_QWORD *)(v4 + 8),
             v2,
             &v16);
      if ( !v2 )
      {
        SEMOBJ<20>::vUnlock(&v17, v8, v9);
        return;
      }
      if ( *(_DWORD *)(v4 + 3112) || v1 != 5 )
        goto LABEL_15;
      v10 = v16;
      if ( v16[14] == 5 && (char)v16[15] < 0 )
        break;
LABEL_16:
      if ( *(_DWORD *)(v4 + 3112) )
        goto LABEL_19;
      v12 = *((_DWORD *)v10 + 2) & 0xFFFFFFFE;
      if ( v12 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v10 = v16;
LABEL_19:
        v13 = v10[14];
        if ( v1 == v13 || !v1 && (unsigned __int8)(v13 - 1) <= 0x1Du )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 8) + 96LL))(*(_QWORD *)(v4 + 8), v2);
          if ( *(_DWORD *)(v4 + 3112) )
            goto LABEL_35;
          v15 = v16;
          if ( v16[14] != 1 && v16[14] != 5 && v16[14] != 7 && v16[14] != 8 && v16[14] != 9 && v16[14] != 16 )
            goto LABEL_35;
          if ( v16[14] == 7 )
          {
            if ( !*(_DWORD *)(v14 + 8) )
              goto LABEL_35;
            *(_WORD *)(v14 + 14) |= 0x10u;
            v15 = v16;
LABEL_32:
            if ( (unsigned int)HmgSetOwner(*(_QWORD *)v14, -2147483630, v15[14]) )
            {
              *(_WORD *)(v14 + 14) |= 0x40u;
              _InterlockedIncrement((volatile signed __int32 *)(v4 + 1844));
            }
          }
          else
          {
            if ( (*(_BYTE *)(v14 + 14) & 0x10) != 0 )
              goto LABEL_32;
LABEL_35:
            *(_DWORD *)(v14 + 8) = 0;
            *(_WORD *)(v14 + 12) = 0;
            *(_QWORD *)(v14 + 16) = 0LL;
            v16[6] = 0;
            v16[15] &= ~1u;
          }
        }
      }
    }
    v11 = (SURFACE *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 8) + 96LL))(*(_QWORD *)(v4 + 8), v2);
    if ( *((_DWORD *)v11 + 160) == (_DWORD)v7 )
      SURFACE::set_AppContainerW32PID(v11, 0);
LABEL_15:
    v10 = v16;
    goto LABEL_16;
  }
}
