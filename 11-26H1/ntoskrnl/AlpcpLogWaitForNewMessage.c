/*
 * XREFs of AlpcpLogWaitForNewMessage @ 0x140773AC0
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpGetPortNameInformation @ 0x140773BC0 (AlpcpGetPortNameInformation.c)
 *     AlpcpInvokeLogCallbacks @ 0x140B4A34C (AlpcpInvokeLogCallbacks.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpLogWaitForNewMessage(__int64 a1)
{
  const void **v1; // rbx
  unsigned int v3; // esi
  _DWORD *Pool2; // rax
  _DWORD *v5; // rdi
  __int128 v6; // xmm0
  int v7; // [rsp+40h] [rbp+8h] BYREF
  const void **v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v8 = 0LL;
  v3 = 30;
  if ( a1 )
  {
    v7 = -1;
    if ( (int)AlpcpGetPortNameInformation(a1, &v8, &v7) < 0 )
      return;
    v1 = v8;
    v3 = *(unsigned __int16 *)v8 + 30;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v3);
    v6 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    v5[4] = 4;
    *(_OWORD *)v5 = v6;
    if ( a1 )
    {
      v5[6] = (*(_DWORD *)(a1 + 416) & 6) == 2;
      memmove(v5 + 7, v1[1], *(unsigned __int16 *)v1);
    }
    else
    {
      v5[6] = 0;
    }
    AlpcpInvokeLogCallbacks(v5, v3);
    ExFreePoolWithTag(v5, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
