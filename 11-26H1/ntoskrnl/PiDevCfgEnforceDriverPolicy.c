/*
 * XREFs of PiDevCfgEnforceDriverPolicy @ 0x1407AC4C8
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x140B72708 (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDevCfgEnforceDriverPolicy(int *a1, int a2, unsigned __int64 a3, char a4)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // ecx
  unsigned __int64 v8; // rcx

  result = 0LL;
  if ( !a4 )
  {
    v6 = *a1;
    if ( (v6 & 2) != 0 && a2 != -1 )
    {
      if ( a2 < 0 )
        return 3221226347LL;
      v7 = v6 & 4;
      if ( a3 != -1LL || !v7 )
      {
        v8 = (a2 & 8) != 0 || a3 == -1LL ? *((_QWORD *)a1 + 1) : *((_QWORD *)a1 + 2);
        if ( v8 != -1LL && (a3 == -1LL || a3 < v8) )
          return 3221226347LL;
      }
    }
  }
  return result;
}
