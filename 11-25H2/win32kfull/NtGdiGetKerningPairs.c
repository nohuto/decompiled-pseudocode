/*
 * XREFs of NtGdiGetKerningPairs @ 0x1401785E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140178748 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiGetKerningPairs(HDC a1, __int64 a2, char *a3)
{
  unsigned int v4; // r14d
  unsigned int KerningPairs; // ebx
  const void *v7; // rdi
  __int64 SessionState; // rax
  unsigned int v9; // eax
  size_t v11; // r8
  _BYTE v12[48]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v13[10]; // [rsp+50h] [rbp-68h] BYREF

  v4 = a2;
  KerningPairs = 0;
  v7 = 0LL;
  if ( a3 && (unsigned int)a2 <= 0x4E2000 )
    v7 = (const void *)AllocFreeTmpBuffer((unsigned int)(8 * a2));
  if ( !a3 || v7 )
  {
    SessionState = W32GetSessionState((_DWORD)a1, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v12,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v13, a1);
    if ( v13[0] )
      KerningPairs = GrepGetKerningPairs(v13, v4, v7, 15LL);
    if ( a3 )
    {
      v9 = 0;
      if ( KerningPairs <= v4 )
        v9 = KerningPairs;
      KerningPairs = v9;
      if ( v9 )
      {
        v11 = 8LL * v9;
        if ( (unsigned __int64)&a3[v11] > MmUserProbeAddress || &a3[v11] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v7, v11);
      }
      FreeTmpBuffer(v7);
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v13);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v12);
  }
  return KerningPairs;
}
