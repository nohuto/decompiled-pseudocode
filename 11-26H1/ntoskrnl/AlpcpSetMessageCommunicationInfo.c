/*
 * XREFs of AlpcpSetMessageCommunicationInfo @ 0x1408EE8DC
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1408EE608 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1408EF2B0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x1408EE980 (AlpcpDestroyBlob.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpSetMessageCommunicationInfo(__int64 a1, ULONG_PTR a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // rbx
  ULONG_PTR v6; // r8
  signed __int64 v7; // rax
  bool v8; // cc
  ULONG_PTR BugCheckParameter4; // rax

  result = *(unsigned int *)(a1 + 40);
  v3 = (ULONG_PTR *)(a1 + 184);
  if ( (result & 0x40000) != 0 )
  {
    v6 = *v3;
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*v3 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v8 = v7 <= 1;
    BugCheckParameter4 = v7 - 1;
    if ( v8 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v6, 0x21uLL, BugCheckParameter4);
      AlpcpDestroyBlob(v6, 0LL);
    }
    *(_DWORD *)(a1 + 40) &= ~0x40000u;
    result = *(unsigned int *)(a1 + 40);
    *v3 = 0LL;
  }
  if ( a2 )
  {
    *(_DWORD *)(a1 + 40) = result | 0x40000;
    result = AlpcpReferenceBlob(a2);
    *v3 = a2;
  }
  return result;
}
