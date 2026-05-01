/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801F2A78
 * Callers:
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8D44 (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C0D70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPosition.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 v7; // r10

  v3 = a2;
  v4 = a1;
  v5 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 2062024504
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_7ae7ff38_b4c2_4847_a3b7_4657c8b5bc82.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_7ae7ff38_b4c2_4847_a3b7_4657c8b5bc82.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_7ae7ff38_b4c2_4847_a3b7_4657c8b5bc82.Data4[4] )
    {
      goto LABEL_12;
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
    return 0LL;
  }
  if ( !InlineIsEqualGUID((const struct _GUID *)a2, &GUID_fd10ce77_803f_4316_961f_cc6c4ac32fca) )
    return (unsigned int)-2147467262;
  v4 = v7 + 8;
LABEL_12:
  *a3 = v4;
  (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v4 + 8LL))(v4, a2, a3, v3);
  return v5;
}
