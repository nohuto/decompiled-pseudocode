/*
 * XREFs of IommuDomainDetachDeviceEx @ 0x14059F030
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     IommupDeviceGetPasidDevice @ 0x140587E80 (IommupDeviceGetPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x140588288 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuLeaveDmaDomain @ 0x14058DE4C (HalpIommuLeaveDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x14059FE34 (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainDetachDeviceEx(__int64 a1)
{
  bool v1; // zf
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 24) == 0LL;
  v7 = 0LL;
  if ( v1 )
    return (unsigned int)-1073741585;
  v8 = 0LL;
  if ( !(unsigned __int8)IommupFindAndPopCachedDevice(a1, &v8) )
  {
    return (unsigned int)-1073741585;
  }
  else if ( *(_BYTE *)(a1 + 266) )
  {
    if ( IommupDeviceGetPasidDevice(a1, v4, 0, (struct _KLOCK_ENTRIES *)&v7) )
    {
      v3 = IommupDomainDetachPasidDevice(v7);
      if ( v3 >= 0 )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
LABEL_11:
        HalpMmAllocCtxFree(v5, v8);
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    v3 = HalpIommuLeaveDmaDomain(a1, *(_QWORD *)(a1 + 24));
    if ( v3 >= 0 )
      goto LABEL_11;
  }
  return (unsigned int)v3;
}
