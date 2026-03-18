/*
 * XREFs of ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x140141058
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x140140F40 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::MirrorWindowOrg(DC *this)
{
  _DWORD *v1; // r8
  int v2; // r9d
  int v3; // eax
  int v4; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 122);
  if ( (v1[27] & 1) == 0 )
  {
    v4 = v1[76];
    goto LABEL_5;
  }
  v2 = v1[83];
  if ( v2 )
  {
    v3 = v1[79] * (*((_DWORD *)this + 258) - *((_DWORD *)this + 260) + 1);
    if ( v3 != 0x80000000 || v2 != -1 )
    {
      v4 = v1[76] + v3 / v2;
LABEL_5:
      v1[77] = v4;
    }
  }
}
