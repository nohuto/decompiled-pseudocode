/*
 * XREFs of ?_Tidy@?$vector@PEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@AEAAXXZ @ 0x180200214
 * Callers:
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180200054 (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180200284 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessSetConditions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18026C104 (-ProcessSetConditions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_.c)
 *     ?ProcessSetColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027DF94 (-ProcessSetColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SET.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CPrimitiveColor *>::_Tidy(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    v6 = v2;
    v4 = v3 & 0xFFFFFFFFFFFFFFF8uLL;
    v5 = v4;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = v5;
      v2 = v6;
    }
    operator delete(v2, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
