/*
 * XREFs of KdCopyToUserInternal @ 0x1405363C8
 * Callers:
 *     KdCopyToUser @ 0x140536320 (KdCopyToUser.c)
 * Callees:
 *     <none>
 */

char __fastcall KdCopyToUserInternal(_BYTE *a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a3 == 1 )
  {
    LOBYTE(v3) = *a2;
    *a1 = *a2;
  }
  else if ( a3 == 2 )
  {
    LOWORD(v3) = *(_WORD *)a2;
    *(_WORD *)a1 = *(_WORD *)a2;
  }
  else
  {
    LOBYTE(v3) = a3 - 4;
    if ( a3 == 4 )
    {
      LODWORD(v3) = *(_DWORD *)a2;
      *(_DWORD *)a1 = *(_DWORD *)a2;
    }
    else if ( a3 == 8 )
    {
      v3 = *(_QWORD *)a2;
      *(_QWORD *)a1 = *(_QWORD *)a2;
    }
    else if ( a3 )
    {
      v4 = a2 - a1;
      do
      {
        LOBYTE(v3) = a1[v4];
        *a1++ = v3;
        --a3;
      }
      while ( a3 );
    }
  }
  return v3;
}
