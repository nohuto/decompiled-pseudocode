/*
 * XREFs of ?Remove@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K@Z @ 0x18052BDF8
 * Callers:
 *     ?RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18052BE38 (-RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18052BF30 (-RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801701F4 (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1801965F0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTa.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::Remove(
        __int64 *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  result = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
             a1,
             (__int64)a2,
             a2,
             &v4);
  if ( (int)result >= 0 )
    return CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::RemoveAt(
             a1,
             v4);
  return result;
}
