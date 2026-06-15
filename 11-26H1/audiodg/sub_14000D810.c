/*
 * XREFs of sub_14000D810 @ 0x14000D810
 * Callers:
 *     sub_14000ACA0 @ 0x14000ACA0 (sub_14000ACA0.c)
 *     sub_14000AFD0 @ 0x14000AFD0 (sub_14000AFD0.c)
 *     sub_14000B7C0 @ 0x14000B7C0 (sub_14000B7C0.c)
 *     sub_14000BF70 @ 0x14000BF70 (sub_14000BF70.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_14000E018 @ 0x14000E018 (sub_14000E018.c)
 *     sub_14000E3CC @ 0x14000E3CC (sub_14000E3CC.c)
 */

__int64 __fastcall sub_14000D810(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r8
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a2 + 160) == a1 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    v4 = a1 + 224;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 344));
    v5 = 0LL;
    v6 = *(_QWORD **)(v4 + 48 * (*(unsigned __int16 *)(v4 + 112) ^ 1LL));
    while ( v6 )
    {
      v7 = v6[2];
      v6 = (_QWORD *)*v6;
      if ( *(_QWORD *)(v7 + 16) == v3 )
      {
        v5 = v7;
        break;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 120));
    if ( !v5 )
    {
      try
      {
        sub_14000E3CC(v4, a2);
      }
      catch ( ATL::CAtlException *v10 )
      {
        v9 = v10;
        if ( *(_DWORD *)v10 == -1073741571 )
          o__resetstkoflw();
        return *(unsigned int *)v9;
      }
    }
  }
  else
  {
    sub_14000E018(a1 + 224);
  }
  return 0LL;
}
