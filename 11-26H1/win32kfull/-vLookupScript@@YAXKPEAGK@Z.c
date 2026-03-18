/*
 * XREFs of ?vLookupScript@@YAXKPEAGK@Z @ 0x14019AD58
 * Callers:
 *     vIFIMetricsToEnumLogFontExDvW @ 0x14019ACB8 (vIFIMetricsToEnumLogFontExDvW.c)
 * Callees:
 *     InitializeScripts @ 0x1403FA504 (InitializeScripts.c)
 */

void __fastcall vLookupScript(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  unsigned __int16 **v13; // rdx
  unsigned __int16 *v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rax

  v4 = a2;
  v5 = a1;
  if ( (unsigned int)InitializeScripts(a1, a2, a3, a4) )
  {
    v9 = v5 + 1000;
    v10 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
    v11 = 0LL;
    v12 = (_DWORD *)(v10 + 19776);
    while ( *v12 != v9 )
    {
      v11 = (unsigned int)(v11 + 1);
      v12 += 4;
      if ( (unsigned int)v11 >= 0x13 )
      {
        v13 = (unsigned __int16 **)(v10 + 20072);
        goto LABEL_6;
      }
    }
    v13 = (unsigned __int16 **)(16 * v11 + v10 + 19784);
LABEL_6:
    v14 = *v13;
    v15 = 32LL;
    do
    {
      if ( v15 == -2147483614 )
        break;
      if ( !*v14 )
        break;
      *v4++ = *v14++;
      --v15;
    }
    while ( v15 );
    v16 = v4 - 1;
    if ( v15 )
      v16 = v4;
    *v16 = 0;
  }
}
