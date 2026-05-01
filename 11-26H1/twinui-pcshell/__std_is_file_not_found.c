/*
 * XREFs of __std_is_file_not_found @ 0x180315688
 * Callers:
 *     ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x1801D7340 (-_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _std_is_file_not_found(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  bool result; // al

  v1 = a1 - 2;
  result = 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      v3 = v2 - 50;
      if ( v3 )
      {
        v4 = v3 - 11;
        if ( v4 )
        {
          v5 = v4 - 59;
          if ( v5 )
          {
            if ( v5 != 144 )
              return 0;
          }
        }
      }
    }
  }
  return result;
}
