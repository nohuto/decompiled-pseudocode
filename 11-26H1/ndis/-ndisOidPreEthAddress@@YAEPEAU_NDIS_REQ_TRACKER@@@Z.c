/*
 * XREFs of ?ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C9B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreEthAddress(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  int v3; // eax
  __int64 v5; // r8
  __int64 v6; // rax
  void *v7; // r9
  unsigned int v8; // edi
  __int64 v9; // rax
  const void *v10; // rax

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(v1 + 4);
  if ( !v3 || v3 == 2 )
  {
    if ( v2 )
    {
      v5 = *(_QWORD *)(v2 + 4040);
      v6 = 1158LL;
      v7 = *(void **)(v1 + 40);
      if ( *(_DWORD *)(v1 + 32) != 16843009 )
        v6 = 1124LL;
      v8 = *(unsigned __int16 *)(v6 + v5);
      v9 = 1160LL;
      if ( *(_DWORD *)(v1 + 32) != 16843009 )
        v9 = 1126LL;
      *((_DWORD *)a1 + 10) = 0;
      v10 = (const void *)(v5 + v9);
      if ( *(_DWORD *)(v1 + 48) < v8 )
      {
        *((_DWORD *)a1 + 10) = -1073676268;
        *(_DWORD *)(v1 + 56) = v8;
      }
      else
      {
        memmove(v7, v10, v8);
        *(_DWORD *)(v1 + 52) = v8;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
}
