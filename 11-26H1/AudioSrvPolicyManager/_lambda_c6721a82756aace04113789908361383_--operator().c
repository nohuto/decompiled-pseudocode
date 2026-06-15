/*
 * XREFs of _lambda_c6721a82756aace04113789908361383_::operator() @ 0x18003F3A0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c6721a82756aace04113789908361383__long_IAudioSessionInfo___::_Do_call @ 0x180040BC0 (std--_Func_impl_no_alloc__lambda_c6721a82756aace04113789908361383__long_IAudioSessionInfo___--_D.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18003F8EC (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_c6721a82756aace04113789908361383_::operator()(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[3]; // [rsp+28h] [rbp-30h] BYREF
  __int16 v11; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v3 = *a1;
  v4 = *(_QWORD *)a1[1];
  try
  {
    v5 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 64LL))();
    v10[0] = &CGenerateDuckingNotification::`vftable';
    v10[1] = v4;
    v10[2] = v5;
    v11 = 257;
    CLockedList_UniqueValuesOnly<CDuckingNotification,0>::ForEachEntry(v3 + 72, v10);
  }
  catch ( ATL::CAtlException *v9 )
  {
    v8 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _o__resetstkoflw();
    return *(unsigned int *)v8;
  }
  return v2;
}
