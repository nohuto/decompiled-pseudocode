/*
 * XREFs of ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A89B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A8A60 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrFindInterface(CSystemMemoryBitmap *this, const struct _GUID *a2, void **a3)
{
  void *v3; // r9
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v8; // rax

  v3 = 0LL;
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( v6 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data4;
      if ( v8 )
      {
        return (unsigned int)CBitmap::HrFindInterface(this, a2, a3);
      }
      else
      {
        if ( *((_DWORD *)this + 26) == 87 || *((_DWORD *)this + 26) == 88 )
        {
          v5 = 0;
          v3 = (void *)(((unsigned __int64)this + 128) & -(__int64)(this != 0LL));
        }
        else
        {
          v5 = -2147467262;
        }
        *a3 = v3;
      }
    }
    else
    {
      v5 = 0;
      *a3 = (void *)(((unsigned __int64)this + 120) & -(__int64)(this != 0LL));
    }
  }
  return v5;
}
