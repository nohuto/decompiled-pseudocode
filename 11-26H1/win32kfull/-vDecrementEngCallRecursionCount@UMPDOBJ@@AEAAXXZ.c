/*
 * XREFs of ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1400D7ECC
 * Callers:
 *     NtGdiPATHOBJ_vEnumStart @ 0x1400D7020 (NtGdiPATHOBJ_vEnumStart.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     Feature_837235000__private_IsEnabledDeviceUsageNoInline @ 0x14032C688 (Feature_837235000__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall UMPDOBJ::vDecrementEngCallRecursionCount(UMPDOBJ *this)
{
  if ( (unsigned int)Feature_837235000__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedDecrement((volatile signed __int32 *)this + 109);
  else
    --*((_DWORD *)this + 109);
}
