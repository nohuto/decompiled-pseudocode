/*
 * XREFs of NtQuerySystemInformation @ 0x140B144F0
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x140584CD8 (HalpTimerConfigureQpcBypass.c)
 *     DifNtQuerySystemInformationWrapper @ 0x140686080 (DifNtQuerySystemInformationWrapper.c)
 *     AlpcpInitSystem @ 0x1407C1414 (AlpcpInitSystem.c)
 * Callees:
 *     KeQueryPrimaryGroupThread @ 0x1404BE49C (KeQueryPrimaryGroupThread.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 */

__int64 __fastcall NtQuerySystemInformation(int a1, int *Address, SIZE_T Length, __int64 a4)
{
  int *v4; // rbx
  int v5; // r11d
  int v6; // r10d
  int v7; // r8d
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  bool v12; // zf
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  SIZE_T Lengtha; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = Address;
  LODWORD(Address) = 0;
  v5 = Length;
  LOWORD(v21) = 0;
  v6 = a1;
  if ( a1 > 141 )
  {
    if ( a1 <= 238 )
    {
      if ( a1 == 238 )
        return 3221225475LL;
      v16 = a1 - 180;
      if ( !v16 )
        return 3221225475LL;
      v17 = v16 - 30;
      if ( !v17 )
        return 3221225475LL;
      v18 = v17 - 1;
      if ( !v18 )
        return 3221225475LL;
      v19 = v18 - 11;
      if ( !v19 )
        return 3221225475LL;
      v12 = v19 == 9;
    }
    else
    {
      v9 = a1 - 239;
      if ( !v9 )
        return 3221225475LL;
      v10 = v9 - 1;
      if ( !v10 )
        return 3221225475LL;
      v11 = v10 - 9;
      if ( !v11 )
        return 3221225475LL;
      v12 = v11 == 5;
    }
    goto LABEL_17;
  }
  if ( a1 == 141 )
    goto LABEL_23;
  if ( a1 <= 83 )
  {
    if ( a1 != 83 && a1 != 8 && a1 != 23 && a1 != 42 && a1 != 61 )
    {
      if ( a1 == 73 )
      {
LABEL_10:
        Address = &v21;
        v7 = 2;
LABEL_11:
        LODWORD(Lengtha) = v5;
        return ExpQuerySystemInformation(v6, (int)Address, v7, 0, v4, Lengtha, a4);
      }
LABEL_18:
      v7 = 0;
      goto LABEL_11;
    }
LABEL_23:
    LOWORD(v21) = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
    goto LABEL_10;
  }
  v13 = a1 - 100;
  if ( !v13 )
    goto LABEL_23;
  v14 = v13 - 7;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_23;
    v12 = v15 == 13;
LABEL_17:
    if ( !v12 )
      goto LABEL_18;
  }
  return 3221225475LL;
}
