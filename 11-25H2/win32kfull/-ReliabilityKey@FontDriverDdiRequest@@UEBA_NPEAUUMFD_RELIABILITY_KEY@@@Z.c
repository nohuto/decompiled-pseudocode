/*
 * XREFs of ?ReliabilityKey@FontDriverDdiRequest@@UEBA_NPEAUUMFD_RELIABILITY_KEY@@@Z @ 0x140340F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

bool __fastcall FontDriverDdiRequest::ReliabilityKey(FontDriverDdiRequest *this, struct UMFD_RELIABILITY_KEY *a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(FontDriverDdiRequest *))(*(_QWORD *)this + 8LL))(this);
  if ( v3 )
  {
    *(_DWORD *)a2 = *(_DWORD *)(v3 + 16);
    LOBYTE(v3) = 1;
  }
  return v3;
}
