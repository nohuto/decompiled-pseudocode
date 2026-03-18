/*
 * XREFs of GreCreateSolidBrush @ 0x140087840
 * Callers:
 *     <none>
 * Callees:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x140087560 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateSolidBrush(int a1)
{
  __int64 v1; // rbx
  struct HOBJ__ **v3[6]; // [rsp+30h] [rbp-48h] BYREF
  int v4; // [rsp+60h] [rbp-18h]

  v1 = 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v3, a1, 7u, 0, 0);
  if ( v3[0] )
  {
    v4 = 1;
    *((_DWORD *)v3[0] + 10) |= 4u;
    v1 = (__int64)*v3[0];
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v3);
  return v1;
}
