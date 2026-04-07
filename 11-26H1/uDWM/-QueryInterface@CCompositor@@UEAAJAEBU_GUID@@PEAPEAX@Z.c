/*
 * XREFs of ?QueryInterface@CCompositor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::QueryInterface(CCompositor *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  *a3 = 0LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9bb59fc9_3326_4c32_bf06_d6b415ac2bc5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9bb59fc9_3326_4c32_bf06_d6b415ac2bc5.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9bb59fc9_3326_4c32_bf06_d6b415ac2bc5.Data4;
    if ( v4 )
      return 2147500034LL;
  }
  *a3 = this;
  return 0LL;
}
