/*
 * XREFs of ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004F600
 * Callers:
 *     ?QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18030FB40 (-QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18030FB50 (-QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18030FB60 (-QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18030FB70 (-QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18030FB90 (-QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18030FBB0 (-QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18030FBD0 (-QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QueryInterface(
        CWin32ApplicationView *this,
        struct _GUID *a2,
        CWin32ApplicationView **a3)
{
  CWin32ApplicationView *v3; // r9
  __int64 v4; // rax
  unsigned int Data1; // ecx
  int v7; // ebx
  unsigned int v9; // ecx
  char *v10; // r9
  char *v11; // r9
  CWin32ApplicationView *v12; // r9
  signed __int64 v13; // rax
  signed __int64 v14; // rtt

  v3 = this;
  *a3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data4;
  if ( v4 )
  {
    Data1 = a2->Data1;
    if ( !a2->Data1
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_14;
    }
    if ( Data1 == -1350114592 )
    {
      if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
LABEL_14:
        *a3 = v3;
        (*(void (__fastcall **)(CWin32ApplicationView *))(*(_QWORD *)v3 + 8LL))(v3);
        return 0;
      }
    }
    else if ( Data1 == 925769019
           && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data2
           && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data4
           && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data4[4] )
    {
      goto LABEL_19;
    }
    if ( Data1 == 2133140026
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1.Data4[4] )
    {
      *a3 = (CWin32ApplicationView *)((char *)v3 + 8);
      v7 = 0;
    }
    else if ( Data1 == -1751327192
           && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data2
           && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data4
           && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data4[4] )
    {
      *a3 = (CWin32ApplicationView *)((char *)v3 + 16);
      v7 = 0;
    }
    else if ( Data1 == 480212245
           && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data2
           && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4
           && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4[4] )
    {
      *a3 = (CWin32ApplicationView *)((char *)v3 + 24);
      v7 = 0;
    }
    else
    {
      v7 = -2147467262;
    }
    if ( v7 != -2147467262 )
      goto LABEL_37;
    v3 = (CWin32ApplicationView *)((char *)v3 + 144);
    v9 = a2->Data1;
    if ( a2->Data1 != 56
      || *(_DWORD *)&a2->Data2 != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      v10 = (char *)v3 + 8;
      if ( v9 == -212699632
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_f3527610_c76d_4316_ac8e_28651acf3df3.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_f3527610_c76d_4316_ac8e_28651acf3df3.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_f3527610_c76d_4316_ac8e_28651acf3df3.Data4[4] )
      {
        *a3 = (CWin32ApplicationView *)v10;
        v7 = 0;
        goto LABEL_37;
      }
      v11 = v10 + 8;
      if ( v9 == -587922197
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_dcf504eb_598b_4411_ac89_cf48aba70af1.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_dcf504eb_598b_4411_ac89_cf48aba70af1.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_dcf504eb_598b_4411_ac89_cf48aba70af1.Data4[4] )
      {
        *a3 = (CWin32ApplicationView *)v11;
        v7 = 0;
        goto LABEL_37;
      }
      v12 = (CWin32ApplicationView *)(v11 + 8);
      if ( v9 == -1796592748 )
      {
        if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
          && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
          && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
        {
          *a3 = v12;
          v7 = 0;
          goto LABEL_37;
        }
      }
      else if ( v9 == 3
             && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
             && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
             && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = v12;
        v7 = 0;
        goto LABEL_37;
      }
      v7 = -2147467262;
LABEL_37:
      if ( v7 < 0 )
        return (unsigned int)v7;
      goto LABEL_20;
    }
LABEL_19:
    *a3 = v3;
    v7 = 0;
LABEL_20:
    (*(void (__fastcall **)(CWin32ApplicationView *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v7;
  }
  v13 = *((_QWORD *)this + 26);
  while ( v13 >= 0 )
  {
    if ( (_DWORD)v13 != 0x7FFFFFFF )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v13 + 1, v13);
      if ( v14 != v13 )
        continue;
    }
    goto LABEL_73;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), (volatile int *)a2);
LABEL_73:
  *a3 = v3;
  return 0LL;
}
