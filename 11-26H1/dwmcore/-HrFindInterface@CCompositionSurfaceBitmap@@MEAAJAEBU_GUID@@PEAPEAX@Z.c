/*
 * XREFs of ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016DBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::HrFindInterface(
        CCompositionSurfaceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  char *v4; // rax
  __int64 v6; // rax
  char *v7; // rax

  if ( !a3 )
    return 2147942487LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
  if ( v3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data4;
    if ( v6 )
    {
      return 2147500034LL;
    }
    else
    {
      v7 = (char *)this + 88;
      if ( !this )
        v7 = 0LL;
      *a3 = v7;
      return 0LL;
    }
  }
  else
  {
    v4 = (char *)this + 72;
    if ( !this )
      v4 = 0LL;
    *a3 = v4;
    return 0LL;
  }
}
