/*
 * XREFs of ?AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ @ 0x180177A50
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::AreAnimateUpdatesRequired(CComposition *this)
{
  unsigned __int8 v1; // di
  unsigned int v2; // esi
  char v3; // r15
  __int64 i; // rbx
  __int64 v6; // rcx
  __int64 v8; // rax

  v1 = 0;
  v2 = *((_DWORD *)this + 1474);
  v3 = BYTE2(Microsoft_Windows_Dwm_CoreEnableBits) & 1;
  for ( i = 0LL; (!v1 || v3) && (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(8 * i + *((_QWORD *)this + 734));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) )
    {
      v1 = 1;
      if ( v3 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(8 * i + *((_QWORD *)this + 734)) + 16LL))(*(_QWORD *)(8 * i + *((_QWORD *)this + 734)));
        if ( v8 )
        {
          ++*(_DWORD *)(v8 + 132);
          *((_BYTE *)this + 6457) = 1;
        }
      }
    }
  }
  return v1;
}
