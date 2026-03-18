/*
 * XREFs of MiInitializeImageProtos @ 0x140338604
 * Callers:
 *     MiCreateImageMapFinish @ 0x140A54F3C (MiCreateImageMapFinish.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetPageForHeader @ 0x14033897C (MiGetPageForHeader.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MiInitializeTransitionPfn @ 0x14036A9A4 (MiInitializeTransitionPfn.c)
 *     MiEndingOffset @ 0x14036CB30 (MiEndingOffset.c)
 *     MiReferenceControlAreaPfn @ 0x14036CB90 (MiReferenceControlAreaPfn.c)
 *     MiStartingOffset @ 0x14036CEA0 (MiStartingOffset.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403719B0 (MiGetEffectivePagePriorityThread.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     KeCopyPageNoOverride @ 0x140730860 (KeCopyPageNoOverride.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  __int64 PageForHeader; // r13
  char *v11; // r15
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rbx
  unsigned __int64 v15; // [rsp+30h] [rbp-78h]
  __int64 v16; // [rsp+38h] [rbp-70h]
  unsigned __int64 v17; // [rsp+40h] [rbp-68h]
  unsigned __int64 v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h]
  unsigned __int64 v22; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v16 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
  v15 = *(unsigned int *)(a2 + 40);
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
      v19 = v7;
      if ( (result & 0x20000) == 0 )
      {
        v9 = MiStartingOffset(v5, v8, 0xFFFFFFFFLL);
        v17 = MiEndingOffset(v5);
        result = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v18 = result;
        while ( 1 )
        {
          if ( v8 >= result )
          {
            v7 = v19;
            goto LABEL_34;
          }
          if ( (v8 & 0xFFF) == 0 || !v6 )
          {
            if ( v6 )
              MiUnlockProtoPoolPage(v6, 0x11u);
            v6 = MiLockProtoPoolPageForce(v8);
          }
          result = v9 + 4096;
          v22 = v9 + 4096;
          if ( v9 + 4096 > v15 )
            break;
          if ( (*(_QWORD *)v8 & 1) != 0 || (*(_QWORD *)v8 & 0xC00LL) == 0x800 || (*(_QWORD *)v8 & 0x400LL) == 0 )
          {
            v13 = v22;
          }
          else
          {
            PageForHeader = MiGetPageForHeader(v16, (*(_DWORD *)(v2 + 56) >> 20) & 0x7F, 1LL);
            if ( PageForHeader == -1 )
            {
              v13 = v22;
            }
            else
            {
              if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                v11 = *(char **)(a2 + 24);
              else
                v11 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
              v12 = MiMapPageInHyperSpaceWorker(PageForHeader, 0LL, 0x80000000);
              KeCopyPageNoOverride(v12, &v11[v9], 1LL);
              v13 = v22;
              if ( v22 > v17 )
                memset_0((void *)(v12 - (unsigned int)(v9 - v17 + 4096) + 4096), 0, (unsigned int)(v9 - v17 + 4096));
              *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
              *(_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
              v14 = 48 * PageForHeader - 0x220000000000LL;
              MiReferenceControlAreaPfn(a1, 0LL, 1LL);
              LODWORD(v22) = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v22);
                while ( *(__int64 *)(v14 + 24) < 0 );
              }
              MiInitializeTransitionPfn(PageForHeader, v8);
              if ( (*(_QWORD *)(v14 + 40) & 0x20000000000000LL) == 0 )
                *(_DWORD *)(v14 + 32) = (v4 << 24) ^ ((v4 << 24) ^ *(_DWORD *)(v14 + 32)) & 0xF8FFFFFF;
              MiRemoveLockedPageChargeAndDecRef(48 * PageForHeader - 0x220000000000LL);
              _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v2 = a1;
          }
          result = v18;
          v8 += 8LL;
          v9 = v13;
        }
        v7 = 0LL;
LABEL_34:
        if ( v6 )
        {
          result = MiUnlockProtoPoolPage(v6, 0x11u);
          v6 = 0LL;
        }
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
