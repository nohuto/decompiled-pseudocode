/*
 * XREFs of RIMGetExtendedPointerDeviceProperty @ 0x1401EC158
 * Callers:
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401BD4C0 (NtUserGetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ?ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@Z @ 0x1401EC104 (-ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@.c)
 */

__int64 __fastcall RIMGetExtendedPointerDeviceProperty(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *a2)
{
  int v2; // eax
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  int v5; // r10d
  unsigned int v6; // r11d
  __int128 v7; // xmm0
  int v8; // eax

  v2 = ValidateProperty(a1, a2);
  v5 = 0;
  v6 = v2;
  if ( v2 < 0 )
    return v6;
  switch ( *v3 )
  {
    case 0:
      v3[1] = *(_DWORD *)(v4 + 276);
      v3[2] = *(_DWORD *)(v4 + 280);
      v3[3] = *(_DWORD *)(v4 + 284);
      v8 = *(_DWORD *)(v4 + 288);
      goto LABEL_19;
    case 1:
      v3[1] = *(_DWORD *)(v4 + 292);
      v3[2] = *(_DWORD *)(v4 + 296);
      v3[3] = *(_DWORD *)(v4 + 300);
      v8 = *(_DWORD *)(v4 + 304);
LABEL_19:
      v3[4] = v8;
      return v6;
    case 2:
      v3[1] = *(_DWORD *)(v4 + 308);
      v3[2] = *(_DWORD *)(v4 + 312);
      return v6;
    case 3:
      LOBYTE(v5) = *(_DWORD *)(v4 + 268) != 0;
      v3[1] = v5;
      return v6;
    case 4:
      v7 = *(_OWORD *)(v4 + 316);
      goto LABEL_14;
    case 5:
      v7 = *(_OWORD *)(v4 + 332);
      goto LABEL_14;
    case 6:
      v7 = *(_OWORD *)(v4 + 348);
LABEL_14:
      *(_OWORD *)(v3 + 1) = v7;
      return v6;
    case 7:
      v3[1] = *(_DWORD *)(v4 + 272);
      break;
  }
  return v6;
}
