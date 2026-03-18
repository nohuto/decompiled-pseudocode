/*
 * XREFs of IoctlQueryReservedQueueEntries @ 0x14001C028
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall IoctlQueryReservedQueueEntries(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rdx
  __int64 SrbDataBuffer; // rsi
  unsigned int *v10; // r12
  unsigned __int64 v11; // rcx
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // r10
  _WORD *v21; // r13
  __int16 v22; // cx
  __int64 v23; // r9
  unsigned __int64 v24; // r8
  unsigned int *v25; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v25 = 0LL;
  v5 = 16;
  if ( *(_WORD *)(a1 + 982) )
  {
    v6 = *(_QWORD *)(a1 + 968);
    v7 = *(unsigned __int16 *)(a1 + 982);
    v8 = (unsigned __int16 *)(v6 + 34);
    do
    {
      if ( *(v8 - 5) )
        v5 += (*v8 << 6) + 48;
      v8 += 24;
      --v7;
    }
    while ( v7 );
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v25);
  v10 = (unsigned int *)(SrbDataBuffer + 28);
  if ( *(_WORD *)(a1 + 954) )
  {
    v11 = *v25;
    if ( v11 >= (unsigned __int64)v5 + 28 )
    {
      v14 = v11 - 28;
      if ( (((_BYTE)v11 - 28) & 3) != 0 )
      {
        if ( (_DWORD)v11 != 28 )
          memset(v10, 0, v14);
      }
      else
      {
        v15 = v14 >> 2;
        if ( v15 )
          memset(v10, 0, 4LL * v15);
      }
      v16 = *(_WORD *)(a1 + 982);
      v17 = 0;
      if ( v16 )
      {
        v18 = SrbDataBuffer + 44;
        do
        {
          v19 = *(_QWORD *)(a1 + 968);
          v20 = 48LL * v17;
          if ( *(_WORD *)(v20 + v19 + 24) )
          {
            v21 = (_WORD *)(v18 + 34);
            *(_QWORD *)v18 = *(_QWORD *)(v20 + v19);
            *(_QWORD *)(v18 + 16) = *(_QWORD *)(v20 + v19 + 16);
            *(_WORD *)(v18 + 24) = *(_WORD *)(v20 + v19 + 24);
            *(_WORD *)(v18 + 26) = *(_WORD *)(v20 + v19 + 26);
            v22 = *(_WORD *)(v18 + 32) ^ (*(_WORD *)(v20 + v19 + 32) ^ *(_WORD *)(v18 + 32)) & 1;
            *(_WORD *)(v18 + 32) = v22;
            *(_WORD *)(v18 + 32) = v22 ^ (*(_WORD *)(v20 + v19 + 32) ^ v22) & 2;
            *(_DWORD *)(v18 + 28) = *(_DWORD *)(v20 + v19 + 28);
            v18 += 48LL;
            *v21 = 0;
            v16 = *(_WORD *)(a1 + 982);
            if ( v16 )
            {
              do
              {
                v23 = *(_QWORD *)(a1 + 960);
                v24 = (unsigned __int64)v2 << 6;
                if ( *(_WORD *)(v24 + v23 + 46) == *(_WORD *)(v20 + v19 + 24) )
                {
                  *(_QWORD *)v18 = *(_QWORD *)(v24 + v23);
                  *(_QWORD *)(v18 + 16) = *(_QWORD *)(v24 + v23 + 16);
                  *(_WORD *)(v18 + 42) = *(_WORD *)(v24 + v23 + 42);
                  *(_WORD *)(v18 + 44) = *(_WORD *)(v24 + v23 + 44);
                  *(_WORD *)(v18 + 48) ^= (*(_WORD *)(v24 + v23 + 48) ^ *(_WORD *)(v18 + 48)) & 1;
                  *(_WORD *)(v18 + 46) = *(_WORD *)(v24 + v23 + 46);
                  *(_WORD *)(v18 + 50) = *(_WORD *)(v24 + v23 + 50);
                  ++*v21;
                  v18 += 64LL;
                }
                v16 = *(_WORD *)(a1 + 982);
                ++v2;
              }
              while ( v2 < v16 );
            }
            v2 = 0;
          }
          ++v17;
        }
        while ( v17 < v16 );
        v10 = (unsigned int *)(SrbDataBuffer + 28);
      }
      v13 = v5;
      *(_WORD *)(SrbDataBuffer + 36) = *(_WORD *)(a1 + 954);
    }
    else
    {
      if ( (unsigned int)v11 < 0x24 )
      {
        *(_BYTE *)(a2 + 3) = 6;
        return 3238002694LL;
      }
      v13 = 8;
    }
    *(_BYTE *)(a2 + 3) = 1;
    *(_DWORD *)(SrbDataBuffer + 32) = v5;
    *v10 = v5;
    *(_DWORD *)(SrbDataBuffer + 24) = v13;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 1;
  }
  return 0LL;
}
