/*
 * XREFs of ?QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801406D0
 * Callers:
 *     ?QueryInterface@CImmersiveWindowFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA230 (-QueryInterface@CImmersiveWindowFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA240 (-QueryInterface@CImmersiveWindowFactory@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA250 (-QueryInterface@CImmersiveWindowFactory@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA260 (-QueryInterface@CImmersiveWindowFactory@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806CA270 (-QueryInterface@CImmersiveWindowFactory@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowFactory::QueryInterface(
        CImmersiveWindowFactory *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  int v4; // eax
  char *v5; // r9
  int v6; // ebx
  int v8; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( !a2->Data1 )
  {
    if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_4;
    }
    v8 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
    goto LABEL_30;
  }
  if ( a2->Data1 == -1350114592 )
  {
    if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_4;
    }
    v8 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_30:
    if ( *(_DWORD *)&a2->Data4[4] == v8 )
    {
      *a3 = this;
      (*(void (__fastcall **)(CImmersiveWindowFactory *))(*(_QWORD *)this + 8LL))(this);
      return v3;
    }
    goto LABEL_4;
  }
  if ( a2->Data1 == -852941984
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4[4] )
  {
    *a3 = this;
    goto LABEL_25;
  }
LABEL_4:
  if ( a2->Data1 == 3
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = (char *)this + 8;
  }
  else
  {
    if ( a2->Data1 == 24
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000018_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = (char *)this + 48;
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v4 == -2147467262 )
    {
      v5 = (char *)this + 72;
      if ( *(_QWORD *)&a2->Data1 == __PAIR64__(
                                      *(unsigned int *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data2,
                                      1612534243)
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4[4]
        || (v5 = (char *)this + 80,
            *(_QWORD *)&a2->Data1 == __PAIR64__(
                                       *(unsigned int *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data2,
                                       142386596))
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4[4] )
      {
        *a3 = v5;
        v6 = 0;
      }
      else
      {
        v6 = -2147467262;
      }
      if ( v6 == -2147467262 )
      {
        if ( a2->Data1 == 56
          && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
          && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
          && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
        {
          v6 = 0;
          *a3 = (char *)this + 176;
        }
        else
        {
          v6 = -2147467262;
        }
      }
      if ( v6 < 0 )
        return (unsigned int)v6;
      goto LABEL_26;
    }
  }
LABEL_25:
  v6 = 0;
LABEL_26:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v6;
}
