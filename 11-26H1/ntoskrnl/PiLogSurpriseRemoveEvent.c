/*
 * XREFs of PiLogSurpriseRemoveEvent @ 0x140B4F184
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     McTemplateK0zq_EtwWriteTransfer @ 0x14049886C (McTemplateK0zq_EtwWriteTransfer.c)
 */

_DWORD *__fastcall PiLogSurpriseRemoveEvent(__int64 a1, int a2, unsigned int **a3)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // r9
  _DWORD *result; // rax
  __int64 *v9; // rdx

  v4 = 0LL;
  v6 = *(_QWORD *)(a1 + 160);
  if ( v6 )
    v4 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  v7 = *(const wchar_t **)(v4 + 48);
  result = *a3;
  if ( a2 == 3 )
  {
    if ( (byte_140EF412C & 8) == 0 )
      return result;
    v9 = KMPnPEvt_SurpriseRemove_Missing;
    return (_DWORD *)McTemplateK0zq_EtwWriteTransfer(**a3, (__int64)v9, a1 + 88, v7, **a3);
  }
  if ( a2 != 5 )
    __fastfail(5u);
  if ( (byte_140EF412C & 4) != 0 )
  {
    v9 = KMPnPEvt_SurpriseRemove_Failed;
    return (_DWORD *)McTemplateK0zq_EtwWriteTransfer(**a3, (__int64)v9, a1 + 88, v7, **a3);
  }
  return result;
}
