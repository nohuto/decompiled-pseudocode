/*
 * XREFs of HampConnectionCreate @ 0x180004470
 * Callers:
 *     HamConnectForSessionState @ 0x1800053F0 (HamConnectForSessionState.c)
 *     HamConnectForDebugging @ 0x180005510 (HamConnectForDebugging.c)
 *     HamConnectToServerEx @ 0x180011AB0 (HamConnectToServerEx.c)
 *     HamConnectForFullTrust @ 0x18001A6C0 (HamConnectForFullTrust.c)
 * Callees:
 *     HampConnectionAllocateState @ 0x180004640 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x180004BF0 (HampConnectionStart.c)
 *     HamIpcChannelInitialize @ 0x180004D08 (HamIpcChannelInitialize.c)
 *     HampConnectionDestroy @ 0x180004D70 (HampConnectionDestroy.c)
 *     memset_0 @ 0x18001C04E (memset_0.c)
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
  if ( a2 == &unk_18001EC50 )
  {
    v10[156] = 0;
    HamIpcChannelInitialize(v12, v11, v13, v10 + 24);
  }
  else if ( a2 == &unk_18001E7E0 )
  {
    v10[156] = 2;
    HamIpcChannelInitialize(v12, v11, v13, v10 + 24);
  }
  else if ( a2 == &unk_18001E8A0 )
  {
    v10[156] = 6;
  }
  else if ( a2 == &unk_18001E900 )
  {
    v10[156] = 1;
    HamIpcChannelInitialize(v12, v11, v13, v10 + 24);
  }
  else if ( a2 == &unk_18001E960 )
  {
    v10[156] = 3;
    HamIpcChannelInitialize(v12, v11, v13, v10 + 24);
  }
  else if ( a2 == &unk_18001E840 )
  {
    v10[156] = 4;
  }
  else
  {
    v16 = 7;
    if ( a2 == &unk_18001EA80 )
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
