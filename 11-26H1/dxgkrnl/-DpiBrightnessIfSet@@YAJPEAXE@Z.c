/*
 * XREFs of ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x14030B510
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiCallDrvSetBrightness @ 0x14030AA4C (DpiCallDrvSetBrightness.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiBrightnessIfSet(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  int v4; // esi
  __int16 v6; // ax
  __int64 v7; // rdx
  int v8; // edi
  bool v9; // zf
  _DWORD v11[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v12; // [rsp+38h] [rbp-11h]
  __int128 v13; // [rsp+40h] [rbp-9h]
  __int64 v14; // [rsp+50h] [rbp+7h]
  __int64 v15; // [rsp+58h] [rbp+Fh]
  int v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+64h] [rbp+1Bh]
  int v18; // [rsp+68h] [rbp+1Fh]
  int v19; // [rsp+6Ch] [rbp+23h]
  __int64 v20; // [rsp+70h] [rbp+27h]

  v2 = a1[8];
  v3 = 0LL;
  v4 = a2;
  v6 = *(_WORD *)(v2 + 4810);
  if ( v6 == 2 )
    v3 = v2 + 4808;
  v7 = 0LL;
  if ( v6 == 1 )
    v7 = v2 + 4808;
  if ( (!v3 || !*(_QWORD *)(v3 + 40)) && (!v7 || !*(_QWORD *)(v7 + 40)) )
    return 3221225659LL;
  KeWaitForSingleObject((PVOID)(v2 + 4536), Executive, 0, 0, 0LL);
  v8 = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
  if ( v8 >= 0 )
  {
    v9 = *(_BYTE *)(v2 + 4532) == 0;
    *(_BYTE *)(v2 + 4534) = v4;
    if ( v9 )
    {
      v8 = DpiCallDrvSetBrightness((__int64)a1, v4);
      if ( v8 >= 0 )
        *(_DWORD *)(v2 + 4528) = v4;
      if ( *(_BYTE *)(v2 + 4533) )
      {
        v12 = 0LL;
        v19 = 0;
        v20 = *(_QWORD *)(v2 + 2696);
        v15 = 0LL;
        v11[0] = 30;
        v11[1] = 72;
        v14 = 0LL;
        v13 = 0LL;
        v16 = 67;
        v17 = v4;
        v18 = v8;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11, 0x200000000uLL);
      }
    }
    else
    {
      v8 = 0;
    }
    DpiReleaseCoreSyncAccessSafe(a1, 0LL);
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4536), 0);
  return (unsigned int)v8;
}
