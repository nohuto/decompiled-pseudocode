/*
 * XREFs of AlpcpCreatePort @ 0x1408EDBA8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x140AE55B0 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, (_BYTE)a1);
  if ( Object >= 0 )
    memset_0(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
