/*
 * XREFs of ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1401218C0
 * Callers:
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1400431E4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1401216FC (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PDEVOBJ::cFonts(PDEVOBJ *this)
{
  __int64 v1; // rax
  unsigned __int32 v2; // edx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v7 = 0LL;
  result = *(unsigned int *)(v1 + 2088);
  if ( (_DWORD)result == -1 )
  {
    v5 = *(_QWORD *)this;
    v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(v5 + 2888);
    if ( v6 )
      v2 = v6(*(_QWORD *)(v5 + 1784), 0LL, 0LL, &v7);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)this + 2088LL), v2, -1);
    if ( (_DWORD)result == -1 )
      return v2;
  }
  return result;
}
