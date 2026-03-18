/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x140083540
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x140083490 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v8; // rcx
  __int64 result; // rax
  int (*v10)(void); // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD); // rax
  __int64 v15; // rax
  unsigned __int16 v16; // di
  int v17; // r9d
  __int128 v18; // xmm0
  unsigned int v19; // ecx
  unsigned __int64 v20; // r12
  signed int v21; // r10d
  int v22; // edx
  unsigned __int64 v23; // rax
  __int128 v24; // rtt
  int v25; // r11d
  signed int v26; // ebx
  int v27; // edx
  unsigned __int64 v28; // rax
  int v29; // r10d
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  signed int v32; // r10d
  int v33; // ecx
  unsigned __int64 v34; // rax
  signed int v35; // r10d
  int v36; // edx
  unsigned __int64 v37; // rax
  __int128 v38; // [rsp+30h] [rbp-78h]
  __int64 v39; // [rsp+40h] [rbp-68h]

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v8 = CurrentThreadDpiAwarenessContext;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2
    || (LOBYTE(v8) = CurrentThreadDpiAwarenessContext & 0xF,
        (v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48) + 3472LL)) == 0LL)
    || v10() < 0 )
  {
    *(_QWORD *)a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 && (v12 = *a4) != 0
      || ((v13 = *a2,
           (v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 48)
                                                                     + 3480LL)) == 0LL)
        ? (v12 = 0LL)
        : (v12 = v14(v13, 2LL, CurrentThreadDpiAwarenessContext)),
          a4) )
    {
      *a4 = v12;
    }
    v15 = *(_QWORD *)(v12 + 40);
    v16 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v17 = 0x80000000;
    v18 = *(_OWORD *)(v15 + 28);
    v19 = *(unsigned __int16 *)(v15 + 62);
    v20 = *(unsigned __int16 *)(v15 + 60);
    v39 = v18;
    if ( v16 )
    {
      v21 = ((int)v18 >> 31) & 0xFFFFFFFE;
      v22 = -(int)v18;
      if ( (int)v18 > 0 )
        v22 = v18;
      if ( *(_WORD *)(v15 + 62)
        && (v24 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v15 + 62) >> 1) + v22 * (unsigned __int64)v16),
            v23 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v15 + 62) >> 1) + v22 * (unsigned __int64)v16)
                / *(unsigned __int16 *)(v15 + 62),
            v25 = v24 / (int)v19,
            v23 <= 0x7FFFFFFF) )
      {
        if ( v21 <= -1 )
          v25 = -(int)v23;
      }
      else
      {
        v25 = 0x80000000;
        if ( v21 > -1 )
          v25 = 0x7FFFFFFF;
      }
      v26 = (SDWORD1(v18) >> 31) & 0xFFFFFFFE;
      v27 = -DWORD1(v18);
      if ( SDWORD1(v18) > 0 )
        v27 = DWORD1(v18);
      if ( v19
        && (v28 = (__int64)(((unsigned __int64)v19 >> 1) + v27 * (unsigned __int64)v16) / v19,
            v29 = v28,
            v28 <= 0x7FFFFFFF) )
      {
        if ( v26 <= -1 )
          v29 = -(int)v28;
      }
      else
      {
        v29 = 0x80000000;
        if ( v26 > -1 )
          v29 = 0x7FFFFFFF;
      }
      if ( (_DWORD)v20 )
      {
        v30 = (v20 >> 1) / (int)v20;
        if ( v30 > 0x7FFFFFFF )
          LODWORD(v30) = 0x7FFFFFFF;
      }
      else
      {
        LODWORD(v30) = 0x7FFFFFFF;
      }
      LODWORD(v39) = v30 + v25;
      if ( !(_DWORD)v20 || (v31 = (__int64)(v20 >> 1) / (int)v20, v31 > 0x7FFFFFFF) )
        LODWORD(v31) = 0x7FFFFFFF;
      HIDWORD(v39) = v31 + v29;
    }
    v32 = ((*(_DWORD *)a2 - (int)v39) >> 31) & 0xFFFFFFFE;
    v33 = v39 - *(_DWORD *)a2;
    v38 = *(_OWORD *)(*(_QWORD *)(v12 + 40) + 28LL);
    if ( v33 < 0 )
      v33 = *(_DWORD *)a2 - v39;
    if ( v16 && (v34 = (__int64)(((unsigned __int64)v16 >> 1) + v33 * v20) / v16, v34 <= 0x7FFFFFFF) )
    {
      if ( v32 <= -1 )
        LODWORD(v34) = -(int)v34;
    }
    else
    {
      LODWORD(v34) = 0x80000000;
      if ( v32 > -1 )
        LODWORD(v34) = 0x7FFFFFFF;
    }
    *(_DWORD *)a1 = v38 + v34;
    v35 = ((*((_DWORD *)a2 + 1) - HIDWORD(v39)) >> 31) & 0xFFFFFFFE;
    v36 = HIDWORD(v39) - *((_DWORD *)a2 + 1);
    if ( v36 < 0 )
      v36 = *((_DWORD *)a2 + 1) - HIDWORD(v39);
    if ( v16 && (v37 = (__int64)(((unsigned __int64)v16 >> 1) + v36 * v20) / v16, v37 <= 0x7FFFFFFF) )
    {
      v17 = (__int64)(((unsigned __int64)v16 >> 1) + v36 * v20) / v16;
      if ( v35 <= -1 )
        v17 = -(int)v37;
    }
    else if ( v35 > -1 )
    {
      v17 = 0x7FFFFFFF;
    }
    result = 1LL;
    *(_DWORD *)(a1 + 4) = v17 + DWORD1(v38);
  }
  return result;
}
