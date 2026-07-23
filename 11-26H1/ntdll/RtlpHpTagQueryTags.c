/*
 * XREFs of RtlpHpTagQueryTags @ 0x1800EA838
 * Callers:
 *     RtlQueryHeapInformation @ 0x180076310 (RtlQueryHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144BD0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpTagContextFindMapping @ 0x1800D4150 (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180114FC0 (RtlpHpTagQueryHeapsRemote.c)
 */

__int64 __fastcall RtlpHpTagQueryTags(char *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // ecx
  unsigned int v6; // edi
  __int64 v7; // r8
  char v8; // al
  unsigned __int16 v9; // cx
  char *v10; // r14
  unsigned __int8 *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 Mapping; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  char *v17; // r12
  _QWORD **v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v5 = *((unsigned __int16 *)a1 + 1);
  if ( (v5 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)a1 + 1) != -1LL )
    return (unsigned int)RtlpHpTagQueryHeapsRemote(a1, a2);
  v7 = 2LL;
  if ( (v5 & 2) != 0 && a2 < 0x30 )
    return (unsigned int)-1073741811;
  v6 = 0;
  v8 = (unsigned __int8)RtlpHpHeapFeatures >> 2;
  *((_QWORD *)a1 + 2) = 0LL;
  if ( (v8 & 1) != 0 )
  {
    v9 = v5 | 1;
    v10 = a1 + 24;
    *((_WORD *)a1 + 1) = v9;
    if ( (v9 & 2) != 0 )
    {
      v11 = (unsigned __int8 *)(a1 + 24);
      v12 = 314159LL;
      do
      {
        v13 = *v11;
        v11 += 8;
        v12 = *(v11 - 1)
            + 37
            * (*(v11 - 2)
             + 37
             * (*(v11 - 3)
              + 37 * (*(v11 - 4) + 37 * (*(v11 - 5) + 37 * (*(v11 - 6) + 37 * (*(v11 - 7) + 37 * (v13 + 37 * v12)))))));
        --v7;
      }
      while ( v7 );
      RtlAcquireSRWLockShared(&RtlpHpTagContext);
      Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, (_QWORD *)a1 + 3, v12);
      *((_QWORD *)a1 + 2) = 1LL;
      if ( Mapping )
        v15 = *(_QWORD *)(Mapping + 32);
      else
        v15 = 0LL;
      *((_QWORD *)a1 + 5) = v15;
      RtlReleaseSRWLockShared(&RtlpHpTagContext);
      *a3 = 48LL;
    }
    else
    {
      v16 = (a2 - 24) / 0x18;
      v17 = &v10[24 * v16];
      RtlAcquireSRWLockShared(&RtlpHpTagContext);
      if ( (unsigned int)dword_1801CBC28 <= v16 )
      {
        v18 = (_QWORD **)qword_1801CBC30;
        v19 = (_QWORD *)qword_1801CBC30;
        if ( v10 < v17 )
        {
          while ( v19 )
          {
            v20 = (_QWORD *)*v19;
            v19 = v20;
            if ( ((unsigned __int8)v20 & 1) != 0 )
              break;
LABEL_28:
            if ( v20 )
            {
              *(_OWORD *)v10 = *((_OWORD *)v20 + 1);
              *((_QWORD *)v10 + 2) = v20[4];
              v10 += 24;
              if ( v10 < v17 )
                continue;
            }
            goto LABEL_30;
          }
          for ( ++v18;
                (unsigned __int64)v18 < qword_1801CBC30 + 8 * ((unsigned __int64)(unsigned int)dword_1801CBC2C >> 5);
                ++v18 )
          {
            v19 = *v18;
            if ( ((unsigned __int8)*v18 & 1) == 0 )
            {
              v20 = *v18;
              goto LABEL_28;
            }
          }
        }
LABEL_30:
        RtlReleaseSRWLockShared(&RtlpHpTagContext);
        v21 = (v10 - a1 - 24) / 24;
        *((_QWORD *)a1 + 2) = v21;
        *a3 = 24 * (v21 + 1);
      }
      else
      {
        v6 = -1073741789;
        *a3 = 8 * (3LL * (unsigned int)dword_1801CBC28 + 3);
        RtlReleaseSRWLockShared(&RtlpHpTagContext);
      }
    }
  }
  else
  {
    *((_WORD *)a1 + 1) = v5 & 0xFFFE;
    *a3 = 24LL;
  }
  return v6;
}
