/*
 * XREFs of ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x1800F7D18
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800F8CE0 (-EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BE0C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F7928 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0SystemCursorService2@@QEAA@PEAVSystemCursorController2@@@Z @ 0x1800FA798 (--0SystemCursorService2@@QEAA@PEAVSystemCursorController2@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<SystemCursorService2,SystemCursorController2 *>(
        _QWORD *a1,
        struct SystemCursorController2 **a2)
{
  char *v4; // rsi
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v13; // [rsp+40h] [rbp-18h]

  v4 = (char *)operator new(0x120uLL);
  *(_OWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<SystemCursorService2>::`vftable';
  SystemCursorService2::SystemCursorService2((SystemCursorService2 *)(v4 + 16), *a2);
  *a1 = v4 + 16;
  a1[1] = v4;
  if ( v4 != (char *)-16LL )
  {
    v5 = *((_QWORD *)v4 + 7);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
      v11[0] = v4 + 16;
      v6 = (std::_Ref_count_base *)a1[1];
      v11[1] = v6;
      v7 = std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>(&v12, v11);
      v8 = *v7;
      *v7 = *((_QWORD *)v4 + 6);
      *((_QWORD *)v4 + 6) = v8;
      v9 = v7[1];
      v7[1] = *((_QWORD *)v4 + 7);
      *((_QWORD *)v4 + 7) = v9;
      if ( v13 )
        std::_Ref_count_base::_Decwref(v13);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
    }
  }
  return a1;
}
