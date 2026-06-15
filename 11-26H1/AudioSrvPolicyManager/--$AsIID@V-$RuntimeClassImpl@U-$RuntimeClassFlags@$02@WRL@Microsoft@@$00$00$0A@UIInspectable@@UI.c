/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180003D2C
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUHKEY__@@@Z @ 0x1800032E8 (--$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@M.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EE20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectab.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180024FDC (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r10
  int v6; // ebx
  __int64 v8; // r10

  v3 = a2;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592 )
      goto LABEL_5;
    a2 = (_DWORD *)*(unsigned int *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v3[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
      goto LABEL_5;
    if ( *((_QWORD *)v3 + 1) != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      if ( v3[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && *((_QWORD *)v3 + 1) == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        *a3 = a1;
        goto LABEL_13;
      }
LABEL_5:
      if ( !(unsigned int)InlineIsEqualGUID(v3, &GUID_00000038_0000_0000_c000_000000000046) )
      {
        if ( (unsigned int)InlineIsEqualGUID(v4, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99) )
        {
          *a3 = v8 + 8;
          v6 = 0;
        }
        else
        {
          v6 = -2147467262;
        }
        if ( v6 < 0 )
          return (unsigned int)v6;
        goto LABEL_14;
      }
      *a3 = v5;
LABEL_13:
      v6 = 0;
LABEL_14:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)v6;
    }
  }
  else if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_5;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, v3);
  return 0LL;
}
