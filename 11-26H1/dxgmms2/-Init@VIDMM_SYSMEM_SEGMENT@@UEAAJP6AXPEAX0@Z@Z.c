/*
 * XREFs of ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400BC8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400B6430 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::Init(VIDMM_SYSMEM_SEGMENT *this, void (*a2)(void *, void *))
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // esi

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v4 + 24) = *((unsigned __int16 *)this + 35);
    *(_QWORD *)(v4 + 32) = this;
    WdLogGlobalForLineNumber = 131;
  }
  result = VIDMM_SEGMENT::Init(this, a2);
  v6 = result;
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 31) = 0LL;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 152;
    WdLogSingleEntry4(
      4LL,
      *((_QWORD *)this + 5),
      *((int *)this + 7),
      *((unsigned int *)this + 6),
      *((unsigned __int16 *)this + 35));
    result = v6;
    WdLogGlobalForLineNumber = 157;
  }
  return result;
}
