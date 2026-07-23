/*
 * XREFs of MiStopHugePageAccessor @ 0x140487CF4
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiStopPageAccessor @ 0x140487B48 (MiStopPageAccessor.c)
 * Callees:
 *     MiLocatePageCollisionByPfn @ 0x14028A7B8 (MiLocatePageCollisionByPfn.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140487E90 (MiLockHugeRangeColorHeadAtDpc.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiStopHugePageAccessor(ULONG_PTR *BugCheckParameter2, int a2)
{
  volatile signed __int64 *v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // r10
  __int64 v9; // rdx
  _QWORD **v10; // rcx
  _QWORD *v11; // rax
  _QWORD *i; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD **v15; // rcx
  _QWORD *v16; // rax
  _QWORD *j; // rcx

  v2 = 0LL;
  v4 = ((__int64)BugCheckParameter2 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3;
  if ( !a2 )
  {
    v5 = *BugCheckParameter2 & 7;
    if ( v5 == 1 || v5 == 2 )
      v2 = (volatile signed __int64 *)MiLockHugeRangeColorHeadAtDpc(BugCheckParameter2);
  }
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2EBF0);
  v6 = (_QWORD *)qword_140E2EBF8;
  v7 = 0LL;
  while ( v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
  }
  v8 = 0x3FFFFFLL;
  if ( v7 )
  {
    v9 = v4 & 0x3FFFFF;
    while ( !MiLocatePageCollisionByPfn((__int64)v7, v9) )
    {
      v10 = (_QWORD **)v7[1];
      v11 = v7;
      if ( v10 )
      {
        v7 = (_QWORD *)v7[1];
        for ( i = *v10; i; i = (_QWORD *)*i )
          v7 = i;
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v11 )
            break;
          v11 = v7;
        }
      }
      if ( !v7 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v13 = (_QWORD *)qword_140E2EBE8;
    v7 = 0LL;
    while ( v13 )
    {
      v7 = v13;
      v13 = (_QWORD *)*v13;
    }
    if ( !v7 )
LABEL_33:
      KeBugCheckEx(0x1Au, 0x1502uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, v8 & v4);
    v14 = v8 & v4;
    while ( !MiLocatePageCollisionByPfn((__int64)v7, v14) )
    {
      v15 = (_QWORD **)v7[1];
      v16 = v7;
      if ( v15 )
      {
        v7 = (_QWORD *)v7[1];
        for ( j = *v15; j; j = (_QWORD *)*j )
          v7 = j;
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v16 )
            break;
          v16 = v7;
        }
      }
      if ( !v7 )
        goto LABEL_33;
    }
  }
  *BugCheckParameter2 &= ~0x800000000000000uLL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EBF0);
  if ( v2 )
    _InterlockedAnd64(v2, 0xFFFFFFFFFFFFFFF7uLL);
  return v7;
}
