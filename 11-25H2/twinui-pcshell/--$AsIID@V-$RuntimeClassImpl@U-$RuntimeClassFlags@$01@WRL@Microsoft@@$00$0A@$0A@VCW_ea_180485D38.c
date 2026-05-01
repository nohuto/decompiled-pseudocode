/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIExecuteCommand@@UIObjectWithSelection@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIExecuteCommand@@UIObjectWithSelection@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180485D38
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIExecuteCommand@@UIObjectWithSelection@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180486580 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180486580.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IExecuteCommand,IObjectWithSelection>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  const struct _GUID *v9; // rcx
  int v10; // ebx
  _QWORD *v11; // r8
  __int64 v12; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352)
      || InlineIsEqualGUID(v6, &GUID_7f9185b0_cb92_43c5_80a9_92277a4f7b54) )
    {
      *v7 = v8;
      v10 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v9, &GUID_1c9cd5bb_98e9_4491_a60f_31aacc72b83c) )
      {
        v8 = v12 + 8;
        *v11 = v8;
        v10 = 0;
      }
      else
      {
        v10 = -2147467262;
        v8 = 0LL;
      }
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return (unsigned int)v10;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
