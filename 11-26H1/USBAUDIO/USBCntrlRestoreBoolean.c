/*
 * XREFs of USBCntrlRestoreBoolean @ 0x140042660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     GetD3LastState @ 0x140038EAC (GetD3LastState.c)
 */

__int64 __fastcall USBCntrlRestoreBoolean(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct _DEVICE_OBJECT *v5; // rcx
  unsigned int i; // esi
  int v8; // eax
  unsigned __int8 v9; // cf
  int v10; // eax
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a2 + 76) == 7 )
  {
    v5 = *(struct _DEVICE_OBJECT **)(a1 + 24);
    v11 = 0;
    if ( (int)GetD3LastState(v5, (__int64)&v11) >= 0 && v11 == 1 )
      return 0LL;
  }
  for ( i = 0; i < *(_DWORD *)(a2 + 92); ++i )
  {
    v8 = *(_DWORD *)(a2 + 96);
    v9 = _bittest(&v8, i);
    v11 = 0;
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, int, int *))(a2 + 136))(
              a1,
              a2,
              1LL,
              16LL * i + *(_QWORD *)(a2 + 128) + 12LL,
              i,
              1,
              &v11);
      if ( v10 < 0 && v2 >= 0 )
        v2 = v10;
    }
  }
  return (unsigned int)v2;
}
