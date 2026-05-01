/*
 * XREFs of ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1802137EC
 * Callers:
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function<long (unsigned long)>::~function<long (unsigned long)>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
