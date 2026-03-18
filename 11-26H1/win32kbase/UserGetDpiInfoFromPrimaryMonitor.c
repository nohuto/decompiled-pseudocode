/*
 * XREFs of UserGetDpiInfoFromPrimaryMonitor @ 0x1401D2864
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetDpiInfoFromPrimaryMonitor(_OWORD *a1, _DWORD *a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rcx
  __int64 result; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  v7 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 56968);
  if ( !*(_QWORD *)(v7 + 96) )
    return 3221226021LL;
  v9 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 56968);
  if ( !*(_QWORD *)(*(_QWORD *)(v9 + 96) + 128LL) )
    return 3221226021LL;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 56968) + 96LL) + 40LL);
  *a2 = *(unsigned __int16 *)(v11 + 84);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v12, v13) + 56968) + 96LL) + 128LL);
  result = 0LL;
  *a1 = *(_OWORD *)(v14 + 4);
  a1[1] = *(_OWORD *)(v14 + 20);
  a1[2] = *(_OWORD *)(v14 + 36);
  a1[3] = *(_OWORD *)(v14 + 52);
  a1[4] = *(_OWORD *)(v14 + 68);
  a1[5] = *(_OWORD *)(v14 + 84);
  return result;
}
