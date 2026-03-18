/*
 * XREFs of CiThreadUpdatePriorities @ 0x14000EDB0
 * Callers:
 *     CiThreadCreate @ 0x14000E900 (CiThreadCreate.c)
 *     CiDispatchFastIoDeviceControl @ 0x14000FA60 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     <none>
 */

void __fastcall CiThreadUpdatePriorities(_BYTE *a1, _BYTE *a2, unsigned __int8 a3)
{
  char v4; // dl
  unsigned __int8 v5; // r9
  char v6; // r8
  char v7; // r9
  int v8; // r11d
  char v9; // r8
  int v10; // r11d

  if ( CiSystemResponsiveness == 100 )
  {
    v9 = a3 + 9;
    a1[106] = v9;
    a1[105] = v9;
    a1[104] = v9;
    return;
  }
  v4 = a2[1] + a3;
  if ( v4 )
  {
    if ( (unsigned __int8)v4 >= 8u )
      v4 = 7;
  }
  else
  {
    v4 = 1;
  }
  v5 = a2[2];
  if ( v5 >= 8u )
    v5 = a3;
  v6 = *a2 + a3;
  v7 = v5 + 8;
  v8 = ((unsigned __int8)a2[3] >> 4) & 7;
  if ( v8 == 2 )
  {
    if ( (unsigned __int8)v6 < 0x10u )
    {
      v6 = 16;
      goto LABEL_11;
    }
    if ( (unsigned __int8)v6 >= 0x18u )
      goto LABEL_10;
  }
  else
  {
    v10 = v8 - 1;
    if ( !v10 )
    {
      v6 = v7;
      goto LABEL_11;
    }
    if ( v10 == 2 )
    {
      if ( (unsigned __int8)v6 >= 0x17u )
      {
        if ( (unsigned __int8)v6 > 0x1Au )
          v6 = 26;
        goto LABEL_11;
      }
LABEL_10:
      v6 = 23;
    }
  }
LABEL_11:
  if ( (unsigned __int8)v7 >= 0x1Bu )
    v7 = 26;
  if ( (unsigned __int8)v6 >= 0x1Bu )
    v6 = 27;
  a1[106] = v4;
  a1[105] = v7;
  a1[104] = v6;
}
