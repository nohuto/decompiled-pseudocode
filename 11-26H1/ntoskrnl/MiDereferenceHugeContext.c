/*
 * XREFs of MiDereferenceHugeContext @ 0x1404EFE70
 * Callers:
 *     MiGetUltraHugeAlreadyActive @ 0x14035A1D0 (MiGetUltraHugeAlreadyActive.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14049ABC4 (MiDereferenceAnyActiveHugeContext.c)
 *     MiGetBackgroundHugePageToZero @ 0x1404BBDD8 (MiGetBackgroundHugePageToZero.c)
 *     MiUnlockZeroedPage @ 0x140521994 (MiUnlockZeroedPage.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiStopPageAccessor @ 0x140487B48 (MiStopPageAccessor.c)
 *     MiRemoveFaultNode @ 0x1404F0028 (MiRemoveFaultNode.c)
 *     MiFreeUltraMapping @ 0x140529EDC (MiFreeUltraMapping.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceHugeContext(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // rcx

  v1 = *(_QWORD *)(a1 + 328);
  if ( (*(_DWORD *)(v1 + 316))-- == 1 )
  {
    v4 = v1 + 72;
    v5 = *(_QWORD *)(v1 + 72);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 8) != v4 || (v6 = *(_QWORD **)(v1 + 80), *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      v7 = *(_QWORD *)(v1 + 24);
      if ( (v7 & 8) != 0 )
      {
        v8 = (v7 >> 12) & 0x3FFFFFFFFFLL;
        v9 = 0LL;
        v10 = 0LL;
        if ( *(_BYTE *)(v1 + 68) )
        {
          v10 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (v8 & 0x3FFFFF);
          MiLockHugePfnAtDpc(v10);
        }
        else if ( MiSafeLockPageAtDpc(v8) != 17 )
        {
          v9 = 48 * v8 - 0x220000000000LL;
        }
        v11 = ((*(_QWORD *)(v1 + 304) >> 27) & 0x1FFFF8LL) - 0x90482600000LL;
        if ( (*(_QWORD *)(v1 + 24) & 1) == 0 )
        {
          v12 = v10;
          if ( !*(_BYTE *)(v1 + 68) )
            v12 = v9;
          MiStopPageAccessor(v12);
          if ( v11 )
            MiRewritePteWithLockBit(0LL, 0, v11, *(__int64 *)&CLFS_LSN_NULL_EXT);
        }
        if ( *(_BYTE *)(v1 + 68) )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                      + 4
                                      * ((((v10 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << ((v10 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
        }
        else if ( v9 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      MiFreeUltraMapping(*(_QWORD *)(v1 + 304));
      MiDeleteUltraThreadContext(v1 + 176);
    }
    MiRemoveFaultNode(v1, 1LL);
    ExFreePoolWithTag((PVOID)v1, 0);
  }
  *(_QWORD *)(a1 + 328) = 0LL;
}
