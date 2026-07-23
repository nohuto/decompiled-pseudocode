/*
 * XREFs of ObGetAssociatedWaitObject @ 0x1403B4780
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x1403B45E4 (IopCancelWaitCompletionPacket.c)
 *     NtAssociateWaitCompletionPacket @ 0x140515EB0 (NtAssociateWaitCompletionPacket.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall ObGetAssociatedWaitObject(__int64 a1)
{
  __int64 v1; // r10
  __int16 *v2; // rax
  __int64 v3; // rcx

  v1 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v2 = *(__int16 **)(v1 + 32);
  if ( ((unsigned __int8)v2 & 1) == 0 )
  {
    if ( (__int64)v2 < 0 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( ((unsigned __int8)v2 & 2) != 0 )
  {
    if ( (*(_DWORD *)(v1 + 176) & *(_DWORD *)(*(unsigned __int16 *)(v1 + 180) + a1)) != *(_DWORD *)(v1 + 176) )
    {
      v2 = (__int16 *)((char *)v2 - 3);
LABEL_3:
      v2 = (__int16 *)((char *)v2 + a1);
      goto LABEL_4;
    }
    v2 = *(__int16 **)(*(unsigned __int16 *)(v1 + 182) + a1);
  }
  else
  {
    v2 = *(__int16 **)((char *)v2 + a1 - 1);
  }
LABEL_4:
  v3 = 0LL;
  if ( v2 != &ObpDefaultObject )
    return v2;
  return (__int16 *)v3;
}
