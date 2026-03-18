/*
 * XREFs of ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1400304F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400305C0 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400306B0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x14003091C (-Attach@DxgkAttachToObjectSession@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkCompositionObject::Delete(_QWORD *a1)
{
  bool v1; // zf
  _BYTE v3[256]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v4[8]; // [rsp+120h] [rbp-68h] BYREF
  PVOID Object; // [rsp+128h] [rbp-60h]
  int v6; // [rsp+130h] [rbp-58h]
  struct _KAPC_STATE ApcState; // [rsp+138h] [rbp-50h] BYREF

  v1 = a1[2] == 0LL;
  v6 = *((_DWORD *)a1 + 2);
  v4[0] = 0;
  Object = 0LL;
  if ( !v1 )
  {
    if ( (int)DxgkAttachToObjectSession::Attach((DxgkAttachToObjectSession *)v4) >= 0 )
    {
      CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[2] + 32LL))(a1[2], a1);
      CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
    }
    if ( v4[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
