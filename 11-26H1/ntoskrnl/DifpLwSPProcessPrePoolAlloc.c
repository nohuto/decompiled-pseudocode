/*
 * XREFs of DifpLwSPProcessPrePoolAlloc @ 0x140C49214
 * Callers:
 *     DifpExAllocatePoolWithTagPriority_LwSP_Enter @ 0x140C49170 (DifpExAllocatePoolWithTagPriority_LwSP_Enter.c)
 * Callees:
 *     VfRandomGetNumber @ 0x140C275B4 (VfRandomGetNumber.c)
 */

ULONG __fastcall DifpLwSPProcessPrePoolAlloc(int a1, unsigned __int64 a2)
{
  ULONG result; // eax
  __int64 v3; // r8
  unsigned int v4; // edi
  ULONG Number; // ebx

  result = DifpLwSPAllowedSPPages;
  v3 = 0LL;
  v4 = DifiPluginControlSparseness;
  if ( *(_QWORD *)&stru_140F06A28.CurrentRunTime < (unsigned __int64)DifpLwSPAllowedSPPages && a2 <= 0xFE0 )
  {
    result = DifpPoolTagsSize - 1;
    if ( (unsigned int)(DifpPoolTagsSize - 1) > 9 )
    {
LABEL_7:
      if ( DifiPluginControlSparseness == 1
        || (Number = VfRandomGetNumber(1u, DifiPluginControlSparseness),
            result = VfRandomGetNumber(1u, v4),
            Number == result) )
      {
        DifpSpecialPoolEnabled = 1;
      }
    }
    else
    {
      while ( (unsigned int)v3 < DifpPoolTagsSize )
      {
        if ( *((_DWORD *)&DifpPoolTags + v3) == a1 )
          goto LABEL_7;
        v3 = (unsigned int)(v3 + 1);
      }
    }
  }
  return result;
}
