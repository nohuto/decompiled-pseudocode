/*
 * XREFs of ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F540
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001D900 (-ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F5E0 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax
  unsigned __int8 result; // al
  __int64 v6; // r9
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 3);
  v2 = *((_QWORD *)a1 + 4);
  if ( (!v1
     || (v6 = *(_QWORD *)(v1 + 24), *(_BYTE *)(v6 + 56) > 6u)
     || *(_BYTE *)(v6 + 56) == 6 && *(_BYTE *)(v6 + 57) >= 0x14u)
    && ((v3 = *((_QWORD *)a1 + 1)) == 0
     || (*(_DWORD *)(v2 + 88) & 0x4000) != 0
     || (v7 = *(_QWORD *)(v3 + 16), *(_BYTE *)(v7 + 100) > 6u)
     || *(_BYTE *)(v7 + 100) == 6 && *(_BYTE *)(v7 + 101) >= 0x14u) )
  {
    v4 = *(_DWORD *)(v2 + 4);
    if ( !v4 || v4 == 2 )
    {
      return ndisPreQueryPMParameters(a1);
    }
    else if ( v4 == 1 )
    {
      return ndisPreSetPMParameters(a1);
    }
    else
    {
      result = 1;
      *((_DWORD *)a1 + 10) = -1073676267;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  return result;
}
