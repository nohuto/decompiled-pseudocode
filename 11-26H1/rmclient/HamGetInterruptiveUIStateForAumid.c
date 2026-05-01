/*
 * XREFs of HamGetInterruptiveUIStateForAumid @ 0x180001E30
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 *     HamRpcCltGetInterruptiveUIStateForAumid @ 0x180010E54 (HamRpcCltGetInterruptiveUIStateForAumid.c)
 */

__int64 __fastcall HamGetInterruptiveUIStateForAumid(int a1, void *a2, int a3, bool *a4)
{
  int v8; // edi
  int InterruptiveUIStateForAumid; // ebx
  ULONG v10; // eax
  _BYTE v12[4]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+34h] [rbp-34h]
  int v14; // [rsp+38h] [rbp-30h]
  RPC_BINDING_HANDLE Binding; // [rsp+40h] [rbp-28h] BYREF

  Binding = 0LL;
  v12[0] = 0;
  v8 = 0;
  if ( RtlValidSid(a2) )
  {
    InterruptiveUIStateForAumid = CempRpcBindToServer(&unk_18001DC80);
    if ( InterruptiveUIStateForAumid >= 0 )
    {
      v8 = 1;
      v14 = 1;
      v10 = RtlLengthSid(a2);
      InterruptiveUIStateForAumid = HamRpcCltGetInterruptiveUIStateForAumid(
                                      (_DWORD)Binding,
                                      a1,
                                      (_DWORD)a2,
                                      v10,
                                      a3,
                                      (__int64)v12);
      v13 = InterruptiveUIStateForAumid;
      if ( InterruptiveUIStateForAumid >= 0 )
      {
        *a4 = v12[0] != 0;
        InterruptiveUIStateForAumid = 0;
      }
    }
  }
  else
  {
    InterruptiveUIStateForAumid = -1073741584;
  }
  if ( v8 )
    RpcBindingFree(&Binding);
  return (unsigned int)InterruptiveUIStateForAumid;
}
