/*
 * XREFs of ?ndisOidPreEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6760
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQueryOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B7BF0 (-ndisQueryOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B8950 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreEnableWakeUp(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r8
  char v3; // dl
  int v4; // ecx
  unsigned __int8 result; // al
  struct _NDIS_OPEN_BLOCK *v6; // rcx
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 4);
  if ( !v4 || v4 == 2 )
  {
    v6 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
    v7 = *(_QWORD *)a1;
    if ( v6 )
    {
      *((_DWORD *)a1 + 10) = ndisQueryOpenEnableWakeUp(v6, (struct _NDIS_OID_REQUEST *)v1);
    }
    else
    {
      if ( !v7 )
        return v3;
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) >= 4u )
      {
        **(_DWORD **)(v1 + 40) = *(_DWORD *)(v7 + 1292);
        *(_QWORD *)(v1 + 52) = 4LL;
      }
      else
      {
        *(_DWORD *)(v1 + 56) = 4;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
    }
    return 1;
  }
  result = 1;
  if ( v4 == 1 )
    return ndisSetEnableWakeUp(a1);
  *((_DWORD *)a1 + 10) = -1073676267;
  return result;
}
