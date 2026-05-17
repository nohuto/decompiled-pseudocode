/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x180057A60
 * Callers:
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x180012B44 (EtwpGetUmProcessImageInfo.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x180057C30 (EtwpFindGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180059160 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x1800F8674 (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpPreEnableEventApiCallback @ 0x180107538 (EtwpPreEnableEventApiCallback.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

struct _TEB *__fastcall EtwpCheckForPrivatePreEnable(__int64 a1)
{
  char v2; // si
  struct _TEB *result; // rax
  struct _TEB *v4; // rdi
  unsigned __int8 *v5; // rbp
  __int64 v6; // r14
  __int16 v7; // cx
  __int128 v8; // xmm0
  __int64 v9; // r8
  _BYTE v10[40]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v11; // [rsp+48h] [rbp-70h]
  __int64 v12; // [rsp+88h] [rbp-30h]
  unsigned int v13; // [rsp+90h] [rbp-28h]

  v2 = 0;
  result = (struct _TEB *)EtwpFindGuidEntry((void *)(a1 + 32));
  v4 = result;
  if ( result )
  {
    RtlAcquireSRWLockShared((volatile signed __int64 *)&result->NtTib.ArbitraryUserPointer);
    *(_QWORD *)(a1 + 240) = v4;
    *(_OWORD *)(a1 + 120) = *(_OWORD *)&v4->EnvironmentPointer;
    *(_QWORD *)(a1 + 136) = v4->ClientId.UniqueThread;
    *(_OWORD *)(a1 + 144) = *(_OWORD *)&v4->ActiveRpcHandle;
    *(_QWORD *)(a1 + 160) = v4->ProcessEnvironmentBlock;
    *(_OWORD *)(a1 + 168) = *(_OWORD *)&v4->LastErrorValue;
    *(_QWORD *)(a1 + 184) = v4->Win32ThreadInfo;
    *(_OWORD *)(a1 + 192) = *(_OWORD *)v4->User32Reserved;
    *(_QWORD *)(a1 + 208) = *(_QWORD *)&v4->User32Reserved[4];
    EtwpUpdatePrivateEnableInfo(a1);
    v5 = (unsigned __int8 *)(a1 + 142);
    v6 = 4LL;
    do
    {
      if ( *(v5 - 2) )
      {
        v7 = *(_WORD *)(a1 + 86);
        if ( (v7 & 0x3FFF) == 2 || v7 < 0 )
          EtwpGetUmProcessImageInfo(*v5, a1);
        v2 = 1;
      }
      v5 += 24;
      --v6;
    }
    while ( v6 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 )
      {
        memset_thunk_772440563353939046(v10, 0, 0x78uLL);
        v8 = *(_OWORD *)&v4->NtTib.SubSystemTib;
        v12 = *(_QWORD *)&v4->User32Reserved[6];
        v13 = v4->User32Reserved[8];
        v11 = v8;
        RtlReleaseSRWLockShared((volatile signed __int64 *)&v4->NtTib.ArbitraryUserPointer);
        LOBYTE(v9) = 1;
        return (struct _TEB *)EtwpRegisterGuidsApiCallback(v10, a1, v9);
      }
      else
      {
        RtlReleaseSRWLockShared((volatile signed __int64 *)&v4->NtTib.ArbitraryUserPointer);
        return (struct _TEB *)EtwpPreEnableEventApiCallback(a1);
      }
    }
    else
    {
      return RtlReleaseSRWLockShared((volatile signed __int64 *)&v4->NtTib.ArbitraryUserPointer);
    }
  }
  return result;
}
