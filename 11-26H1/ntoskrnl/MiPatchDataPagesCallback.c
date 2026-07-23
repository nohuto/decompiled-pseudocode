/*
 * XREFs of MiPatchDataPagesCallback @ 0x140879770
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiSetImageProtection @ 0x14038D6E0 (MiSetImageProtection.c)
 *     RtlAreBitsClearEx @ 0x14041EDB0 (RtlAreBitsClearEx.c)
 *     RtlAreBitsSetEx @ 0x140448230 (RtlAreBitsSetEx.c)
 */

__int64 __fastcall MiPatchDataPagesCallback(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _BYTE *a6)
{
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi

  *a6 = 0;
  if ( !a1 )
    return 0LL;
  v7 = a2 >> 12;
  v8 = (unsigned int)(((a2 & 0xFFF) + 4095LL + (unsigned __int64)a4) >> 12);
  if ( RtlAreBitsSetEx((unsigned __int64 *)(a1 + 48), a2 >> 12, v8) )
  {
    *a6 = 1;
    if ( !RtlAreBitsSetEx((unsigned __int64 *)(a1 + 64), v7, (unsigned int)v8) )
    {
      MiSetImageProtection(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 48LL) + (v7 << 12), (_DWORD)v8 << 12);
      RtlSetBitsEx(a1 + 64, v7, (unsigned int)v8);
    }
    return 0LL;
  }
  return !RtlAreBitsClearEx((unsigned __int64 *)(a1 + 48), v7, (unsigned int)v8) ? 0xC000007B : 0;
}
