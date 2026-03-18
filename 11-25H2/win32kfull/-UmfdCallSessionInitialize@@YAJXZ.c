/*
 * XREFs of ?UmfdCallSessionInitialize@@YAJXZ @ 0x14010B0E4
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x14010B620 (-UmfdSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Create@CWorkItemQueue@@SAPEAV1@XZ @ 0x14010B1CC (-Create@CWorkItemQueue@@SAPEAV1@XZ.c)
 *     ?Create@CEventPool@@SAQEAV1@XZ @ 0x14010B2C4 (-Create@CEventPool@@SAQEAV1@XZ.c)
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x14010B380 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 */

__int64 __fastcall UmfdCallSessionInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rbp
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  struct CWorkItemQueue *v8; // rax
  struct CEventPool *v9; // rax
  void **v11; // rdi
  void *v12; // rcx

  v3 = 0;
  v4 = 0LL;
  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 104);
  v6 = (_QWORD *)(v5 + 16);
  while ( v3 >= 0 )
  {
    v7 = EngAllocMem(0, 0x10u, 0x676D6466u);
    if ( !v7 )
      goto LABEL_11;
    v8 = CWorkItemQueue::Create();
    *v7 = v8;
    if ( !v8 || (v9 = CEventPool::Create(), (v7[1] = v9) == 0LL) )
    {
      CMultipleConsumerWorkQueue::Destroy(v7);
LABEL_11:
      v3 = -1073741801;
      goto LABEL_7;
    }
    v6[4] = v7;
    v3 = 0;
    *v6 = v7;
LABEL_7:
    v4 = (unsigned int)(v4 + 1);
    ++v6;
    if ( (unsigned int)v4 >= 4 )
    {
      if ( v3 >= 0 )
        return (unsigned int)v3;
      break;
    }
  }
  if ( (_DWORD)v4 )
  {
    v11 = (void **)(v5 + 48);
    do
    {
      v12 = *v11;
      *(v11 - 4) = 0LL;
      CMultipleConsumerWorkQueue::Destroy(v12);
      *v11++ = 0LL;
      --v4;
    }
    while ( v4 );
  }
  return (unsigned int)v3;
}
