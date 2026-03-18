/*
 * XREFs of ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x140173DE0
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x140173C4C (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x140173F20 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 */

void __fastcall PFFOBJ::vGetEUDC(PFFOBJ *this, struct _EUDCLOAD *a2)
{
  __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int16 v10; // r15
  _BOOL8 v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  for ( i = 0LL; i < 16; i += 8LL )
    *(_QWORD *)(i + *(_QWORD *)a2) = 0LL;
  v5 = *(_QWORD *)this;
  if ( !*((_QWORD *)a2 + 1) )
  {
    **(_QWORD **)a2 = *(_QWORD *)(v5 + 224);
    v15 = 232LL;
    if ( *(_DWORD *)(*(_QWORD *)this + 216LL) != 2 )
      v15 = 224LL;
    v13 = *(__int64 **)a2;
    v14 = *(_QWORD *)(v15 + *(_QWORD *)this);
    goto LABEL_11;
  }
  v6 = 0LL;
  if ( *(_DWORD *)(v5 + 216) )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 8 * v6 + 224);
      v16 = v7;
      v8 = *(_QWORD *)(v7 + 32);
      v9 = *(int *)(v8 + 16);
      v10 = *(_WORD *)(v9 + v8);
      v11 = v10 == 64;
      v12 = 8 * v11;
      if ( !_wcsicmp(*((const wchar_t **)a2 + 1), (const wchar_t *)(v8 + v9 + 2 * v11)) )
        *(_QWORD *)(v12 + *(_QWORD *)a2) = v7;
      if ( !*(_QWORD *)(v12 + *(_QWORD *)a2) )
      {
        if ( PFEOBJ::bCheckFamilyName((PFEOBJ *)&v16, *((const unsigned __int16 **)a2 + 1), v10 == 64, 0LL) )
          *(_QWORD *)(v12 + *(_QWORD *)a2) = v7;
      }
      v5 = *(_QWORD *)this;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(*(_QWORD *)this + 216LL) );
  }
  v13 = *(__int64 **)a2;
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 8LL) )
  {
    v14 = *v13;
LABEL_11:
    v13[1] = v14;
  }
}
