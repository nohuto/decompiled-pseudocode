/*
 * XREFs of _PnpCtxRegisterMachineNode @ 0x14089C3F8
 * Callers:
 *     PiPnpRtlInit @ 0x1407A9F14 (PiPnpRtlInit.c)
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpCtxDestroyNode @ 0x14089C0B4 (_PnpCtxDestroyNode.c)
 *     _PnpCtxFindNode @ 0x14089C1C0 (_PnpCtxFindNode.c)
 *     _SysCtxGetTransaction @ 0x1408A2E08 (_SysCtxGetTransaction.c)
 *     _PnpCtxCreateNode @ 0x140AE59C4 (_PnpCtxCreateNode.c)
 */

__int64 __fastcall PnpCtxRegisterMachineNode(__int64 a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 v8; // rsi
  int Node; // ebx
  int Transaction; // eax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  UNICODE_STRING *v16; // rcx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)&PiPnpRtlCtx;
  v8 = a3;
  P = 0LL;
  a6 = 0LL;
  if ( a3 == 1 || a3 == 2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 16LL * a3 + 24) != *(_QWORD *)&PiPnpRtlCtx + 16LL * a3 + 24 )
      return (unsigned int)-1073741298;
  }
  else if ( a3 != 3 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (int)PnpCtxFindNode(*(__int64 *)&PiPnpRtlCtx, a2, 0, (const UNICODE_STRING **)&P) < 0 )
  {
    Transaction = SysCtxGetTransaction(*(_QWORD *)(v6 + 224), &a6);
    Node = Transaction;
    if ( (Transaction == -1072103421 || Transaction >= 0)
      && (Node = PnpCtxCreateNode(v6, a2, (unsigned int)v8), Node >= 0) )
    {
      v11 = *(_QWORD **)(v6 + 16);
      if ( *v11 != v6 + 8 )
        goto LABEL_15;
      v12 = P;
      *((_QWORD *)P + 1) = v11;
      *v12 = v6 + 8;
      *v11 = v12;
      *(_QWORD *)(v6 + 16) = v12;
      v13 = v6 + 16 * v8 + 24;
      v14 = v12 + 2;
      v15 = *(_QWORD **)(v13 + 8);
      if ( *v15 != v13 )
LABEL_15:
        __fastfail(3u);
      *v14 = v13;
      v14[1] = v15;
      *v15 = v14;
      *(_QWORD *)(v13 + 8) = v14;
      memset_0((void *)(v6 + 96), 0, 0x80uLL);
      *(_BYTE *)(v6 + 4) = *(_QWORD *)(v6 + 56) != v6 + 56;
      v16 = 0LL;
    }
    else
    {
      v16 = (UNICODE_STRING *)P;
    }
    if ( v16 )
      PnpCtxDestroyNode(v16);
  }
  else
  {
    return (unsigned int)-1073741771;
  }
  return (unsigned int)Node;
}
