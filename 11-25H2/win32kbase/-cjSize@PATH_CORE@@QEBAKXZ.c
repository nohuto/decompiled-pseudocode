/*
 * XREFs of ?cjSize@PATH_CORE@@QEBAKXZ @ 0x140135360
 * Callers:
 *     ?cjSize@EPATHOBJ@@QEAAKXZ @ 0x140135340 (-cjSize@EPATHOBJ@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PATH_CORE::cjSize(PATH_CORE *this)
{
  __int64 *v1; // rdx
  __int64 result; // rax
  int v3; // ecx

  v1 = (__int64 *)*((_QWORD *)this + 1);
  result = 0LL;
  while ( v1 )
  {
    v3 = *((_DWORD *)v1 + 5);
    v1 = (__int64 *)*v1;
    result = (unsigned int)(result + 8 * v3 + 24);
  }
  return result;
}
