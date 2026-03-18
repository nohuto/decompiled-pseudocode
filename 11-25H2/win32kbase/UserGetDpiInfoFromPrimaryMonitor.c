/*
 * XREFs of UserGetDpiInfoFromPrimaryMonitor @ 0x1401AEC9C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetDpiInfoFromPrimaryMonitor(_OWORD *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968) + 104LL) )
    return 3221226021LL;
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968);
  if ( !*(_QWORD *)(*(_QWORD *)(v7 + 104) + 128LL) )
    return 3221226021LL;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 56968) + 104LL) + 40LL);
  *a2 = *(unsigned __int16 *)(v8 + 84);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v9) + 56968) + 104LL) + 128LL);
  result = 0LL;
  *a1 = *(_OWORD *)(v10 + 4);
  a1[1] = *(_OWORD *)(v10 + 20);
  a1[2] = *(_OWORD *)(v10 + 36);
  a1[3] = *(_OWORD *)(v10 + 52);
  a1[4] = *(_OWORD *)(v10 + 68);
  a1[5] = *(_OWORD *)(v10 + 84);
  return result;
}
