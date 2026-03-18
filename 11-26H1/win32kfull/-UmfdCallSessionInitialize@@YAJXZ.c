/*
 * XREFs of ?UmfdCallSessionInitialize@@YAJXZ @ 0x1401C1630
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x1401C1238 (-UmfdSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1401C16E8 (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1401C18E8 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 */

__int64 __fastcall UmfdCallSessionInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // r14
  struct CMultipleConsumerWorkQueue **v6; // rbx
  struct CMultipleConsumerWorkQueue *v7; // rax
  int v8; // ecx
  __int64 v10; // rbp
  void *v11; // rcx

  v3 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 104);
  v6 = (struct CMultipleConsumerWorkQueue **)(v5 + 48);
  while ( v3 >= 0 )
  {
    v7 = CMultipleConsumerWorkQueue::Create();
    if ( v7 )
    {
      v8 = 0;
      *v6 = v7;
      v3 = 0;
      *(v6 - 4) = v7;
    }
    else
    {
      v8 = -1073741801;
      v3 = -1073741801;
    }
    ++v4;
    ++v6;
    if ( v4 >= 4 )
    {
      if ( v8 >= 0 )
        return (unsigned int)v3;
      break;
    }
  }
  v10 = 0LL;
  if ( v4 > 1 )
  {
    do
    {
      v11 = *(void **)(v5 + 8 * v10 + 48);
      *(_QWORD *)(v5 + 8 * v10 + 16) = 0LL;
      CMultipleConsumerWorkQueue::Destroy(v11);
      *(_QWORD *)(v5 + 8 * v10 + 48) = 0LL;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (int)v10 + 1 < v4 );
  }
  return (unsigned int)v3;
}
