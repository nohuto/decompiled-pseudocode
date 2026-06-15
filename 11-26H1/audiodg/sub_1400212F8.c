/*
 * XREFs of sub_1400212F8 @ 0x1400212F8
 * Callers:
 *     sub_140021234 @ 0x140021234 (sub_140021234.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140021488 @ 0x140021488 (sub_140021488.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400212F8(__int64 a1)
{
  HRESULT inited; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // edx
  PROPVARIANT ppropvar[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 136) )
    return 0LL;
  *(_OWORD *)ppropvar = 0LL;
  v10 = 0LL;
  inited = InitPropVariantFromCLSID((const IID *const)(a1 + 40), ppropvar);
  v4 = inited;
  if ( inited < 0 )
  {
    v8 = 47;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 88);
    v6 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( v6 )
      sub_1400B6010(v6);
    inited = sub_1400B6010(v5);
    v4 = inited;
    if ( inited < 0 )
    {
      v8 = 49;
    }
    else
    {
      v12 = a1;
      v7 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 184) = 0LL;
      if ( v7 )
        sub_1400B6010(v7);
      inited = sub_140021488(a1 + 184, &v12);
      v4 = inited;
      if ( inited < 0 )
      {
        v8 = 50;
      }
      else
      {
        inited = sub_1400B6010(*(_QWORD *)(a1 + 144));
        v4 = inited;
        if ( inited >= 0 )
        {
          *(_BYTE *)(a1 + 136) = 1;
          PropVariantClear(ppropvar);
          return 0LL;
        }
        v8 = 51;
      }
    }
  }
  sub_14000C2A8(
    (int)retaddr,
    v8,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
    inited);
  PropVariantClear(ppropvar);
  return v4;
}
