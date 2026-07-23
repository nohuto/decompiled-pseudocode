/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x1800C6560
 * Callers:
 *     RtlCreateAndSetSD @ 0x1800C5F30 (RtlCreateAndSetSD.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN SaclPresent,
        PACL Sacl,
        BOOLEAN SaclDefaulted)
{
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v8; // ax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 >= 0 )
  {
    if ( SaclPresent )
    {
      v5 = v4 | 0x10;
      *((_QWORD *)SecurityDescriptor + 3) = 0LL;
      if ( Sacl )
        *((_QWORD *)SecurityDescriptor + 3) = Sacl;
      v6 = v5 & 0xFFDF;
      *((_WORD *)SecurityDescriptor + 1) = v6;
      if ( !SaclDefaulted )
        return 0;
      v8 = v6 | 0x20;
    }
    else
    {
      v8 = v4 & 0xFFEF;
    }
    *((_WORD *)SecurityDescriptor + 1) = v8;
    return 0;
  }
  return -1073741703;
}
