/*
 * XREFs of ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x140024478
 * Callers:
 *     NtFlipObjectReadNextMessageToProducer @ 0x14001B310 (NtFlipObjectReadNextMessageToProducer.c)
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140029F6C (-Clear@CBackchannelManager@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 *v2; // rdx
  __int64 *v3; // rax
  __int64 **v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rdx

  v1 = (*a1 - 48LL) & -(__int64)(*a1 != 0LL);
  v2 = (__int64 *)((v1 + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64));
  v3 = (__int64 *)*v2;
  if ( *(__int64 **)(*v2 + 8) != v2
    || (v4 = *(__int64 ***)(((v1 + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64)) + 8), *v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  v3[1] = (__int64)v4;
  result = v1;
  v6 = (_QWORD *)((v1 + 48) & -(__int64)(v1 != 0));
  v6[1] = v6;
  *v6 = v6;
  return result;
}
