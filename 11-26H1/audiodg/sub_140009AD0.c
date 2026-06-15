/*
 * XREFs of sub_140009AD0 @ 0x140009AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005D50 @ 0x140005D50 (sub_140005D50.c)
 *     sub_140009440 @ 0x140009440 (sub_140009440.c)
 *     sub_140009D00 @ 0x140009D00 (sub_140009D00.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140009AD0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdx
  int v6; // esi
  __int64 v8; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v5 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a2 + 152) )
  {
    sub_14000C2A8(retaddr, 1387LL, "avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", 2289827886LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827886LL;
  }
  else
  {
    if ( v5 )
      sub_1400115FC(a2 + 152, v5);
    v6 = sub_140009D00(a2, *(_QWORD *)(a1 + 360));
    if ( v6 < 0 )
    {
      v8 = 1388LL;
    }
    else
    {
      v6 = sub_140009440(a1 - 16, a2, 1);
      if ( v6 >= 0 )
      {
        v10 = 0LL;
        sub_140005D50(a2, &v10);
        if ( *(_DWORD *)(a2 + 112) == 2 && ++*(_QWORD *)(a1 + 384) == 2LL && *(_DWORD *)(a1 + 292) == 3 )
          sub_1400B6010(*(_QWORD *)(a1 + 136));
        if ( v2 )
          LeaveCriticalSection(v2);
        return 0LL;
      }
      v8 = 1389LL;
    }
    sub_14000C2A8(retaddr, v8, "avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", (unsigned int)v6);
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v6;
  }
}
