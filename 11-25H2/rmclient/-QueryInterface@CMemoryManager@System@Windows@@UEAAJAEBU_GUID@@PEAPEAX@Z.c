/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000AE70
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015220 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015230 (-QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015240 (-QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015250 (-QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015260 (-QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000C970 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        const struct _GUID *a2,
        Windows::System::CMemoryManager **a3)
{
  int v3; // ebx
  const struct _GUID *v4; // r9
  Windows::System::CMemoryManager *Data1; // rdx
  int v6; // eax
  unsigned int v7; // r11d
  const struct _GUID *v8; // rcx
  Windows::System::CMemoryManager *v9; // r10
  __int64 v11; // r10

  v3 = 0;
  v4 = a2;
  *a3 = 0LL;
  Data1 = (Windows::System::CMemoryManager *)a2->Data1;
  if ( __PAIR64__(*(_DWORD *)&v4->Data2, (unsigned int)Data1) != __PAIR64__(
                                                                   *(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2,
                                                                   0)
    || *(_DWORD *)v4->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || (v6 = 1, *(_DWORD *)&v4->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]) )
  {
    v6 = 0;
  }
  if ( v6 )
    goto LABEL_18;
  if ( (_DWORD)Data1 == -1350114592 )
  {
    if ( *(_DWORD *)&v4->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || *(_DWORD *)v4->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      || *(_DWORD *)&v4->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_6;
    }
LABEL_18:
    *a3 = this;
LABEL_25:
    (*(void (__fastcall **)(Windows::System::CMemoryManager *, Windows::System::CMemoryManager *, Windows::System::CMemoryManager **, const struct _GUID *))(*(_QWORD *)this + 8LL))(
      this,
      Data1,
      a3,
      v4);
    return (unsigned int)v3;
  }
  if ( (_DWORD)Data1 == 53
    && *(_DWORD *)&v4->Data2 == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)v4->Data4 == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&v4->Data4[4] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_22;
  }
LABEL_6:
  this = (Windows::System::CMemoryManager *)((char *)this + 8);
  if ( (_DWORD)Data1 != -1796592748 )
  {
    if ( (_DWORD)Data1 != 3
      || *(_DWORD *)&v4->Data2 != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      || *(_DWORD *)v4->Data4 != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      || *(_DWORD *)&v4->Data4[4] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_8;
    }
LABEL_22:
    *a3 = this;
LABEL_24:
    this = *a3;
    goto LABEL_25;
  }
  if ( *(_DWORD *)&v4->Data2 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)v4->Data4 == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)&v4->Data4[4] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    goto LABEL_22;
  }
LABEL_8:
  Data1 = (Windows::System::CMemoryManager *)((char *)this + 32);
  v7 = -2147467262;
  if ( v4->Data1 == 1550591900
    && *(_DWORD *)&v4->Data2 == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data2
    && *(_DWORD *)v4->Data4 == *(_DWORD *)GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4
    && *(_DWORD *)&v4->Data4[4] == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4[4] )
  {
    *a3 = Data1;
  }
  else
  {
    Data1 = (Windows::System::CMemoryManager *)((char *)this + 40);
    if ( v4->Data1 == 1861104927
      && *(_DWORD *)&v4->Data2 == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2
      && *(_DWORD *)v4->Data4 == *(_DWORD *)GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4
      && *(_DWORD *)&v4->Data4[4] == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4] )
    {
      *a3 = Data1;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v4, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
    {
      *a3 = v9;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
    {
      *a3 = (Windows::System::CMemoryManager *)(v11 + 8);
    }
    else
    {
      v3 = v7;
    }
    if ( v3 == v7 )
      v3 = v7;
  }
  if ( v3 != v7 )
  {
    if ( v3 < 0 )
      return (unsigned int)v3;
    goto LABEL_24;
  }
  return v7;
}
