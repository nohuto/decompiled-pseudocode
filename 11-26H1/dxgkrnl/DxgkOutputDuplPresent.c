/*
 * XREFs of DxgkOutputDuplPresent @ 0x1403D2980
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x140194BE4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x14029EA64 (OutputDuplPresent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(void *Src)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  struct _KTHREAD **v5; // r13
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned int v9; // eax
  RECT *v10; // rdi
  RECT *v11; // rax
  D3DKMT_MOVE_RECT *v12; // rsi
  unsigned int v13; // esi
  __int64 CurrentProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _D3DKMT_OUTPUTDUPLPRESENT v17; // [rsp+60h] [rbp-168h] BYREF

  memset(&v17, 0, sizeof(v17));
  Current = DXGPROCESS::GetCurrent(v2);
  v5 = (struct _KTHREAD **)Current;
  if ( Current )
  {
    if ( (*((_DWORD *)Current + 102) & 4) != 0 )
    {
      RtlCopyFromUser(&v17, Src, 0x138uLL);
      v6 = 16LL * v17.PresentRegions.DirtyRectCount;
      if ( v6 > 0xFFFFFFFF )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 11889;
        return 3221225621LL;
      }
      v7 = 24LL * v17.PresentRegions.MoveRectCount;
      if ( v7 > 0xFFFFFFFF )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 11896;
        return 3221225621LL;
      }
      v9 = v7 + v6;
      if ( (int)v7 + (int)v6 < (unsigned int)v7 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 11903;
        return 3221225621LL;
      }
      v10 = 0LL;
      if ( v9 )
      {
        v11 = (RECT *)operator new[](v9, 0x4B677844u, 256LL);
        v10 = v11;
        if ( !v11 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 11914;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to alloc buffer for kernel copy of meta data.",
            11914LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
        v12 = (D3DKMT_MOVE_RECT *)&v11[v17.PresentRegions.DirtyRectCount];
        if ( v17.PresentRegions.DirtyRectCount )
        {
          RtlCopyFromUser(v11, (void *)v17.PresentRegions.pDirtyRects, (unsigned int)v6);
          v17.PresentRegions.pDirtyRects = v10;
        }
        else
        {
          v17.PresentRegions.pDirtyRects = 0LL;
        }
        if ( v17.PresentRegions.MoveRectCount )
        {
          ProbeForRead((volatile void *)v17.PresentRegions.pMoveRects, (unsigned int)v7, 1u);
          TranslateAndCopyDWMMoveRegionToDDAMoveRegions(
            v17.PresentRegions.MoveRectCount,
            v17.PresentRegions.pMoveRects,
            v12);
          v17.PresentRegions.pMoveRects = v12;
        }
        else
        {
          v17.PresentRegions.pMoveRects = 0LL;
        }
      }
      else
      {
        v17.PresentRegions.pDirtyRects = 0LL;
        v17.PresentRegions.pMoveRects = 0LL;
      }
      v13 = OutputDuplPresent(&v17, v5);
      if ( v10 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
      return v13;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 11870;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Function can only be called from DWM process",
        11870LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 11863;
    v16 = PsGetCurrentProcess(v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v16,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
