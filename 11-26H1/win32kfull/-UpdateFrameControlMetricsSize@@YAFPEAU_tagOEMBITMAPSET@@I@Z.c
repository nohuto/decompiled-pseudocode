/*
 * XREFs of ?UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z @ 0x1401F1534
 * Callers:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x140124AC0 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiMetricsForDpi @ 0x140302424 (GetDpiMetricsForDpi.c)
 */

__int64 __fastcall UpdateFrameControlMetricsSize(struct _tagOEMBITMAPSET *a1, unsigned int a2)
{
  unsigned __int16 *v2; // r14
  __int16 v3; // bp
  _WORD *v4; // r12
  unsigned int v5; // r15d
  int v7; // ebx
  unsigned __int16 v8; // cx
  int DpiDependentMetric; // edx
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  int v17; // eax

  v2 = (unsigned __int16 *)&unk_140363DE0;
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
          v11 = 24;
          v12 = 23;
        }
        else if ( (v8 & 0x40) != 0 )
        {
          v11 = 26;
          v12 = 25;
        }
        else
        {
          v11 = 13;
          v12 = 12;
        }
        v7 = GetDpiDependentMetric(v12, a2) - 2;
        LOWORD(DpiDependentMetric) = GetDpiDependentMetric(v11, a2) - 4;
        break;
      case 2u:
LABEL_26:
        if ( (v8 & 0x18) != 0 )
          DpiDependentMetric = *(_DWORD *)(GetDpiMetricsForDpi(a2) + 28);
        else
          DpiDependentMetric = GetDpiDependentMetric(28, a2);
        v7 = DpiDependentMetric;
        break;
      case 3u:
        if ( (v8 & 8) != 0 )
        {
          v14 = 1;
        }
        else
        {
          if ( (v8 & 2) != 0 )
          {
            v14 = 1;
            v15 = 11;
            goto LABEL_24;
          }
          v14 = 10;
        }
        v15 = 0;
LABEL_24:
        v7 = GetDpiDependentMetric(v15, a2);
        v16 = v14;
LABEL_25:
        LOWORD(DpiDependentMetric) = GetDpiDependentMetric(v16, a2);
        break;
      case 4u:
        if ( (v8 & 0x408) == 8 )
        {
          LOWORD(DpiDependentMetric) = v5 - 8;
        }
        else
        {
          v7 = (a2 >> 3) + 1;
          LOWORD(DpiDependentMetric) = v7;
        }
        break;
      case 5u:
        goto LABEL_26;
      case 0xFFFFu:
        if ( (v8 & 1) == 0 )
        {
          v10 = GetDpiDependentMetric(13, a2);
          LOWORD(DpiDependentMetric) = v10;
          v7 = v10;
          break;
        }
        v17 = GetDpiDependentMetric(12, a2);
        v16 = 13;
        v7 = 4 * v17;
        goto LABEL_25;
    }
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
