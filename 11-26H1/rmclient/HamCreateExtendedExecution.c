/*
 * XREFs of HamCreateExtendedExecution @ 0x18000C490
 * Callers:
 *     <none>
 * Callees:
 *     HamFreeBuffer @ 0x180004D70 (HamFreeBuffer.c)
 *     HampIpcChannelAcquireLock @ 0x1800053B0 (HampIpcChannelAcquireLock.c)
 *     HampIpcChannelAddCallbackUnsafe @ 0x180008DE0 (HampIpcChannelAddCallbackUnsafe.c)
 *     HampConnectionObjectCreate @ 0x18000C5C0 (HampConnectionObjectCreate.c)
 */

__int64 __fastcall HamCreateExtendedExecution(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 *a5)
{
  int Pointer; // ebx
  CLIENT_CALL_RETURN v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  CLIENT_CALL_RETURN v16; // [rsp+50h] [rbp-18h]
  _QWORD *v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = 0LL;
  v15 = -1LL;
  Pointer = HampConnectionObjectCreate(a2, a1, &v17);
  if ( Pointer >= 0 )
  {
    v16.Simple = 0LL;
    v9.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DF70, 3u, 0LL, *a1, a3, a4, &v15).Pointer;
    Pointer = (int)v9.Pointer;
    v16.Pointer = v9.Pointer;
    if ( SLODWORD(v9.Simple) >= 0 )
    {
      v10 = v17;
      v17[6] = v15;
      v11 = v10[5];
      HampIpcChannelAcquireLock(v11);
      HampIpcChannelAddCallbackUnsafe((__int64)v10, v12, v13);
      *(_DWORD *)(v11 + 16) = 0;
      RtlReleaseSRWLockExclusive(v11 + 8);
      v17 = 0LL;
      *a5 = v15;
      Pointer = 0;
    }
  }
  if ( v17 )
    HamFreeBuffer(v17);
  return (unsigned int)Pointer;
}
