/*
 * XREFs of NtGdiGetOutlineTextMetricsInternalW @ 0x1400BB700
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BD04C (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, unsigned __int64 a4)
{
  size_t v6; // rsi
  void *v8; // rdi
  __int64 v9; // rbx
  __int64 SessionState; // rax
  unsigned int OutlineTextMetrics; // eax
  unsigned int v12; // r14d
  __int64 v14; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v15[10]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v16[48]; // [rsp+90h] [rbp-48h] BYREF

  v6 = (unsigned int)Size;
  v8 = 0LL;
  v9 = 0LL;
  v14 = 0LL;
  if ( (_DWORD)Size && a3 )
  {
    if ( (unsigned int)Size <= 0x2710000 )
      v8 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
    if ( !v8 )
      return 0LL;
    memset_0(v8, 0, v6);
  }
  else
  {
    v6 = 0LL;
  }
  SessionState = W32GetSessionState(a1, Size, a3);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v16,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v15, a1);
  if ( v15[0] )
  {
    OutlineTextMetrics = GrepGetOutlineTextMetrics(v15, (unsigned int)v6, v8, &v14);
    v9 = v14;
  }
  else
  {
    EngSetLastError(6u);
    OutlineTextMetrics = 0;
  }
  v12 = 0;
  if ( OutlineTextMetrics != -1 )
    v12 = OutlineTextMetrics;
  if ( v12 )
  {
    if ( a4 + 8 > MmUserProbeAddress || a4 + 8 <= a4 || (a4 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a4 = v9;
    if ( (_DWORD)v6 )
    {
      if ( (unsigned __int64)&a3[v6] > MmUserProbeAddress || &a3[v6] <= a3 || ((unsigned __int8)a3 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, v8, (unsigned int)v6);
    }
  }
  if ( v8 )
    FreeTmpBuffer(v8);
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v15);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v16);
  return v12;
}
