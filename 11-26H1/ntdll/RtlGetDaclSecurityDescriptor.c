/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x1800D9230
 * Callers:
 *     RtlReplaceSidInSd @ 0x18013D420 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetDaclSecurityDescriptor(__int64 a1, _BYTE *a2, _QWORD *a3, bool *a4)
{
  __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
  {
    *a2 = 0;
    return 0LL;
  }
  *a2 = 1;
  v4 = *(_WORD *)(a1 + 2);
  if ( (v4 & 4) != 0 )
  {
    if ( v4 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      goto LABEL_7;
    }
    v5 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v5 )
    {
      v6 = a1 + v5;
LABEL_7:
      *a3 = v6;
      *a4 = (*(_BYTE *)(a1 + 2) & 8) != 0;
      return 0LL;
    }
  }
  *a3 = 0LL;
  *a4 = (*(_BYTE *)(a1 + 2) & 8) != 0;
  return 0LL;
}
