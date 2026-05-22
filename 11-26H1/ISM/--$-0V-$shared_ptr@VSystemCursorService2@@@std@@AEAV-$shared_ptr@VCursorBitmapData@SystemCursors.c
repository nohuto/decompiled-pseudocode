/*
 * XREFs of ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@1@@?$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@1@@Z @ 0x1800F9C10
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800FB480 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F7928 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 */

__int64 __fastcall std::_Ref_count_obj2<SystemCursorShapeBitmap2>::_Ref_count_obj2<SystemCursorShapeBitmap2>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r10
  _QWORD *v6; // rdi
  std::_Ref_count_base *v7; // r8
  std::_Ref_count_base *v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<SystemCursorShapeBitmap2>::`vftable';
  v4 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v11, a3);
  v10[0] = *v5;
  v6 = v4;
  v10[1] = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>((_QWORD *)(a1 + 16), v10);
  std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>((_QWORD *)(a1 + 32), v6);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (std::_Ref_count_base *)v6[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a1;
}
