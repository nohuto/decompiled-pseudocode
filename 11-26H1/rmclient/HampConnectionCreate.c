/*
 * XREFs of HampConnectionCreate @ 0x180003930
 * Callers:
 *     HamConnectForSessionState @ 0x1800052C0 (HamConnectForSessionState.c)
 *     HamConnectForDebugging @ 0x1800053F0 (HamConnectForDebugging.c)
 *     HamConnectToServerEx @ 0x180010990 (HamConnectToServerEx.c)
 *     HamConnectForFullTrust @ 0x180018C40 (HamConnectForFullTrust.c)
 * Callees:
 *     HamIpcChannelInitialize @ 0x180003898 (HamIpcChannelInitialize.c)
 *     HampConnectionAllocateState @ 0x180003B00 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x1800040B4 (HampConnectionStart.c)
 *     HampConnectionDestroy @ 0x1800041CC (HampConnectionDestroy.c)
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 */

__int64 __fastcall HampConnectionCreate(_OWORD *a1, void *a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  char *Heap; // rax
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int State; // edi
  __int64 result; // rax
  char v16; // al

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v10 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_0(Heap, 0, 0xA0uLL);
  RtlInitializeSRWLock(v10 + 120);
  *((_DWORD *)v10 + 32) = 0;
  if ( a1 )
    *(_OWORD *)(v10 + 104) = *a1;
  if ( a2 == &unk_18001DC80 )
  {
    v10[156] = 0;
    HamIpcChannelInitialize(v12, v11, v13, (_QWORD *)v10 + 3);
  }
  else if ( a2 == &unk_18001D1F0 )
  {
    v10[156] = 2;
    HamIpcChannelInitialize(v12, v11, v13, (_QWORD *)v10 + 3);
  }
  else if ( a2 == &unk_18001D2B0 )
  {
    v10[156] = 6;
  }
  else if ( a2 == &unk_18001D310 )
  {
    v10[156] = 1;
    HamIpcChannelInitialize(v12, v11, v13, (_QWORD *)v10 + 3);
  }
  else if ( a2 == &unk_18001D370 )
  {
    v10[156] = 3;
    HamIpcChannelInitialize(v12, v11, v13, (_QWORD *)v10 + 3);
  }
  else if ( a2 == &unk_18001D250 )
  {
    v10[156] = 4;
  }
  else
  {
    v16 = 7;
    if ( a2 == &unk_18001D4F0 )
      v16 = 5;
    v10[156] = v16;
  }
  State = HampConnectionAllocateState(v10, a2, a3, a4);
  if ( State < 0 || (State = HampConnectionStart(v10), State < 0) )
  {
    HampConnectionDestroy(v10);
    return (unsigned int)State;
  }
  else
  {
    result = 0LL;
    *a5 = v10;
  }
  return result;
}
