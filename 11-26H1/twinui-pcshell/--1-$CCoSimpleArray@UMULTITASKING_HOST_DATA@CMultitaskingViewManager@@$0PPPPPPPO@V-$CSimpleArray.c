/*
 * XREFs of ??1?$CCoSimpleArray@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@@@@@QEAA@XZ @ 0x180210CAC
 * Callers:
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$27 @ 0x1806F011F (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$27.c)
 * Callees:
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180024540 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 */

void __fastcall CCoSimpleArray<CMultitaskingViewManager::MULTITASKING_HOST_DATA,4294967294,CSimpleArrayStandardCompareHelper<CMultitaskingViewManager::MULTITASKING_HOST_DATA>>::~CCoSimpleArray<CMultitaskingViewManager::MULTITASKING_HOST_DATA,4294967294,CSimpleArrayStandardCompareHelper<CMultitaskingViewManager::MULTITASKING_HOST_DATA>>(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 16LL;
      }
      while ( v3 < *v1 );
    }
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *v1 = 0LL;
}
