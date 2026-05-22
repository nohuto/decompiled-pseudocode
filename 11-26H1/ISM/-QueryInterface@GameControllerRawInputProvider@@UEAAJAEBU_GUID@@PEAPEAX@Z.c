/*
 * XREFs of ?QueryInterface@GameControllerRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800688B0
 * Callers:
 *     ?QueryInterface@GameControllerRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CDF00 (-QueryInterface@GameControllerRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GameControllerRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CDF10 (-QueryInterface@GameControllerRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GameControllerRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CDF20 (-QueryInterface@GameControllerRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GameControllerRawInputProvider@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CDF30 (-QueryInterface@GameControllerRawInputProvider@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GameControllerRawInputProvider::QueryInterface(
        GameControllerRawInputProvider *this,
        const struct _GUID *a2,
        GameControllerRawInputProvider **a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  GameControllerRawInputProvider *v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    v5 = (unsigned __int64)this + 32;
LABEL_5:
    v6 = (GameControllerRawInputProvider *)(v5 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    goto LABEL_6;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4;
  if ( !v8 )
  {
    v6 = this;
LABEL_6:
    if ( !a3 )
      return 2147500035LL;
    _InterlockedIncrement((volatile signed __int32 *)this + 10);
    *a3 = v6;
    return 0LL;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4;
  if ( !v9 )
  {
    v5 = (unsigned __int64)this + 8;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f16b0dfb_5f68_4e1e_a717_7d6fd7fb5635.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f16b0dfb_5f68_4e1e_a717_7d6fd7fb5635.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f16b0dfb_5f68_4e1e_a717_7d6fd7fb5635.Data4;
  if ( !v10 )
  {
    if ( this )
      v6 = (GameControllerRawInputProvider *)((char *)this + 16);
    else
      v6 = 0LL;
    goto LABEL_6;
  }
  if ( a3 )
    *a3 = 0LL;
  return 2147500034LL;
}
