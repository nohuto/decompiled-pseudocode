/*
 * XREFs of ?ndisOidPreMaxLookahead@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006A0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreMaxLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // r8d
  unsigned __int8 result; // al

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    if ( !v3 || v3 == 2 )
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v2 + 48) >= 4u )
      {
        **(_DWORD **)(v2 + 40) = *(_DWORD *)(v1 + 596);
        result = 1;
        *(_DWORD *)(v2 + 52) = 4;
        return result;
      }
      *(_DWORD *)(v2 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  return 0;
}
