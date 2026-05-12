/*
 * XREFs of sub_1401B10C4 @ 0x1401B10C4
 * Callers:
 *     sub_1401B0FDC @ 0x1401B0FDC (sub_1401B0FDC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_14003CC48 @ 0x14003CC48 (sub_14003CC48.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 */

__int64 __fastcall sub_1401B10C4(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // esi
  _DWORD *v8; // rdi
  void *v9; // rcx
  _DWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v6 = (_DWORD *)sub_1400143E0(64LL, 128LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    *v6 = 1145917490;
    v6[1] = 4098;
    v6[2] = 104;
    v9 = *(void **)(a1 + 8);
    *a3 = 128;
    v10 = v6 + 26;
    ObfReferenceObject(v9);
    *((_QWORD *)v8 + 2) = a1;
    *((_BYTE *)v8 + 82) = *(_BYTE *)(a1 + 104);
    *((_BYTE *)v8 + 83) = *(_BYTE *)(a1 + 105);
    *((_BYTE *)v8 + 84) = *(_BYTE *)(a1 + 106);
    sub_14003CC48(*(_DWORD *)(a1 + 3432), (__int64)(v8 + 12), (_WORD *)v8 + 40);
    if ( sub_140021280(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1872)) >= 0 )
      {
        *(_BYTE *)v10 = 1;
        v11 = **(_QWORD **)(a1 + 1872);
        *((_QWORD *)v10 + 2) = a1 + 1862;
        *((_QWORD *)v10 + 1) = v11;
        *((_QWORD *)v8 + 3) = a1 + 1863;
        *((_QWORD *)v8 + 4) = sub_140079A90;
        *((_QWORD *)v8 + 5) = v10;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    }
    if ( (unsigned int)sub_1400567A0() )
    {
      v12 = *(_QWORD *)(a1 + 3600);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 48);
        if ( v13 )
          *((_QWORD *)v8 + 12) = v13;
      }
    }
    *a2 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
