/*
 * XREFs of AlpcpReplaceAttributes @ 0x14098D9FC
 * Callers:
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 * Callees:
 *     AlpcpReleaseAttributes @ 0x14098DA90 (AlpcpReleaseAttributes.c)
 */

__int64 __fastcall AlpcpReplaceAttributes(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = 0LL;
  if ( a3 > 0 )
  {
    v3 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(a1 + 160) = 0LL;
    result = AlpcpReleaseAttributes(a1, a1 + 104);
  }
  if ( a2 )
  {
    *(_OWORD *)(a1 + 104) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 64);
  }
  if ( v3 )
    *(_QWORD *)(a1 + 160) = v3;
  return result;
}
