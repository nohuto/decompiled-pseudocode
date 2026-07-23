/*
 * XREFs of MiMapViewInSystemSpace @ 0x140988260
 * Callers:
 *     MmMapViewInSessionSpace @ 0x140988210 (MmMapViewInSessionSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x140988240 (MmMapViewInSystemSpaceEx.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140988354 (PspSchedulerSharedDataRegionCreate.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(__int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 *a4, __int64 a5)
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r10
  int v13; // ebx
  ULONG_PTR v15[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (a5 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  v15[0] = 0LL;
  v9 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v9);
  v10 = *a3;
  if ( !*a3 )
  {
    *(_WORD *)a4 = 0;
    v12 = *(_QWORD *)(a1 + 48) - *a4;
    *a3 = v12;
    goto LABEL_5;
  }
  v11 = (unsigned __int16)*(_DWORD *)a4;
  if ( v11 + v10 >= v11 )
  {
    *a3 = v11 + v10;
    *(_WORD *)a4 = 0;
    v12 = *a3;
    if ( *a3 <= *(_QWORD *)(a1 + 48) - *a4 )
    {
LABEL_5:
      v13 = MiInsertInSystemSpace(v12, a1, a4, a5, v15);
      if ( v13 >= 0 )
      {
        *a2 = v15[0];
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  v13 = -1073741793;
LABEL_10:
  MiDereferenceControlArea(v9);
  return (unsigned int)v13;
}
