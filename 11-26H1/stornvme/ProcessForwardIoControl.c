/*
 * XREFs of ProcessForwardIoControl @ 0x14002B318
 * Callers:
 *     NVMeHwUnitControl @ 0x140010210 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCompletePendingForwardIoRequests @ 0x140016528 (NVMeCompletePendingForwardIoRequests.c)
 *     ProcessPendingIoCommands @ 0x14002C2D0 (ProcessPendingIoCommands.c)
 */

int __fastcall ProcessForwardIoControl(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  int v4; // ecx
  unsigned int v5; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // edx
  unsigned __int16 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // r15d
  _QWORD *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r15d
  _QWORD *v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // edx
  _BYTE v30[32]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&retaddr;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = 0;
  memset(v30, 0, sizeof(v30));
  if ( v4 )
  {
    v7 = v4 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 && *(_WORD *)(a1 + 330) )
            {
              do
              {
                NVMeCompletePendingForwardIoRequests(
                  a1,
                  (_QWORD *)(*(_QWORD *)(a1 + 936) + 208LL * v5),
                  *(unsigned __int8 *)(a2 + 50),
                  0,
                  1);
                LODWORD(v2) = *(unsigned __int16 *)(a1 + 330);
                ++v5;
              }
              while ( v5 < (unsigned int)v2 );
            }
          }
          else
          {
            *(_BYTE *)(a2 + 12) = 0;
            v11 = 0;
            if ( *(_WORD *)(a1 + 330) )
            {
              do
              {
                v12 = 0;
                v13 = *(_QWORD *)(a1 + 936) + 208LL * v11;
                while ( v12 < *(_WORD *)(a1 + 328) )
                {
                  if ( (*(_BYTE *)(32LL * v12 + *(_QWORD *)(v13 + 32)) & 0x48) == 0x48
                    && BYTE1(*(_DWORD *)(32LL * v12 + *(_QWORD *)(v13 + 32))) == *(_BYTE *)(a2 + 50) )
                  {
                    *(_BYTE *)(a2 + 12) = 1;
                    break;
                  }
                  ++v12;
                }
                LODWORD(v2) = *(unsigned __int16 *)(a1 + 330);
                ++v11;
              }
              while ( v11 < (unsigned int)v2 );
            }
          }
        }
        else
        {
          v2 = *(unsigned __int8 *)(a2 + 50);
          v14 = *(_QWORD *)(a1 + 8 * v2 + 1672);
          if ( v14 )
          {
            LODWORD(v2) = *(_DWORD *)(v14 + 20);
            if ( (v2 & 0x200) != 0 )
            {
              LODWORD(v2) = v2 & 0xFFFFFDFF;
              *(_DWORD *)(v14 + 20) = v2;
            }
          }
          v15 = 0;
          if ( *(_WORD *)(a1 + 330) )
          {
            do
            {
              v16 = (_QWORD *)(*(_QWORD *)(a1 + 936) + 208LL * v15);
              if ( v16[22] )
              {
                StorPortExtendedFunction(93LL, a1, 1LL, v16 + 8);
                v17 = v16[22];
                v18 = 0LL;
                if ( v17 )
                {
                  do
                  {
                    v19 = *(_QWORD *)(v17 + 8);
                    if ( *(_BYTE *)(v17 + 3) == *(_BYTE *)(a2 + 50) )
                    {
                      if ( v18 )
                        *(_QWORD *)(v18 + 8) = v19;
                      else
                        v16[22] = v19;
                      if ( !v19 )
                        v16[23] = v18;
                      *(_QWORD *)(v17 + 8) = 0LL;
                      v20 = v16[19];
                      if ( v20 )
                        *(_QWORD *)(v20 + 8) = v17;
                      else
                        v16[18] = v17;
                      v16[19] = v17;
                    }
                    else
                    {
                      v18 = v17;
                    }
                    v17 = v19;
                  }
                  while ( v19 );
                }
                StorPortNotification(4100LL, a1, v30);
              }
              ProcessPendingIoCommands(a1, v16, 0LL, 0LL);
              LODWORD(v2) = *(unsigned __int16 *)(a1 + 330);
              ++v15;
            }
            while ( v15 < (unsigned int)v2 );
          }
        }
      }
      else
      {
        v2 = *(unsigned __int8 *)(a2 + 50);
        v21 = *(_QWORD *)(a1 + 8 * v2 + 1672);
        if ( v21 )
        {
          LODWORD(v2) = *(_DWORD *)(v21 + 20);
          if ( (v2 & 0x200) == 0 )
          {
            LODWORD(v2) = v2 | 0x200;
            *(_DWORD *)(v21 + 20) = v2;
          }
        }
        v22 = 0;
        if ( *(_WORD *)(a1 + 330) )
        {
          do
          {
            v23 = (_QWORD *)(*(_QWORD *)(a1 + 936) + 208LL * v22);
            if ( v23[18] )
            {
              StorPortExtendedFunction(93LL, a1, 1LL, v23 + 8);
              v24 = v23[18];
              v25 = 0LL;
              if ( v24 )
              {
                do
                {
                  v26 = *(_QWORD *)(v24 + 8);
                  if ( *(_BYTE *)(v24 + 3) == *(_BYTE *)(a2 + 50) )
                  {
                    if ( v25 )
                      *(_QWORD *)(v25 + 8) = v26;
                    else
                      v23[18] = v26;
                    if ( !v26 )
                      v23[19] = v25;
                    *(_QWORD *)(v24 + 8) = 0LL;
                    v27 = v23[23];
                    if ( v27 )
                      *(_QWORD *)(v27 + 8) = v24;
                    else
                      v23[22] = v24;
                    v23[23] = v24;
                  }
                  else
                  {
                    v25 = v24;
                  }
                  v24 = v26;
                }
                while ( v26 );
              }
              StorPortNotification(4100LL, a1, v30);
            }
            LODWORD(v2) = *(unsigned __int16 *)(a1 + 330);
            ++v22;
          }
          while ( v22 < (unsigned int)v2 );
        }
      }
    }
    else
    {
      v28 = *(_DWORD *)(a1 + 4064) & 0xFFFFFEFF;
      if ( !*(_BYTE *)(a2 + 12) )
        v28 = *(_DWORD *)(a1 + 4064) | 0x100;
      *(_DWORD *)(a1 + 4064) = v28;
    }
  }
  else if ( *(_BYTE *)(a2 + 12) )
  {
    *(_DWORD *)(a1 + 4292) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 4296) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a1 + 4300) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 4304) = *(_DWORD *)(a2 + 32);
    LODWORD(v2) = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a1 + 4064) |= 0x80u;
    *(_DWORD *)(a1 + 4308) = v2;
  }
  else
  {
    *(_DWORD *)(a1 + 4064) &= ~0x80u;
    *(_QWORD *)(a1 + 4292) = 0LL;
    *(_QWORD *)(a1 + 4300) = 0LL;
    *(_DWORD *)(a1 + 4308) = 0;
  }
  return v2;
}
