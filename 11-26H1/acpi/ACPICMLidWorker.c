/*
 * XREFs of ACPICMLidWorker @ 0x14002F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIButtonEvent @ 0x14002F6EC (ACPIButtonEvent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPICMLidWorker(__int64 a1, char a2)
{
  char v2; // di
  __int64 result; // rax
  BOOL v6; // edi
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // rcx
  const char *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v14 = 0LL;
  result = ACPIGet(a1, 1145654367, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v14, 0LL);
  if ( (int)result < 0 )
  {
    v10 = byte_140075A82;
    v11 = byte_140075A82;
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v2 = a1;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (v12 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = (__int64)v11;
      LOBYTE(v11) = 2;
      return WPP_RECORDER_SF_Lqss(
               WPP_GLOBAL_Control->DeviceExtension,
               (_DWORD)v11,
               17,
               24,
               (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
               result,
               v2,
               (__int64)v10,
               v13);
    }
  }
  else
  {
    v6 = v14 != 0;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    *(_BYTE *)(a1 + 192) = v6;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v7);
    return ACPIButtonEvent(*(_QWORD *)(a1 + 768), (v6 ? 0x80000000 : 4) | (((a2 & 1) + 2) << 18), v8, v9);
  }
  return result;
}
