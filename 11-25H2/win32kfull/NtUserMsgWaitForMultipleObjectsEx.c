/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1400CAEE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     xxxGetInputEvent @ 0x14001E960 (xxxGetInputEvent.c)
 *     xxxClearWakeMask @ 0x14001ECD0 (xxxClearWakeMask.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x14001F190 (xxxMsgWaitForMultipleObjectsEx.c)
 *     ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x140162540 (--1-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401668DC (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1401F09D4 (_ReassociateQueueEventCompletionPacket.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(
        unsigned int a1,
        volatile void *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // r14
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int16 v15; // ax
  __int64 v16; // rcx
  __int16 v17; // dx
  unsigned __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  ULONG v24; // r15d
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 CurrentProcess; // rax
  void *v28; // rbx
  _OWORD *v29; // rcx
  _OWORD *v30; // rax
  __int64 v31; // rdx
  void *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r10
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v46; // [rsp+58h] [rbp-910h]
  __int64 InputEvent; // [rsp+68h] [rbp-900h]
  _BYTE v48[32]; // [rsp+70h] [rbp-8F8h] BYREF
  _BYTE v49[32]; // [rsp+90h] [rbp-8D8h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-8B8h]
  __int64 v51; // [rsp+B8h] [rbp-8B0h]
  __int64 v52; // [rsp+C0h] [rbp-8A8h]
  _BYTE v53[1160]; // [rsp+4E0h] [rbp-488h] BYREF

  v6 = a1;
  v7 = -1;
  EnterCrit(0LL, 0LL);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v9, v8);
  v11 = 0LL;
  if ( CurrentThreadNonPaged )
    v12 = *CurrentThreadNonPaged;
  else
    v12 = 0LL;
  memset_0(v49, 0, 0x448uLL);
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v6 > 0x3F )
  {
    UserSetLastError(87);
    goto LABEL_50;
  }
  v13 = *(_QWORD *)(v12 + 488);
  if ( !v13 || (a5 & 1) != 0 && (_DWORD)v6 )
  {
    v19 = a4;
  }
  else
  {
    INTERLOCKEDINT::operator int(v13 + 4);
    v15 = INTERLOCKEDINT::operator int(v14);
    v18 = v17 | v15;
    v19 = a4;
    if ( (v18 & (unsigned __int16)a4) != 0 )
    {
      v7 = v6;
      goto LABEL_50;
    }
  }
  InputEvent = xxxGetInputEvent((unsigned __int16)v19 | ((unsigned __int16)a5 << 16), v19);
  if ( !InputEvent )
    goto LABEL_50;
  if ( (a5 & 1) != 0 )
  {
    v46 = 0LL;
    v21 = (__int64 *)W32GetCurrentThreadNonPaged(v16, v20);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0LL;
    if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(v22 + 1640), 0LL) == 259 )
    {
      LOBYTE(v23) = 1;
      ZwCancelWaitCompletionPacket(*(_QWORD *)(v22 + 1640), v23);
      v24 = 1;
      KeSetEvent(*(PRKEVENT *)(v22 + 768), 1, 0);
      goto LABEL_24;
    }
  }
  else
  {
    v25 = (__int64 *)W32GetCurrentThreadNonPaged(v16, v20);
    if ( v25 )
      v26 = *v25;
    else
      v26 = 0LL;
    v46 = *(_QWORD *)(v26 + 1624);
    if ( !v46 )
      goto LABEL_50;
  }
  v24 = 1;
LABEL_24:
  CurrentProcess = PsGetCurrentProcess();
  v28 = *(void **)(PsGetProcessPeb(CurrentProcess) + 32);
  memset_0(v53, 0, 0x448uLL);
  RtlCopyFromUser(v53, v28, 0x448uLL);
  v29 = v49;
  v30 = v53;
  v31 = 8LL;
  do
  {
    *v29 = *v30;
    v29[1] = v30[1];
    v29[2] = v30[2];
    v29[3] = v30[3];
    v29[4] = v30[4];
    v29[5] = v30[5];
    v29[6] = v30[6];
    v29 += 8;
    *(v29 - 1) = v30[7];
    v30 += 8;
    --v31;
  }
  while ( v31 );
  *v29 = *v30;
  v29[1] = v30[1];
  v29[2] = v30[2];
  v29[3] = v30[3];
  *((_QWORD *)v29 + 8) = *((_QWORD *)v30 + 8);
  if ( (_DWORD)v6 )
  {
    if ( !PsGetCurrentProcessWow64Process(v29, 0LL) )
      v24 = 4;
    ProbeForRead(a2, 8 * v6, v24);
  }
  v32 = (void *)Win32AllocPoolWithQuotaZInit(8LL * (unsigned int)(v6 + 1), 2037609301LL);
  v33 = (__int64)v32;
  if ( v32 )
  {
    memmove(v32, (const void *)a2, 8 * v6);
    v35 = 0LL;
    v36 = v52;
    v37 = v51;
    v38 = v50;
    while ( (unsigned int)v35 < (unsigned int)v6 )
    {
      v34 = *(unsigned int *)(v33 + 8LL * (unsigned int)v35);
      switch ( (_DWORD)v34 )
      {
        case 0xFFFFFFF4:
          *(_QWORD *)(v33 + 8LL * (unsigned int)v35) = v36;
          break;
        case 0xFFFFFFF5:
          *(_QWORD *)(v33 + 8LL * (unsigned int)v35) = v37;
          break;
        case 0xFFFFFFF6:
          *(_QWORD *)(v33 + 8LL * (unsigned int)v35) = v38;
          break;
      }
      v35 = (unsigned int)(v35 + 1);
    }
    if ( (a5 & 8) != 0 )
    {
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v35, v34, v36, v37);
      if ( CurrentThreadWin32Thread )
        v11 = *CurrentThreadWin32Thread;
      *(_QWORD *)(v11 + 1360) |= 0x400uLL;
    }
    v40 = v46;
    if ( (a5 & 1) != 0 )
      v40 = InputEvent;
    *(_QWORD *)(v33 + 8 * v6) = v40;
    Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
      v48,
      v33,
      Win32FreePool,
      v37);
    v7 = xxxMsgWaitForMultipleObjectsEx((unsigned int)v6, v33, a3, a4, a5);
    xxxClearWakeMask(v42, v41);
    Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(v48);
    if ( (a5 & 1) != 0 )
      ReassociateQueueEventCompletionPacket();
  }
  else
  {
    UserSetLastError(8);
  }
LABEL_50:
  UserSessionSwitchLeaveCrit(v16);
  return v7;
}
