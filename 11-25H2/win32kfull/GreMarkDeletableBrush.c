/*
 * XREFs of GreMarkDeletableBrush @ 0x1400E4460
 * Callers:
 *     SetDesktopPattern @ 0x1400E4610 (SetDesktopPattern.c)
 *     RecolorDeskPattern @ 0x14020BC30 (RecolorDeskPattern.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3CF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E3D80 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

void __fastcall GreMarkDeletableBrush(HBRUSH a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v6, a1, a3, a4);
  if ( v6[0] && (*(_DWORD *)(v6[0] + 40LL) & 0x200) == 0 && a1 )
  {
    LOBYTE(v5) = 16;
    HmgMarkDeletable(a1, v5);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v6);
}
