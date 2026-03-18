/*
 * XREFs of ?StartPixel@@YAPEAEPEAEKK@Z @ 0x1400D0C9C
 * Callers:
 *     ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1400CF950 (-vTransparentCopy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?ReadScanLine@@YAKPEAEKKKK@Z @ 0x1403088B4 (-ReadScanLine@@YAKPEAEKKKK@Z.c)
 *     ?SkipScanLine@@YAKPEAEKKKK@Z @ 0x140308990 (-SkipScanLine@@YAKPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall StartPixel(unsigned __int8 *a1, unsigned int a2, int a3)
{
  unsigned __int8 *v3; // r9
  int v4; // r8d
  unsigned __int64 v5; // rcx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  unsigned __int64 v11; // rax

  v3 = a1;
  v4 = a3 - 1;
  if ( !v4 )
  {
    v5 = (unsigned __int64)a2 >> 3;
    goto LABEL_3;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    v11 = (unsigned __int64)a2 >> 1;
    return &a1[v11];
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = a2;
    return &a1[v11];
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v3;
      v5 = 4 * a2;
    }
    else
    {
      v5 = 3 * a2;
    }
  }
  else
  {
    v5 = 2 * a2;
  }
LABEL_3:
  v3 += v5;
  return v3;
}
