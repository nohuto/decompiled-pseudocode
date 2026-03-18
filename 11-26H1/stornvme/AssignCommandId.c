/*
 * XREFs of AssignCommandId @ 0x14000F600
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x14000A910 (ProcessCommandInSpecificQueue.c)
 *     ProcessMultipleCommandsInSpecificQueue @ 0x14002BB9C (ProcessMultipleCommandsInSpecificQueue.c)
 *     ProcessPendingIoCommands @ 0x14002C2D0 (ProcessPendingIoCommands.c)
 * Callees:
 *     <none>
 */

char __fastcall AssignCommandId(__int64 a1, unsigned __int16 a2, _WORD *a3, unsigned __int16 *a4)
{
  __int64 v7; // rbx
  _WORD *v8; // r14
  __int64 v9; // rdx
  unsigned __int16 *v10; // r11
  _QWORD *v11; // r15
  unsigned __int16 *v12; // rax
  unsigned __int16 v13; // bx
  int v14; // r10d
  int v15; // edx
  int v16; // r9d
  unsigned __int16 i; // ax
  unsigned __int16 v18; // r8
  char result; // al
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int16 v22; // r8
  __int16 v23; // r10

  if ( a2 )
  {
    v7 = 328LL;
    v20 = 208LL * a2;
    v21 = *(_QWORD *)(a1 + 936);
    v9 = 326LL;
    v8 = (_WORD *)(v20 + v21 - 156);
    v10 = (unsigned __int16 *)(v20 + v21 - 152);
    v11 = (_QWORD *)(v20 + v21 - 176);
    v12 = (unsigned __int16 *)(v20 + v21 - 154);
  }
  else
  {
    v7 = 324LL;
    v8 = (_WORD *)(a1 + 388);
    v9 = 324LL;
    v10 = (unsigned __int16 *)(a1 + 392);
    v11 = (_QWORD *)(a1 + 368);
    v12 = (unsigned __int16 *)(a1 + 390);
  }
  v13 = *(_WORD *)(v7 + a1);
  v14 = *(unsigned __int16 *)(v9 + a1);
  v15 = *v12;
  v16 = (unsigned __int16)*v8;
  if ( v15 == v16 + 1 || !(_WORD)v15 && v16 == v14 - 1 )
    return 0;
  *v8 = v16 + 1;
  if ( (_WORD)v16 + 1 == (_WORD)v14 )
    *v8 = 0;
  for ( i = *v10; ; ++i )
  {
    if ( i >= v13 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= *v10 )
        {
          v23 = v14 - 1;
          if ( *v8 )
            v23 = *v8 - 1;
          result = 0;
          *v8 = v23;
          return result;
        }
        v22 = i + 1;
        if ( !*(_QWORD *)(32LL * i + *v11 + 16) )
          break;
      }
      *v10 = v22;
      if ( v22 != v13 )
        goto LABEL_11;
      goto LABEL_14;
    }
    v18 = i + 1;
    if ( !*(_QWORD *)(32LL * i + *v11 + 16) )
      break;
  }
  *v10 = v18;
  if ( v18 != v13 )
    goto LABEL_11;
LABEL_14:
  *v10 = 0;
LABEL_11:
  *a3 = v16;
  *a4 = i;
  return 1;
}
