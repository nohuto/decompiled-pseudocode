/*
 * XREFs of sub_1800BD020 @ 0x1800BD020
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C72C @ 0x18001C72C (sub_18001C72C.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800BD020(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  bool v9; // sf
  bool v10; // of
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  _QWORD v17[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 4288);
  if ( a2 <= 8 )
  {
    if ( a2 == 8 )
    {
      v10 = __OFSUB__(v2, 41216);
      v9 = v2 - 41216 < 0;
      return v9 == v10;
    }
    if ( !a2 )
      goto LABEL_23;
    v3 = a2 - 1;
    if ( !v3 )
      goto LABEL_23;
    v4 = v3 - 1;
    if ( !v4 )
    {
      v10 = __OFSUB__(v2, 37376);
      v9 = v2 - 37376 < 0;
      return v9 == v10;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              v10 = __OFSUB__(v2, 37632);
              v9 = v2 - 37632 < 0;
              return v9 == v10;
            }
LABEL_21:
            sub_180011CC4(v17, "unknown device feature queried");
            sub_18001C72C(pExceptionObject, (__int64)v17, 0);
            throw (Spectre::Utils::SpectreException *)pExceptionObject;
          }
        }
LABEL_23:
        v10 = __OFSUB__(v2, 40960);
        v9 = v2 - 40960 < 0;
        return v9 == v10;
      }
    }
    return 1;
  }
  v12 = a2 - 9;
  if ( !v12 )
    return 1;
  v13 = v12 - 1;
  if ( !v13 )
    return 1;
  v14 = v13 - 1;
  if ( !v14 )
    return 1;
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_23;
  v16 = v15 - 1;
  if ( v16 && (unsigned int)(v16 - 1) >= 2 )
    goto LABEL_21;
  return 0;
}
