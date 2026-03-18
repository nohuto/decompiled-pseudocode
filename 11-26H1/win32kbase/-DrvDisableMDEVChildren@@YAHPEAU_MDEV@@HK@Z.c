/*
 * XREFs of ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1400C7400
 * Callers:
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x14013B310 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall DrvDisableMDEVChildren(struct _MDEV *a1, int a2, unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  WdLogSingleEntry2(5LL, a1, a2);
  v6 = 0LL;
  WdLogGlobalForLineNumber = 264;
  v7 = 1;
  if ( !*((_DWORD *)a1 + 5) )
    goto LABEL_15;
  while ( 1 )
  {
    v8 = *((_QWORD *)a1 + 7 * (unsigned int)v6 + 5);
    v13 = v8;
    if ( !a2 || !v8 )
      goto LABEL_6;
    v7 = DrvDisableDisplay((struct PDEVOBJ *)&v13, 0);
    if ( !v7 )
      break;
    DrvDxgkDisplayOnOff(&v13, 0LL, a3);
LABEL_6:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)a1 + 5) )
      goto LABEL_15;
  }
  if ( (_DWORD)v6 )
  {
    v10 = (__int64 *)((char *)a1 + 40);
    do
    {
      v11 = *v10;
      v13 = *v10;
      if ( v11 )
      {
        LOBYTE(v9) = 1;
        DrvDxgkDisplayOnOff(&v13, v9, a3);
        while ( !(unsigned int)DrvEnableDisplay((struct PDEVOBJ *)&v13) )
          ;
      }
      v10 += 7;
      --v6;
    }
    while ( v6 );
  }
LABEL_15:
  WdLogSingleEntry1(5LL, v7);
  result = (unsigned int)v7;
  WdLogGlobalForLineNumber = 307;
  return result;
}
