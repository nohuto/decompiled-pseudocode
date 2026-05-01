/*
 * XREFs of ??$_MergeThem@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x18053CAC0
 * Callers:
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x18053C9D8 (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     ?Compare@CDropFeedbackItemComparator@@QEBAHV?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z @ 0x18053CE80 (-Compare@CDropFeedbackItemComparator@@QEBAHV-$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z.c)
 */

char *__fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeThem<CDropFeedbackItemComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  void *v5; // r14
  char *v6; // rdi
  void *v7; // rbp
  void *v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rcx
  char *result; // rax
  __int64 *v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF
  __int64 v15; // [rsp+88h] [rbp+10h]
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  char *v17; // [rsp+98h] [rbp+20h]

  v17 = (char *)a4;
  v15 = a2;
  v5 = (void *)(a4 >> 1);
  v6 = (char *)(*(_QWORD *)a1 + 8 * a3);
  memcpy_0(*(void **)(a1 + 16), v6, 8 * (a4 >> 1));
  v7 = 0LL;
  v8 = v5;
  v9 = 0LL;
  LOBYTE(v15) = 0;
  do
  {
    v13 = (__int64 *)&v6[8 * (_QWORD)v8];
    v14 = *v13;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v14);
    v10 = 8LL * (_QWORD)v7;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * (_QWORD)v7);
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v16);
    if ( (int)CDropFeedbackItemComparator::Compare(v11, &v16, &v14) <= 0 )
    {
      result = *(char **)(a1 + 16);
      v7 = (char *)v7 + 1;
      *(_QWORD *)&v6[8 * v9] = *(_QWORD *)&result[v10];
      if ( v7 == v5 )
        return result;
    }
    else
    {
      v8 = (char *)v8 + 1;
      *(_QWORD *)&v6[8 * v9] = *v13;
      result = v17;
      if ( v8 == v17 )
      {
        result = (char *)memcpy_0(
                           &v6[8 * v9 + 8],
                           (const void *)(v10 + *(_QWORD *)(a1 + 16)),
                           8LL * (_QWORD)&v17[-v9 - 1]);
        LOBYTE(v15) = 1;
      }
    }
    ++v9;
  }
  while ( !(_BYTE)v15 );
  return result;
}
