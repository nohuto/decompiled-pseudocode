/*
 * XREFs of HamHostIdRetrieveDynamicId @ 0x180005760
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x180004080 (CempRpcBindToServer.c)
 *     HamRpcCltRetrieveDynamicIdForHostId @ 0x18001BEC4 (HamRpcCltRetrieveDynamicIdForHostId.c)
 */

__int64 __fastcall HamHostIdRetrieveDynamicId(PSID Sid, int a2, __int64 a3, __int64 a4)
{
  int DynamicIdForHostId; // ebx
  ULONG v9; // eax
  RPC_BINDING_HANDLE Binding[4]; // [rsp+38h] [rbp-20h] BYREF

  Binding[0] = 0LL;
  DynamicIdForHostId = CempRpcBindToServer(&unk_18001EB90, Binding);
  if ( DynamicIdForHostId >= 0 )
  {
    v9 = RtlLengthSid(Sid);
    DynamicIdForHostId = HamRpcCltRetrieveDynamicIdForHostId(Binding[0], (_DWORD)Sid, v9, a2, a3, a4);
    if ( DynamicIdForHostId >= 0 )
      DynamicIdForHostId = 0;
  }
  if ( Binding[0] )
    RpcBindingFree(Binding);
  return (unsigned int)DynamicIdForHostId;
}
