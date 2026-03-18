/*
 * XREFs of ?SaveAttributesHelper@DCOBJ@@AEAAHXZ @ 0x1400AE100
 * Callers:
 *     NtGdiSetIcmMode @ 0x1400AEDA0 (NtGdiSetIcmMode.c)
 *     NtGdiExtSelectClipRgn @ 0x1400AEFA0 (NtGdiExtSelectClipRgn.c)
 *     ?vSaveAttributesAlways@DCOBJ@@AEAAXXZ @ 0x140311EA0 (-vSaveAttributesAlways@DCOBJ@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DCOBJ::SaveAttributesHelper(DCOBJ *this)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rbp
  struct _DC_ATTR *UserAttr; // rax

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
  return v4 != (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE)
      || (UserAttr = DCOBJ::GetUserAttr(this)) == 0LL
      || DC::SaveAttributes(*(DC **)this, UserAttr) != 0;
}
