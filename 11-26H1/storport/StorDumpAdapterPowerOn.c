/*
 * XREFs of StorDumpAdapterPowerOn @ 0x140081340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorDumpAdapterPowerOn(__int64 a1)
{
  int v2; // ecx
  _BYTE *v3; // rax
  __int64 (__fastcall *v4)(_QWORD); // rax
  __int64 (__fastcall *v5)(_QWORD); // rax

  v2 = 0;
  if ( a1 )
  {
    v3 = *(_BYTE **)(a1 + 16);
    if ( v3 )
    {
      if ( !*v3 )
      {
        v4 = *(__int64 (__fastcall **)(_QWORD))(a1 + 24);
        if ( !v4 || (v2 = v4(*(_QWORD *)(a1 + 32)), v2 >= 0) )
        {
          if ( !*(_BYTE *)a1
            || !*(_QWORD *)(a1 + 8)
            || (v2 = PoFxPowerOnCrashdumpDevice(*(_QWORD *)(a1 + 8), 0LL), v2 >= 0)
            && ((v5 = *(__int64 (__fastcall **)(_QWORD))(a1 + 24)) == 0LL || (v2 = v5(*(_QWORD *)(a1 + 32)), v2 >= 0)) )
          {
            **(_BYTE **)(a1 + 16) = 1;
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
