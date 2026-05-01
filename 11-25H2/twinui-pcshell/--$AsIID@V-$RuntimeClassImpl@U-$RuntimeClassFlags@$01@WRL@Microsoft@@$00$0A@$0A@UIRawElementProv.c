/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIDragProvider@@UIJointResizeAcc@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIDragProvider@@UIJointResizeAcc@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1802175F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIDragProvider@@UIJointResizeAcc@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D0660 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawEleme.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18004FC90 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IDragProvider,IJointResizeAcc>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ebx
  _DWORD *v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r10

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
    return 0LL;
  }
  if ( *a2 == -690132783
    && a2[1] == *(_DWORD *)&GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data2
    && a2[2] == *(_DWORD *)GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data4
    && a2[3] == *(_DWORD *)&GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    if ( !InlineIsEqualGUID(a2, &GUID_6aa7bbbb_7ff9_497d_904f_d20b897929d8) )
    {
      if ( InlineIsEqualGUID(v5, &GUID_487f09a7_6896_4cfb_839e_955a7e60713a) )
      {
        *a3 = v7 + 8;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
      goto LABEL_18;
    }
    *a3 = v6;
  }
  v4 = 0;
LABEL_18:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v4;
}
