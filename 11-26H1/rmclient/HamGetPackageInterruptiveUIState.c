/*
 * XREFs of HamGetPackageInterruptiveUIState @ 0x180018FB0
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 */

__int64 __fastcall HamGetPackageInterruptiveUIState(__int64 a1, void *a2, int a3, bool *a4)
{
  int v8; // edi
  int Pointer; // ebx
  ULONG v10; // eax
  CLIENT_CALL_RETURN v11; // rax
  ULONG v13; // [rsp+30h] [rbp-58h]
  int v14; // [rsp+38h] [rbp-50h]
  _BYTE v15[4]; // [rsp+50h] [rbp-38h] BYREF
  int v16; // [rsp+54h] [rbp-34h]
  int v17; // [rsp+58h] [rbp-30h]
  RPC_BINDING_HANDLE Binding; // [rsp+60h] [rbp-28h] BYREF
  CLIENT_CALL_RETURN v19; // [rsp+68h] [rbp-20h]

  Binding = 0LL;
  v15[0] = 0;
  v8 = 0;
  if ( RtlValidSid(a2) )
  {
    Pointer = CempRpcBindToServer(&unk_18001DC80, &Binding);
    if ( Pointer >= 0 )
    {
      v8 = 1;
      v17 = 1;
      v10 = RtlLengthSid(a2);
      v19.Simple = 0LL;
      v14 = a3;
      v13 = v10;
      v11.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x14u, 0LL, Binding, a1, a2, v13, v14, v15).Pointer;
      Pointer = (int)v11.Pointer;
      v19.Pointer = v11.Pointer;
      v16 = (int)v11.Pointer;
      if ( SLODWORD(v11.Simple) >= 0 )
      {
        *a4 = v15[0] != 0;
        Pointer = 0;
      }
    }
  }
  else
  {
    Pointer = -1073741584;
  }
  if ( v8 )
    RpcBindingFree(&Binding);
  return (unsigned int)Pointer;
}
