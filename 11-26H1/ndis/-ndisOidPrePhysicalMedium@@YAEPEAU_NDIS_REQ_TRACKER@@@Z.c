/*
 * XREFs of ?ndisOidPrePhysicalMedium@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140061FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPrePhysicalMedium(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // r9d
  __int64 v5; // r8
  int v6; // ecx
  int v7; // edx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *(_DWORD *)(v1 + 32);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 32);
  }
  else
  {
    v5 = 0LL;
    if ( *(_QWORD *)a1 )
      v5 = *(_QWORD *)a1;
  }
  v6 = *(_DWORD *)(v1 + 4);
  if ( !v6 || v6 == 2 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      v7 = *(_DWORD *)(v5 + 1832);
      if ( v4 == 66050 && v7 == 14 )
        v7 = 0;
      **(_DWORD **)(v1 + 40) = v7;
      *(_DWORD *)(v1 + 52) = 4;
    }
    return 1;
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
}
