/*
 * XREFs of ?vInitBuffer@stretch@@YAXPEAU_XRUNLEN@1@PEAU_RECTL@@K@Z @ 0x1400E9AB0
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vInitBuffer(stretch *this, struct stretch::_XRUNLEN *a2, struct _RECTL *a3)
{
  char *v3; // r10
  int v4; // edx
  unsigned __int64 v5; // r9

  v3 = (char *)this + 8;
  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  *((_DWORD *)this + 1) = v4;
  v5 = v4 & 0x3FFFFFFFFFFFFFFFLL;
  if ( v5 )
  {
    if ( ((unsigned __int8)v3 & 4) != 0 )
    {
      *(_DWORD *)v3 = (_DWORD)a3;
      if ( !--v5 )
        return;
      v3 = (char *)this + 12;
    }
    memset64(v3, (unsigned int)a3 | ((unsigned __int64)(unsigned int)a3 << 32), v5 >> 1);
    if ( (v5 & 1) != 0 )
      *(_DWORD *)&v3[4 * v5 - 4] = (_DWORD)a3;
  }
}
