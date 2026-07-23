/*
 * XREFs of VhdiGetPartitionNumber @ 0x140D09084
 * Callers:
 *     VhdiInitializeBootDisk @ 0x140D092A0 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VhdiGetPartitionNumber(_DWORD *a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v5; // edi
  unsigned int v6; // r9d
  __int64 i; // r11
  _DWORD *v8; // rcx
  bool v9; // zf
  __int64 v10; // rdx

  if ( a1 && a2 && a3 )
  {
    v5 = a1[1];
    v6 = -1073741198;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v5 )
        return v6;
      v8 = &a1[36 * i];
      if ( *a1 )
      {
        if ( *a1 != 1 )
          continue;
        v10 = *((_QWORD *)v8 + 12) - a2[6];
        if ( !v10 )
          v10 = *((_QWORD *)v8 + 13) - a2[7];
        v9 = v10 == 0;
      }
      else
      {
        v9 = *((_QWORD *)v8 + 7) == a2[1];
      }
      if ( v9 )
      {
        v6 = 0;
        *a3 = v8[18];
        return v6;
      }
    }
  }
  return 3221225485LL;
}
