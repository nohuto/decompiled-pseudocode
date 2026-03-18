/*
 * XREFs of NtGdiGetRealizationInfo @ 0x140080FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140080F3C (-GrepGetRealizationInfo@@YA-AV-$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiGetRealizationInfo(HDC a1, unsigned int *a2)
{
  unsigned int *v4; // rax
  SIZE_T v5; // rbx
  __int64 SessionState; // rax
  int v7; // r9d
  unsigned int v8; // edi
  _DWORD v10[4]; // [rsp+20h] [rbp-3D8h] BYREF
  _QWORD v11[10]; // [rsp+30h] [rbp-3C8h] BYREF
  _BYTE v12[48]; // [rsp+80h] [rbp-378h] BYREF
  unsigned int Length[204]; // [rsp+B0h] [rbp-348h] BYREF

  memset_0(Length, 0, 0x32CuLL);
  v4 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  Length[0] = *v4;
  v5 = Length[0];
  if ( Length[0] != 16 && Length[0] != 24 && Length[0] != 812 )
    return 0LL;
  SessionState = W32GetSessionState();
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v12,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v8 = *GrepGetRealizationInfo(v10, (struct UDCOBJ *)v11, (__int64)Length, v7);
    v5 = Length[0];
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
  {
    ProbeForWrite(a2, v5, 4u);
    memmove(a2, Length, v5);
  }
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v11);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v12);
  return v8;
}
