/*
 * XREFs of ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90
 * Callers:
 *     NtGdiStretchBlt @ 0x140016260 (NtGdiStretchBlt.c)
 *     NtGdiSaveDC @ 0x140076BF0 (NtGdiSaveDC.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     NtGdiPatBlt @ 0x1400ACCD0 (NtGdiPatBlt.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     GreGetDCObject @ 0x1400AF38C (GreGetDCObject.c)
 *     NtGdiGetDCObject @ 0x1400AFAE0 (NtGdiGetDCObject.c)
 *     NtGdiSetPixel @ 0x1400B0250 (NtGdiSetPixel.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     NtGdiBitBlt @ 0x1400B5500 (NtGdiBitBlt.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     NtGdiGetPixel @ 0x1400BB9B0 (NtGdiGetPixel.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreGetRandomRgn @ 0x14012C450 (GreGetRandomRgn.c)
 *     NtGdiRestoreDC @ 0x1401AECF0 (NtGdiRestoreDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DCOBJ::SaveAttributes(DCOBJ *this)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rbp
  struct _DC_ATTR *UserAttr; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    return 1LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v3 = *(_QWORD *)this;
  v4 = CurrentProcessId & 0xFFFFFFFC;
  if ( **(_QWORD **)this )
  {
    v5 = HmgPentryFromPobj(*((_QWORD *)this + 2), *(_QWORD *)this);
  }
  else
  {
    v5 = v3 + 2152;
    *(_OWORD *)(v3 + 2152) = 0LL;
    *(_QWORD *)(v3 + 2168) = 0LL;
    *(_DWORD *)(v3 + 2160) = -2147483630;
    *(_QWORD *)(v3 + 2168) = GreEncodeUserModePointer(0LL);
  }
  if ( v4 != (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE)
    || (UserAttr = DCOBJ::GetUserAttr(this)) == 0LL
    || DC::SaveAttributes(*(DC **)this, UserAttr) )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
    *((_DWORD *)this + 2) = 1;
    return 1LL;
  }
  return 0LL;
}
