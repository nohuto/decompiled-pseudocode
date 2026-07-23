/*
 * XREFs of sub_140CAE3C4 @ 0x140CAE3C4
 * Callers:
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140CAE3C4(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rdi
  int v11; // r9d
  _QWORD *v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned __int128 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned int v19; // ebx
  _QWORD *v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int128 v25; // rax
  unsigned __int64 v26; // rdx
  int v28; // ecx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // r10d
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r8
  signed __int32 v39[8]; // [rsp+0h] [rbp-68h] BYREF

  v2 = __rdtsc();
  v3 = __ROR8__(v2, 3);
  v4 = ((unsigned __int16)(8193 * (v3 ^ v2)) ^ (unsigned __int16)(((v3 ^ v2) * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0x7FF;
  v5 = __rdtsc();
  v6 = __ROR8__(v5, 3);
  v7 = ((((v6 ^ v5) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v6 ^ v5)))
     % (unsigned int)(v4 + 1);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 256))(
         66LL,
         (unsigned int)(v4 + 48),
         *(unsigned int *)(a1 + 2096));
  v9 = v8;
  if ( v8 )
  {
    v11 = v7;
    v12 = (_QWORD *)v8;
    if ( (unsigned int)v7 >= 8 )
    {
      v13 = (unsigned __int64)(unsigned int)v7 >> 3;
      do
      {
        v14 = __rdtsc();
        v15 = (__ROR8__(v14, 3) ^ v14) * (unsigned __int128)0x7010008004002001uLL;
        *v12++ = v15 ^ *((_QWORD *)&v15 + 1);
        v11 -= 8;
        --v13;
      }
      while ( v13 );
    }
    if ( v11 )
    {
      v16 = __rdtsc();
      v17 = (__ROR8__(v16, 3) ^ v16) * (unsigned __int128)0x7010008004002001uLL;
      v18 = v17 ^ *((_QWORD *)&v17 + 1);
      do
      {
        *(_BYTE *)v12 = v18;
        v12 = (_QWORD *)((char *)v12 + 1);
        v18 >>= 8;
        --v11;
      }
      while ( v11 );
    }
    v19 = v4 - v7;
    v10 = v9 + (unsigned int)v7;
    v20 = (_QWORD *)(v10 + 48);
    if ( v19 >= 8 )
    {
      v21 = (unsigned __int64)v19 >> 3;
      do
      {
        v22 = __rdtsc();
        v23 = (__ROR8__(v22, 3) ^ v22) * (unsigned __int128)0x7010008004002001uLL;
        *v20++ = v23 ^ *((_QWORD *)&v23 + 1);
        v19 -= 8;
        --v21;
      }
      while ( v21 );
    }
    if ( v19 )
    {
      v24 = __rdtsc();
      v25 = (__ROR8__(v24, 3) ^ v24) * (unsigned __int128)0x7010008004002001uLL;
      v26 = v25 ^ *((_QWORD *)&v25 + 1);
      do
      {
        *(_BYTE *)v20 = v26;
        v20 = (_QWORD *)((char *)v20 + 1);
        v26 >>= 8;
        --v19;
      }
      while ( v19 );
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 2656);
    v10 = 0LL;
  }
  if ( !v10 )
    return 0LL;
  v28 = 48;
  v29 = (_QWORD *)v10;
  v30 = 6LL;
  do
  {
    *v29++ = 0LL;
    v28 -= 8;
    --v30;
  }
  while ( v30 );
  for ( ; v28; --v28 )
  {
    *(_BYTE *)v29 = 0;
    v29 = (_QWORD *)((char *)v29 + 1);
  }
  KeInitializeEvent((PRKEVENT)(v10 + 24), NotificationEvent, 0);
  *(_QWORD *)v10 = v10 + 24;
  v31 = __rdtsc();
  v32 = __ROR8__(v31, 3);
  if ( !(((0x7010008004002001LL * (v32 ^ v31)) ^ (((v32 ^ v31) * (unsigned __int128)0x7010008004002001uLL) >> 64)) % 0xA) )
  {
    *(_DWORD *)(a1 + 2520) |= 0x1000000u;
    *(_QWORD *)(v10 + 8) = 1LL;
  }
  _InterlockedOr(v39, 0);
  __rdtsc();
  v33 = (unsigned __int8)(*(_BYTE *)(a1 + 2368) - 1);
  v34 = __rdtsc();
  v35 = __ROR8__(v34, 3);
  v36 = ((((v35 ^ v34) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v35 ^ v34)))
      % (unsigned int)(63 - v33);
  do
  {
    v37 = __rdtsc();
    v38 = __ROR8__(v37, 3) ^ v37;
  }
  while ( (((v38 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * v38))
        % (unsigned int)(63 - v33) == (_DWORD)v36 );
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  return v10;
}
