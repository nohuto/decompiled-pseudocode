/*
 * XREFs of TouchTargetingEnabledForInput @ 0x1401595E0
 * Callers:
 *     <none>
 * Callees:
 *     _IsPseudoDevice @ 0x140159680 (_IsPseudoDevice.c)
 */

__int64 __fastcall TouchTargetingEnabledForInput(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // r8d
  int v9; // edx
  int v10; // [rsp+34h] [rbp+Ch]

  v10 = HIDWORD(a1);
  v3 = a1;
  if ( *a2 != 2 )
    return 0;
  if ( (a2[3] & 0x10000) == 0 )
    return 0;
  v4 = 1;
  if ( (a2[25] & 1) != 0 && (unsigned int)IsPseudoDevice(a2) && a2[26] == a2[28] && a2[27] == a2[29] )
    return 0;
  v6 = a2[26];
  v7 = a2[28];
  if ( v7 < v6 )
    return 0;
  v8 = a2[27];
  v9 = a2[29];
  if ( v9 < v8 || v7 < v3 || v6 > v3 || v8 > v10 || v9 < v10 )
    return 0;
  return v4;
}
