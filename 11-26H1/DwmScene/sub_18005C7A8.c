/*
 * XREFs of sub_18005C7A8 @ 0x18005C7A8
 * Callers:
 *     sub_18005BE04 @ 0x18005BE04 (sub_18005BE04.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18002A0A4 @ 0x18002A0A4 (sub_18002A0A4.c)
 *     sub_18005BFCC @ 0x18005BFCC (sub_18005BFCC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005C7A8(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = sub_18001C514(248LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::Material>::`vftable';
    sub_18005BFCC(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3 + 16;
  *a1 = v3 + 16;
  a1[1] = v3;
  if ( v3 != -16 )
  {
    v5 = *(_QWORD *)(v3 + 120);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v8 = v3 + 16;
      v9 = a1[1];
      v6 = v9;
      sub_18002A0A4((__int64 *)(v4 + 96), &v8);
      if ( v6 )
        sub_180010EC8(v6);
    }
  }
  return a1;
}
