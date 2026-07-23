/*
 * XREFs of MiStoreFaultComplete @ 0x14048E5F8
 * Callers:
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiIsRetryIoStatus @ 0x140467310 (MiIsRetryIoStatus.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiStoreLogReadFailure @ 0x14070F7D8 (MiStoreLogReadFailure.c)
 */

void __fastcall MiStoreFaultComplete(ULONG_PTR BugCheckParameter2, int *a2)
{
  ULONG_PTR v2; // rsi
  int v5; // ebx
  __int64 v6; // rcx

  v2 = *(int *)(BugCheckParameter2 + 80);
  v5 = 1;
  if ( (v2 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v2 == -1073741275 )
    {
      if ( (*(_QWORD *)(48LL * *(_QWORD *)(BugCheckParameter2 + 320) - 0x21FFFFFFFFE8LL) & 0x4000000000000000LL) == 0 )
        KeBugCheckEx(
          0x1Au,
          0x6000uLL,
          BugCheckParameter2,
          *(int *)(BugCheckParameter2 + 80),
          *(unsigned int *)(BugCheckParameter2 + 184));
      *(_DWORD *)(BugCheckParameter2 + 80) = -1073741801;
    }
    else if ( (_DWORD)v2 == -1073741791 )
    {
      *(_DWORD *)(BugCheckParameter2 + 80) = -1073741801;
    }
    else if ( MiIsRetryIoStatus(v2, 0x1000uLL) )
    {
      v5 = 3;
    }
    else
    {
      if ( (_DWORD)v2 == -1073741807 || (_DWORD)v2 == -2147483626 )
        KeBugCheckEx(0x1Au, 0x6002uLL, BugCheckParameter2, v2, 0LL);
      if ( (_DWORD)v2 == -1073740576
        && (*(_QWORD *)(48LL * *(_QWORD *)(BugCheckParameter2 + 320) - 0x21FFFFFFFFE8LL) & 0x4000000000000000LL) != 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 80) = -1073741801;
      }
      if ( *(_DWORD *)(BugCheckParameter2 + 80) != -1073741801 )
      {
        _InterlockedAdd(&dword_140E36160, 1u);
        if ( stru_140E366D8.FirstArgument )
        {
          if ( *(_DWORD *)stru_140E366D8.FirstArgument
            && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000002LL) )
          {
            MiStoreLogReadFailure(v6, BugCheckParameter2);
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 88) = (unsigned __int64)(unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 88) << 12;
  }
  *a2 = v5;
}
