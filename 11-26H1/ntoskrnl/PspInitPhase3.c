/*
 * XREFs of PspInitPhase3 @ 0x140CDE944
 * Callers:
 *     PsInitSystem @ 0x140C85D24 (PsInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspMapSystemDll @ 0x140A08A9C (PspMapSystemDll.c)
 *     PspReferenceSystemDll @ 0x140A08E70 (PspReferenceSystemDll.c)
 */

bool PspInitPhase3()
{
  ULONG_PTR v0; // rsi
  int v1; // edi
  ULONG_PTR v2; // rbx
  _OWORD v4[3]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v5[8]; // [rsp+50h] [rbp-88h] BYREF
  ULONG_PTR v6; // [rsp+58h] [rbp-80h]
  ULONG_PTR v7; // [rsp+60h] [rbp-78h]
  __int64 v8; // [rsp+68h] [rbp-70h]

  v0 = 0LL;
  memset(v4, 0, sizeof(v4));
  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v4);
  v1 = PspMapSystemDll(
         (struct _KPROCESS *)PsSecureSystemProcess,
         *(__int64 *)((char *)&ExpPlatformBinaryLock.116 + 4),
         0,
         0);
  if ( v1 >= 0 )
  {
    v2 = PspReferenceSystemDll(**(signed __int64 ***)((char *)&ExpPlatformBinaryLock.116 + 4));
    if ( (int)PspMapSystemDll(
                (struct _KPROCESS *)PsSecureSystemProcess,
                (__int64)ExpPlatformBinaryLock.ApcState.ApcListHead[0].Flink,
                0,
                0) >= 0 )
      v0 = PspReferenceSystemDll((signed __int64 *)ExpPlatformBinaryLock.ApcState.ApcListHead[0].Flink->Flink);
    memset_0(v5, 0, 0x68uLL);
    v6 = v2;
    v7 = v0;
    v8 = 0LL;
    v1 = VslpEnterIumSecureMode(2u, 4u, 0, (__int64)v5);
    if ( v0 )
      ObFastDereferenceObject(
        (signed __int64 *)ExpPlatformBinaryLock.ApcState.ApcListHead[0].Flink->Flink,
        v0,
        0x64537350u);
    if ( v2 )
      ObFastDereferenceObject(**(signed __int64 ***)((char *)&ExpPlatformBinaryLock.116 + 4), v2, 0x64537350u);
  }
  KiUnstackDetachProcess((__int64)v4, 0);
  return v1 >= 0;
}
