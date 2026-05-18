/*
 * XREFs of sub_18004EEC0 @ 0x18004EEC0
 * Callers:
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 * Callees:
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 */

_QWORD *__fastcall sub_18004EEC0(_QWORD *a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  char *v6; // rdx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  if ( a2 > 5 )
  {
    v7 = a2 - 6;
    if ( !v7 )
    {
      v6 = "Shader";
      goto LABEL_23;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v6 = "Volume";
      goto LABEL_23;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v6 = "Skinning";
      goto LABEL_23;
    }
    if ( v9 == 1 )
    {
      v6 = "LightingGlobal";
      goto LABEL_23;
    }
    goto LABEL_18;
  }
  if ( a2 == 5 )
  {
    v6 = "Debug";
    goto LABEL_23;
  }
  if ( !a2 )
  {
    v6 = "Object";
    goto LABEL_23;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v6 = "Global";
    goto LABEL_23;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = "Material";
    goto LABEL_23;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = "Lighting";
    goto LABEL_23;
  }
  if ( v5 != 1 )
  {
LABEL_18:
    v6 = "<unknown>";
    goto LABEL_23;
  }
  v6 = "View";
LABEL_23:
  sub_180011CC4(a1, v6);
  return a1;
}
