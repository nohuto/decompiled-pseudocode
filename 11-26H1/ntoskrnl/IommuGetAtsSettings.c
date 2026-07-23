/*
 * XREFs of IommuGetAtsSettings @ 0x1404F3BD0
 * Callers:
 *     <none>
 * Callees:
 *     IommupHvGetDeviceAtsCapability @ 0x1405A0B7C (IommupHvGetDeviceAtsCapability.c)
 */

__int64 __fastcall IommuGetAtsSettings(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  unsigned int *i; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v7 = 0;
  if ( *(_DWORD *)a1 != 1 || (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 10) & 3) != 0 )
    return 3221225659LL;
  if ( HalpHvIommu )
  {
    result = IommupHvGetDeviceAtsCapability(a1, &v7, 0LL);
    v2 = result;
    if ( (int)result < 0 )
      return result;
    if ( !v7 )
      return 3221225659LL;
  }
  for ( i = *(unsigned int **)&HalpDeviceBlockUnblockPushLock.CurrentRunTime;
        i != &HalpDeviceBlockUnblockPushLock.CurrentRunTime;
        i = *(unsigned int **)i )
  {
    if ( *((_WORD *)i + 12) == *(_WORD *)(a1 + 8) && *((_WORD *)i + 14) == *(_WORD *)(a1 + 12) )
    {
      *a2 |= 1u;
      *a2 = *a2 & 0xFD | (2 * (i[10] & 1));
      return v2;
    }
  }
  return (unsigned int)-1073741275;
}
