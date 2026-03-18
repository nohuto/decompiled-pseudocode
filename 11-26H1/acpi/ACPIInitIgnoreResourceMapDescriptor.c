/*
 * XREFs of ACPIInitIgnoreResourceMapDescriptor @ 0x1400680C8
 * Callers:
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400B76BC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400B7B04 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400CE1DC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400CF578 (PnpiBiosAddressDoubleToIoDescriptor.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIInitIgnoreResourceMapDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v7; // rcx

  result = (_QWORD *)ExAllocatePool2(256LL, 40LL, 1383097153LL);
  result[4] = a3;
  result[2] = a1;
  result[3] = a2;
  v7 = (_QWORD *)qword_14008FE58;
  if ( *(__int64 **)qword_14008FE58 != &AcpiIgnoreResourceMapValidationList )
    __fastfail(3u);
  *result = &AcpiIgnoreResourceMapValidationList;
  result[1] = v7;
  *v7 = result;
  qword_14008FE58 = (__int64)result;
  return result;
}
