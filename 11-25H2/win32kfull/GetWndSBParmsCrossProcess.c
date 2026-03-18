/*
 * XREFs of GetWndSBParmsCrossProcess @ 0x140221788
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___ @ 0x140292658 (W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     GETCLIENTWNDINFO @ 0x14026E78C (GETCLIENTWNDINFO.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsDddddd @ 0x14026F5F4 (WPP_RECORDER_AND_TRACE_SF_qsDddddd.c)
 *     GetScrollbarTypeString @ 0x14029454C (GetScrollbarTypeString.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

bool __fastcall GetWndSBParmsCrossProcess(__int64 *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int *v3; // r13
  char v6; // di
  char v7; // si
  __int64 v8; // rdx
  bool v9; // si
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v15; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 UserSessionState; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // r8d
  int v33; // edx
  int v34; // r9d
  bool v35; // [rsp+81h] [rbp-D7h]
  unsigned int *Address; // [rsp+88h] [rbp-D0h]
  _QWORD *Addressb; // [rsp+88h] [rbp-D0h]
  volatile void **Addressc; // [rsp+88h] [rbp-D0h]
  volatile void *Addressa; // [rsp+88h] [rbp-D0h]
  char v40; // [rsp+90h] [rbp-C8h]
  __int128 v43; // [rsp+F0h] [rbp-68h]
  __int128 v44; // [rsp+100h] [rbp-58h]
  unsigned int v45; // [rsp+110h] [rbp-48h]

  v3 = a3;
  v6 = 1;
  v40 = 1;
  v7 = 1;
  if ( !GETCLIENTWNDINFO(a1) || !*(_QWORD *)(GETCLIENTWNDINFO(a1) + 32) )
    v7 = 0;
  if ( v7 )
  {
    Address = *(unsigned int **)(GETCLIENTWNDINFO(a1) + 32);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(Address, v15);
    ProbeForRead(Address, 0x24uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v43 = *(_OWORD *)Address;
    v44 = *((_OWORD *)Address + 1);
    v17 = Address[8];
    v45 = v17;
    v18 = *((_QWORD *)Address + 2);
    if ( a2 != 1 )
      v18 = *(_QWORD *)Address;
    v19 = HIDWORD(v18);
    v20 = v3[1];
    if ( (v20 & 1) != 0 )
    {
      v3[2] = v19;
      v21 = DWORD2(v44);
      if ( a2 != 1 )
        v21 = DWORD2(v43);
      v3[3] = v21;
    }
    if ( (v20 & 2) != 0 )
    {
      v22 = HIDWORD(*((_QWORD *)&v44 + 1));
      if ( a2 != 1 )
        LODWORD(v22) = HIDWORD(v43);
      v3[4] = v22;
    }
    if ( (v20 & 4) != 0 )
    {
      if ( a2 != 1 )
        v17 = v44;
      v3[5] = v17;
    }
    if ( (v20 & 0x10) != 0 )
    {
      Addressb = *(_QWORD **)(a1[2] + 520);
      v23 = PsGetCurrentProcessWow64Process(Addressb, v20);
      ProbeForRead(Addressb, 0x120uLL, v23 != 0 ? 1 : 4);
      Addressc = (volatile void **)Addressb[35];
      v25 = PsGetCurrentProcessWow64Process(Addressc, v24);
      ProbeForRead(Addressc, 0x10uLL, v25 != 0 ? 1 : 4);
      Addressa = *Addressc;
      v27 = PsGetCurrentProcessWow64Process(Addressa, v26);
      ProbeForRead(Addressa, 0x68uLL, v27 != 0 ? 1 : 4);
      if ( Addressa && *((_DWORD *)Addressa + 22) == a2 && *((__int64 **)Addressa + 1) == a1 )
      {
        v3[6] = *((_DWORD *)Addressa + 21);
      }
      else
      {
        v28 = v45;
        if ( a2 != 1 )
          v28 = v44;
        v3[6] = v28;
      }
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v6 = 0;
      v40 = 0;
    }
    v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20);
      GetScrollbarTypeString(a2, v30, v31, *(_QWORD *)(UserSessionState + 69160));
      LOBYTE(v32) = v35;
      LOBYTE(v33) = v40;
      WPP_RECORDER_AND_TRACE_SF_qsDddddd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v33, v32, v34);
      v3 = a3;
    }
    return (v3[1] & 0x17) != 0;
  }
  else
  {
    UserSetLastError(1447);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v6 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *a1;
      v11 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v8);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(v11 + 69160),
        2,
        9,
        17,
        (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids,
        v10);
    }
    return 0;
  }
}
