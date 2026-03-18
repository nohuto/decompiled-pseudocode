/*
 * XREFs of RIMApplyDisplayOrientationToPointerProps @ 0x1400F8E84
 * Callers:
 *     RIMApplyTransforms @ 0x1400F6F1C (RIMApplyTransforms.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApplyDisplayOrientationToPointerProps(int a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // r10d
  int v6; // r9d
  int v7; // r9d
  unsigned int v8; // ecx
  unsigned int v9; // edx
  bool v10; // cf
  unsigned int v11; // ecx
  unsigned int v12; // edx
  bool v13; // cf
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx

  result = a2[2];
  if ( (_DWORD)result != 2 )
  {
    if ( (_DWORD)result != 3 )
      return result;
    v5 = a2[27];
    if ( (v5 & 2) == 0 )
      goto LABEL_6;
    if ( a1 == 2 )
    {
      v19 = a2[29];
      v13 = v19 < 0x5A;
      result = v19 - 90;
      v14 = v19 + 270;
    }
    else
    {
      result = (unsigned int)(a1 - 3);
      if ( a1 == 3 )
      {
        v18 = a2[29];
        v13 = v18 < 0xB4;
        result = v18 - 180;
        v14 = v18 + 180;
      }
      else
      {
        if ( a1 != 4 )
        {
LABEL_6:
          if ( (v5 & 0xC) == 0xC )
          {
            v6 = a1 - 2;
            if ( v6 )
            {
              v7 = v6 - 1;
              if ( v7 )
              {
                if ( v7 == 1 )
                {
                  v8 = a2[31];
                  result = -a2[30];
                  a2[31] = result;
                  a2[30] = v8;
                }
              }
              else
              {
                a2[30] = -a2[30];
                result = -a2[31];
                a2[31] = result;
              }
            }
            else
            {
              v15 = a2[30];
              result = -a2[31];
              a2[30] = result;
              a2[31] = v15;
            }
          }
          return result;
        }
        v12 = a2[29];
        v13 = v12 < 0x10E;
        result = v12 - 270;
        v14 = v12 + 90;
      }
    }
    if ( !v13 )
      v14 = result;
    a2[29] = v14;
    goto LABEL_6;
  }
  result = a2[27];
  if ( (result & 2) == 0 )
    return result;
  switch ( a1 )
  {
    case 2:
      v17 = a2[36];
      v10 = v17 < 0x5A;
      result = v17 - 90;
      v11 = v17 + 270;
      break;
    case 3:
      v16 = a2[36];
      v10 = v16 < 0xB4;
      result = v16 - 180;
      v11 = v16 + 180;
      break;
    case 4:
      v9 = a2[36];
      v10 = v9 < 0x10E;
      result = v9 - 270;
      v11 = v9 + 90;
      break;
    default:
      return result;
  }
  if ( !v10 )
    v11 = result;
  a2[36] = v11;
  return result;
}
