/*
 * XREFs of DwmSyncFlushForceRenderAndWaitForBatch @ 0x1401191E0
 * Callers:
 *     DwmSyncFlushWindowChanges @ 0x14011825C (DwmSyncFlushWindowChanges.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x140118DBC (-DwmSyncLPCAllowed@@YAJXZ.c)
 */

__int64 __fastcall DwmSyncFlushForceRenderAndWaitForBatch(PVOID Object, int a2)
{
  int v4; // ebx
  int v5; // eax
  _OWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+58h] [rbp-8h]
  int v10; // [rsp+5Ch] [rbp-4h]
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v4 = DwmSyncLPCAllowed();
    if ( v4 >= 0 )
    {
      EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin(0xFFFFFFFFLL);
      memset(v7, 0, sizeof(v7));
      v8 = 0LL;
      WORD2(v7[0]) = 0x8000;
      v11 = 48LL;
      LODWORD(v7[0]) = 3145736;
      v9 = -2147483638;
      v10 = a2;
      v5 = LpcSendWaitReceivePort(Object, 0x20000LL, v7, v7, &v11, 0LL);
      v4 = v5;
      if ( v5 >= 0 && (v5 == 192 || v5 == 258 || BYTE4(v7[0]) != 2) )
        v4 = -1073741823;
      EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd(0xFFFFFFFFLL);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
