/*
 * XREFs of MiUpdateLargePageCandidates @ 0x1404406E0
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiMirrorZeroFreeListsCallback @ 0x14049AC50 (MiMirrorZeroFreeListsCallback.c)
 * Callees:
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     MiRecordLargePageCandidate @ 0x1404409A0 (MiRecordLargePageCandidate.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUpdateLargePageCandidates(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v8; // r8d
  char *v9; // r9
  int i; // r10d
  int v11; // edx
  signed __int16 v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v13 = 0;
  v4 = (*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL;
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v4);
  if ( !*(_BYTE *)(v5 + 16486) )
    return 0LL;
  v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v4);
  if ( a2 )
  {
    if ( a3 <= 0 )
    {
      if ( a2 != 2 )
      {
        MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, a2, 0, (volatile signed __int16 *)&v13);
        if ( (v13 & 0x1FF80000) == 0xFF80000 && _bittest64(&KeFeatureBits, 0x25u) )
          MiRecordLargePageCandidate(v5, BugCheckParameter2, 0LL, 1LL);
        return 0LL;
      }
      MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, 2, 0, &v12);
      if ( (v12 & 0xFC00) != 0x7C00LL )
        return 0LL;
      v8 = dword_140E2D804;
      if ( dword_140E2D800 > (unsigned int)dword_140E2D804
        || (v9 = (char *)qword_140E2D860 + 16 * dword_140E2D800, BugCheckParameter2 < *(_QWORD *)v9)
        || dword_140E2D800 != dword_140E2D804 && BugCheckParameter2 >= *((_QWORD *)v9 + 2) )
      {
        for ( i = 0; ; i = v11 + 1 )
        {
          while ( 1 )
          {
            if ( v8 < i )
              KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
            v11 = (i + v8) >> 1;
            v9 = (char *)qword_140E2D860 + 16 * v11;
            if ( BugCheckParameter2 >= *(_QWORD *)v9 )
              break;
            if ( !v11 )
              KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)v9, 0LL);
            v8 = v11 - 1;
          }
          if ( v11 == dword_140E2D804 || BugCheckParameter2 < *((_QWORD *)v9 + 2) )
            break;
        }
        dword_140E2D800 = (i + v8) >> 1;
      }
      _InterlockedDecrement64((volatile signed __int64 *)(56320LL * *((unsigned int *)v9 + 2)
                                                        + *(_QWORD *)(v5 + 16)
                                                        + 56224));
      return 0LL;
    }
    else if ( a2 == 2 )
    {
      MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, 2, 1, &v12);
      if ( (v12 & 0xFC00) != 0x8000LL )
        return 0LL;
      return MiRecordLargePageCandidate(v5, BugCheckParameter2, 1LL, 8LL);
    }
    else
    {
      MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, a2, 1, (volatile signed __int16 *)&v13);
      if ( (v13 & 0x1FF80000) != 0x10000000 || !_bittest64(&KeFeatureBits, 0x25u) )
        return 0LL;
      return MiRecordLargePageCandidate(v5, BugCheckParameter2, 0LL, 8LL);
    }
  }
  else
  {
    MiUpdateLargePageCandidateValue(v6, BugCheckParameter2, 0, a3 > 0, 0LL);
    return 0LL;
  }
}
