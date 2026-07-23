/*
 * XREFs of KeSetThreadPpmPolicy @ 0x14030F130
 * Callers:
 *     PspSetThreadPpmPolicy @ 0x140AB8480 (PspSetThreadPpmPolicy.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 */

__int64 __fastcall KeSetThreadPpmPolicy(__int64 a1, char a2)
{
  int v4; // eax
  __int64 v5; // rdx
  char v6; // bl
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // r8
  int v10; // eax
  int v11; // ecx
  _BYTE *v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v17; // ecx
  _BYTE *v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rcx
  _OWORD v22[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+70h] [rbp+20h] BYREF
  char v25; // [rsp+78h] [rbp+28h] BYREF

  v25 = 0;
  KiAcquireThreadLockRaiseToDpc(a1, &v25);
  *(_BYTE *)(a1 + 958) = a2;
  v4 = KiComputeThreadQos(a1);
  v6 = v4;
  if ( v4 != *(unsigned __int8 *)(a1 + 516) )
  {
    memset(v22, 0, sizeof(v22));
    v23 = 0LL;
    v7 = KiAcquireThreadStateLockForWrite(a1, v22);
    *(_BYTE *)(a1 + 516) = v6;
    v10 = v7 - 2;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v17 = *(_DWORD *)(a1 + 120) >> 1;
        v24 = *(_QWORD *)&v22[0];
        v8 = v17 & 1;
        if ( (_DWORD)v8 )
        {
          if ( (_DWORD)v8 != 1 )
            goto LABEL_9;
          v18 = *(_BYTE **)(*(_QWORD *)&v22[0] + 36504LL);
          v8 = (unsigned __int8)*v18;
          v19 = (__int64 *)(v18 + 8);
          if ( !*v18 )
            goto LABEL_9;
        }
        else
        {
          v19 = &v24;
          LODWORD(v8) = 1;
        }
        v20 = (unsigned int)v8;
        do
        {
          v21 = *v19;
          *(_BYTE *)(*(_QWORD *)(*v19 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v19 + 56) + 64LL)) & 7;
          KiUpdateThreadQosGroupingSummaries(v21);
          ++v19;
          --v20;
        }
        while ( v20 );
      }
    }
    else if ( !*(_QWORD *)(*(_QWORD *)&v22[0] + 16LL) )
    {
      v11 = *(_DWORD *)(a1 + 120) >> 1;
      v24 = *(_QWORD *)&v22[0];
      v8 = v11 & 1;
      if ( (_DWORD)v8 )
      {
        if ( (_DWORD)v8 != 1 )
          goto LABEL_9;
        v12 = *(_BYTE **)(*(_QWORD *)&v22[0] + 36504LL);
        v8 = (unsigned __int8)*v12;
        v13 = (__int64 *)(v12 + 8);
        if ( !*v12 )
          goto LABEL_9;
      }
      else
      {
        v13 = &v24;
        LODWORD(v8) = 1;
      }
      v14 = (unsigned int)v8;
      do
      {
        v15 = *v13;
        *(_BYTE *)(*(_QWORD *)(*v13 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v13 + 56) + 64LL)) & 7;
        KiUpdateThreadQosGroupingSummaries(v15);
        ++v13;
        --v14;
      }
      while ( v14 );
    }
LABEL_9:
    KiReleaseThreadStateLock(v8, (__int64)v22, v9);
  }
  LOBYTE(v5) = v25;
  return KiReleaseThreadLockLowerIrql(a1, v5);
}
