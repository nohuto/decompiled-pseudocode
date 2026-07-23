/*
 * XREFs of IoNotifyDumpEx @ 0x1405C9BFC
 * Callers:
 *     IoNotifyDump @ 0x1405C9BE4 (IoNotifyDump.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoNotifyDumpEx(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 result; // rax

  if ( qword_140E66020 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                if ( v6 != 1 )
                  return result;
                v7 = 12LL;
              }
              else
              {
                v7 = 11LL;
              }
            }
            else
            {
              v7 = 9LL;
            }
          }
          else
          {
            v7 = 7LL;
          }
        }
        else
        {
          v7 = 5LL;
        }
      }
      else
      {
        v7 = 4LL;
      }
    }
    else
    {
      v7 = 3LL;
    }
    return guard_dispatch_icall_no_overrides(v7, 0LL);
  }
  return result;
}
