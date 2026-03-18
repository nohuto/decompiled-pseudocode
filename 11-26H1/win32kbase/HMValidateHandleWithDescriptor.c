/*
 * XREFs of HMValidateHandleWithDescriptor @ 0x140049640
 * Callers:
 *     ValidateHmenu @ 0x1400495E0 (ValidateHmenu.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x140065F04 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     NtMITSynthesizeKeyboardInput @ 0x140143DF0 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401E4270 (NtUserGetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     HMSDCheck @ 0x140094EB0 (HMSDCheck.c)
 *     ValidateHandleSecure @ 0x1401A87C0 (ValidateHandleSecure.c)
 */

__int64 __fastcall HMValidateHandleWithDescriptor(void *a1, __int64 a2, unsigned int a3)
{
  int v3; // ebp
  __int64 v4; // rdi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 UserSessionState; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // rbx
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r14
  __int16 v26; // ax
  char v27; // al
  __int64 v28; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v30; // rdx
  __int16 v31; // ax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v35; // rcx

  v3 = (unsigned __int8)a2;
  v4 = 0LL;
  PtiCurrent((__int64)a1, a2);
  v11 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v11 + 8) )
    goto LABEL_27;
  UserSessionState = W32GetUserSessionState(v11, v10, v12);
  v17 = *(_DWORD *)(W32GetUserSessionState(v15, v14, v16) + 19928) * (unsigned __int16)a1;
  v18 = v17 + *(_QWORD *)(UserSessionState + 19920);
  v21 = W32GetUserSessionState(v17, v19, v20);
  v23 = *(_QWORD *)(v21 + 19864);
  v24 = 0x7FFFLL;
  v25 = 5LL * (unsigned int)((v18 - *(_QWORD *)(v21 + 19920)) >> 5);
  v26 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v18 + 26) && v26 != 0x7FFF && (v26 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_27;
  v27 = *(_BYTE *)(v18 + 25);
  if ( (v27 & 1) == 0 && *(_BYTE *)(v18 + 24) == (_BYTE)v3 )
  {
    v4 = *(_QWORD *)(v23 + 8 * v25);
    if ( (v27 & 4) != 0 )
    {
      LOBYTE(v22) = v3;
      v24 = -(__int64)((unsigned int)HMSDCheck(a1, v22, a3) != 0);
      v4 &= v24;
    }
  }
  if ( (*(_BYTE *)(v18 + 25) & 4) == 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v24, v22) + 130, 0, 0) & 0x20000000) != 0 )
    {
      if ( !(unsigned int)ValidateHandleSecure(a1, 3u) )
        v4 = 0LL;
    }
    else
    {
      v28 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2u) != 0);
      v4 &= v28;
    }
    if ( *(char *)(v18 + 25) < 0 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v28);
      v30 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        if ( *CurrentProcessWin32Process )
        {
          v31 = *((_WORD *)&unk_14025552C + 12 * *(unsigned __int8 *)(v18 + 24));
          if ( (v31 & 2) != 0 )
          {
            v32 = *(_QWORD **)(v23 + 8 * v25 + 8);
LABEL_23:
            if ( v32 && v32 != v30 )
              goto LABEL_27;
            goto LABEL_25;
          }
          if ( (v31 & 1) != 0 )
          {
            v33 = *(_QWORD *)(v23 + 8 * v25 + 8);
            if ( v33 )
            {
              v32 = *(_QWORD **)(v33 + 456);
              goto LABEL_23;
            }
          }
        }
      }
    }
  }
LABEL_25:
  if ( v4 )
    return v4;
LABEL_27:
  switch ( v3 )
  {
    case 1:
      v35 = 1400LL;
      break;
    case 2:
      v35 = 1401LL;
      break;
    case 3:
      v35 = 1402LL;
      break;
    case 4:
      v35 = 1405LL;
      break;
    case 5:
      v35 = 1404LL;
      break;
    case 8:
      v35 = 1403LL;
      break;
    default:
      v35 = 6LL;
      break;
  }
  UserSetLastError(v35);
  return 0LL;
}
