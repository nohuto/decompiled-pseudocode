/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000AE40
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800141A0 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800141B0 (-QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800141C0 (-QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800141D0 (-QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800141E0 (-QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000C650 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        const struct _GUID *a2,
        Windows::System::CMemoryManager **a3)
{
  unsigned int v3; // ebx
  unsigned int Data1; // edx
  char *v6; // rcx
  Windows::System::CMemoryManager *v7; // rcx
  const struct _GUID *v8; // rcx
  Windows::System::CMemoryManager *v9; // r10
  __int64 v11; // r10

  v3 = 0;
  *a3 = 0LL;
  Data1 = a2->Data1;
  if ( Data1 )
  {
    if ( Data1 != -1350114592 )
    {
      if ( Data1 == 53
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
      {
        goto LABEL_20;
      }
LABEL_4:
      this = (Windows::System::CMemoryManager *)((char *)this + 8);
      if ( Data1 == -1796592748 )
      {
        if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
          || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
          || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
        {
LABEL_6:
          v6 = (char *)this + 32;
          if ( Data1 == 1550591900
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4[4] )
          {
            *a3 = (Windows::System::CMemoryManager *)v6;
          }
          else
          {
            v7 = (Windows::System::CMemoryManager *)(v6 + 8);
            if ( Data1 == 1861104927
              && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2
              && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4
              && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4] )
            {
              *a3 = v7;
            }
            else
            {
              if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
              {
                *a3 = v9;
              }
              else if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
              {
                *a3 = (Windows::System::CMemoryManager *)(v11 + 8);
              }
              else
              {
                v3 = -2147467262;
              }
              if ( v3 != -2147467262 )
                goto LABEL_21;
            }
          }
          if ( v3 == -2147467262 )
            return 2147500034LL;
          goto LABEL_21;
        }
      }
      else if ( Data1 != 3
             || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
             || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
             || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
      {
        goto LABEL_6;
      }
LABEL_20:
      *a3 = this;
LABEL_21:
      this = *a3;
      goto LABEL_22;
    }
    if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_4;
    }
  }
  else if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_4;
  }
  *a3 = this;
LABEL_22:
  (*(void (__fastcall **)(Windows::System::CMemoryManager *))(*(_QWORD *)this + 8LL))(this);
  return v3;
}
