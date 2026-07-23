/*
 * XREFs of SdbpCheckRuntimePlatformImpl @ 0x14088A19C
 * Callers:
 *     SdbpCheckRuntimePlatform @ 0x14088A130 (SdbpCheckRuntimePlatform.c)
 *     SdbpOpenLocalDatabaseEx @ 0x14088C60C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckRuntimePlatformImpl(int *a1, char a2, unsigned int a3, unsigned int a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  unsigned int v12; // eax
  __int64 result; // rax

  if ( (a2 & 2) != 0 )
  {
    v5 = 0;
    if ( a4 != -1073741824 )
    {
      v6 = 0;
      while ( 1 )
      {
        if ( ((a4 >> v6) & 0x40) != 0 )
        {
          v7 = (a4 >> v6) & 0x3F;
          if ( v7 )
          {
            v8 = v7 - 5;
            if ( !v8 )
            {
              v12 = a3 >> 3;
LABEL_14:
              v5 = v12 & 1;
              if ( v5 )
                goto LABEL_21;
              goto LABEL_18;
            }
            v9 = v8 - 4;
            if ( !v9 )
              goto LABEL_11;
            v10 = v9 - 2;
            if ( !v10 || (v11 = v10 - 1) == 0 )
            {
              v12 = a3 >> 2;
              goto LABEL_14;
            }
            if ( v11 == 1 )
            {
LABEL_11:
              v12 = a3 >> 1;
              goto LABEL_14;
            }
          }
          else if ( (a3 & 1) != 0 )
          {
            break;
          }
          v5 = 0;
        }
LABEL_18:
        v6 += 8;
        if ( v6 >= 24 )
          goto LABEL_21;
      }
    }
    v5 = 1;
LABEL_21:
    *a1 = v5;
    return 1LL;
  }
  else
  {
    result = 1LL;
    *a1 = (a3 & a4) != 0;
  }
  return result;
}
