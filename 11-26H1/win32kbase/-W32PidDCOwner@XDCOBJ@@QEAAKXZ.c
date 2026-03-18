/*
 * XREFs of ?W32PidDCOwner@XDCOBJ@@QEAAKXZ @ 0x14010EFEC
 * Callers:
 *     ?GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140175100 (-GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1401ECBE0 (-GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 */

__int64 __fastcall XDCOBJ::W32PidDCOwner(XDCOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax

  v1 = *(_QWORD *)this;
  v2 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)v1 )
  {
    v3 = HmgPentryFromPobj(v2);
  }
  else
  {
    v3 = v1 + 2152;
    *(_OWORD *)(v1 + 2152) = 0LL;
    *(_QWORD *)(v1 + 2168) = 0LL;
    *(_DWORD *)(v1 + 2160) = -2147483630;
    *(_QWORD *)(v1 + 2168) = 0LL;
  }
  return *(_DWORD *)(v3 + 8) & 0xFFFFFFFE;
}
