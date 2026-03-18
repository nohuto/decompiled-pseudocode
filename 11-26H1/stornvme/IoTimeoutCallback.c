/*
 * XREFs of IoTimeoutCallback @ 0x140023190
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerAsyncReset @ 0x140010870 (NVMeControllerAsyncReset.c)
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     IoResetCompletion @ 0x1400230F0 (IoResetCompletion.c)
 *     ProcessPendingIoCommands @ 0x14002C2D0 (ProcessPendingIoCommands.c)
 */

char __fastcall IoTimeoutCallback(__int64 a1)
{
  char v2; // r13
  char v3; // bl
  unsigned __int16 v4; // r12
  unsigned int v5; // eax
  __int64 v6; // rsi
  _QWORD *v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 i; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  _QWORD *v14; // rbx
  __int64 v15; // r9
  __int64 v16; // r8
  _QWORD *v17; // rbx
  __int64 v18; // r9
  unsigned int v19; // edx
  unsigned __int16 j; // r8
  __int64 v21; // rcx
  unsigned int v22; // edx
  int v23; // r8d
  _BYTE v25[32]; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  memset(v25, 0, sizeof(v25));
  v3 = 0;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4284), 1u);
  v4 = 0;
  LOBYTE(v5) = _InterlockedExchange((volatile __int32 *)(a1 + 4280), 0);
  if ( *(_WORD *)(a1 + 330) )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 936) + 208LL * v4;
      if ( *(_QWORD *)(v6 + 160)
        || *(_QWORD *)(v6 + 144)
        || *(_QWORD *)(v6 + 176)
        || *(_QWORD *)(v6 + 192)
        || *(_QWORD *)(v6 + 200) )
      {
        StorPortExtendedFunction(93LL, a1, 1LL, v6 + 64);
        v7 = *(_QWORD **)(v6 + 192);
        *(_QWORD *)(v6 + 192) = 0LL;
        v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
        v9 = *(_QWORD *)(v6 + 160);
        if ( v9 )
        {
          do
          {
            if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v9 + 3) + 1672) + 20LL) & 0x200) != 0 )
            {
              if ( *(_QWORD *)(v6 + 176) )
                *(_QWORD *)(*(_QWORD *)(v6 + 184) + 8LL) = v9;
              else
                *(_QWORD *)(v6 + 176) = v9;
              *(_QWORD *)(v6 + 184) = v9;
            }
            else
            {
              if ( *(_QWORD *)(v6 + 144) )
                *(_QWORD *)(*(_QWORD *)(v6 + 152) + 8LL) = v9;
              else
                *(_QWORD *)(v6 + 144) = v9;
              *(_QWORD *)(v6 + 152) = v9;
            }
            *(_QWORD *)(v6 + 160) = *(_QWORD *)(v9 + 8);
            *(_QWORD *)(v9 + 8) = 0LL;
            v9 = *(_QWORD *)(v6 + 160);
          }
          while ( v9 );
          *(_QWORD *)(v6 + 168) = 0LL;
        }
        if ( (*(_DWORD *)(a1 + 4064) & 0x80u) != 0 )
        {
          v10 = *(_DWORD *)(a1 + 4296);
          if ( v10 != -1 )
          {
            for ( i = *(_QWORD *)(v6 + 144); i; i = *(_QWORD *)(i + 8) )
            {
              if ( *(_DWORD *)(a1 + 4284) - *(_DWORD *)(i + 16) >= v10 / 0x3E8 )
              {
                v2 = 1;
                break;
              }
            }
          }
        }
        StorPortNotification(4100LL, a1, v25);
        while ( v7 )
        {
          v13 = *v7;
          v14 = v7;
          v7 = (_QWORD *)v7[3];
          StorPortExtendedFunction(1LL, a1, v13, v12);
          StorPortExtendedFunction(1LL, a1, v14, v15);
        }
        while ( v8 )
        {
          v16 = *v8;
          v17 = v8;
          v8 = (_QWORD *)v8[3];
          StorPortExtendedFunction(1LL, a1, v16, v12);
          StorPortExtendedFunction(1LL, a1, v17, v18);
        }
        ProcessPendingIoCommands(a1, v6, 0LL, 0LL);
        v3 = 1;
      }
      v5 = *(_DWORD *)(a1 + 4064);
      if ( (v5 & 0x80u) == 0 || (v5 = 274877907 * *(_DWORD *)(a1 + 4300), (v19 = *(_DWORD *)(a1 + 4300) / 0x3E8u) == 0) )
        v19 = 10;
      for ( j = 0; j < *(_WORD *)(a1 + 328); ++j )
      {
        v21 = 32LL * j;
        v5 = *(_DWORD *)(v21 + *(_QWORD *)(v6 + 32)) & 0x48;
        if ( (*(_BYTE *)(v21 + *(_QWORD *)(v6 + 32)) & 0x48) == 0x48 )
        {
          v3 = 1;
          v5 = *(_DWORD *)(a1 + 4284) - *(_DWORD *)(*(_QWORD *)(v6 + 32) + v21 + 4);
          if ( v5 >= v19 )
          {
            v2 = 1;
            break;
          }
        }
      }
      ++v4;
    }
    while ( v4 < *(_WORD *)(a1 + 330) );
    if ( v2 )
    {
      v5 = *(_DWORD *)(a1 + 3748);
      if ( (v5 & 1) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 4064) & 0x180) == 0x80 )
        {
          v22 = *(_DWORD *)(a1 + 4308) / 0xAu;
          if ( v22 )
          {
            v23 = *(_DWORD *)(a1 + 4288);
            if ( v23 )
            {
              if ( *(_DWORD *)(a1 + 4284) - v23 < v22 )
                *(_DWORD *)(a1 + 4064) |= 0x100u;
            }
          }
        }
        StorPortQuerySystemTime(a1 + 4312);
        LOBYTE(v5) = NVMeControllerAsyncReset(a1, 0, (__int64)IoResetCompletion, 0LL);
        if ( !(_BYTE)v5 )
        {
          NVMeControllerReset(a1, 0);
          LOBYTE(v5) = IoResetCompletion(a1);
        }
      }
    }
    if ( v3 )
    {
      v5 = *(_DWORD *)(a1 + 4280);
      if ( !v5 && !_InterlockedExchange((volatile __int32 *)(a1 + 4280), 1) )
        LOBYTE(v5) = StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 4272), IoTimeoutCallback);
    }
  }
  return v5;
}
