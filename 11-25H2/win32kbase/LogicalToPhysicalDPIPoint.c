/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x140063F60
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1400639E0 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x140064158 (GetMonitorRectForDpi.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 result; // rax
  int (*v9)(void); // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD); // rax
  __int64 v13; // rsi
  int v14; // edi
  int v15; // r9d
  int v16; // eax
  int v17; // ecx
  signed int v18; // r8d
  unsigned __int64 v19; // rax
  int v20; // rcx^4
  int v21; // eax
  int v22; // edx
  signed int v23; // r11d
  unsigned __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-28h] BYREF
  int v26; // [rsp+24h] [rbp-24h]
  _DWORD v27[6]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2
    || (v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3920LL)) == 0LL
    || v9() < 0 )
  {
    *(_QWORD *)a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 && (v10 = *a4) != 0
      || ((v11 = *a2,
           (v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48)
                                                                     + 3928LL)) == 0LL)
        ? (v10 = 0LL)
        : (v10 = v12(v11, 2LL, CurrentThreadDpiAwarenessContext)),
          a4) )
    {
      *a4 = v10;
    }
    v13 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 60LL);
    v14 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    GetMonitorRectForDpi(&v25, v10, (unsigned __int16)v14);
    GetMonitorRectForDpi(v27, v10, 0LL);
    v15 = 0x80000000;
    v16 = *(_DWORD *)a2 - v25;
    v17 = v25 - *(_DWORD *)a2;
    v18 = (v16 >> 31) & 0xFFFFFFFE;
    if ( v16 >= 0 )
      v17 = *(_DWORD *)a2 - v25;
    if ( v14 && (v19 = (__int64)(((unsigned __int64)(unsigned int)v14 >> 1) + v13 * v17) / v14, v19 <= 0x7FFFFFFF) )
    {
      if ( v18 <= -1 )
        LODWORD(v19) = -(int)v19;
    }
    else
    {
      LODWORD(v19) = 0x80000000;
      if ( v18 > -1 )
        LODWORD(v19) = 0x7FFFFFFF;
    }
    v20 = v27[1];
    *(_DWORD *)a1 = v27[0] + v19;
    v21 = *((_DWORD *)a2 + 1) - v26;
    v22 = v26 - *((_DWORD *)a2 + 1);
    v23 = (v21 >> 31) & 0xFFFFFFFE;
    if ( v21 >= 0 )
      v22 = *((_DWORD *)a2 + 1) - v26;
    if ( v14
      && (v24 = (__int64)(((unsigned __int64)(unsigned __int16)v14 >> 1) + v13 * v22) / (unsigned __int16)v14,
          v24 <= 0x7FFFFFFF) )
    {
      v15 = (__int64)(((unsigned __int64)(unsigned __int16)v14 >> 1) + v13 * v22) / (unsigned __int16)v14;
      if ( v23 <= -1 )
        v15 = -(int)v24;
    }
    else if ( v23 > -1 )
    {
      v15 = 0x7FFFFFFF;
    }
    result = 1LL;
    *(_DWORD *)(a1 + 4) = v15 + v20;
  }
  return result;
}
