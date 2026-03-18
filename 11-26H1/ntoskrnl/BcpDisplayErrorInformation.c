/*
 * XREFs of BcpDisplayErrorInformation @ 0x140716F38
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BcpConvertBugDataToString @ 0x1407165A0 (BcpConvertBugDataToString.c)
 *     BcpDisplayCriticalCharacter @ 0x140716734 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14071681C (BcpDisplayCriticalString.c)
 *     BcpSanitizeDriverName @ 0x140717D68 (BcpSanitizeDriverName.c)
 *     BcpSetCursorPosition @ 0x140717E1C (BcpSetCursorPosition.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall BcpDisplayErrorInformation(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v6; // r15d
  unsigned __int64 *v7; // rsi
  int *v9; // rdi
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // r8
  unsigned int v15; // r14d
  __int64 v16; // r8
  __int16 v17; // cx
  int v18; // r8d
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // r8
  __int16 v22; // cx
  int v23; // r8d
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  int v27; // edx
  __int64 v28; // r14
  __int64 v29; // r8
  __int64 result; // rax
  struct _KTHREAD *v31; // r9
  unsigned int v32; // [rsp+28h] [rbp-B1h] BYREF
  int v33; // [rsp+30h] [rbp-A9h] BYREF
  int v34; // [rsp+34h] [rbp-A5h]
  struct _LIST_ENTRY *Flink; // [rsp+38h] [rbp-A1h]
  int v36; // [rsp+40h] [rbp-99h] BYREF
  _DWORD v37[2]; // [rsp+48h] [rbp-91h] BYREF
  char *v38; // [rsp+50h] [rbp-89h]
  __int64 v39; // [rsp+58h] [rbp-81h]
  char v40; // [rsp+60h] [rbp-79h] BYREF

  v6 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[16];
  v7 = (unsigned __int64 *)a3;
  v32 = 0;
  Flink = 0LL;
  v37[1] = 0;
  v39 = a4;
  v34 = a2;
  v33 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[16];
  v9 = (int *)((char *)&unk_140E0F020 + 84 * a1);
  WheapPfaLock.SchedulerApc.Thread = (struct _KTHREAD *)&v33;
  BcpDisplayCriticalString(&stru_140E3E928.216, v9[1], a3, a1);
  BcpDisplayCriticalString(&stru_140E3E928.Queue, v9[1], v10, a1);
  v11 = v9[11];
  v12 = (unsigned int)(v11 + *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24]);
  v13 = v12 + v11;
  v32 = v12 + v11;
  BcpSetCursorPosition(v6, v12, &v32);
  BcpDisplayCriticalString(&stru_140E3E928.InitialStack, *v9, v14, a1);
  v15 = v13 + v9[11];
  v32 = v15;
  BcpSetCursorPosition(v6, v13, &v32);
  BcpDisplayCriticalString(&stru_140E3E928.WaitStatus, *v9, v16, a1);
  BcpDisplayCriticalCharacter(v17, *v9, v18);
  BcpDisplayCriticalString((_WORD *)(a5 + 16), *v9, v19, a1);
  v20 = v39;
  if ( v39 )
  {
    v32 = v15 + v9[11];
    BcpSetCursorPosition(v6, v15, &v32);
    BcpDisplayCriticalString(&stru_140E3E928.ApcStateFill[32], *v9, v21, a1);
    BcpDisplayCriticalCharacter(v22, *v9, v23);
    v37[0] = 0x800000;
    v38 = &v40;
    BcpSanitizeDriverName(v20, v37);
    BcpDisplayCriticalString(v37, *v9, v24, a1);
  }
  Flink = WheapPfaLock.SchedulerApc.ApcListEntry.Flink;
  v36 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
  v32 = 0;
  BcpSetCursorPosition(0LL, 0LL, &v32);
  v26 = v25;
  v28 = (unsigned int)(v27 + 4);
  do
  {
    BcpConvertBugDataToString(*v7, v26 + a5 + 32);
    if ( WheapPfaLock.SchedulerApcFill3[40] || (a6 & 8) != 0 && v34 == 317 )
    {
      BcpDisplayCriticalString((_WORD *)(v26 + a5 + 32), *v9, v29, a1);
      BcpSetCursorPosition(0LL, *(unsigned int *)&WheapPfaLock.SchedulerApcFill5[24], 0LL);
    }
    v26 += 16LL;
    ++v7;
    --v28;
  }
  while ( v28 );
  result = BcpSetCursorPosition((unsigned int)Flink, HIDWORD(Flink), &v36);
  WheapPfaLock.SchedulerApc.Thread = v31;
  return result;
}
