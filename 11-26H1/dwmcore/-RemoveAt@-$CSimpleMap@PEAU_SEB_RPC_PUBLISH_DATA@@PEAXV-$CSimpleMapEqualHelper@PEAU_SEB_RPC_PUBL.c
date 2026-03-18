/*
 * XREFs of ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x1801C5010
 * Callers:
 *     PubSebUnregisterRpc @ 0x1801C8A64 (PubSebUnregisterRpc.c)
 * Callees:
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x1801C513C (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v3; // edx
  void *v4; // rax
  void *v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-8h]
  unsigned __int64 v8; // [rsp+20h] [rbp-8h]

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = dword_1803DE628;
  if ( (int)v2 >= dword_1803DE628 )
    return 0LL;
  if ( (_DWORD)v2 != dword_1803DE628 - 1 )
  {
    ATL::Checked::memmove_s(
      (ATL::Checked *)((char *)Block + 8 * v2),
      (void *)(8LL * (dword_1803DE628 - (int)v2)),
      (unsigned __int64)Block + 8 * v2 + 8,
      (const void *)(8LL * (dword_1803DE628 - (int)v2 - 1)),
      v7);
    ATL::Checked::memmove_s(
      (ATL::Checked *)((char *)qword_1803DE620 + 8 * v2),
      (void *)(8LL * (dword_1803DE628 - (int)v2)),
      (unsigned __int64)qword_1803DE620 + 8 * v2 + 8,
      (const void *)(8LL * (dword_1803DE628 - (int)v2 - 1)),
      v8);
    v3 = dword_1803DE628;
  }
  v4 = _recalloc(Block, v3 - 1, 8uLL);
  if ( v4 || dword_1803DE628 == 1 )
    Block = v4;
  v5 = _recalloc(qword_1803DE620, dword_1803DE628 - 1, 8uLL);
  if ( v5 || dword_1803DE628 == 1 )
    qword_1803DE620 = v5;
  result = 1LL;
  --dword_1803DE628;
  return result;
}
