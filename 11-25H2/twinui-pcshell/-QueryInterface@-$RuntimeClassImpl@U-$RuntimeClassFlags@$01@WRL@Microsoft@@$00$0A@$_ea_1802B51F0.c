/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UITrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B51F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UITrustedComponentForegroundControl@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802EF260 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802EF260.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4E00 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,ITrustedComponentForegroundControl>::QueryInterface(
        Microsoft::WRL::FtmBase *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // eax
  _QWORD *v5; // r8
  const struct _GUID *v6; // r10
  unsigned int v7; // edi
  __int64 v8; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(a1, (const struct _GUID *)a2, a3);
    v7 = -2147467262;
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(v6, &GUID_f76880f4_de44_4d29_802e_784369919a93) )
      {
        *v5 = v8;
        v7 = 0;
LABEL_10:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
      }
    }
    else
    {
      v7 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_10;
    }
    return v7;
  }
  *a3 = a1;
  (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
