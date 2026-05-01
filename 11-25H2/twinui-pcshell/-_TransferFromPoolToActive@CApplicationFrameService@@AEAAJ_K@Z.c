/*
 * XREFs of ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x180086A6C
 * Callers:
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x1800865F0 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180027200 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1801831E0 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1802FEFAC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

__int64 __fastcall CApplicationFrameService::_TransferFromPoolToActive(
        CApplicationFrameService *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rdx
  char *v7; // r14
  __int64 v8; // r15
  int v9; // edi
  _QWORD *v11; // rcx
  __int64 v12; // rdx

  v4 = (_QWORD *)((char *)this + 136);
  v6 = *((_QWORD *)this + 18);
  v7 = (char *)this + 104;
  v8 = *((_QWORD *)this + 13);
  v9 = 0;
  if ( v6 != *((_QWORD *)this + 20)
    || (v9 = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::_EnsureCapacity(
               (__int64)this + 136,
               v6 + 1),
        v9 >= 0) )
  {
    ++v4[1];
    v11 = (_QWORD *)(*v4 + 8LL * v4[1] - 8);
    if ( *v4 + 8LL * v4[1] == 8 )
      goto LABEL_7;
    v12 = *(_QWORD *)(v8 + 8 * a2);
    *v11 = v12;
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v11, v12, a3, a4);
  }
  if ( v9 >= 0 )
LABEL_7:
    CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
      v7,
      a2);
  return (unsigned int)v9;
}
