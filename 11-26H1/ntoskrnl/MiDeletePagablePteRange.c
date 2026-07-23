/*
 * XREFs of MiDeletePagablePteRange @ 0x140363600
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x14036358C (MiDeleteVirtualAddresses.c)
 *     MiDeleteRotateAndStopFaults @ 0x1404D8460 (MiDeleteRotateAndStopFaults.c)
 *     MiDeleteVadBitmap @ 0x140AFCE30 (MiDeleteVadBitmap.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140277040 (ExAcquireAutoExpandPushLockShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiDecommitInitializePacket @ 0x140363928 (MiDecommitInitializePacket.c)
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 *     MiFreeLargePages @ 0x1403D0F00 (MiFreeLargePages.c)
 *     MiFreePhysicalPageChain @ 0x1403D12C8 (MiFreePhysicalPageChain.c)
 *     MiUnlockAweVadsShared @ 0x1404F3F68 (MiUnlockAweVadsShared.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiDeletePagablePteRange(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6)
{
  _KPROCESS *Process; // rcx
  __int64 v11; // r8
  int v12; // ecx
  char v13; // al
  __int64 v14; // rdx
  ULONG_PTR v15; // r15
  unsigned __int8 v16; // al
  unsigned int v17; // ecx
  unsigned __int8 v18; // di
  _QWORD *v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // rax
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+64h] [rbp-9Ch]
  char v29; // [rsp+68h] [rbp-98h]
  unsigned __int8 v30; // [rsp+69h] [rbp-97h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  unsigned __int64 v32; // [rsp+88h] [rbp-78h]
  unsigned __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v34)(__int64, unsigned __int64, __int64); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v35)(__int64); // [rsp+110h] [rbp+10h]
  _QWORD *v36; // [rsp+118h] [rbp+18h]
  _BYTE v37[116]; // [rsp+120h] [rbp+20h] BYREF
  int v38; // [rsp+194h] [rbp+94h]
  _QWORD v39[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v40[112]; // [rsp+1D0h] [rbp+D0h] BYREF

  memset_0(v40, 0, sizeof(v40));
  memset_0(v37, 0, 0x98uLL);
  memset_0(&v27, 0, 0xC0uLL);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    Process = 0LL;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  MiDecommitInitializePacket(
    (unsigned int)v37,
    (a3 >> 9) & 0xFFFFFFF8,
    ((__int64)(((a4 >> 9) & 0x7FFFFFFFF8LL) - ((a3 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
    0,
    (__int64)Process,
    *(_QWORD *)(a6 + 32),
    (*(_QWORD *)(a6 + 32) != 0LL) + 32,
    0LL,
    a6);
  v28 &= 0xFFFFFE3F;
  v12 = 23;
  v39[0] = v37;
  v36 = v39;
  v38 = a5;
  v39[1] = a6;
  v27 = 23;
  if ( (a5 & 0x100) != 0 )
  {
    v12 = 1047;
    if ( (a5 & 0x200) != 0 )
      v12 = 3095;
    v27 = v12;
  }
  v13 = v29;
  v14 = 63LL;
  v32 = a3;
  if ( (a5 & 0x800) != 0 )
    v13 = 63;
  v33 = a4;
  v29 = v13;
  v34 = MiDeleteVa;
  v35 = MiDeleteVaTail;
  v31 = a1;
  if ( (a5 & 0x10) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v24 = *(_QWORD *)(*(_QWORD *)(a6 + 40) + 48LL) + 64LL;
    --CurrentThread->SpecialApcDisable;
    v25 = ExAcquireAutoExpandPushLockShared(v24, 0LL);
    v12 = v27;
    v15 = v25;
  }
  else
  {
    v15 = 0LL;
  }
  if ( a2 == 2 )
  {
    v16 = MiLockWorkingSetShared(a1, v14, v11);
    LOWORD(v17) = v27;
    v18 = v16;
  }
  else
  {
    v17 = v12 & 0xFFFFFFFD;
    v18 = 17;
    v27 = v17;
    if ( a2 == 1 )
    {
      v17 &= ~4u;
      v27 = v17;
    }
  }
  v30 = v18;
  if ( (v17 & 0x400) != 0 || !(unsigned __int8)MiDeleteVaDirect(&v27) )
    MiWalkPageTables((__int64)&v27);
  if ( v18 != 17 )
    MiUnlockWorkingSetShared(a1, v18);
  v19 = v36;
  v26 = 0LL;
  v20 = (_QWORD *)v36[1];
  v21 = v20[6];
  if ( v21 < 0 )
  {
    v20[1] = MiFreeLargePages(
               *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v31 + 174)),
               v21,
               (unsigned int)&v26,
               (int)v20 + 16,
               0);
    v20[6] = v26;
  }
  v22 = v20[5];
  if ( v22 && v19[12] )
    MiFreePhysicalPageChain(*(_QWORD *)(v22 + 48), v19 + 12);
  if ( (a5 & 0x10) != 0 )
    MiUnlockAweVadsShared(KeGetCurrentThread(), v15);
}
