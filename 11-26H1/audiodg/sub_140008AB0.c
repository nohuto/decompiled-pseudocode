/*
 * XREFs of sub_140008AB0 @ 0x140008AB0
 * Callers:
 *     sub_140008840 @ 0x140008840 (sub_140008840.c)
 * Callees:
 *     sub_140008824 @ 0x140008824 (sub_140008824.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140008AB0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int *v5; // rcx
  __int16 v6; // ax
  void *v8; // rcx
  void *retaddr; // [rsp+48h] [rbp+8h]
  LPVOID pv; // [rsp+50h] [rbp+10h] BYREF

  pv = 0LL;
  v4 = sub_1400B6010(a3);
  sub_140008C08(&pv, 0LL);
  if ( v4 < 0 )
  {
    sub_14000C2A8(retaddr, 2761LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", (unsigned int)v4);
    v8 = pv;
    pv = 0LL;
    if ( v8 )
      CoTaskMemFree(v8);
    return (unsigned int)v4;
  }
  else
  {
    if ( *((unsigned __int16 *)pv + 7) >> 3 != *(_DWORD *)(a2 + 44)
      || *((unsigned __int16 *)pv + 1) != *(_DWORD *)(a2 + 40)
      || (unsigned int)sub_140008824(pv) != *(_DWORD *)(a2 + 48)
      || (float)v5[1] != *(float *)(a2 + 52) )
    {
      goto LABEL_17;
    }
    v6 = *(_WORD *)v5;
    if ( *(_WORD *)v5 == 0xFFFE )
      v6 = *((_WORD *)v5 + 12);
    if ( v6 == *(_WORD *)(a2 + 24) )
    {
      pv = 0LL;
      if ( v5 )
        CoTaskMemFree(v5);
      return 0LL;
    }
    else
    {
LABEL_17:
      sub_14000C2A8(retaddr, 2768LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2289827870LL);
      sub_140008C08(&pv, 0LL);
      return 2289827870LL;
    }
  }
}
