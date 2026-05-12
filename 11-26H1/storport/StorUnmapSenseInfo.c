/*
 * XREFs of StorUnmapSenseInfo @ 0x140017530
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void __fastcall StorUnmapSenseInfo(__int64 a1, __int64 a2)
{
  const void *v2; // rbx
  unsigned __int8 v3; // r8
  __int64 v6; // rbp
  const void **v7; // r14
  unsigned __int8 *v8; // r15
  __int64 v9; // rsi
  int v10; // r13d
  unsigned int v11; // r10d
  unsigned int i; // r11d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // ecx
  char v17; // cl
  int v18; // ecx
  unsigned __int8 v19; // bp
  void *Pool2; // rax
  const void *v21; // r13
  size_t Size; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v3 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (*(_BYTE *)(a1 + 16) & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 168);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 2) != 40 )
      {
        v10 = *(_DWORD *)(v9 + 12);
        v7 = (const void **)(v9 + 32);
        v8 = (unsigned __int8 *)(v9 + 11);
        goto LABEL_11;
      }
      v6 = *(_QWORD *)(a1 + 168);
      v10 = *(_DWORD *)(v9 + 24);
      if ( !*(_DWORD *)(v9 + 20) )
      {
        v11 = *(_DWORD *)(v9 + 56);
        for ( i = 0; i < v11; ++i )
        {
          v13 = *(unsigned int *)(v9 + 4LL * i + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v14 = *(unsigned int *)(v9 + 16);
            if ( (unsigned int)v13 <= (unsigned int)v14 )
            {
              v15 = (unsigned int)v13;
              v16 = *(_DWORD *)(v13 + v9);
              if ( v16 == 64 )
              {
                if ( v15 + 40 <= v14 )
                  goto LABEL_10;
              }
              else
              {
                v18 = v16 - 65;
                if ( v18 )
                {
                  if ( v18 == 1 && v15 + 40 <= v14 )
                  {
                    v7 = (const void **)(v15 + v9 + 24);
                    v8 = (unsigned __int8 *)(v15 + v9 + 9);
LABEL_11:
                    v3 = *v8;
                    v2 = *v7;
                    break;
                  }
                }
                else if ( v15 + 56 <= v14 )
                {
LABEL_10:
                  v7 = (const void **)(v15 + v9 + 16);
                  v8 = (unsigned __int8 *)(v15 + v9 + 9);
                  goto LABEL_11;
                }
              }
            }
          }
        }
      }
      v17 = *(_BYTE *)(v9 + 3);
      if ( v17 < 0 )
      {
        if ( (v10 & 0x200000) != 0 && v3 )
        {
          Size = v3;
          Pool2 = (void *)ExAllocatePool2(64LL, v3, 1230201170LL);
          v21 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, v2, Size);
            *v7 = v21;
            if ( *(_BYTE *)(v9 + 2) == 40 )
              *(_DWORD *)(v6 + 24) |= 0x400u;
            else
              *(_DWORD *)(v9 + 12) |= 0x400u;
          }
          else
          {
            if ( a2 )
              RaidLogAllocationFailure(a2, 64, Size, 1230201170, 0x80000000);
            *v7 = *(const void **)(a1 + 200);
            *v8 = *(_BYTE *)(a1 + 208);
            *(_BYTE *)(v9 + 3) &= ~0x80u;
          }
        }
        else
        {
          v19 = v3;
          if ( v3 >= *(_BYTE *)(a1 + 208) )
            v19 = *(_BYTE *)(a1 + 208);
          if ( v19 )
            memmove(*(void **)(a1 + 200), v2, v19);
          else
            *(_BYTE *)(v9 + 3) = v17 & 0x7F;
          *v7 = *(const void **)(a1 + 200);
          *v8 = v19;
        }
      }
      else
      {
        *v7 = *(const void **)(a1 + 200);
        *v8 = *(_BYTE *)(a1 + 208);
      }
    }
  }
}
