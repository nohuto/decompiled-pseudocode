/*
 * XREFs of ?bInEngCall@UMPDOBJ@@QEAA_NXZ @ 0x14034CFA4
 * Callers:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     Feature_837235000__private_IsEnabledDeviceUsageNoInline @ 0x14032C688 (Feature_837235000__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall UMPDOBJ::bInEngCall(UMPDOBJ *this)
{
  bool v2; // zf

  if ( (unsigned int)Feature_837235000__private_IsEnabledDeviceUsageNoInline() )
    v2 = (_InterlockedCompareExchange((volatile signed __int32 *)this + 109, 0, 0) & 0x7FFFFFFF) == 0;
  else
    v2 = *((_DWORD *)this + 109) == 0;
  return !v2;
}
