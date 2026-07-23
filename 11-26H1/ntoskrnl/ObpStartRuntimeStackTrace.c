/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x1407C8248
 * Callers:
 *     ObSetRefTraceInformation @ 0x1407C7574 (ObSetRefTraceInformation.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ObpStartRuntimeStackTraceEx @ 0x1407C8434 (ObpStartRuntimeStackTraceEx.c)
 */

__int64 __fastcall ObpStartRuntimeStackTrace(__int64 a1)
{
  int v2; // esi
  char PreviousMode; // r12
  unsigned __int16 v4; // r8
  size_t v5; // rbx
  unsigned __int64 v6; // rcx
  void *v7; // rax
  unsigned int started; // ebx
  void *v9; // rdx
  unsigned __int16 v10; // bx
  _WORD *Memory; // rax
  _WORD *v13; // r14
  size_t v14; // r8
  void *v15; // rdx
  int v16; // ecx
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-30h] BYREF

  v2 = 0;
  v18 = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = *(_WORD *)(a1 + 24);
  if ( !v4 )
  {
LABEL_12:
    v10 = *(_WORD *)(a1 + 8);
    if ( v10 )
    {
      if ( (v10 & 1) != 0 )
        return 3221225485LL;
      LOWORD(v17) = *(_WORD *)(a1 + 8);
      if ( v10 >= 0x80u )
      {
        v10 = 126;
        LOWORD(v17) = 126;
      }
      WORD1(v17) = v10 + 2;
      Memory = (_WORD *)ObpTraceAllocateMemory((unsigned __int16)(v10 + 2));
      v13 = Memory;
      *((_QWORD *)&v17 + 1) = Memory;
      if ( !Memory )
        goto LABEL_7;
      v14 = *(unsigned __int16 *)(a1 + 8);
      v15 = *(void **)(a1 + 16);
      if ( PreviousMode )
        RtlCopyFromUser(Memory, v15, v14);
      else
        RtlCopyVolatileMemory(Memory, v15, v14);
      v13[(unsigned __int64)v10 >> 1] = 0;
      v2 |= 0x20u;
    }
    if ( v2 )
    {
      v16 = v2 | 0x40;
      if ( !*(_BYTE *)(a1 + 1) )
        v16 = v2;
      started = ObpStartRuntimeStackTraceEx(v16, (unsigned int)&v18, (unsigned int)&v17, 0, 0xFFFF, 0);
      goto LABEL_27;
    }
LABEL_15:
    started = -1073741811;
    goto LABEL_27;
  }
  if ( (v4 & 1) != 0 )
    goto LABEL_15;
  v5 = *(unsigned __int16 *)(a1 + 24);
  v6 = (v5 >> 1) % 5;
  if ( v6 )
  {
    if ( v6 != 4 )
      goto LABEL_15;
  }
  if ( v4 >= 0xFFFEu )
    goto LABEL_15;
  LOWORD(v18) = v4;
  WORD1(v18) = v4 + 2;
  v7 = (void *)ObpTraceAllocateMemory((unsigned __int16)(v4 + 2));
  *((_QWORD *)&v18 + 1) = v7;
  if ( v7 )
  {
    v9 = *(void **)(a1 + 32);
    if ( PreviousMode )
      RtlCopyFromUser(v7, v9, v5);
    else
      RtlCopyVolatileMemory(v7, v9, v5);
    v2 = 16;
    goto LABEL_12;
  }
LABEL_7:
  started = -1073741801;
LABEL_27:
  if ( *((_QWORD *)&v17 + 1) )
    ObpTraceFreeMemory(*((PVOID *)&v17 + 1));
  if ( *((_QWORD *)&v18 + 1) )
    ObpTraceFreeMemory(*((PVOID *)&v18 + 1));
  return started;
}
