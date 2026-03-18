/*
 * XREFs of ?W32PidDCOwner@XDCOBJ@@QEAAKXZ @ 0x14015941C
 * Callers:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140076DCC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 *     NtGdiSelectFont @ 0x1400AF6E0 (NtGdiSelectFont.c)
 *     ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140159278 (-GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::W32PidDCOwner(XDCOBJ *this)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi

  v1 = *(_QWORD *)this;
  v2 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)v1 )
  {
    v3 = HmgPentryFromPobj(v2, v1);
  }
  else
  {
    v3 = v1 + 2152;
    *(_OWORD *)(v1 + 2152) = 0LL;
    *(_QWORD *)(v1 + 2168) = 0LL;
    *(_DWORD *)(v1 + 2160) = -2147483630;
    *(_QWORD *)(v1 + 2168) = GreEncodeUserModePointer(0LL);
  }
  return *(_DWORD *)(v3 + 8) & 0xFFFFFFFE;
}
