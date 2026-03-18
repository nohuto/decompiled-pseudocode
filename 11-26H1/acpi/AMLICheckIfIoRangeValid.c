/*
 * XREFs of AMLICheckIfIoRangeValid @ 0x14006C298
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1400B53A4 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     <none>
 */

char __fastcall AMLICheckIfIoRangeValid(__int64 a1, unsigned int a2)
{
  char v2; // r9
  __int64 v3; // rax
  __int64 i; // r10
  int v5; // ebx
  __int64 v6; // rdx

  v2 = 1;
  if ( gpBadIOAddressList )
  {
    v3 = a1 + a2;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v5 = *((_DWORD *)gpBadIOAddressList + 6 * i + 1);
      if ( !v5 )
        break;
      v6 = *((unsigned int *)gpBadIOAddressList + 6 * i);
      if ( v3 < v6 || a1 > (unsigned int)(v5 + v6) )
        return 0;
    }
  }
  return v2;
}
