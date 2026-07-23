/*
 * XREFs of MiIncrementAweMapCount @ 0x140706818
 * Callers:
 *     MiReferenceIncomingPhysicalPages @ 0x140707250 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     MiValidateAndLockAweMapCountPage @ 0x140479C7C (MiValidateAndLockAweMapCountPage.c)
 *     MiResolveAwePageConflict @ 0x1407076B4 (MiResolveAwePageConflict.c)
 */

__int64 __fastcall MiIncrementAweMapCount(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  char v13; // cl
  __int64 v14; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  v15 = 0LL;
  while ( 1 )
  {
    if ( !(unsigned int)MiValidateAndLockAweMapCountPage(a1, a2, 1, (__int64)&v15) )
      return 3221225496LL;
    if ( !DWORD2(v15) )
    {
      if ( a4 == 1 )
      {
        v14 = v15;
        if ( (*(_QWORD *)v15 & 0x7FFFFE0000uLL) < 0xE0000 )
        {
          *(_QWORD *)v15 = ((*(_QWORD *)v15 & 0xFFFFFFFFFFFE0000uLL) + 0x20000) ^ (*(_QWORD *)v15 ^ ((*(_QWORD *)v15 & 0xFFFFFFFFFFFE0000uLL) + 0x20000)) & 0xFFFFFF800001FFFFuLL;
          _InterlockedAnd(
            (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                      + 4
                                      * ((((v14 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << ((v14 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
          return 0LL;
        }
        v12 = ((__int64)(v15 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
        v13 = v12;
      }
      else
      {
        v12 = ((__int64)(v15 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
        v13 = v12;
      }
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber + 4 * (v12 >> 5)),
        ~(1 << v13));
      return 3221225496LL;
    }
    v10 = v15;
    if ( (*(_QWORD *)(v15 + 24) & 0x4000000000000000LL) != 0 && (*(_DWORD *)(a1 + 8) & 1) != 0 )
      goto LABEL_13;
    if ( (*(_BYTE *)(v15 + 34) & 0x20) == 0 && ((*(_DWORD *)(v15 + 32) >> 22) & 3) == a4 )
      break;
    LOBYTE(v9) = a3;
    result = MiResolveAwePageConflict(a1, v15, a4, v9);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_DWORD *)(a1 + 8) & 1) != 0
    || (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0x3FFFFFFFFFFFFFFFLL )
  {
LABEL_13:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225496LL;
  }
  *(_QWORD *)(v10 + 8) = a5;
  *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + 1LL) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
