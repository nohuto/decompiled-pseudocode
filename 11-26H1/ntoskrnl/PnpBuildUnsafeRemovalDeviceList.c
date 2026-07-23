/*
 * XREFs of PnpBuildUnsafeRemovalDeviceList @ 0x1409B586C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpIsBeingRemovedSafely @ 0x1409B59C4 (PnpIsBeingRemovedSafely.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

unsigned __int64 __fastcall PnpBuildUnsafeRemovalDeviceList(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 result; // rax
  int v6; // r10d
  __int64 v7; // r9
  unsigned int *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r8
  _WORD *v13; // rbx
  __int64 v14; // r9
  unsigned int *v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rsi
  const void *v21; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  *a3 = 0LL;
  if ( a2 )
  {
    v6 = 0;
    LODWORD(v7) = 0;
    while ( 1 )
    {
      v8 = *(unsigned int **)a2;
      if ( (unsigned int)v7 >= **(_DWORD **)a2 || !v8 )
        break;
      _mm_lfence();
      v9 = (unsigned int)v7;
      v7 = (unsigned int)(v7 + 1);
      v10 = v8[6 * v9 + 6];
      result = *(_QWORD *)&v8[6 * v9 + 4];
      if ( (_DWORD)v10 )
      {
        result = PnpIsBeingRemovedSafely(*(_QWORD *)(*(_QWORD *)(result + 312) + 40LL), v10, v8, v7);
        if ( !(_BYTE)result )
        {
          if ( *(_QWORD *)(v11 + 48) )
          {
            result = *(unsigned __int16 *)(v11 + 40);
            v6 += result + 2;
          }
        }
      }
    }
    if ( v6 )
    {
      result = ExAllocatePool2(0x100uLL);
      *a3 = result;
      v13 = (_WORD *)result;
      if ( result )
      {
        LODWORD(v14) = 0;
        while ( *(_BYTE *)(a2 + 8) )
        {
          v15 = *(unsigned int **)a2;
          v16 = **(_DWORD **)a2;
          if ( (unsigned int)v14 >= v16 )
            break;
          result = v16 - (unsigned int)v14 - 1;
          if ( !v15 || (unsigned int)result >= v16 )
            break;
          _mm_lfence();
          v17 = 3 * result;
          result = *(_QWORD *)&v15[6 * result + 4];
          v18 = v14 + 1;
          v19 = v15[2 * v17 + 6];
          v14 = (unsigned int)(v14 + 1);
          if ( (_DWORD)v19 )
          {
            v20 = *(_QWORD *)(*(_QWORD *)(result + 312) + 40LL);
            result = PnpIsBeingRemovedSafely(v20, v19, v12, v14);
            if ( !(_BYTE)result )
            {
              v21 = *(const void **)(v20 + 48);
              if ( v21 )
              {
                memmove(v13, v21, *(unsigned __int16 *)(v20 + 40));
                result = (unsigned __int64)*(unsigned __int16 *)(v20 + 40) >> 1;
                v13 += result + 1;
              }
              LODWORD(v14) = v18;
            }
          }
        }
        *v13 = 0;
      }
    }
  }
  return result;
}
