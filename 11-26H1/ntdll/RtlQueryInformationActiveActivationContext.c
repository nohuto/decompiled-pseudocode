/*
 * XREFs of RtlQueryInformationActiveActivationContext @ 0x1800E86A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryInformationActivationContext @ 0x18004DED0 (RtlQueryInformationActivationContext.c)
 */

__int64 __fastcall RtlQueryInformationActiveActivationContext(int a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  return RtlQueryInformationActivationContext(1, 0LL, 0LL, a1, a2, a3, a4);
}
