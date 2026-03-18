/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreCreateCompatibleDC @ 0x14003AF40 (GreCreateCompatibleDC.c)
 *     NtGdiGetDeviceCaps @ 0x14003C450 (NtGdiGetDeviceCaps.c)
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 *     GreSelectBitmap @ 0x14003E380 (GreSelectBitmap.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14003FDEC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1400C6D34 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140137514 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x14013DF28 (--0DCOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  *(_OWORD *)a1 = 0LL;
  v2 = 0LL;
  v3 = (a1 - 32) & -(__int64)(a1 != 0);
  *(_OWORD *)(a1 + 16) = 0LL;
  if ( a1 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a1 - 32);
    if ( CurrentThreadWin32Thread )
      v2 = *CurrentThreadWin32Thread;
    *(_QWORD *)(a1 + 16) = v3;
    *(_QWORD *)(a1 + 24) = UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic;
    if ( ((v2 + 8) & -(__int64)(v2 != 0)) != 0 )
    {
      v5 = ((v2 + 8) & -(__int64)(v2 != 0)) + 88;
      v6 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
      if ( *(_QWORD *)(v6 + 8) != v5 )
        __fastfail(3u);
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)(v6 + 8) = a1;
      *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58) = a1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a1;
      *(_QWORD *)a1 = a1;
    }
  }
  return a1;
}
