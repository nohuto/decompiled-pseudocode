/*
 * XREFs of HvGetMachineCheckContext @ 0x1405BE290
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLogicalProcessorProperty @ 0x1404DF648 (HvlpGetLogicalProcessorProperty.c)
 *     HvlGetSyntheticMachineCheckContext @ 0x1405BBC28 (HvlGetSyntheticMachineCheckContext.c)
 */

__int64 __fastcall HvGetMachineCheckContext(int a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _DWORD *a5)
{
  int v8; // eax
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int128 v14; // [rsp+50h] [rbp-10h]

  v11 = 0LL;
  v12 = 0;
  v10 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (HvlpFlags & 2) != 0 )
  {
    if ( (int)HvlpGetLogicalProcessorProperty(a1, 0, &v13) >= 0 )
    {
      *a2 = v13;
      *a3 = *((_QWORD *)&v13 + 1);
      *a4 = v14;
      v8 = DWORD2(v14);
LABEL_6:
      *a5 = v8;
      return 0LL;
    }
  }
  else if ( (int)HvlGetSyntheticMachineCheckContext(a1, &v10) >= 0 )
  {
    *a2 = v10;
    *a3 = *((_QWORD *)&v10 + 1);
    *a4 = v11;
    v8 = v12;
    goto LABEL_6;
  }
  return 3221225473LL;
}
