/*
 * XREFs of LogicalCursorPosFromDpiAwarenessContext @ 0x1400424F0
 * Callers:
 *     <none>
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x140042C30 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LogicalCursorPosFromDpiAwarenessContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // r14
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int (*v13)(void); // rax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rax
  __int64 v16; // rax
  int v17; // r10d
  unsigned __int16 v18; // di
  __int128 v19; // xmm0
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r11
  int v22; // edx
  signed int v23; // r9d
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  int v26; // edx
  int v27; // r9d
  signed int v28; // r9d
  int v29; // edx
  unsigned __int64 v30; // rax
  int v31; // ebx
  unsigned int v32; // r11d
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // r9d
  int v36; // ecx
  signed int v37; // r9d
  unsigned __int64 v38; // rax
  int v39; // eax
  int v40; // edx
  signed int v41; // r9d
  unsigned __int64 v42; // rax
  bool v43; // cc
  __int64 v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+90h] [rbp+18h]

  v2 = a1;
  v3 = 0LL;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3136);
  if ( !v4 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( !v5 )
    return 0LL;
  v7 = *(_DWORD *)(v5 + 52) >> 8;
  v6 = v2 >> 8;
  LOWORD(v7) = v6 ^ v7;
  if ( (v7 & 0x1FF) == 0 )
    return *(_QWORD *)(v5 + 44);
  v9 = *(_QWORD *)(W32GetUserSessionState(v6, v7) + 19872);
  if ( !v2 )
  {
    v2 = 18;
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
    {
      v11 = *CurrentThreadNonPaged;
      if ( *CurrentThreadNonPaged )
      {
        if ( *(_QWORD *)(v11 + 408) )
          CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadNonPaged);
        if ( *(_DWORD *)(v11 + 400) )
        {
          v2 = *(_DWORD *)(v11 + 400);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
            v2 = *(_DWORD *)(CurrentProcessWin32Process + 268);
        }
      }
    }
  }
  if ( (v2 & 0xF) == 2 )
    return *(_QWORD *)(v9 + 4960);
  v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3920LL);
  if ( !v13 || v13() < 0 )
    return *(_QWORD *)(v9 + 4960);
  v14 = *(_QWORD *)(v9 + 4960);
  v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3928LL);
  if ( v15 )
    v3 = v15(v14, 2LL, 18LL);
  v16 = *(_QWORD *)(v3 + 40);
  v17 = 0x80000000;
  v18 = (v2 >> 8) & 0x1FF;
  v19 = *(_OWORD *)(v16 + 28);
  v20 = *(unsigned __int16 *)(v16 + 60);
  v44 = v19;
  if ( v18 )
  {
    v21 = *(unsigned __int16 *)(v16 + 62);
    v22 = -(int)v19;
    v23 = ((int)v19 >> 31) & 0xFFFFFFFE;
    if ( (int)v19 >= 0 )
      v22 = v19;
    if ( *(_WORD *)(v16 + 62) )
    {
      v24 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v16 + 62) >> 1) + v22 * (unsigned __int64)v18)
          / *(unsigned __int16 *)(v16 + 62);
      if ( v24 > 0x7FFFFFFF )
      {
        v25 = DWORD1(v19);
        v43 = v23 <= -1;
        v26 = DWORD1(v19);
        v27 = DWORD1(v19);
        if ( v43 )
          LODWORD(v24) = 0x80000000;
        else
          LODWORD(v24) = 0x7FFFFFFF;
      }
      else
      {
        if ( v23 <= -1 )
          LODWORD(v24) = -(int)v24;
        v25 = DWORD1(v19);
        v26 = DWORD1(v19);
        v27 = DWORD1(v19);
      }
      v28 = (v27 >> 31) & 0xFFFFFFFE;
      v29 = -v26;
      if ( v29 < 0 )
        v29 = v25;
      v30 = (__int64)((v21 >> 1) + v29 * (unsigned __int64)v18) / (int)v21;
      v31 = v30;
      if ( v30 > 0x7FFFFFFF )
      {
        v31 = 0x80000000;
        if ( v28 > -1 )
          v31 = 0x7FFFFFFF;
      }
      else if ( v28 <= -1 )
      {
        v31 = -(int)v30;
      }
    }
    else
    {
      LODWORD(v24) = 0x7FFFFFFF;
      if ( v23 <= -1 )
        LODWORD(v24) = 0x80000000;
      v31 = 0x80000000;
      if ( (int)((SDWORD1(v19) >> 31) & 0xFFFFFFFE) > -1 )
        v31 = 0x7FFFFFFF;
    }
    v32 = v20;
    if ( !(_DWORD)v20 || (v33 = (__int64)(v20 >> 1) / (int)v20, v33 > 0x7FFFFFFF) )
      LODWORD(v33) = 0x7FFFFFFF;
    LODWORD(v44) = v24 + v33;
    if ( !(_DWORD)v20 || (v34 = (__int64)(v20 >> 1) / (int)v20, v34 > 0x7FFFFFFF) )
      LODWORD(v34) = 0x7FFFFFFF;
    HIDWORD(v44) = v31 + v34;
  }
  else
  {
    v32 = *(unsigned __int16 *)(v16 + 60);
  }
  v35 = *(_DWORD *)(v9 + 4960) - v19;
  v36 = v19 - *(_DWORD *)(v9 + 4960);
  if ( v35 >= 0 )
    v36 = *(_DWORD *)(v9 + 4960) - v19;
  v37 = (v35 >> 31) & 0xFFFFFFFE;
  if ( v32 && (v38 = (__int64)(((unsigned __int64)v32 >> 1) + v36 * (unsigned __int64)v18) / v32, v38 <= 0x7FFFFFFF) )
  {
    if ( v37 <= -1 )
      LODWORD(v38) = -(int)v38;
  }
  else
  {
    LODWORD(v38) = 0x80000000;
    if ( v37 > -1 )
      LODWORD(v38) = 0x7FFFFFFF;
  }
  LODWORD(v45) = v44 + v38;
  v39 = *(_DWORD *)(v9 + 4964) - DWORD1(v19);
  v40 = DWORD1(v19) - *(_DWORD *)(v9 + 4964);
  v41 = (v39 >> 31) & 0xFFFFFFFE;
  if ( v39 >= 0 )
    v40 = *(_DWORD *)(v9 + 4964) - DWORD1(v19);
  if ( v32 && (v42 = (__int64)(((unsigned __int64)v32 >> 1) + v40 * (unsigned __int64)v18) / v32, v42 <= 0x7FFFFFFF) )
  {
    v17 = (__int64)(((unsigned __int64)v32 >> 1) + v40 * (unsigned __int64)v18) / v32;
    if ( v41 <= -1 )
      v17 = -(int)v42;
  }
  else if ( v41 > -1 )
  {
    v17 = 0x7FFFFFFF;
  }
  HIDWORD(v45) = v17 + HIDWORD(v44);
  return v45;
}
