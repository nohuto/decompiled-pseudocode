/*
 * XREFs of ?ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BE120
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreFriendlyName(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r15
  char v2; // di
  __int64 v3; // rbp
  int v5; // eax
  const void **v6; // rdx
  unsigned int v7; // r14d
  char *v8; // rbx

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    if ( !v5 || v5 == 2 )
    {
      v6 = *(const void ***)(v1 + 3856);
      v7 = *(unsigned __int16 *)v6 + 2;
      if ( *(_DWORD *)(v3 + 48) < v7 )
      {
        *((_DWORD *)a1 + 10) = -1073676266;
        *(_DWORD *)(v3 + 56) = v7;
      }
      else
      {
        v8 = *(char **)(v3 + 40);
        memmove(v8, v6[1], *(unsigned __int16 *)v6);
        *(_WORD *)&v8[**(unsigned __int16 **)(v1 + 3856)] = 0;
        *(_DWORD *)(v3 + 56) = v7;
        *(_DWORD *)(v3 + 52) = v7;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    return 1;
  }
  return v2;
}
