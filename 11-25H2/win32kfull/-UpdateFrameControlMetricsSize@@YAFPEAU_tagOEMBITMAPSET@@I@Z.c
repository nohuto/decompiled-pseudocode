/*
 * XREFs of ?UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z @ 0x140192C3C
 * Callers:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x140192AB4 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x140042E30 (GetDPIMETRICSForDpi.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 */

__int64 __fastcall UpdateFrameControlMetricsSize(struct _tagOEMBITMAPSET *a1, unsigned int a2)
{
  unsigned __int16 *v2; // r14
  __int16 v3; // bp
  _WORD *v4; // r12
  unsigned int v5; // r15d
  int v7; // ebx
  unsigned __int16 v8; // dx
  int DpiDependentMetric; // eax
  bool v10; // zf
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // eax

  v2 = (unsigned __int16 *)&unk_140350CE0;
  v3 = 0;
  v4 = (_WORD *)((char *)a1 + 22);
  v5 = 0;
  do
  {
    v7 = 0;
    v8 = v2[1];
    LOWORD(DpiDependentMetric) = 0;
    switch ( *v2 )
    {
      case 1u:
        if ( (v8 & 0x80u) != 0 )
        {
          v13 = 24;
          v14 = 23;
        }
        else if ( (v8 & 0x40) != 0 )
        {
          v13 = 26;
          v14 = 25;
        }
        else
        {
          v13 = 13;
          v14 = 12;
        }
        v7 = GetDpiDependentMetric(v14, a2) - 2;
        LOWORD(DpiDependentMetric) = GetDpiDependentMetric(v13, a2) - 4;
        goto LABEL_18;
      case 2u:
LABEL_28:
        if ( (v8 & 0x18) != 0 )
        {
          DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi(a2) + 28);
        }
        else
        {
          v11 = a2;
          v12 = 28;
LABEL_12:
          DpiDependentMetric = GetDpiDependentMetric(v12, v11);
        }
LABEL_13:
        v7 = DpiDependentMetric;
        goto LABEL_18;
      case 3u:
        if ( (v8 & 8) != 0 )
        {
          v16 = 1;
        }
        else
        {
          if ( (v8 & 2) != 0 )
          {
            v16 = 1;
            v17 = 11;
LABEL_25:
            v7 = GetDpiDependentMetric(v17, a2);
            v18 = v16;
LABEL_26:
            LOWORD(DpiDependentMetric) = GetDpiDependentMetric(v18, a2);
            goto LABEL_18;
          }
          v16 = 10;
        }
        v17 = 0;
        goto LABEL_25;
    }
    if ( *v2 != 4 )
    {
      if ( *v2 == 5 )
        goto LABEL_28;
      if ( *v2 != 0xFFFF )
        goto LABEL_18;
      v10 = (v8 & 1) == 0;
      v11 = a2;
      if ( v10 )
      {
        v12 = 13;
        goto LABEL_12;
      }
      v19 = GetDpiDependentMetric(12, a2);
      v18 = 13;
      v7 = 4 * v19;
      goto LABEL_26;
    }
    if ( (v8 & 0x408) != 8 )
    {
      DpiDependentMetric = (a2 >> 3) + 1;
      goto LABEL_13;
    }
    LOWORD(DpiDependentMetric) = v5 - 8;
LABEL_18:
    *(v4 - 1) = v7;
    *v4 = DpiDependentMetric;
    if ( v7 <= v3 )
      LOWORD(v7) = v3;
    ++v5;
    v2 += 2;
    v4 += 4;
    v3 = v7;
  }
  while ( v5 < 0x5D );
  return (unsigned __int16)v7;
}
