/*
 * XREFs of ?CanScroll@CVirtualDesktopContainerElement@@UEAA_NXZ @ 0x1804DD090
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVirtualDesktopContainerElement::CanScroll(CVirtualDesktopContainerElement *this)
{
  __int64 v1; // rbx
  _DWORD *v3; // rax
  int v4; // edi
  _DWORD *v5; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)this;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, _BYTE *))(*(_QWORD *)this + 32LL))(
                   this,
                   v7);
  v4 = v3[2] - *v3;
  v5 = (_DWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, _BYTE *))(v1 + 40))(this, v8);
  return v5[2] - *v5 > v4;
}
