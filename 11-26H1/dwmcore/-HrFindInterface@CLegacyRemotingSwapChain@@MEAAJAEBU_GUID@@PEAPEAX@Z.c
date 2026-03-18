/*
 * XREFs of ?HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A8660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRemotingSwapChain::HrFindInterface(
        CLegacyRemotingSwapChain *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
    if ( !v4 )
      goto LABEL_8;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data4;
    if ( v5 )
    {
      return 2147500034LL;
    }
    else
    {
LABEL_8:
      *a3 = this;
      return 0LL;
    }
  }
  return result;
}
