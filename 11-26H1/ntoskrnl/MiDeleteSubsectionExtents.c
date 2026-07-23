/*
 * XREFs of MiDeleteSubsectionExtents @ 0x1404AFAD0
 * Callers:
 *     MiDeleteSegmentPages @ 0x1404727CC (MiDeleteSegmentPages.c)
 * Callees:
 *     MiDeleteFileExtentList @ 0x1407735B4 (MiDeleteFileExtentList.c)
 */

__int64 __fastcall MiDeleteSubsectionExtents(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  void *v4; // rcx

  v2 = *a1;
  result = *(_QWORD *)(v2 + 64);
  if ( result )
  {
    result = *(_DWORD *)(v2 + 56) & 0x30000000;
    if ( (_DWORD)result == 0x20000000 )
    {
      v4 = (void *)a1[14];
      if ( v4 )
      {
        result = MiDeleteFileExtentList(v4);
        a1[14] = 0LL;
      }
    }
  }
  return result;
}
