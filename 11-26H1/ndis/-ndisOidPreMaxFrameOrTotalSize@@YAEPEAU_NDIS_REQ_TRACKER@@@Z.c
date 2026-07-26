/*
 * XREFs of ?ndisOidPreMaxFrameOrTotalSize@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006C480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreMaxFrameOrTotalSize(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  int v3; // edx
  char v4; // dl

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    if ( !v3 || v3 == 2 )
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v2 + 48) < 4u )
      {
        *(_DWORD *)(v2 + 56) = 4;
        LOBYTE(v1) = 1;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      else
      {
        v4 = 0;
        if ( *(_DWORD *)(v2 + 32) == 65798 )
        {
          **(_DWORD **)(v2 + 40) = *(_DWORD *)(v1 + 3020);
          v4 = 1;
          *(_DWORD *)(v2 + 52) = 4;
          *((_DWORD *)a1 + 10) = 0;
        }
        LOBYTE(v1) = v4;
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      LOBYTE(v1) = 1;
    }
  }
  return v1;
}
