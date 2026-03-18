/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1400847A0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x140083490 (TransformPointBetweenCoordinateSpaces.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14010AB30 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400853E0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  unsigned int v5; // edi
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int (*v11)(void); // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r10d
  unsigned __int64 v17; // rsi
  __int128 v18; // xmm0
  unsigned __int16 v19; // di
  unsigned __int64 v20; // r11
  signed int v21; // r9d
  int v22; // edx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  int v25; // edx
  int v26; // r9d
  signed int v27; // r9d
  int v28; // edx
  unsigned __int64 v29; // rax
  int v30; // r11d
  unsigned int v31; // r9d
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  signed int v34; // r11d
  int v35; // ecx
  unsigned __int64 v36; // rax
  signed int v37; // r11d
  int v38; // edx
  unsigned __int64 v39; // rax
  __int64 result; // rax
  bool v41; // cc
  __int64 v42; // [rsp+30h] [rbp-78h]

  v5 = a3;
  if ( !a3 )
  {
    v5 = 18;
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1, a2);
    if ( CurrentThreadWin32Thread )
    {
      v9 = *CurrentThreadWin32Thread;
      if ( *CurrentThreadWin32Thread )
      {
        if ( *(_QWORD *)(v9 + 400) )
          CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadWin32Thread);
        if ( *(_DWORD *)(v9 + 392) )
        {
          v5 = *(_DWORD *)(v9 + 392);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
          if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
            v5 = *(_DWORD *)(CurrentProcessWin32Process + 268);
        }
      }
    }
  }
  if ( (v5 & 0xF) == 2
    || (v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3472LL)) == 0LL
    || v11() < 0 )
  {
    *(_QWORD *)a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
    {
      v13 = *a4;
      if ( *a4 )
        goto LABEL_18;
    }
    v14 = *a2;
    v13 = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48) + 3480LL);
    if ( v13 )
      v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v13)(v14, 2LL, 18LL);
    if ( a4 )
LABEL_18:
      *a4 = v13;
    v15 = *(_QWORD *)(v13 + 40);
    v16 = 0x80000000;
    v17 = *(unsigned __int16 *)(v15 + 60);
    v18 = *(_OWORD *)(v15 + 28);
    v42 = v18;
    v19 = (v5 >> 8) & 0x1FF;
    if ( v19 )
    {
      v20 = *(unsigned __int16 *)(v15 + 62);
      v21 = ((int)v18 >> 31) & 0xFFFFFFFE;
      v22 = -(int)v18;
      if ( (int)v18 > 0 )
        v22 = v18;
      if ( *(_WORD *)(v15 + 62) )
      {
        v23 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v15 + 62) >> 1) + v22 * (unsigned __int64)v19)
            / *(unsigned __int16 *)(v15 + 62);
        if ( v23 > 0x7FFFFFFF )
        {
          v24 = DWORD1(v18);
          v41 = v21 <= -1;
          v25 = DWORD1(v18);
          v26 = DWORD1(v18);
          if ( v41 )
            LODWORD(v23) = 0x80000000;
          else
            LODWORD(v23) = 0x7FFFFFFF;
        }
        else
        {
          if ( v21 <= -1 )
            LODWORD(v23) = -(int)v23;
          v24 = DWORD1(v18);
          v25 = DWORD1(v18);
          v26 = DWORD1(v18);
        }
        v27 = (v26 >> 31) & 0xFFFFFFFE;
        v28 = -v25;
        if ( v28 < 0 )
          v28 = v24;
        v29 = (__int64)((v20 >> 1) + v19 * (__int64)v28) / (int)v20;
        v30 = v29;
        if ( v29 > 0x7FFFFFFF )
        {
          v30 = 0x80000000;
          if ( v27 > -1 )
            v30 = 0x7FFFFFFF;
        }
        else if ( v27 <= -1 )
        {
          v30 = -(int)v29;
        }
      }
      else
      {
        LODWORD(v23) = 0x7FFFFFFF;
        if ( v21 <= -1 )
          LODWORD(v23) = 0x80000000;
        v30 = 0x80000000;
        if ( (int)((SDWORD1(v18) >> 31) & 0xFFFFFFFE) > -1 )
          v30 = 0x7FFFFFFF;
      }
      v31 = v17;
      if ( !(_DWORD)v17 || (v32 = (v17 >> 1) / (int)v17, v32 > 0x7FFFFFFF) )
        LODWORD(v32) = 0x7FFFFFFF;
      LODWORD(v42) = v32 + v23;
      if ( !(_DWORD)v17 || (v33 = (__int64)(v17 >> 1) / (int)v17, v33 > 0x7FFFFFFF) )
        LODWORD(v33) = 0x7FFFFFFF;
      HIDWORD(v42) = v33 + v30;
    }
    else
    {
      v31 = *(unsigned __int16 *)(v15 + 60);
    }
    v34 = ((*(_DWORD *)a2 - (int)v18) >> 31) & 0xFFFFFFFE;
    v35 = v18 - *(_DWORD *)a2;
    if ( v35 < 0 )
      v35 = *(_DWORD *)a2 - v18;
    if ( v31 && (v36 = (__int64)(((unsigned __int64)v31 >> 1) + v35 * (unsigned __int64)v19) / v31, v36 <= 0x7FFFFFFF) )
    {
      if ( v34 <= -1 )
        LODWORD(v36) = -(int)v36;
    }
    else
    {
      LODWORD(v36) = 0x80000000;
      if ( v34 > -1 )
        LODWORD(v36) = 0x7FFFFFFF;
    }
    *(_DWORD *)a1 = v42 + v36;
    v37 = ((*((_DWORD *)a2 + 1) - DWORD1(v18)) >> 31) & 0xFFFFFFFE;
    v38 = DWORD1(v18) - *((_DWORD *)a2 + 1);
    if ( v38 < 0 )
      v38 = *((_DWORD *)a2 + 1) - DWORD1(v18);
    if ( v31 && (v39 = (__int64)(((unsigned __int64)v31 >> 1) + v38 * (unsigned __int64)v19) / v31, v39 <= 0x7FFFFFFF) )
    {
      v16 = (__int64)(((unsigned __int64)v31 >> 1) + v38 * (unsigned __int64)v19) / v31;
      if ( v37 <= -1 )
        v16 = -(int)v39;
    }
    else if ( v37 > -1 )
    {
      v16 = 0x7FFFFFFF;
    }
    result = 1LL;
    *(_DWORD *)(a1 + 4) = v16 + HIDWORD(v42);
  }
  return result;
}
