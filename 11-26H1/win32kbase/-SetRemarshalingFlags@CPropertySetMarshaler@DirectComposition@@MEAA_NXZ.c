/*
 * XREFs of ?SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ @ 0x140241ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXUDCOMPOSITION_PROPERTY_ID@@W4MarshalStatus@@@Z @ 0x140127C6C (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A00 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertySetMarshaler *this)
{
  char v1; // si
  unsigned int v3; // ebx
  int v4; // eax
  char v5; // al

  v1 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v3 = 0;
    do
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(
        (__int64 *)this + 9,
        v3++,
        1);
    while ( v3 < *((_DWORD *)this + 20) );
    *((_DWORD *)this + 4) |= 0x100u;
    v4 = *((_DWORD *)this + 4);
  }
  else
  {
    v4 = *((_DWORD *)this + 4);
  }
  if ( *((_DWORD *)this + 26) )
    *((_DWORD *)this + 4) = v4 | 0x200;
  v5 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x300) != 0 || v5 )
    return 1;
  return v1;
}
