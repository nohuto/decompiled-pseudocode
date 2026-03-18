/*
 * XREFs of ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1400B5634
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1400B54CC (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1400B5770 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 */

void __fastcall PFFOBJ::vGetEUDC(PFFOBJ *this, struct _EUDCLOAD *a2)
{
  __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  const wchar_t *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int16 v11; // r15
  _BOOL8 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  for ( i = 0LL; i < 16; i += 8LL )
    *(_QWORD *)(i + *(_QWORD *)a2) = 0LL;
  v5 = *(_QWORD *)this;
  if ( *((_QWORD *)a2 + 1) )
  {
    v6 = 0LL;
    if ( *(_DWORD *)(v5 + 216) )
    {
      do
      {
        v7 = *(_QWORD *)(v5 + 8 * v6 + 224);
        v8 = (const wchar_t *)*((_QWORD *)a2 + 1);
        v16 = v7;
        v9 = *(_QWORD *)(v7 + 32);
        v10 = *(int *)(v9 + 16);
        v11 = *(_WORD *)(v10 + v9);
        v12 = v11 == 64;
        v13 = 8 * v12;
        if ( !_wcsicmp(v8, (const wchar_t *)(v9 + v10 + 2 * v12)) )
          *(_QWORD *)(v13 + *(_QWORD *)a2) = v7;
        if ( !*(_QWORD *)(v13 + *(_QWORD *)a2)
          && PFEOBJ::bCheckFamilyName((PFEOBJ *)&v16, *((const unsigned __int16 **)a2 + 1), v11 == 64, 0LL) )
        {
          *(_QWORD *)(v13 + *(_QWORD *)a2) = v7;
        }
        v5 = *(_QWORD *)this;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *(_DWORD *)(*(_QWORD *)this + 216LL) );
    }
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 8LL) )
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = **(_QWORD **)a2;
  }
  else
  {
    **(_QWORD **)a2 = *(_QWORD *)(v5 + 224);
    v14 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 216LL) == 2 )
      v15 = *(_QWORD *)(v14 + 232);
    else
      v15 = *(_QWORD *)(v14 + 224);
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v15;
  }
}
