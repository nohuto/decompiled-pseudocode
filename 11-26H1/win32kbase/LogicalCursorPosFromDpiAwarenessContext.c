/*
 * XREFs of LogicalCursorPosFromDpiAwarenessContext @ 0x140084CB0
 * Callers:
 *     <none>
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400853E0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LogicalCursorPosFromDpiAwarenessContext(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v14; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int (*v16)(void); // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // rax
  __int64 v20; // rax
  int v21; // ebx
  unsigned __int64 v22; // rsi
  __int128 v23; // xmm0
  unsigned __int16 v24; // di
  unsigned __int64 v25; // r10
  signed int v26; // r9d
  int v27; // edx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rax
  int v30; // edx
  int v31; // r9d
  signed int v32; // r9d
  int v33; // edx
  unsigned __int64 v34; // rax
  int v35; // r10d
  unsigned int v36; // r9d
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  signed int v39; // r10d
  int v40; // ecx
  unsigned __int64 v41; // rax
  signed int v42; // r10d
  int v43; // edx
  unsigned __int64 v44; // rax
  bool v45; // cc
  __int64 v46; // [rsp+20h] [rbp-58h]
  __int64 v47; // [rsp+90h] [rbp+18h]

  v3 = a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3136);
  if ( !v5 )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( !v6 )
    return 0LL;
  v8 = *(_DWORD *)(v6 + 52) >> 8;
  LOWORD(v8) = (v3 >> 8) ^ v8;
  if ( (v8 & 0x1FF) == 0 )
    return *(_QWORD *)(v6 + 44);
  v12 = *(_QWORD *)(W32GetUserSessionState(v3 >> 8, v8, v7) + 19904);
  if ( !v3 )
  {
    v3 = 18;
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v11, v10);
    if ( CurrentThreadWin32Thread )
    {
      v14 = *CurrentThreadWin32Thread;
      if ( *CurrentThreadWin32Thread )
      {
        if ( *(_QWORD *)(v14 + 400) )
          CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadWin32Thread);
        if ( *(_DWORD *)(v14 + 392) )
        {
          v3 = *(_DWORD *)(v14 + 392);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
          if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
            v3 = *(_DWORD *)(CurrentProcessWin32Process + 268);
        }
      }
    }
  }
  if ( (v3 & 0xF) == 2 )
    return *(_QWORD *)(v12 + 4960);
  v16 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 48) + 3472LL);
  if ( !v16 || v16() < 0 )
    return *(_QWORD *)(v12 + 4960);
  v18 = *(_QWORD *)(v12 + 4960);
  v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 48) + 3480LL);
  if ( v19 )
    v4 = v19(v18, 2LL, 18LL);
  v20 = *(_QWORD *)(v4 + 40);
  v21 = 0x80000000;
  v22 = *(unsigned __int16 *)(v20 + 60);
  v23 = *(_OWORD *)(v20 + 28);
  v46 = v23;
  v24 = (v3 >> 8) & 0x1FF;
  if ( v24 )
  {
    v25 = *(unsigned __int16 *)(v20 + 62);
    v26 = ((int)v23 >> 31) & 0xFFFFFFFE;
    v27 = -(int)v23;
    if ( (int)v23 > 0 )
      v27 = v23;
    if ( *(_WORD *)(v20 + 62) )
    {
      v28 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v20 + 62) >> 1) + v27 * (unsigned __int64)v24)
          / *(unsigned __int16 *)(v20 + 62);
      if ( v28 > 0x7FFFFFFF )
      {
        v29 = DWORD1(v23);
        v45 = v26 <= -1;
        v30 = DWORD1(v23);
        v31 = DWORD1(v23);
        if ( v45 )
          LODWORD(v28) = 0x80000000;
        else
          LODWORD(v28) = 0x7FFFFFFF;
      }
      else
      {
        if ( v26 <= -1 )
          LODWORD(v28) = -(int)v28;
        v29 = DWORD1(v23);
        v30 = DWORD1(v23);
        v31 = DWORD1(v23);
      }
      v32 = (v31 >> 31) & 0xFFFFFFFE;
      v33 = -v30;
      if ( v33 < 0 )
        v33 = v29;
      v34 = (__int64)((v25 >> 1) + v33 * (unsigned __int64)v24) / (int)v25;
      v35 = v34;
      if ( v34 > 0x7FFFFFFF )
      {
        v35 = 0x80000000;
        if ( v32 > -1 )
          v35 = 0x7FFFFFFF;
      }
      else if ( v32 <= -1 )
      {
        v35 = -(int)v34;
      }
    }
    else
    {
      LODWORD(v28) = 0x7FFFFFFF;
      if ( v26 <= -1 )
        LODWORD(v28) = 0x80000000;
      v35 = 0x80000000;
      if ( (int)((SDWORD1(v23) >> 31) & 0xFFFFFFFE) > -1 )
        v35 = 0x7FFFFFFF;
    }
    v36 = v22;
    if ( !(_DWORD)v22 || (v37 = (v22 >> 1) / (int)v22, v37 > 0x7FFFFFFF) )
      LODWORD(v37) = 0x7FFFFFFF;
    LODWORD(v46) = v37 + v28;
    if ( !(_DWORD)v22 || (v38 = (__int64)(v22 >> 1) / (int)v22, v38 > 0x7FFFFFFF) )
      LODWORD(v38) = 0x7FFFFFFF;
    HIDWORD(v46) = v38 + v35;
  }
  else
  {
    v36 = *(unsigned __int16 *)(v20 + 60);
  }
  v39 = ((*(_DWORD *)(v12 + 4960) - (int)v23) >> 31) & 0xFFFFFFFE;
  v40 = v23 - *(_DWORD *)(v12 + 4960);
  if ( v40 < 0 )
    v40 = *(_DWORD *)(v12 + 4960) - v23;
  if ( v36 && (v41 = (__int64)(((unsigned __int64)v36 >> 1) + v24 * (__int64)v40) / v36, v41 <= 0x7FFFFFFF) )
  {
    if ( v39 <= -1 )
      LODWORD(v41) = -(int)v41;
  }
  else
  {
    LODWORD(v41) = 0x80000000;
    if ( v39 > -1 )
      LODWORD(v41) = 0x7FFFFFFF;
  }
  LODWORD(v47) = v46 + v41;
  v42 = ((*(_DWORD *)(v12 + 4964) - DWORD1(v23)) >> 31) & 0xFFFFFFFE;
  v43 = DWORD1(v23) - *(_DWORD *)(v12 + 4964);
  if ( v43 < 0 )
    v43 = *(_DWORD *)(v12 + 4964) - DWORD1(v23);
  if ( v36 && (v44 = (__int64)(((unsigned __int64)v36 >> 1) + v24 * (__int64)v43) / v36, v44 <= 0x7FFFFFFF) )
  {
    v21 = (__int64)(((unsigned __int64)v36 >> 1) + v24 * (__int64)v43) / v36;
    if ( v42 <= -1 )
      v21 = -(int)v44;
  }
  else if ( v42 > -1 )
  {
    v21 = 0x7FFFFFFF;
  }
  HIDWORD(v47) = v21 + HIDWORD(v46);
  return v47;
}
