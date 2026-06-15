/*
 * XREFs of sub_1400386A0 @ 0x1400386A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140015930 @ 0x140015930 (sub_140015930.c)
 *     sub_140016A04 @ 0x140016A04 (sub_140016A04.c)
 *     sub_14005CF94 @ 0x14005CF94 (sub_14005CF94.c)
 *     sub_14005CFC0 @ 0x14005CFC0 (sub_14005CFC0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_1400386A0(__int64 a1)
{
  void *v2; // rax
  __int64 v3; // rcx
  DWORD v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void *)sub_1400B6010(*(_QWORD *)(a1 + 408));
  ResetEvent(v2);
  if ( sub_140015070 == *(__int64 (__fastcall **)(__int64))(a1 + 216) )
  {
    v4 = WaitForSingleObject(*(HANDLE *)(a1 + 312), 0);
    if ( v4 )
    {
      if ( v4 != 258 )
      {
        if ( v4 == -1 )
          sub_14005CF94(retaddr);
        else
          sub_14005CFC0(retaddr, v5, v6, 2147549183LL);
      }
    }
    else
    {
      sub_140015930(a1);
    }
    *(_BYTE *)(a1 + 4681) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 4681) = 0;
    *(_BYTE *)(a1 + 272) = 0;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 0) )
      sub_140016A04(v3, *(void **)(a1 + 296));
  }
}
