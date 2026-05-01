/*
 * XREFs of ??$BinarySearchEx@VCompareGridElements@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareGridElements@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K@Z @ 0x1804C5698
 * Callers:
 *     ?v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804C7E90 (-v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z.c)
 * Callees:
 *     ?Compare@CompareGridElements@@QEBAHAEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z @ 0x1804C6120 (-Compare@CompareGridElements@@QEBAHAEBV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::BinarySearchEx<CompareGridElements>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int64 v4; // r14
  int v8; // esi
  int v9; // edx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  int v13; // eax

  v4 = a1[1];
  *a4 = 0LL;
  v8 = -2147319765;
  if ( v4 )
  {
    v9 = 0;
    v10 = 0LL;
    v11 = 0LL;
    v12 = v4 - 1;
    v8 = 0;
    while ( v8 >= 0 )
    {
      v11 = (v12 + v10) >> 1;
      v13 = CompareGridElements::Compare(a1, *a1 + 8 * v11, a3);
      v9 = v13;
      if ( v13 <= 0 )
      {
        if ( v13 >= 0 )
        {
          for ( ; v11; --v11 )
          {
            if ( (unsigned int)CompareGridElements::Compare(a1, *a1 - 8LL + 8 * v11, a3) )
              break;
          }
          *a4 = v11;
          return (unsigned int)v8;
        }
        v10 = v11 + 1;
      }
      else if ( v11 )
      {
        v12 = v11 - 1;
      }
      else
      {
        v8 = -2147319765;
      }
      if ( v12 < v10 )
        v8 = -2147319765;
    }
    if ( v9 >= 0 )
      v10 = v11;
    *a4 = v10;
  }
  return (unsigned int)v8;
}
