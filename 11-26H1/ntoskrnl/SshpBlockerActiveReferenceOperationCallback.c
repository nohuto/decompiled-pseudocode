/*
 * XREFs of SshpBlockerActiveReferenceOperationCallback @ 0x140257FF0
 * Callers:
 *     SshpIterateParentBlockers @ 0x140257F0C (SshpIterateParentBlockers.c)
 * Callees:
 *     SshpSetBlockerActive @ 0x140258074 (SshpSetBlockerActive.c)
 */

char __fastcall SshpBlockerActiveReferenceOperationCallback(_DWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // r9

  v3 = 0;
  if ( !*(_DWORD *)a3 )
  {
    if ( (_BYTE)a2 )
    {
      if ( (a1[2] & 1) != 0 )
        return v3;
      return 1;
    }
    if ( a1 == *(_DWORD **)(a3 + 8) )
    {
      a1[5] += *(_DWORD *)(a3 + 16);
    }
    else if ( ++a1[6] == 1 )
    {
      ++a1[5];
    }
    if ( (a1[2] & 1) != 0 )
      return 1;
    LOBYTE(a2) = 1;
LABEL_7:
    SshpSetBlockerActive(a1, a2);
    return 1;
  }
  if ( !(_BYTE)a2 )
    return 1;
  if ( a1 != *(_DWORD **)(a3 + 8) )
  {
    if ( (int)--a1[6] > 0 )
      return v3;
    *(_DWORD *)(a3 + 16) = 1;
  }
  a1[5] -= *(_DWORD *)(a3 + 16);
  if ( (int)a1[5] <= 0 )
  {
    a2 = 0LL;
    goto LABEL_7;
  }
  return v3;
}
