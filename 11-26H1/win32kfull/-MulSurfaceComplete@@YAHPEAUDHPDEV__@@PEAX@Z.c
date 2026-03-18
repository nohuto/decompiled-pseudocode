/*
 * XREFs of ?MulSurfaceComplete@@YAHPEAUDHPDEV__@@PEAX@Z @ 0x140257690
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x14024E258 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MulSurfaceComplete(struct DHPDEV__ *a1, void *a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // r8
  int v6; // edi
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(_QWORD, void *, _QWORD *, struct DHPDEV__ *); // r11
  __int64 v10; // rdx
  struct _LUID v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  v4 = *(_QWORD **)a1;
  v6 = *((_DWORD *)a1 + 4);
  v7 = 0;
  v13 = v2;
  while ( 1 )
  {
    v8 = v4[6];
    if ( (*(_DWORD *)(v8 + 1808) & 0x8000000) == 0 )
    {
      v9 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD *, struct DHPDEV__ *))(v8 + 3504);
      if ( v9 )
      {
        if ( (*(_DWORD *)(v2 + 40) & 0x4000000) == 0 )
          break;
        if ( !*v4 )
          break;
        v10 = *(_QWORD *)(v4[7] + 2568LL);
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 240) == *((_DWORD *)a1 + 26) && *(_DWORD *)(v10 + 244) == *((_DWORD *)a1 + 27) )
            break;
        }
      }
    }
    v4 = (_QWORD *)*v4;
    if ( !--v6 )
      goto LABEL_12;
  }
  v7 = v9(*(_QWORD *)(v8 + 1784), a2, v4, a1);
LABEL_12:
  if ( (*(_DWORD *)(v2 + 40) & 0x4000000) != 0 )
  {
    v12 = 0LL;
    PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v13, &v12);
  }
  return v7;
}
