/*
 * XREFs of WRITE_PM1_CONTROL @ 0x14002EA8C
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x14002E3C0 (ACPIEnableInitializeACPI.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x14002E5D0 (ACPIReleaseHardwareGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x14002E900 (ACPIReleaseGlobalLock.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WRITE_PM1_CONTROL(__int16 a1, char a2)
{
  int (__fastcall *v2)(__int64); // rax
  __int64 result; // rax
  __int16 *v4; // r8
  __int16 v5; // [rsp+40h] [rbp+10h] BYREF
  __int16 v6; // [rsp+48h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0;
  v2 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
  if ( !a2 )
  {
    if ( v2(1LL) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
        1LL,
        0LL,
        &v6,
        2LL,
        0LL);
      v6 |= v5;
      (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
        1LL,
        0LL,
        &v6,
        2LL,
        0LL);
    }
    result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(4LL);
    if ( (int)result < 0 )
      return result;
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      4LL,
      0LL,
      &v6,
      2LL,
      0LL);
    v4 = &v6;
    v6 |= v5;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             4LL,
             0LL,
             v4,
             2LL,
             0LL);
  }
  if ( v2(1LL) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
      1LL,
      0LL,
      &v5,
      2LL,
      0LL);
  result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(4LL);
  if ( (int)result >= 0 )
  {
    v4 = &v5;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             4LL,
             0LL,
             v4,
             2LL,
             0LL);
  }
  return result;
}
