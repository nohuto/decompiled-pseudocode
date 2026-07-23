/*
 * XREFs of PspSetNetRateControl @ 0x1407FF594
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     PspLockJobAndRootExclusive @ 0x1407FE8E0 (PspLockJobAndRootExclusive.c)
 *     PspNetRateControlDispatch @ 0x1407FE9B0 (PspNetRateControlDispatch.c)
 *     PspSetJobRateControl @ 0x1407FF37C (PspSetJobRateControl.c)
 *     PspUnlockJobAndRootExclusive @ 0x1407FFA68 (PspUnlockJobAndRootExclusive.c)
 *     EtwTraceJobSetQuery @ 0x140AF71B0 (EtwTraceJobSetQuery.c)
 */

__int64 __fastcall PspSetNetRateControl(void *Src, __int64 a2, __int64 a3, char a4)
{
  char v5; // si
  int v6; // ebx
  int v7; // r15d
  int v8; // r12d
  int v9; // r14d
  struct _KTHREAD *CurrentThread; // r13
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  char v18; // [rsp+30h] [rbp-88h]
  __int64 v19; // [rsp+38h] [rbp-80h] BYREF
  int v20; // [rsp+40h] [rbp-78h]
  _DWORD v21[5]; // [rsp+44h] [rbp-74h] BYREF
  __int64 v22; // [rsp+58h] [rbp-60h]
  __int128 v23; // [rsp+60h] [rbp-58h] BYREF
  __int128 v24; // [rsp+70h] [rbp-48h] BYREF
  __int64 v25; // [rsp+80h] [rbp-38h]

  v24 = 0LL;
  LODWORD(v25) = 0;
  memset(v21, 0, 12);
  v22 = 0LL;
  v23 = 0LL;
  v18 = 0;
  if ( a4 )
    RtlCopyFromUser(&v23, Src, 0x10uLL);
  else
    RtlCopyVolatileMemory(&v23, Src, 0x10uLL);
  v5 = BYTE8(v23);
  if ( (DWORD2(v23) & 0xFFFFFFF8) == 0 )
  {
    v7 = BYTE8(v23) & 1;
    if ( (BYTE8(v23) & 1) == 0
      || ((BYTE8(v23) & 4) == 0 || BYTE12(v23) <= 0x40u) && ((BYTE8(v23) & 2) != 0 || (BYTE8(v23) & 4) != 0) )
    {
      v19 = 0LL;
      memset(v21, 0, 12);
      v22 = 0LL;
      *(_QWORD *)&v21[3] = a3 + 1472;
      v20 = 0;
      v8 = BYTE8(v23) & 2;
      if ( (BYTE8(v23) & 2) != 0 )
      {
        LODWORD(v22) = v22 | 0x10;
        *(_QWORD *)&v21[1] = v23;
      }
      v9 = BYTE8(v23) & 4;
      if ( (BYTE8(v23) & 4) != 0 )
      {
        LODWORD(v22) = v22 | 8;
        BYTE4(v22) = BYTE12(v23);
      }
      CurrentThread = KeGetCurrentThread();
      PspLockJobAndRootExclusive(a3, (__int64)CurrentThread);
      v11 = BYTE8(v23) & 1;
      v12 = *(_DWORD *)(a3 + 1552);
      v13 = v12 & 0x2000000;
      v14 = v12 & 0x4000000;
      if ( v14 )
        v19 = *(_QWORD *)(*(_QWORD *)(a3 + 1544) + 56LL);
      if ( (_BYTE)v11 )
      {
        if ( v13 )
        {
          if ( v14 )
            LODWORD(v22) = v22 | 2;
        }
        else
        {
          LODWORD(v22) = v22 | 1;
        }
      }
      else if ( v14 )
      {
        LODWORD(v22) = v22 | 4;
      }
      if ( (v22 & 1) != 0 )
      {
        v6 = PspSetJobRateControl(a3, v11, v5);
        if ( v6 < 0 )
          goto LABEL_41;
        v18 = 1;
        v15 = PspNetRateControlDispatch((__int64)&v19);
      }
      else
      {
        if ( (v22 & 7) != 0 )
        {
          v6 = PspNetRateControlDispatch((__int64)&v19);
          if ( v6 < 0 )
            goto LABEL_41;
        }
        v15 = PspSetJobRateControl(a3, v11, v5);
      }
      v6 = v15;
      if ( v15 < 0 )
        goto LABEL_42;
      if ( v7 )
      {
        if ( v8 )
        {
          *(_DWORD *)(*(_QWORD *)(a3 + 1544) + 48LL) |= 1u;
          *(_QWORD *)(*(_QWORD *)(a3 + 1544) + 40LL) = *(_QWORD *)&v21[1];
        }
        if ( v9 )
        {
          *(_DWORD *)(*(_QWORD *)(a3 + 1544) + 48LL) |= 2u;
          *(_BYTE *)(*(_QWORD *)(a3 + 1544) + 64LL) = BYTE4(v22);
        }
        *(_QWORD *)(*(_QWORD *)(a3 + 1544) + 56LL) = v19;
        v16 = *(_QWORD *)(a3 + 1544);
        LODWORD(v24) = *(_DWORD *)(v16 + 48);
        *((_QWORD *)&v24 + 1) = *(_QWORD *)(v16 + 40);
        LOBYTE(v25) = *(_BYTE *)(v16 + 64);
      }
      else
      {
        v24 = 0LL;
        v25 = 0LL;
      }
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery(a3, 32, (unsigned int)&v24, 0, v15, 1829);
LABEL_41:
      if ( v6 >= 0 )
      {
LABEL_44:
        PspUnlockJobAndRootExclusive(a3, CurrentThread);
        return (unsigned int)v6;
      }
LABEL_42:
      if ( v18 )
        PspSetJobRateControl(a3, v11, 0);
      goto LABEL_44;
    }
  }
  return (unsigned int)-1073741811;
}
