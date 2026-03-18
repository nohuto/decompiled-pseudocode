/*
 * XREFs of bInitICM @ 0x1402F4C30
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x140035570 (HmgMarkUndeletable.c)
 *     GreGetStockObject @ 0x140084170 (GreGetStockObject.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1401794C0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1401BFD9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall bInitICM(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct HOBJ__ *ColorSpace; // rax
  unsigned __int64 v19; // rsi
  __int64 v21; // rdx
  __int64 StockObject; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h]
  int v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  _BYTE v30[588]; // [rsp+B8h] [rbp-50h] BYREF
  int v31; // [rsp+304h] [rbp+1FCh]

  v1 = 0;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  QueryTable.Name = L"GdiIcmControl";
  v25 = 0;
  QueryTable.EntryContext = &v25;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 292;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v27 = 0LL;
  v28 = 0;
  v29 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"ICM", &QueryTable, 0LL, 0LL) >= 0 )
  {
    v3 = v25;
  }
  else
  {
    v3 = 0;
    v25 = 0;
  }
  if ( (v3 & 0x10000) == 0 )
  {
    *(_DWORD *)(v2 + 2348) = 1934772034;
    wcscpy_s((wchar_t *)(v2 + 2404), 0x104uLL, L"sRGB Color Space Profile.icm");
  }
  memset(v30, 0, sizeof(v30));
  v4 = 4LL;
  v5 = v2 + 2336;
  v6 = v30;
  do
  {
    v7 = *(_OWORD *)(v5 + 16);
    *(_OWORD *)v6 = *(_OWORD *)v5;
    v8 = *(_OWORD *)(v5 + 32);
    *((_OWORD *)v6 + 1) = v7;
    v9 = *(_OWORD *)(v5 + 48);
    *((_OWORD *)v6 + 2) = v8;
    v10 = *(_OWORD *)(v5 + 64);
    *((_OWORD *)v6 + 3) = v9;
    v11 = *(_OWORD *)(v5 + 80);
    *((_OWORD *)v6 + 4) = v10;
    v12 = *(_OWORD *)(v5 + 96);
    *((_OWORD *)v6 + 5) = v11;
    v13 = *(_OWORD *)(v5 + 112);
    v5 += 128LL;
    *((_OWORD *)v6 + 6) = v12;
    v6 += 128;
    *((_OWORD *)v6 - 1) = v13;
    --v4;
  }
  while ( v4 );
  v14 = *(_QWORD *)(v5 + 64);
  v15 = *(_OWORD *)(v5 + 16);
  *(_OWORD *)v6 = *(_OWORD *)v5;
  v16 = *(_OWORD *)(v5 + 32);
  *((_OWORD *)v6 + 1) = v15;
  v17 = *(_OWORD *)(v5 + 48);
  *((_OWORD *)v6 + 2) = v16;
  *((_OWORD *)v6 + 3) = v17;
  *((_QWORD *)v6 + 8) = v14;
  *((_DWORD *)v6 + 18) = *(_DWORD *)(v5 + 72);
  v31 = 0;
  ColorSpace = GreCreateColorSpace((struct _LOGCOLORSPACEEXW *)v30);
  v19 = (unsigned __int64)ColorSpace;
  if ( ColorSpace )
  {
    HmgSetOwner((__int64)ColorSpace, 0, 9);
    HmgMarkUndeletable(v19, 9);
    bSetStockObject(v19, 20, 0);
    StockObject = GreGetStockObject(20LL, v21);
    *(_QWORD *)(v2 + 2328) = StockObject;
    v23 = HmgShareLock(v2, StockObject, 9, 1);
    v24 = *(_QWORD *)(v2 + 2328);
    *(_QWORD *)(v2 + 2320) = v23;
    LOBYTE(v1) = v23 != 0;
    *(_QWORD *)(v2 + 248) = v24;
    *(_QWORD *)(v2 + 688) = v23;
  }
  return v1;
}
