/*
 * XREFs of KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14030E7D8
 * Callers:
 *     KeUpdateTebSchedulingPropertiesCurrentThread @ 0x14030E404 (KeUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KiUpdateTebApc @ 0x14030E7C0 (KiUpdateTebApc.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall KiUpdateTebSchedulingPropertiesCurrentThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r14
  __int64 v12; // rcx
  _BYTE v13[4]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-64h]
  unsigned int v15; // [rsp+2Ch] [rbp-5Ch]
  _DWORD v16[4]; // [rsp+38h] [rbp-50h] BYREF
  __int128 Src; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-30h] BYREF

  result = 0LL;
  v14 = 0;
  v13[0] = 0;
  v15 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 240) )
  {
    Src = 0LL;
    KiAcquireThreadLockRaiseToDpc(a1, v13);
    v6 = *(unsigned int *)(a1 + 196);
    v7 = *(unsigned __int16 *)(a1 + 560);
    WORD4(Src) = v7;
    v8 = *(_WORD **)(a1 + 552);
    if ( (unsigned __int16)v7 >= *v8 )
      v9 = 0LL;
    else
      v9 = *(_QWORD *)&v8[4 * v7 + 4];
    *(_QWORD *)&Src = v9;
    LOBYTE(v5) = v13[0];
    KiReleaseThreadLockLowerIrql(a1, v5);
    if ( (_DWORD)v6 )
    {
      if ( (unsigned int)v6 < KeMaximumProcessors )
      {
        v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v6);
        if ( v10 )
        {
          LOWORD(v14) = v10 >> 6;
          BYTE2(v14) = v10 & 0x3F;
        }
      }
    }
    else
    {
      LOWORD(v14) = 0;
      BYTE2(v14) = 0;
    }
    HIBYTE(v14) = BYTE2(v14);
    LOWORD(v15) = v14;
    BYTE2(v15) = BYTE2(v14) & 0x1F;
    HIBYTE(v15) = BYTE2(v14) & 0x1F;
    v16[2] = 0;
    v16[1] = WORD4(Src);
    v16[0] = Src | DWORD1(Src);
    v18[1] = WORD4(Src);
    v18[0] = Src;
    v11 = *(_QWORD *)(a1 + 240);
    v12 = *(_QWORD *)(a1 + 544);
    if ( *(_QWORD *)(v12 + 784) )
    {
      if ( *(_WORD *)(v12 + 1772) == 0x8664 )
        v3 = v11 + 0x2000;
      else
        v4 = v11 + 0x2000;
    }
    RtlWriteULongToUser(v11 + 5956, v14);
    result = RtlCopyToUser((void *)(v11 + 6232), &Src, 0x10uLL);
    if ( v3 )
    {
      RtlWriteULongToUser(v3 + 5956, v14);
      result = RtlCopyToUser((void *)(v3 + 6232), v18, 0x10uLL);
    }
    if ( v4 )
    {
      RtlWriteULongToUser(v4 + 3956, v15);
      return RtlCopyToUser((void *)(v4 + 4124), v16, 0xCuLL);
    }
  }
  return result;
}
