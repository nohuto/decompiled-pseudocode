/*
 * XREFs of MiInitializeImageProtos @ 0x14033A684
 * Callers:
 *     MiCreateImageMapFinish @ 0x140A624DC (MiCreateImageMapFinish.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetPageForHeader @ 0x14033A9FC (MiGetPageForHeader.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiInitializeTransitionPfn @ 0x14036C744 (MiInitializeTransitionPfn.c)
 *     MiEndingOffset @ 0x14036E8D0 (MiEndingOffset.c)
 *     MiReferenceControlAreaPfn @ 0x14036E930 (MiReferenceControlAreaPfn.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     KeCopyPageNoOverride @ 0x140735430 (KeCopyPageNoOverride.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 result; // rax
  char v4; // bp
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r15
  ULONG_PTR v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 PageForHeader; // r13
  char *v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rbx
  unsigned __int64 v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  unsigned __int64 v19; // [rsp+40h] [rbp-68h]
  unsigned __int64 v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+50h] [rbp-58h]
  unsigned __int64 v24; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v18 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
  v17 = *(unsigned int *)(a2 + 40);
  result = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
  v4 = result;
  if ( (unsigned int)result > 5 )
  {
    v4 = 5;
  }
  else if ( (_DWORD)result )
  {
    v4 = result - 1;
  }
  v5 = v2 + 128;
  v6 = 0LL;
  if ( v2 != -128 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      result = *(unsigned int *)(v5 + 32);
      v8 = *(_QWORD *)(v5 + 8);
      v21 = v7;
      if ( (result & 0x20000) == 0 )
      {
        v9 = MiStartingOffset(v5, v8, 0xFFFFFFFFLL);
        v19 = MiEndingOffset(v5);
        result = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v20 = result;
        while ( 1 )
        {
          if ( v8 >= result )
          {
            v7 = v21;
            goto LABEL_34;
          }
          if ( (v8 & 0xFFF) == 0 || !v6 )
          {
            if ( v6 )
            {
              LOBYTE(v10) = 17;
              MiUnlockProtoPoolPage(v6, v10, v11);
            }
            v6 = MiLockProtoPoolPageForce(v8);
          }
          result = v9 + 4096;
          v24 = v9 + 4096;
          if ( v9 + 4096 > v17 )
            break;
          if ( (*(_QWORD *)v8 & 1) != 0 || (*(_QWORD *)v8 & 0xC00LL) == 0x800 || (*(_QWORD *)v8 & 0x400LL) == 0 )
          {
            v15 = v24;
          }
          else
          {
            PageForHeader = MiGetPageForHeader(v18, (*(_DWORD *)(v2 + 56) >> 20) & 0x7F, 1LL);
            if ( PageForHeader == -1 )
            {
              v15 = v24;
            }
            else
            {
              if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                v13 = *(char **)(a2 + 24);
              else
                v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
              v14 = MiMapPageInHyperSpaceWorker(PageForHeader, 0LL, 0x80000000);
              KeCopyPageNoOverride(v14, &v13[v9], 1LL);
              v15 = v24;
              if ( v24 > v19 )
                memset_0((void *)(v14 - (unsigned int)(v9 - v19 + 4096) + 4096), 0, (unsigned int)(v9 - v19 + 4096));
              *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
              *(_QWORD *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
              v16 = 48 * PageForHeader - 0x220000000000LL;
              MiReferenceControlAreaPfn(a1, 0LL, 1LL);
              LODWORD(v24) = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v24);
                while ( *(__int64 *)(v16 + 24) < 0 );
              }
              MiInitializeTransitionPfn(PageForHeader, v8);
              if ( (*(_QWORD *)(v16 + 40) & 0x20000000000000LL) == 0 )
                *(_DWORD *)(v16 + 32) = (v4 << 24) ^ ((v4 << 24) ^ *(_DWORD *)(v16 + 32)) & 0xF8FFFFFF;
              MiRemoveLockedPageChargeAndDecRef(48 * PageForHeader - 0x220000000000LL);
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v2 = a1;
          }
          result = v20;
          v8 += 8LL;
          v9 = v15;
        }
        v7 = 0LL;
LABEL_34:
        if ( v6 )
        {
          LOBYTE(v10) = 17;
          result = MiUnlockProtoPoolPage(v6, v10, v11);
          v6 = 0LL;
        }
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
