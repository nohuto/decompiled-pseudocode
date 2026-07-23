/*
 * XREFs of CmpLogHiveLinkEvent @ 0x14085B6D0
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall CmpLogHiveLinkEvent(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v7; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+4Ch] [rbp-14h]
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF
  __int16 v12; // [rsp+78h] [rbp+18h] BYREF

  v11 = a1;
  v8[0] = 8LL;
  v12 = 0;
  v7 = &v11;
  v3 = 1;
  v4 = *((_QWORD *)a2 + 1);
  if ( v4 )
  {
    v3 = 2;
    v9 = *a2;
    v8[1] = v4;
    v10 = 0;
  }
  v5 = 2LL * v3;
  v8[v5 - 1] = &v12;
  v8[v5] = 2LL;
  return EtwTraceKernelEvent((int)&v7, v3 + 1, 0x41000000u, 2342, 6297858);
}
