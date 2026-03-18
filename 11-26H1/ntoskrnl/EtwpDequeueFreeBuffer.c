/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x1402193F4
 * Callers:
 *     EtwpSwitchBuffer @ 0x140219160 (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x1406C836C (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpEnqueueOverflowBuffer @ 0x140219884 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpUnlockBufferList @ 0x140219C44 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140219CD0 (EtwpLockBufferList.c)
 *     EtwpResetBufferHeader @ 0x140219DA4 (EtwpResetBufferHeader.c)
 *     EtwpValidateBuffer @ 0x140219DFC (EtwpValidateBuffer.c)
 *     EtwpDequeueBuffer @ 0x140219E34 (EtwpDequeueBuffer.c)
 *     EtwpDisableCompression @ 0x1406C8138 (EtwpDisableCompression.c)
 */

__int64 __fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  __int64 v1; // r14
  char v3; // bp
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD **v7; // rdx
  _QWORD *v8; // rcx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  signed __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // eax
  signed __int32 v19; // edx
  __int64 v20; // rcx
  char v21; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 48;
  v3 = 0;
  v21 = 0;
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 72) )
  {
    if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
    {
      EtwpLockBufferList(a1, &v21);
      v7 = (_QWORD **)(a1 + 72);
      while ( 1 )
      {
        v8 = *v7;
        if ( !*v7 )
          break;
        *v7 = (_QWORD *)*v8;
        if ( *v8 )
          *v8 = 0LL;
        else
          *(_QWORD *)(a1 + 64) = v7;
        v4 = (__int64)(v8 - 4);
        if ( *((_DWORD *)v8 + 3) != 6 )
          goto LABEL_7;
        *v8 = *(_QWORD *)(a1 + 1448);
        *(_QWORD *)(a1 + 1448) = v8;
      }
      v4 = EtwpDequeueBuffer(a1, v1);
LABEL_7:
      if ( *(_DWORD *)(a1 + 1432) )
      {
        v17 = *(_QWORD *)(a1 + 56);
        if ( !v17 || (v18 = *(_DWORD *)(v17 + 12), v18 == 6) || v18 == 4 )
          v3 = 1;
      }
      EtwpUnlockBufferList(a1, &v21);
      if ( v3 )
        EtwpDisableCompression(a1);
      if ( v4 )
      {
        do
        {
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
          if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
          {
            v19 = *(_DWORD *)(v4 + 44);
            if ( (unsigned int)(v19 - 4) > 1 )
              v19 = 0;
          }
          else
          {
            v19 = 0;
          }
          if ( !*(_DWORD *)(v4 + 12) && v19 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 44), 1, v19) )
            break;
          EtwpEnqueueOverflowBuffer(a1);
          EtwpLockBufferList(a1, &v21);
          v4 = EtwpDequeueBuffer(a1, v1);
          EtwpUnlockBufferList(v20, &v21);
        }
        while ( v4 );
        if ( v4 )
        {
          v15 = *(_QWORD *)(a1 + 1560);
          if ( v15 )
          {
            v16 = *(unsigned __int16 *)(v4 + 40);
            v9 = *(_QWORD *)(v15 + 8 * v16);
            do
            {
              v11 = *(_QWORD *)(v4 + 16);
              if ( v11 <= v9 )
                break;
              v10 = v9;
              v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1560) + 8 * v16), v11, v9);
            }
            while ( v10 != v9 );
            if ( *(_QWORD *)(v4 + 24) <= *(_QWORD *)(a1 + 1576) )
            {
              v12 = *(_QWORD *)(*(_QWORD *)(a1 + 1568) + 8 * v16);
              do
              {
                v14 = *(_QWORD *)(v4 + 16);
                if ( v14 <= v12 )
                  break;
                v13 = v12;
                v12 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(*(_QWORD *)(a1 + 1568) + 8 * v16),
                        v14,
                        v12);
              }
              while ( v13 != v12 );
            }
          }
          EtwpResetBufferHeader(v4, 0LL);
          goto LABEL_5;
        }
      }
    }
    else
    {
      EtwpLockBufferList(a1, &v21);
      v4 = EtwpDequeueBuffer(a1, v1);
      EtwpUnlockBufferList(v5, &v21);
      if ( v4 )
      {
        EtwpResetBufferHeader(v4, 0LL);
        *(_DWORD *)(v4 + 44) = 1;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
LABEL_5:
        EtwpValidateBuffer(a1, v4);
        return v4;
      }
    }
  }
  return 0LL;
}
