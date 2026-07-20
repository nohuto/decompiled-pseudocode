/*
 * XREFs of SmscMain @ 0x140001E10
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 * Callees:
 *     SmscpParseArgs @ 0x140002180 (SmscpParseArgs.c)
 *     SmscpLoadSubSystemsForMuSession @ 0x140002770 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpLoadPnPSerializeSettings @ 0x140002B40 (SmpLoadPnPSerializeSettings.c)
 *     SmscpExecuteInitialCommand @ 0x140002CA0 (SmscpExecuteInitialCommand.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmscpNotifySmOfFailure @ 0x1400194D8 (SmscpNotifySmOfFailure.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

char __fastcall SmscMain(unsigned int a1, __int64 a2, int a3)
{
  int v5; // eax
  void *v6; // rcx
  int i; // eax
  unsigned int v8; // ebx
  int SubSystemsForMuSession; // edi
  int v10; // ebx
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  char v13; // al
  _BYTE *v14; // rax
  signed __int32 v15; // eax
  _OWORD *v16; // rdx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rcx
  _BYTE *v30; // rdx
  char v31; // al
  _BYTE *v32; // rax
  int v34; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER Interval; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v37[12]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v38; // [rsp+100h] [rbp+0h]
  __int128 v39; // [rsp+110h] [rbp+10h]

  v34 = 0;
  DestinationString = 0LL;
  if ( a3 )
    SmpDebug = a3;
  SmpDefaultEnvironment = 0LL;
  RtlCreateTagHeap(*(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PWSTR)L"SMSC!", (PWSTR)L"PARS");
  RtlInitUnicodeString(&DestinationString, 0LL);
  v5 = ((__int64 (__fastcall *)(_QWORD, __int64, int *, struct _UNICODE_STRING *))SmscpParseArgs)(
         a1,
         a2,
         &v34,
         &DestinationString);
  if ( v5 < 0 )
  {
    if ( DestinationString.Buffer )
      LOBYTE(v5) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  }
  else
  {
    v6 = *(void **)SmscpSharedWindow;
    *(_OWORD *)SmscpSharedWindow = 0LL;
    *(_DWORD *)SmscpSharedWindow = 0;
    NtSetEvent(v6, 0LL);
    for ( i = RtlConnectToSm(
                0LL,
                0LL,
                0LL,
                &SmpApiConnectionPort,
                v34,
                -50000000LL,
                *(_QWORD *)&DestinationString.Length);
          i < 0;
          i = RtlConnectToSm(
                0LL,
                0LL,
                0LL,
                &SmpApiConnectionPort,
                v34,
                -50000000LL,
                *(_QWORD *)&DestinationString.Length) )
    {
      SmpLogFailure("SmscMain", 277LL, (unsigned int)i);
      NtDelayExecution(0, &Interval);
    }
    v8 = *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL);
    SmpLoadPnPSerializeSettings();
    SubSystemsForMuSession = SmscpLoadSubSystemsForMuSession(v8);
    if ( SubSystemsForMuSession < 0 )
    {
      memset_0(v37, 0, 0xE0uLL);
      LODWORD(v38) = SubSystemsForMuSession;
      DWORD2(v39) = 299;
      v29 = 64LL;
      v30 = v37;
      do
      {
        if ( v29 == -2147483582 )
          break;
        v31 = v30["SmscMain" - (char *)v37];
        if ( !v31 )
          break;
        *v30++ = v31;
        --v29;
      }
      while ( v29 );
      v32 = v30 - 1;
      if ( v29 )
        v32 = v30;
      *v32 = 0;
      v15 = _InterlockedIncrement(&dword_14002FE94) & 0x8000000F;
      if ( v15 < 0 )
        goto LABEL_14;
      goto LABEL_15;
    }
    v5 = SmscpExecuteInitialCommand(v8, &v34, &DestinationString);
    v10 = v5;
    if ( v5 < 0 )
    {
      memset_0(v37, 0, 0xE0uLL);
      LODWORD(v38) = v10;
      DWORD2(v39) = 313;
      v11 = 64LL;
      v12 = v37;
      do
      {
        if ( v11 == -2147483582 )
          break;
        v13 = v12["SmscMain" - (char *)v37];
        if ( !v13 )
          break;
        *v12++ = v13;
        --v11;
      }
      while ( v11 );
      v14 = v12 - 1;
      if ( v11 )
        v14 = v12;
      *v14 = 0;
      v15 = _InterlockedIncrement(&dword_14002FE94) & 0x8000000F;
      if ( v15 < 0 )
LABEL_14:
        v15 = (((_BYTE)v15 - 1) | 0xFFFFFFF0) + 1;
LABEL_15:
      v16 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * v15);
      v17 = v37[1];
      *(_OWORD *)((char *)v16 + 8) = v37[0];
      v18 = v37[2];
      *(_OWORD *)((char *)v16 + 24) = v17;
      v19 = v37[3];
      *(_OWORD *)((char *)v16 + 40) = v18;
      v20 = v37[4];
      *(_OWORD *)((char *)v16 + 56) = v19;
      v21 = v37[5];
      *(_OWORD *)((char *)v16 + 72) = v20;
      v22 = v37[6];
      *(_OWORD *)((char *)v16 + 88) = v21;
      v23 = v37[8];
      *(_OWORD *)((char *)v16 + 104) = v22;
      v16 = (_OWORD *)((char *)v16 + 136);
      *(v16 - 1) = v37[7];
      v24 = v37[9];
      *v16 = v23;
      v25 = v37[10];
      v16[1] = v24;
      v26 = v37[11];
      v16[2] = v25;
      v27 = v38;
      v16[3] = v26;
      v28 = v39;
      v16[4] = v27;
      v16[5] = v28;
      SmscpNotifySmOfFailure();
      __debugbreak();
    }
  }
  return v5;
}
