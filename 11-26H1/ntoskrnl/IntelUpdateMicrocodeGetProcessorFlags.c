/*
 * XREFs of IntelUpdateMicrocodeGetProcessorFlags @ 0x1406E2750
 * Callers:
 *     IntelMicrocodeMetaDataCheck @ 0x1406E2684 (IntelMicrocodeMetaDataCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntelUpdateMicrocodeGetProcessorFlags(int a1, int *a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  bool v4; // cc
  unsigned __int64 v5; // rax

  v2 = a1 & 0xF00;
  v3 = 0;
  v4 = v2 <= 0x600;
  if ( v2 != 1536 )
  {
LABEL_5:
    if ( v4 )
      goto LABEL_22;
    goto LABEL_6;
  }
  if ( (a1 & 0xF0000) == 0 && (a1 & 0xF0u) < 0x50 )
  {
    v4 = 1;
    goto LABEL_5;
  }
LABEL_6:
  v5 = __readmsr(0x17u) >> 32;
  if ( (v5 & 0x1C0000) != 0 )
  {
    switch ( v5 & 0x1C0000 )
    {
      case 0x40000uLL:
        v3 = 2;
        break;
      case 0x80000uLL:
        v3 = 4;
        break;
      case 0xC0000uLL:
        v3 = 8;
        break;
      case 0x100000uLL:
        v3 = 16;
        break;
      case 0x140000uLL:
        v3 = 32;
        break;
      case 0x180000uLL:
        v3 = 64;
        break;
      case 0x1C0000uLL:
        v3 = 128;
        break;
    }
  }
  else
  {
    v3 = 1;
  }
LABEL_22:
  *a2 = v3;
  return 0LL;
}
