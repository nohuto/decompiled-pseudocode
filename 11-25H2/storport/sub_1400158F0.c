/*
 * XREFs of sub_1400158F0 @ 0x1400158F0
 * Callers:
 *     sub_1400153FC @ 0x1400153FC (sub_1400153FC.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_140098900 @ 0x140098900 (sub_140098900.c)
 *     sub_140099180 @ 0x140099180 (sub_140099180.c)
 *     sub_14009F87C @ 0x14009F87C (sub_14009F87C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400158F0(char a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx

  v1 = a1 & 0x3F;
  if ( v1 <= 0xE )
  {
    if ( v1 == 14 )
      return 3221225653LL;
    result = 0LL;
    if ( (a1 & 0x3F) == 0 )
      return 259LL;
    v3 = v1 - 1;
    if ( !v3 )
      return result;
    v4 = v3 - 5;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( !v7 )
            return 3221225629LL;
          if ( v7 == 1 )
            return 3221225653LL;
          return 3221225861LL;
        }
        return 3221225653LL;
      }
      return 3221225664LL;
    }
    return 3221225488LL;
  }
  v8 = v1 - 17;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
      return 2147483653LL;
    v10 = v9 - 3;
    if ( !v10 )
      return 3221225488LL;
    v11 = v10 - 11;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          return 3221225861LL;
        return 3221225488LL;
      }
    }
  }
  return 3221225664LL;
}
