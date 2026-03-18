/*
 * XREFs of ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400BD350
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400B6430 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@AEAAJXZ @ 0x1400BD44C (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@AEAAJXZ.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::Init(VIDMM_APERTURE_SEGMENT *this, void (*a2)(void *, void *))
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // edi

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v4 + 24) = *((unsigned __int16 *)this + 35);
    *(_QWORD *)(v4 + 32) = this;
    WdLogGlobalForLineNumber = 143;
  }
  if ( (*((_DWORD *)this + 16) & 0x2000) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 147;
  }
  else
  {
    result = VIDMM_SEGMENT::Init(this, a2);
    if ( (int)result >= 0 )
    {
      *((_QWORD *)this + 31) = 0LL;
      result = VIDMM_APERTURE_SEGMENT::InitializeGuardPages(this);
      v6 = result;
      if ( (int)result >= 0 )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 180;
        WdLogSingleEntry4(
          4LL,
          *((_QWORD *)this + 5),
          *((int *)this + 7),
          *((unsigned int *)this + 6),
          *((unsigned __int16 *)this + 35));
        result = v6;
        WdLogGlobalForLineNumber = 185;
      }
    }
  }
  return result;
}
