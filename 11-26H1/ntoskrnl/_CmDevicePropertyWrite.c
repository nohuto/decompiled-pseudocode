/*
 * XREFs of _CmDevicePropertyWrite @ 0x1404BFA44
 * Callers:
 *     _CmSetDeviceRegPropWorker @ 0x1409AC878 (_CmSetDeviceRegPropWorker.c)
 *     _CmIsDeviceRegPropWritable @ 0x140AEFD44 (_CmIsDeviceRegPropWritable.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmDevicePropertyWrite(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx

  if ( a2 <= 19 )
  {
    if ( a2 == 19 )
      return 1;
    if ( a2 <= 9 )
    {
      if ( a2 == 9 )
        return 1;
      if ( !a2 )
        return 0;
      v10 = a2 - 1;
      if ( !v10 )
        return 1;
      v11 = v10 - 1;
      if ( !v11 )
        return 1;
      v4 = v11 - 1;
      if ( !v4 )
        return 1;
      goto LABEL_6;
    }
    v16 = a2 - 10;
    if ( !v16 )
      return 1;
    v17 = v16 - 1;
    if ( !v17 )
      return 1;
    v18 = v17 - 1;
    if ( !v18 )
      return 1;
    v15 = v18 - 1;
    if ( !v15 )
      return 1;
LABEL_31:
    v19 = v15 - 1;
    if ( !v19 )
      return 1;
    v20 = v19 - 1;
    if ( !v20 )
      return 0;
    v21 = v20 - 1;
    if ( !v21 )
      return 1;
    v8 = v21 - 1;
    if ( !v8 )
      return 1;
    return v8 == 1;
  }
  if ( a2 <= 29 )
  {
    if ( a2 == 29 )
      return 1;
    v12 = a2 - 20;
    if ( !v12 )
      return 0;
    v13 = v12 - 1;
    if ( !v13 )
      return 0;
    v14 = v13 - 1;
    if ( !v14 )
      return 0;
    v15 = v14 - 1;
    if ( !v15 )
      return 0;
    goto LABEL_31;
  }
  v2 = a2 - 30;
  if ( !v2 )
    return 1;
  v3 = v2 - 1;
  if ( !v3 )
    return 0;
  v4 = v3 - 1;
  if ( !v4 )
    return 0;
LABEL_6:
  v5 = v4 - 1;
  if ( !v5 )
    return 0;
  v6 = v5 - 1;
  if ( !v6 )
    return 1;
  v7 = v6 - 1;
  if ( !v7 )
    return 0;
  v8 = v7 - 1;
  if ( !v8 )
    return 0;
  return v8 == 1;
}
