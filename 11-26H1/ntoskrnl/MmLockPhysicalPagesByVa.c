/*
 * XREFs of MmLockPhysicalPagesByVa @ 0x1406EF4CC
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiProbeAndLockPrepare @ 0x1402C74B0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x1402D0300 (MiProbeAndLockPacket.c)
 *     MiProbeAndLockComplete @ 0x1403A1DB0 (MiProbeAndLockComplete.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiTransformVadSecure @ 0x140A9E8F4 (MiTransformVadSecure.c)
 */

__int64 __fastcall MmLockPhysicalPagesByVa(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  struct _LIST_ENTRY *v13; // rax
  int v14; // ecx
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int128 v20; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h]
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+50h] [rbp-B8h]
  __int128 v24; // [rsp+54h] [rbp-B4h]
  int v25; // [rsp+64h] [rbp-A4h]
  unsigned __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  unsigned __int64 v28[24]; // [rsp+78h] [rbp-90h] BYREF
  int v29; // [rsp+170h] [rbp+68h] BYREF

  memset_0(v28, 0, 0xB8uLL);
  v25 = 0;
  v21 = 0LL;
  v24 = 0LL;
  v29 = 0;
  *((_QWORD *)&v20 + 1) = (2LL * (a4 != 0)) | 0x300000000000001LL;
  v8 = a1 & 0xFFF;
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v8 + a2 + 4095;
  v11 = MiTransformVadSecure(a3);
  v13 = MiObtainReferencedSecureVad(v11, &v29, v12);
  v14 = (__int64)v13[3].Flink & 0x1C;
  if ( ((v14 - 4) & 0xFFFFFFF3) != 0 || (v15 = 0, v14 == 8) )
    v15 = 1;
  MiUnlockAndDereferenceVad((volatile signed __int32 *)v13);
  if ( v15 )
  {
    v22 = 0LL;
    v23 = 56;
    v26 = v9;
    v27 = 1LL;
    v16 = MiProbeAndLockPrepare((__int64)v28, (__int64)&v22, v9, v10 & 0xFFFFFFFFFFFFF000uLL, (__int64)&v20 + 8);
    if ( v16 >= 0 )
    {
      v28[17] = a3;
      v16 = MiProbeAndLockPacket((__int64)v28, v17, v18);
      MiProbeAndLockComplete(v28, v16);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v16;
}
