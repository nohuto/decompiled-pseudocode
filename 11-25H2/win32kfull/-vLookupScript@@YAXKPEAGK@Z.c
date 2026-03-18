/*
 * XREFs of ?vLookupScript@@YAXKPEAGK@Z @ 0x1401021B4
 * Callers:
 *     vIFIMetricsToEnumLogFontExDvW @ 0x140102118 (vIFIMetricsToEnumLogFontExDvW.c)
 * Callees:
 *     InitializeScripts @ 0x1403ECA34 (InitializeScripts.c)
 */

void __fastcall vLookupScript(int a1, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  unsigned __int16 *v15; // rax

  if ( (unsigned int)InitializeScripts() )
  {
    v7 = a1 + 1000;
    v8 = *(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96);
    v9 = 0LL;
    v10 = (_DWORD *)(v8 + 19800);
    while ( *v10 != v7 )
    {
      v9 = (unsigned int)(v9 + 1);
      v10 += 4;
      if ( (unsigned int)v9 >= 0x13 )
      {
        v11 = *(_QWORD *)(v8 + 20096);
        goto LABEL_6;
      }
    }
    _mm_lfence();
    v11 = *(_QWORD *)(v8 + 16 * v9 + 19808);
LABEL_6:
    v12 = 32LL;
    v13 = v11 - (_QWORD)a2;
    do
    {
      if ( v12 == -2147483614 )
        break;
      v14 = *(unsigned __int16 *)((char *)a2 + v13);
      if ( !v14 )
        break;
      *a2++ = v14;
      --v12;
    }
    while ( v12 );
    v15 = a2 - 1;
    if ( v12 )
      v15 = a2;
    *v15 = 0;
  }
}
