/*
 * XREFs of CheckUniqueGpuVaMapping @ 0x140112304
 * Callers:
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140112180 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckUniqueGpuVaMapping(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned int v8; // edi
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *i; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // r11
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax

  KeEnterCriticalRegion();
  v4 = a1 + 192;
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
  v5 = a2[11];
  v6 = v5 & 0x7FFFFFFFFFFFFFFFLL;
  v7 = a2[10];
  v8 = 0;
  v9 = v5 >> 63;
  v10 = (_QWORD *)(a1 + 96);
  for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
  {
    v13 = i[4];
    if ( v7 + a2[14] - a2[13] <= v13 )
    {
      if ( !(_BYTE)v9 )
        goto LABEL_4;
LABEL_14:
      v15 = (_QWORD *)i[1];
      v16 = a2 + 6;
      if ( (_QWORD *)*v15 == i )
      {
        *v16 = i;
        a2[7] = v15;
        *v15 = v16;
        i[1] = v16;
        goto LABEL_4;
      }
LABEL_18:
      __fastfail(3u);
    }
    v14 = i[7];
    if ( v7 < v13 + i[8] - v14 && v6 != (i[5] & 0x7FFFFFFFFFFFFFFFLL) )
    {
      WdLogSingleEntry4(2LL, v14, i[8], i[5], v6);
      WdLogGlobalForLineNumber = 455;
      v8 = -1073741811;
      goto LABEL_4;
    }
    if ( (_BYTE)v9 && v7 < v13 )
      goto LABEL_14;
  }
  if ( (_BYTE)v9 )
  {
    v17 = (_QWORD *)v10[1];
    v18 = a2 + 6;
    if ( (_QWORD *)*v17 == v10 )
    {
      *v18 = v10;
      a2[7] = v17;
      *v17 = v18;
      v10[1] = v18;
      goto LABEL_4;
    }
    goto LABEL_18;
  }
LABEL_4:
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
