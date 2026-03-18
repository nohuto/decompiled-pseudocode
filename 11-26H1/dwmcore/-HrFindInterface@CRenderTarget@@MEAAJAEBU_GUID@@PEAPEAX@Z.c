/*
 * XREFs of ?HrFindInterface@CRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AD900
 * Callers:
 *     ?HrFindInterface@CLegacyRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AD860 (-HrFindInterface@CLegacyRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CIndirectSwapchainRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180248AB0 (-HrFindInterface@CIndirectSwapchainRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CRemoteAppRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180248B10 (-HrFindInterface@CRemoteAppRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CRemoteRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180248B70 (-HrFindInterface@CRemoteRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDDARenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180259490 (-HrFindInterface@CDDARenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::HrFindInterface(CRenderTarget *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v5 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_81517092_b012_450a_acdb_d304e9efd6b3.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_81517092_b012_450a_acdb_d304e9efd6b3.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_81517092_b012_450a_acdb_d304e9efd6b3.Data4;
      if ( v8 )
      {
        v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e1d14fc9_d6ac_4947_99ed_00f1c89e9ed9.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e1d14fc9_d6ac_4947_99ed_00f1c89e9ed9.Data1 )
          v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e1d14fc9_d6ac_4947_99ed_00f1c89e9ed9.Data4;
        if ( v9 )
        {
          v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6da6cd1a_9154_4781_8f76_cc1a2b4f1779.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6da6cd1a_9154_4781_8f76_cc1a2b4f1779.Data1 )
            v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6da6cd1a_9154_4781_8f76_cc1a2b4f1779.Data4;
          if ( v10 )
            return (unsigned int)-2147467262;
        }
        v6 = (unsigned __int64)this + 88;
      }
      else
      {
        v6 = (unsigned __int64)this + 96;
      }
    }
    else
    {
      v6 = (unsigned __int64)this + 80;
    }
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
