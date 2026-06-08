/*
 * XREFs of PepTranslateCstState @ 0x140041418
 * Callers:
 *     PepNotifyReportCStates @ 0x1400402C8 (PepNotifyReportCStates.c)
 * Callees:
 *     <none>
 */

char __fastcall PepTranslateCstState(char *a1, __int64 a2)
{
  char v3; // r8
  __int64 v4; // rax
  unsigned int i; // ecx

  *(_BYTE *)a2 = a1[12];
  *(_WORD *)(a2 + 2) = *((_WORD *)a1 + 7);
  *(_DWORD *)(a2 + 4) = *((_DWORD *)a1 + 4);
  v3 = *a1;
  *(_BYTE *)(a2 + 8) = *a1;
  *(_BYTE *)(a2 + 9) = a1[1];
  *(_BYTE *)(a2 + 10) = a1[2];
  v4 = *(_QWORD *)(a1 + 4);
  *(_QWORD *)(a2 + 16) = v4;
  if ( v3 == 127 )
  {
    LOBYTE(v4) = a1[3];
    *(_BYTE *)(a2 + 11) = v4;
  }
  else
  {
    *(_BYTE *)(a2 + 11) = 0;
    for ( i = 1; i < 5; ++i )
    {
      LOBYTE(v4) = AcpiGenericAccessSizeTranslation[i];
      if ( a1[3] == (_BYTE)v4 )
      {
        *(_BYTE *)(a2 + 11) = i;
        return v4;
      }
    }
  }
  return v4;
}
