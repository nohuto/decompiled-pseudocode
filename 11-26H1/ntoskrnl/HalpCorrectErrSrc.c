/*
 * XREFs of HalpCorrectErrSrc @ 0x140BEFAC0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     HalpGetMcaMaxVendorSpecificSectionLength @ 0x140580C04 (HalpGetMcaMaxVendorSpecificSectionLength.c)
 *     HalpGetMcaVendorSpecificSections @ 0x140580C34 (HalpGetMcaVendorSpecificSections.c)
 *     HalpCorrectNMIErrSrc @ 0x1405810C0 (HalpCorrectNMIErrSrc.c)
 *     HalpCorrectGenericErrSrc @ 0x140590A6C (HalpCorrectGenericErrSrc.c)
 *     HalpIsCmciImplemented @ 0x140BF0724 (HalpIsCmciImplemented.c)
 */

__int64 __fastcall HalpCorrectErrSrc(_DWORD *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  ULONG ActiveProcessorCount; // eax
  unsigned __int16 McaVendorSpecificSections; // r9
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int McaMaxVendorSpecificSectionLength; // eax

  v3 = 0;
  v5 = a1[2];
  if ( !v5 )
    goto LABEL_11;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 && v8 != 7 )
        return (unsigned int)-1073741637;
      return (unsigned int)HalpCorrectGenericErrSrc((__int64)a1, a2);
    }
    else
    {
      return (unsigned int)HalpCorrectNMIErrSrc((__int64)a1, a2);
    }
  }
  if ( (unsigned __int8)HalpIsCmciImplemented() )
  {
LABEL_11:
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( a1[5] < ActiveProcessorCount )
      a1[5] = ActiveProcessorCount;
  }
  McaVendorSpecificSections = HalpGetMcaVendorSpecificSections();
  v12 = McaVendorSpecificSections + 5;
  if ( a1[6] < v12 )
    a1[6] = v12;
  v13 = 2168;
  if ( !McaVendorSpecificSections
    || (McaMaxVendorSpecificSectionLength = HalpGetMcaMaxVendorSpecificSectionLength(),
        McaMaxVendorSpecificSectionLength < 0x828)
    || McaMaxVendorSpecificSectionLength <= v13 )
  {
    McaMaxVendorSpecificSectionLength = v13;
  }
  *a2 = McaMaxVendorSpecificSectionLength;
  return v3;
}
