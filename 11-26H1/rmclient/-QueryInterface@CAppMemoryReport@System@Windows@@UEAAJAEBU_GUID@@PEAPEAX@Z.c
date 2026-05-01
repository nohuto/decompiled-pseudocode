/*
 * XREFs of ?QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D6B0
 * Callers:
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017E80 (-QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017E90 (-QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017EA0 (-QueryInterface@CAppMemoryReport@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::QueryInterface(
        Windows::System::CAppMemoryReport *this,
        const struct _GUID *a2,
        void **a3)
{
  int v3; // ebx
  unsigned int Data1; // r9d
  int v6; // r11d
  int v7; // ecx
  int v8; // edi
  char *v10; // r10
  void *v11; // r10

  v3 = 0;
  *a3 = 0LL;
  Data1 = a2->Data1;
  if ( !a2->Data1 )
  {
    if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
LABEL_4:
      v6 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2;
      v7 = *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
      v8 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
      goto LABEL_18;
    }
LABEL_8:
    *a3 = this;
    (*(void (__fastcall **)(Windows::System::CAppMemoryReport *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
  if ( Data1 != -1350114592 )
  {
    if ( Data1 == 1835348891
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4[4] )
    {
      goto LABEL_12;
    }
    goto LABEL_4;
  }
  v6 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2;
  v7 = *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  v8 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
  if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    goto LABEL_8;
  }
LABEL_18:
  this = (Windows::System::CAppMemoryReport *)((char *)this + 8);
  if ( Data1 != 56
    || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    v10 = (char *)this + 8;
    if ( Data1 == 1602172728
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857.Data4[4] )
    {
      *a3 = v10;
    }
    else
    {
      v11 = v10 + 8;
      if ( Data1 == -1350114592
        && *(_DWORD *)&a2->Data2 == v6
        && *(_DWORD *)a2->Data4 == v7
        && *(_DWORD *)&a2->Data4[4] == v8 )
      {
        *a3 = v11;
      }
      else
      {
        v3 = -2147467262;
      }
    }
    if ( v3 < 0 )
      return (unsigned int)v3;
    goto LABEL_13;
  }
LABEL_12:
  *a3 = this;
LABEL_13:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v3;
}
