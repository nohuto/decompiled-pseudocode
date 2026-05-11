/*
 * XREFs of USBCntrlRestoreDbLevel @ 0x140040F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall USBCntrlRestoreDbLevel(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int i; // edi
  int v6; // eax
  unsigned __int8 v7; // cf
  int v8; // eax
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 92); ++i )
  {
    v6 = *(_DWORD *)(a2 + 96);
    v7 = _bittest(&v6, i);
    v10 = 0;
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, int, int *))(a2 + 136))(
             a1,
             a2,
             4LL,
             32LL * i + *(_QWORD *)(a2 + 128) + 12LL,
             i,
             1,
             &v10);
      if ( v8 < 0 && v2 >= 0 )
        v2 = v8;
    }
  }
  return (unsigned int)v2;
}
