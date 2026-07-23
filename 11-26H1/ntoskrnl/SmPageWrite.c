/*
 * XREFs of SmPageWrite @ 0x140402BD4
 * Callers:
 *     MiStoreWriteIssue @ 0x140400FE8 (MiStoreWriteIssue.c)
 * Callees:
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402800C0 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreReference @ 0x140402DEC (SmpKeyedStoreReference.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x140404388 (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 */

__int64 __fastcall SmPageWrite(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  int v6; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // rcx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  unsigned __int64 v18; // [rsp+A0h] [rbp+40h]
  int v19; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  v5 = a2 + ((unsigned __int64)a3 << 6);
  v6 = -1;
  v16 = &v15;
  v15 = 0LL;
  v7 = (unsigned __int16)KeNumberNodes;
  v17 = (unsigned __int16)KeNumberNodes;
  if ( a2 < v5 )
  {
    v8 = a2 + 16;
    while ( 1 )
    {
      v19 = *(_DWORD *)(v8 - 12);
      v18 = *(_QWORD *)(v8 + 16);
      if ( (*(_DWORD *)v8 & 3) == 0 && ((*(_DWORD *)(v3 + 2336) & 0x800) == 0 || *(_QWORD *)v8 < 0x7FFFFFFF0000uLL) )
      {
        if ( v4 == *(_QWORD *)(v8 - 8) )
        {
          v12 = v6 & 0x3FF | v18 & 0xFFFFF800;
          LODWORD(v18) = v12;
          goto LABEL_12;
        }
        if ( v6 != -1 )
        {
          v9 = v6 & 0x3FF;
          v10 = *(struct _EX_RUNDOWN_REF **)(v3 + 8 * (v9 >> 5));
          if ( v10 )
            v10 += 5 * (v9 & 0x1F);
          ExReleaseRundownProtection_0(v10 + 1);
          v4 = 0LL;
        }
        v11 = SmpKeyedStoreReference((struct _KTHREAD *)(v3 + 2344));
        v6 = v11;
        if ( v11 != -1 )
        {
          v4 = *(_QWORD *)(v8 - 8);
          v12 = v11 & 0x3FF | v18 & 0xFFFFF800;
          LODWORD(v18) = v12;
          goto LABEL_12;
        }
      }
      v12 = v18;
LABEL_12:
      if ( (v12 & 0x7FF) == 0x400 )
      {
        if ( *(_DWORD *)(v3 + 2384) == -1 )
        {
          v13 = -1073741285;
          goto LABEL_16;
        }
        LODWORD(v18) = v12 & 0xFFFFF800 | *(_DWORD *)(v3 + 2384) & 0x3FF;
      }
      v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
              v3,
              &v19,
              v18,
              *(_QWORD *)(v8 + 24),
              (_SLIST_ENTRY *)(*(_QWORD *)(v8 + 32) & 0x7FFFFFFFFFFFFFFFLL),
              *(_SLIST_ENTRY **)(v8 + 40),
              (__int64)&v15);
LABEL_16:
      *(_DWORD *)(v8 - 16) = v13;
      v8 += 64LL;
      if ( v8 - 16 >= v5 )
      {
        v7 = (unsigned int)v17;
        break;
      }
    }
  }
  if ( v16 != &v15 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxQueueEntries((PEX_SPIN_LOCK)(*(_QWORD *)(v3 + 1120) + 176 * v7));
  if ( v6 != -1 )
    SmKmStoreDereference(v3, v6);
  return 259LL;
}
