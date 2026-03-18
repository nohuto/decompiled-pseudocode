/*
 * XREFs of ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180191170
 * Callers:
 *     ?HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801910E0 (-HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::HrFindInterface(CBitmapRealization *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v5 )
      goto LABEL_5;
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
    if ( v8 )
    {
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18796b33_81ab_4872_b4f0_9cbcccf6c8d1.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18796b33_81ab_4872_b4f0_9cbcccf6c8d1.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18796b33_81ab_4872_b4f0_9cbcccf6c8d1.Data4;
      if ( v9 )
        return (unsigned int)-2147467262;
      v6 = (unsigned __int64)this + 88;
    }
    else
    {
LABEL_5:
      v6 = (unsigned __int64)this + 80;
    }
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
