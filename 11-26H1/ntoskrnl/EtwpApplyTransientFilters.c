/*
 * XREFs of EtwpApplyTransientFilters @ 0x140914E3C
 * Callers:
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x140916B44 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     EtwpApplyContainerFilter @ 0x1409135A0 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140913694 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140913700 (EtwpApplyPackageIdFilter.c)
 */

bool __fastcall EtwpApplyTransientFilters(__int64 a1, __int64 a2)
{
  _DWORD *v5; // rdx
  __int64 v6; // rax
  __int64 i; // rcx

  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 1;
  v5 = *(_DWORD **)(a2 + 8);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 80);
    for ( i = 0LL; (unsigned int)i < *v5; i = (unsigned int)(i + 1) )
    {
      if ( v5[i + 1] == *(_DWORD *)(v6 + 464) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( EtwpApplyExeFilter(a1, *(unsigned __int16 **)(a2 + 16))
      && EtwpApplyContainerFilter(a1, *(unsigned __int16 **)(a2 + 40)) )
    {
      return EtwpApplyPackageIdFilter(a1, *(unsigned __int16 **)(a2 + 24), *(unsigned __int16 **)(a2 + 32)) != 0;
    }
  }
  return 0;
}
