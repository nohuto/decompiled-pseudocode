/*
 * XREFs of ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x18006005C
 * Callers:
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18005FBF0 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D0E4 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800A8E78 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1802FA5E4 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

__int64 __fastcall CApplicationFrameService::_TransferFromPoolToActive(CApplicationFrameService *this, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdx
  char *v5; // r14
  __int64 v6; // r15
  int v7; // edi
  __int64 *v9; // rcx

  v2 = (_QWORD *)((char *)this + 136);
  v4 = *((_QWORD *)this + 18);
  v5 = (char *)this + 104;
  v6 = *((_QWORD *)this + 13);
  v7 = 0;
  if ( v4 != *((_QWORD *)this + 20)
    || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::_EnsureCapacity(
               (char *)this + 136,
               v4 + 1),
        v7 >= 0) )
  {
    v9 = (__int64 *)(*v2 + 8 * v2[1]++);
    if ( v9 )
    {
      *v9 = *(_QWORD *)(v6 + 8 * a2);
      Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v9);
    }
    CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
      v5,
      a2);
  }
  return (unsigned int)v7;
}
