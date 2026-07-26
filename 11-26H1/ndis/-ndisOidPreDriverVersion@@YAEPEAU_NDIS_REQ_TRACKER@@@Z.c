/*
 * XREFs of ?ndisOidPreDriverVersion@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006F160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreDriverVersion(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v4; // r8d
  unsigned __int16 v5; // cx

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  if ( !*(_QWORD *)a1 )
    return 0;
  v4 = *(_DWORD *)(v2 + 4);
  if ( v4 )
  {
    if ( v4 != 2 )
      return 0;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v2 + 48) < 2u )
  {
    *(_DWORD *)(v2 + 56) = 2;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  else
  {
    v5 = _byteswap_ushort(*(_WORD *)(*(_QWORD *)(v1 + 3760) + 24LL));
    **(_WORD **)(v2 + 40) = v5;
    **(_WORD **)(v2 + 40) = v5;
    *(_DWORD *)(v2 + 52) = 2;
  }
  return 1;
}
