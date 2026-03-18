/*
 * XREFs of ?QueryInterface@CEffectPropertyChangeNotification@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEffectPropertyChangeNotification::QueryInterface(
        CEffectPropertyChangeNotification *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !a3 )
    return 2147942487LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_199a9f50_25a6_41d5_b2a5_919a20cf4fb9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_199a9f50_25a6_41d5_b2a5_919a20cf4fb9.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_199a9f50_25a6_41d5_b2a5_919a20cf4fb9.Data4;
  if ( !v3 )
    goto LABEL_8;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_8:
    *a3 = this;
    return 0LL;
  }
}
