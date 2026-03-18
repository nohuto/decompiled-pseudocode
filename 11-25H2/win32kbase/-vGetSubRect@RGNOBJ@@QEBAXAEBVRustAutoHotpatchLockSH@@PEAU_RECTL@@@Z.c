/*
 * XREFs of ?vGetSubRect@RGNOBJ@@QEBAXAEBVRustAutoHotpatchLockSH@@PEAU_RECTL@@@Z @ 0x1401C4A00
 * Callers:
 *     <none>
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vGetSubRect(RGNOBJ *this, const struct RustAutoHotpatchLockSH *a2, struct _RECTL *a3)
{
  __int64 v4; // rcx
  struct _RECTL v6; // xmm0

  v4 = *(_QWORD *)this;
  if ( qword_1402A10B0 )
  {
    (*(void (__fastcall **)(__int64, struct _RECTL *))(*(_QWORD *)qword_1402A10B0 + 80LL))(
      (v4 + 24) & -(__int64)(v4 != 0),
      a3);
  }
  else
  {
    if ( (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v4 + 24)) > 0x38 )
      v6 = (struct _RECTL)xmmword_14025D3F0;
    else
      v6 = *(struct _RECTL *)(*(_QWORD *)this + 52LL);
    *a3 = v6;
  }
}
