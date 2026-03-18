/*
 * XREFs of ?SetMultiByteValue@@YAHPEAEKPEAKPEAHK1@Z @ 0x14020A74C
 * Callers:
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x140209BAC (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetMultiByteValue(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int *a3,
        int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v6; // eax
  unsigned int v7; // r10d
  __int64 v8; // rbx
  int *v9; // r11
  unsigned int v12; // r9d
  __int64 v13; // r8
  char v14; // dl
  __int64 v15; // rdx
  unsigned __int8 v16; // al

  v6 = *a4;
  v7 = 0;
  v8 = *a3;
  v9 = a4;
  if ( (unsigned int)*a4 <= 1 )
  {
    v12 = 1;
    v13 = 1LL;
LABEL_5:
    v14 = 0;
    goto LABEL_9;
  }
  if ( v6 <= 127 )
  {
    v12 = 8;
    v13 = 1LL;
    goto LABEL_5;
  }
  if ( v6 > 0x7FFF )
  {
    v12 = 32;
    v13 = 4LL;
    v14 = 2;
  }
  else
  {
    v12 = 16;
    v13 = 2LL;
    v14 = 1;
  }
LABEL_9:
  if ( (int)v13 + (int)v8 + 1 < a2 )
  {
    a1[v8] = byte_14027AF10[a5] + v14;
    v15 = (unsigned int)(v8 + 1);
    do
    {
      v16 = *(_BYTE *)v9;
      v9 = (int *)((char *)v9 + 1);
      a1[v15] = v16;
      v15 = (unsigned int)(v15 + 1);
      --v13;
    }
    while ( v13 );
    if ( a6 )
      *a6 = v12;
    *a3 = v15;
    return 1;
  }
  return v7;
}
