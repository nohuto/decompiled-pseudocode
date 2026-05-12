/*
 * XREFs of sub_1400EC454 @ 0x1400EC454
 * Callers:
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400EC454(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = 1024;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 4LL) )
  {
    v1 = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 4LL);
    goto LABEL_9;
  }
  if ( qword_140168818 )
  {
    if ( (unsigned __int64)qword_140168818 < 0x800000000LL )
    {
      if ( (unsigned __int64)qword_140168818 <= 0x1000000000LL )
        goto LABEL_9;
    }
    else if ( (unsigned __int64)qword_140168818 <= 0x1000000000LL )
    {
      v1 = 2048;
      goto LABEL_9;
    }
    v1 = 4096;
  }
LABEL_9:
  if ( v1 >= (unsigned int)(unsigned __int16)*(_DWORD *)(a1 + 584) + 1 )
    return (unsigned int)(unsigned __int16)*(_DWORD *)(a1 + 584) + 1;
  return v1;
}
