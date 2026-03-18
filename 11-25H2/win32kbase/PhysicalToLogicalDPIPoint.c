/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x140041FA0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1400639E0 (TransformPointBetweenCoordinateSpaces.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x140220B58 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x140042C30 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  unsigned int v5; // edi
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int (*v11)(void); // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r9d
  unsigned __int64 v16; // rbp
  __int128 v17; // xmm0
  unsigned __int16 v18; // di
  unsigned __int64 v19; // r11
  int v20; // edx
  signed int v21; // r10d
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  int v24; // edx
  int v25; // r10d
  signed int v26; // r10d
  int v27; // edx
  unsigned __int64 v28; // rax
  int v29; // ebx
  unsigned int v30; // r11d
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // r10d
  int v34; // ecx
  signed int v35; // r10d
  unsigned __int64 v36; // rax
  int v37; // eax
  int v38; // edx
  signed int v39; // r10d
  unsigned __int64 v40; // rax
  __int64 result; // rax
  bool v42; // cc
  __int64 v43; // [rsp+30h] [rbp-78h]

  v5 = a3;
  if ( !a3 )
  {
    v5 = 18;
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
    {
      v9 = *CurrentThreadNonPaged;
      if ( *CurrentThreadNonPaged )
      {
        if ( *(_QWORD *)(v9 + 408) )
          CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadNonPaged);
        if ( *(_DWORD *)(v9 + 400) )
        {
          v5 = *(_DWORD *)(v9 + 400);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
            v5 = *(_DWORD *)(CurrentProcessWin32Process + 268);
        }
      }
    }
  }
  if ( (v5 & 0xF) == 2
    || (v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3920LL)) == 0LL
    || v11() < 0 )
  {
    *(_QWORD *)a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
    {
      v12 = *a4;
      if ( *a4 )
        goto LABEL_18;
    }
    v13 = *a2;
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3928LL);
    if ( v12 )
      v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v12)(v13, 2LL, 18LL);
    if ( a4 )
LABEL_18:
      *a4 = v12;
    v14 = *(_QWORD *)(v12 + 40);
    v15 = 0x80000000;
    v16 = *(unsigned __int16 *)(v14 + 60);
    v17 = *(_OWORD *)(v14 + 28);
    v43 = v17;
    v18 = (v5 >> 8) & 0x1FF;
    if ( v18 )
    {
      v19 = *(unsigned __int16 *)(v14 + 62);
      v20 = -(int)v17;
      v21 = ((int)v17 >> 31) & 0xFFFFFFFE;
      if ( (int)v17 >= 0 )
        v20 = v17;
      if ( *(_WORD *)(v14 + 62) )
      {
        v22 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v14 + 62) >> 1) + v20 * (unsigned __int64)v18)
            / *(unsigned __int16 *)(v14 + 62);
        if ( v22 > 0x7FFFFFFF )
        {
          v23 = DWORD1(v17);
          v42 = v21 <= -1;
          v24 = DWORD1(v17);
          v25 = DWORD1(v17);
          if ( v42 )
            LODWORD(v22) = 0x80000000;
          else
            LODWORD(v22) = 0x7FFFFFFF;
        }
        else
        {
          if ( v21 <= -1 )
            LODWORD(v22) = -(int)v22;
          v23 = DWORD1(v17);
          v24 = DWORD1(v17);
          v25 = DWORD1(v17);
        }
        v26 = (v25 >> 31) & 0xFFFFFFFE;
        v27 = -v24;
        if ( v27 < 0 )
          v27 = v23;
        v28 = (__int64)((v19 >> 1) + v27 * (unsigned __int64)v18) / (int)v19;
        v29 = v28;
        if ( v28 > 0x7FFFFFFF )
        {
          v29 = 0x80000000;
          if ( v26 > -1 )
            v29 = 0x7FFFFFFF;
        }
        else if ( v26 <= -1 )
        {
          v29 = -(int)v28;
        }
      }
      else
      {
        LODWORD(v22) = 0x7FFFFFFF;
        if ( v21 <= -1 )
          LODWORD(v22) = 0x80000000;
        v29 = 0x80000000;
        if ( (int)((SDWORD1(v17) >> 31) & 0xFFFFFFFE) > -1 )
          v29 = 0x7FFFFFFF;
      }
      v30 = v16;
      if ( !(_DWORD)v16 || (v31 = (__int64)(v16 >> 1) / (int)v16, v31 > 0x7FFFFFFF) )
        LODWORD(v31) = 0x7FFFFFFF;
      LODWORD(v43) = v22 + v31;
      if ( !(_DWORD)v16 || (v32 = (__int64)(v16 >> 1) / (int)v16, v32 > 0x7FFFFFFF) )
        LODWORD(v32) = 0x7FFFFFFF;
      HIDWORD(v43) = v29 + v32;
    }
    else
    {
      v30 = *(unsigned __int16 *)(v14 + 60);
    }
    v33 = *(_DWORD *)a2 - v17;
    v34 = v17 - *(_DWORD *)a2;
    if ( v33 >= 0 )
      v34 = *(_DWORD *)a2 - v17;
    v35 = (v33 >> 31) & 0xFFFFFFFE;
    if ( v30 && (v36 = (__int64)(((unsigned __int64)v30 >> 1) + v34 * (unsigned __int64)v18) / v30, v36 <= 0x7FFFFFFF) )
    {
      if ( v35 <= -1 )
        LODWORD(v36) = -(int)v36;
    }
    else
    {
      LODWORD(v36) = 0x80000000;
      if ( v35 > -1 )
        LODWORD(v36) = 0x7FFFFFFF;
    }
    *(_DWORD *)a1 = v43 + v36;
    v37 = *((_DWORD *)a2 + 1) - DWORD1(v17);
    v38 = DWORD1(v17) - *((_DWORD *)a2 + 1);
    v39 = (v37 >> 31) & 0xFFFFFFFE;
    if ( v37 >= 0 )
      v38 = *((_DWORD *)a2 + 1) - DWORD1(v17);
    if ( v30 && (v40 = (__int64)(((unsigned __int64)v30 >> 1) + v38 * (unsigned __int64)v18) / v30, v40 <= 0x7FFFFFFF) )
    {
      v15 = (__int64)(((unsigned __int64)v30 >> 1) + v38 * (unsigned __int64)v18) / v30;
      if ( v39 <= -1 )
        v15 = -(int)v40;
    }
    else if ( v39 > -1 )
    {
      v15 = 0x7FFFFFFF;
    }
    result = 1LL;
    *(_DWORD *)(a1 + 4) = v15 + HIDWORD(v43);
  }
  return result;
}
