/*
 * XREFs of PpmEventComputeEnergy @ 0x140257C6C
 * Callers:
 *     PpmCheckComputeEnergy @ 0x140257A60 (PpmCheckComputeEnergy.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventComputeEnergy(int a1, __int64 a2)
{
  const GUID *ActivityId; // r9
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+80h] [rbp+8h] BYREF
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF

  v9 = a2;
  v8 = a1;
  ActivityId = 0LL;
  if ( PpmEtwRegistered && PpmEtwHandle )
  {
    if ( (v3 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v3 + 96))
      && ((v4 = *(_BYTE *)(v3 + 100), v4 >= 4u) || !v4)
      && (*(_DWORD *)(v3 + 112) & 0x100LL) != 0
      && (*(_QWORD *)(v3 + 120) & 0x100LL) == *(_QWORD *)(v3 + 120)
      || *(_WORD *)(PpmEtwHandle + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, 4u, 256LL) )
    {
      UserData.Ptr = (ULONGLONG)&v8;
      *(_QWORD *)&UserData.Size = 4LL;
      v6 = &v9;
      v7 = 8LL;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_COMPUTE_ENERGY, 0LL, (ULONG)ActivityId, ActivityId, ActivityId, 2u, &UserData);
    }
  }
}
