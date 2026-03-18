/*
 * XREFs of RIMIDEValidateMouseInputStruct @ 0x140155390
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x140154EE8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x140136684 (WPP_RECORDER_AND_TRACE_SF_i.c)
 */

__int64 __fastcall RIMIDEValidateMouseInputStruct(__int64 a1)
{
  int v1; // r14d
  char v2; // si
  unsigned int v4; // edx
  int v5; // r14d
  int v6; // r14d
  unsigned int v7; // r14d
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rdi
  bool v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // bl
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  bool v33; // r14
  bool v34; // r15
  int v35; // ebx
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  bool v40; // bl
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  int v44; // [rsp+28h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 12);
  v2 = 1;
  v4 = 1;
  if ( (*(_BYTE *)(a1 + 12) & 6) == 6 )
  {
    v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 1, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 19368),
        2,
        1,
        23,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v1);
    }
    v4 = 0;
  }
  v5 = *(_DWORD *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 12) & 0x18) == 0x18 )
  {
    v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 19368),
        2,
        1,
        24,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v5);
    }
    v4 = 0;
  }
  v6 = *(_DWORD *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 12) & 0x60) == 0x60 )
  {
    v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 19368),
        2,
        1,
        25,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v6);
    }
    v4 = 0;
  }
  v7 = *(_DWORD *)(a1 + 12);
  v8 = ((v7 >> 7) & 1) + 1;
  if ( (v7 & 0x100) == 0 )
    v8 = (*(_DWORD *)(a1 + 12) >> 7) & 1;
  v9 = v8 + 1;
  if ( (v7 & 0x800) == 0 )
    v9 = v8;
  v10 = v9 + 1;
  if ( (v7 & 0x1000) == 0 )
    v10 = v9;
  if ( v10 > 1 )
  {
    v28 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 19368),
        2,
        1,
        26,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v7);
    }
    v4 = 0;
  }
  if ( *(_DWORD *)(a1 + 16)
    && *(_DWORD *)(a1 + 16) > (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    v33 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = *(_DWORD *)(a1 + 16);
      v36 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v38) = v34;
      LOBYTE(v39) = v33;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 19368),
        2,
        1,
        27,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v35,
        v36);
    }
    v4 = 0;
  }
  v11 = *(_QWORD *)(a1 + 24);
  if ( v11 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v2;
      WPP_RECORDER_AND_TRACE_SF_i(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 19368),
        2,
        v44,
        28,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v11);
    }
    return 0;
  }
  return v4;
}
