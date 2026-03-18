/*
 * XREFs of ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x140137470
 * Callers:
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14003CB60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x140137258 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PDEVOBJ::cFonts(PDEVOBJ *this)
{
  unsigned __int32 v1; // edx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0LL;
  result = *(unsigned int *)(*(_QWORD *)this + 2088LL);
  if ( (_DWORD)result == -1 )
  {
    v4 = *(_QWORD *)this;
    v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(v4 + 2888);
    if ( v5 )
      v1 = v5(*(_QWORD *)(v4 + 1784), 0LL, 0LL, &v6);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)this + 2088LL), v1, -1);
    if ( (_DWORD)result == -1 )
      return v1;
  }
  return result;
}
