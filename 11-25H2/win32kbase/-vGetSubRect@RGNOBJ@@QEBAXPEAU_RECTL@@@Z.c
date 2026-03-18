/*
 * XREFs of ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x140011F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vGetSubRect(RGNOBJ *this, struct _RECTL *a2)
{
  struct REGION_CORE *v2; // rsi
  __int64 v4; // rbp
  struct _RECTL v5; // xmm0

  v2 = qword_1402A10B0;
  v4 = *(_QWORD *)this;
  if ( qword_1402A10B0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 2LL);
    (*(void (__fastcall **)(__int64, struct _RECTL *))(*(_QWORD *)v2 + 80LL))((v4 + 24) & -(__int64)(v4 != 0), a2);
    ExReleasePushLockSharedEx((char *)v2 + 8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( *(_DWORD *)(v4 + 40) > 0x38u )
      v5 = (struct _RECTL)xmmword_14025D3F0;
    else
      v5 = *(struct _RECTL *)(*(_QWORD *)this + 52LL);
    *a2 = v5;
  }
}
