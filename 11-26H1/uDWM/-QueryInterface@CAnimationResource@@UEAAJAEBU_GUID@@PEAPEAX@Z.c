/*
 * XREFs of ?QueryInterface@CAnimationResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099F20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CAnimationResource@@UEAAKXZ @ 0x18007CD50 (-AddRef@CAnimationResource@@UEAAKXZ.c)
 */

__int64 __fastcall CAnimationResource::QueryInterface(CAnimationResource *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data4;
    if ( !v4 )
      goto LABEL_12;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cadfc221_2187_4f55_b289_01544817b158.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cadfc221_2187_4f55_b289_01544817b158.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cadfc221_2187_4f55_b289_01544817b158.Data4;
    if ( !v5 )
      goto LABEL_12;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_12:
      *a3 = this;
      CAnimationResource::AddRef(this);
    }
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v3;
}
