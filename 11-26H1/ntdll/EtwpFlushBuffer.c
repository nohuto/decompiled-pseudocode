/*
 * XREFs of EtwpFlushBuffer @ 0x180078550
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x180078240 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x180158EDC (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpWriteBufferCompressed @ 0x1800787C8 (EtwpWriteBufferCompressed.c)
 *     NtWriteFile @ 0x18015F040 (NtWriteFile.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // edi
  int v6; // eax
  int v7; // r9d
  int v8; // ebp
  unsigned int v9; // edx
  __int64 v10; // r11
  __int64 v11; // r15
  unsigned __int64 v13; // r9
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  _OWORD v17[4]; // [rsp+58h] [rbp-40h] BYREF
  int v18; // [rsp+A8h] [rbp+10h] BYREF
  int v19; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v17[0] = 0LL;
  v18 = 0;
  v19 = 0;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = 0;
  if ( !v6 )
    v6 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 48) = v6;
  v8 = 1;
  if ( v6 == 72 && a3 != 1 )
    return (unsigned int)-2147483614;
  if ( *(_QWORD *)(a1 + 128) )
  {
    v9 = *(_DWORD *)(a1 + 308);
    v10 = *(unsigned int *)(a1 + 304);
    v11 = *(unsigned int *)(a1 + 192);
    if ( (_DWORD)v10 )
    {
      v13 = (v9 & 0x4000000) != 0 ? *(_QWORD *)(a1 + 344) : v11 * (((v9 >> 2) & 2) + *(_DWORD *)(a1 + 320));
      if ( v13 >= v10 * ((-(__int64)((v9 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
        v14 = (v9 & 0xB) - 1;
        if ( !v14 )
        {
          v7 = -1073741432;
LABEL_32:
          *(_DWORD *)(a1 + 372) += v3;
          if ( (*(_DWORD *)(a1 + 308) & 0x10000) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12LL * *(unsigned __int16 *)(a2 + 42) + 8) += v3;
          return (unsigned int)v7;
        }
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 6 )
            *(_DWORD *)(a1 + 316) |= 1u;
        }
        else
        {
          v16 = *(_QWORD *)(a1 + 336);
          *(_QWORD *)(a1 + 344) = v16;
          *(_DWORD *)(a1 + 320) = v16 / v11;
        }
      }
    }
    *(_WORD *)(a2 + 52) = a3 | 0x20;
    *(_QWORD *)(a2 + 16) = MEMORY[0x7FFE0014];
    if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
    {
      v7 = EtwpWriteBufferCompressed(a1, a2, &v18, &v19);
      if ( v7 >= 0 )
      {
        v8 = v18;
LABEL_11:
        *(_DWORD *)(a1 + 376) += v8;
        *(_DWORD *)(a1 + 320) += v8;
        if ( (*(_DWORD *)(a1 + 308) & 0x10000) != 0 )
          *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12LL * *(unsigned __int16 *)(a2 + 42)) += v8;
        return (unsigned int)v7;
      }
      v3 = v19;
    }
    else
    {
      if ( *(_DWORD *)(a2 + 48) < (unsigned int)v11 )
        memset_thunk_772440563353939046(
          (void *)(a2 + *(unsigned int *)(a2 + 48)),
          255,
          (unsigned int)(v11 - *(_DWORD *)(a2 + 48)));
      v7 = NtWriteFile(*(_QWORD *)(a1 + 128), 0LL, 0LL, 0LL, v17, a2, v11, a1 + 344, 0LL);
      if ( v7 >= 0 )
      {
        *(_QWORD *)(a1 + 344) += v11;
        goto LABEL_11;
      }
      v3 = 1;
    }
    if ( v7 == -2147483614 )
      return (unsigned int)v7;
    goto LABEL_32;
  }
  return (unsigned int)v7;
}
