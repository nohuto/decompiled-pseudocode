/*
 * XREFs of IidCloneDeviceId @ 0x140B4B710
 * Callers:
 *     HalpIommuCloneDeviceId @ 0x140513FB8 (HalpIommuCloneDeviceId.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     IidCloneDeviceIdAcpi @ 0x140531D80 (IidCloneDeviceIdAcpi.c)
 *     IidCloneDeviceIdPci @ 0x14071E564 (IidCloneDeviceIdPci.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall IidCloneDeviceId(_QWORD *Src, _QWORD *a2, size_t a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !Src || !a2 || (unsigned int)(*(_DWORD *)Src - 1) > 4 )
    return (unsigned int)-1073741811;
  switch ( *(_DWORD *)Src )
  {
    case 1:
      return (unsigned int)IidCloneDeviceIdPci((__int64)Src, (__int64)a2);
    case 2:
      return (unsigned int)IidCloneDeviceIdAcpi((__int64)Src, (__int64)a2);
    case 4:
      if ( a3 == 24 )
      {
        *(_OWORD *)a2 = *(_OWORD *)Src;
        a2[2] = Src[2];
        return v3;
      }
      return (unsigned int)-1073741811;
    case 5:
      memmove(a2, Src, a3);
      break;
    default:
      return (unsigned int)-1073741637;
  }
  return v3;
}
