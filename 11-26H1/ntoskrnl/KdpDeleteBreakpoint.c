/*
 * XREFs of KdpDeleteBreakpoint @ 0x140C1C76C
 * Callers:
 *     KdpRestoreBreakPointEx @ 0x140C1AB6C (KdpRestoreBreakPointEx.c)
 *     KdpRestoreBreakpoint @ 0x140C1AC80 (KdpRestoreBreakpoint.c)
 *     KdpWriteBreakPointEx @ 0x140C1B4E4 (KdpWriteBreakPointEx.c)
 *     KdpDeleteBreakpointRange @ 0x140C1D56C (KdpDeleteBreakpointRange.c)
 * Callees:
 *     KdpLowWriteContent @ 0x140C1C8F8 (KdpLowWriteContent.c)
 */

char __fastcall KdpDeleteBreakpoint(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  int v3; // eax
  ULONG v4; // ecx

  v1 = (unsigned int)(a1 - 1);
  if ( (unsigned int)(a1 - 1) > 0x1F )
    return 0;
  v2 = 5 * v1;
  v3 = *((_DWORD *)&unk_140F4C1E0 + 10 * v1);
  if ( !v3 )
    return 0;
  if ( (v3 & 0xC) == 4 )
  {
    v4 = KdpBreakpointChangeCount + 1;
    *((_DWORD *)&unk_140F4C1E0 + 10 * v1) = 0;
    KdpBreakpointChangeCount = v4;
  }
  else if ( (unsigned __int8)KdpLowWriteContent((unsigned int)v1) )
  {
    *((_DWORD *)&unk_140F4C1E0 + 2 * v2) = 0;
  }
  return 1;
}
