/*
 * XREFs of StubCallback @ 0x1800B5120
 * Callers:
 *     ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x1800B4370 (-OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall StubCallback(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // rax

  if ( a1 )
  {
    v8 = a1 + 8;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(v9 + 8) + 24LL))(
        v9 + 8,
        a2,
        a3,
        a4,
        a5);
    }
  }
  return 0LL;
}
