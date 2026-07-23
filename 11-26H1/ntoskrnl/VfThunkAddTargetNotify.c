/*
 * XREFs of VfThunkAddTargetNotify @ 0x140C49FB0
 * Callers:
 *     VfTargetDriversAdd @ 0x1403C1A18 (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x140C4A05C (ViThunkFreeSharedThunksArray.c)
 *     ViThunkCreateSharedExportInformation @ 0x140C4A08C (ViThunkCreateSharedExportInformation.c)
 */

__int64 __fastcall VfThunkAddTargetNotify(_QWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r8

  v3 = a1 + 2;
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        &VfRegularThunks,
                        a3,
                        &VfRegularThunksBitMapHeader,
                        a1 + 2)
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, &VfPoolThunks, v5, &VfPoolThunksBitMapHeader, a1 + 3)
    || (result = ViThunkCreateSharedExportInformation(*a1, &VfDifThunks, v7, &VfDifThunksBitMapHeader, a1 + 4),
        !(_DWORD)result) )
  {
    ViThunkFreeSharedThunksArray(v3);
    ViThunkFreeSharedThunksArray(a1 + 3);
    result = ViThunkFreeSharedThunksArray(a1 + 4);
    *v3 |= 1u;
  }
  return result;
}
