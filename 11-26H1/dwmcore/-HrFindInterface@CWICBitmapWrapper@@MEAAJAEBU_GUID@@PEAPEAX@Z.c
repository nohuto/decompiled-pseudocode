/*
 * XREFs of ?HrFindInterface@CWICBitmapWrapper@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A88D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A8A60 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapWrapper::HrFindInterface(CWICBitmapWrapper *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v7; // rax
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
  if ( v4 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
    if ( v7 )
    {
      return (unsigned int)CBitmap::HrFindInterface(this, a2, a3);
    }
    else
    {
      v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 17);
      v11 = 0LL;
      if ( v8 && (**v8)(v8, &IID_IWICDecoderBitmapSource, &v11) >= 0 )
      {
        v10 = v11;
        *a3 = (void *)(((unsigned __int64)this + 128) & -(__int64)(this != 0LL));
        ReleaseInterfaceNoNULL<ID2D1Ink>(v10);
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
  }
  else
  {
    *a3 = (void *)(((unsigned __int64)this + 120) & -(__int64)(this != 0LL));
  }
  return v3;
}
