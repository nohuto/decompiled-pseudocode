/*
 * XREFs of IopIoRingDispatchRegisterFiles @ 0x14079B080
 * Callers:
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopIoRingDispatchRegisterFiles(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  char PreviousMode; // r8
  __int64 i; // rdi
  void *v7; // r15
  __int64 v8; // r12
  int *v9; // r13
  _KPROCESS *Process; // rdx
  __int16 v11; // ax
  bool v13; // dl
  bool v14; // zf
  unsigned int v15; // edx
  unsigned __int64 v16; // rax
  __int64 Pool2; // rcx
  __int64 v18; // rdx
  int v19; // [rsp+24h] [rbp-64h]
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h]
  bool v22; // [rsp+A0h] [rbp+18h]

  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LODWORD(i) = 0;
  v19 = *(_DWORD *)(a1 + 192);
  v7 = *(void **)(a1 + 200);
  *(_QWORD *)&v20 = v7;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0LL;
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFE) != 0 || *(_DWORD *)(a2 + 16) || *(_DWORD *)(a2 + 20) )
  {
    v4 = -1069154303;
    goto LABEL_34;
  }
  v8 = *(unsigned int *)(a2 + 28);
  v9 = *(int **)(a2 + 32);
  if ( !(_DWORD)v8 )
  {
    v4 = v9 != 0LL ? 0xC000000D : 0;
    goto LABEL_34;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = 0;
  if ( Process[1].ReadyTime )
  {
    v11 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v11 == 332 || v11 == 452 )
      v13 = 1;
  }
  v22 = v13;
  if ( PreviousMode )
  {
    v14 = !v13;
    v15 = -1;
    if ( v14 )
      v16 = 8 * v8;
    else
      v16 = 4 * v8;
    if ( v16 <= 0xFFFFFFFF )
      v15 = v16;
    v4 = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_34;
    ProbeForRead(v9, v15, 1u);
  }
  if ( (_DWORD)v8 == v19 )
  {
    Pool2 = (__int64)v7;
    v7 = 0LL;
    *(_QWORD *)&v20 = 0LL;
    goto LABEL_25;
  }
  Pool2 = ExAllocatePool2(0x103uLL);
  if ( Pool2 )
  {
LABEL_25:
    for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
    {
      if ( v22 )
        v18 = v9[i];
      else
        v18 = *(_QWORD *)&v9[2 * i];
      v21 = v18;
      *(_QWORD *)(Pool2 + 8 * i) = v18;
    }
    *(_DWORD *)(a1 + 192) = i;
    *(_QWORD *)(a1 + 200) = Pool2;
    goto LABEL_34;
  }
  v4 = -1073741670;
LABEL_34:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x46527249u);
  *((_QWORD *)&v20 + 1) = (unsigned int)i;
  *(_QWORD *)&v20 = v4;
  IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 8), &v20, 0);
}
