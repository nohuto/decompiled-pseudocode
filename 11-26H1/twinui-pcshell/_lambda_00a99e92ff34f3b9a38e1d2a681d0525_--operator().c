/*
 * XREFs of _lambda_00a99e92ff34f3b9a38e1d2a681d0525_::operator() @ 0x18008F854
 * Callers:
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18008F7A0 (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall lambda_00a99e92ff34f3b9a38e1d2a681d0525_::operator()(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  int (__fastcall *v5)(__int64, __int64, _QWORD, int *); // rbx
  __int64 v6; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 4) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v8 = 0;
    if ( !v4
      || (v5 = *(int (__fastcall **)(__int64, __int64, _QWORD, int *))(*(_QWORD *)v4 + 48LL),
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 384LL))(a2),
          v5(v4, v6, 0LL, &v8) < 0)
      || v8 != 1 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(*(__int64 **)a1, a2);
    }
  }
  return **(_QWORD **)a1 == 0LL;
}
