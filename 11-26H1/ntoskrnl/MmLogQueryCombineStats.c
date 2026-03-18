/*
 * XREFs of MmLogQueryCombineStats @ 0x140A542BC
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A52EAC (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x140A70518 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     EtwTraceSiloDcEvent @ 0x1404BB2C4 (EtwTraceSiloDcEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

_OWORD *__fastcall MmLogQueryCombineStats(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  int v5; // eax
  _OWORD *v6; // r10
  int v7; // eax
  int v8; // ecx
  _OWORD *result; // rax
  unsigned int v10; // r9d
  _QWORD v11[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( a3 )
    v5 = *a3;
  else
    v5 = 0;
  v6 = v13;
  if ( a3 )
    v6 = a3;
  *(_DWORD *)v6 = v5 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v6 + 1) = dword_140E3C338;
  *((_QWORD *)v6 + 1) = qword_140E3C328 + qword_140E3C320;
  *((_QWORD *)v6 + 2) = qword_140E3C330;
  v7 = dword_140E3C33C;
  *((_DWORD *)v6 + 6) = dword_140E3C33C;
  v8 = dword_140E3C340;
  *((_DWORD *)v6 + 7) = dword_140E3C340;
  if ( v7 > v8 )
    *((_DWORD *)v6 + 6) = v8;
  result = v13;
  if ( v6 == v13 )
  {
    if ( a1 && a2 )
    {
      v10 = *a2;
      v11[0] = v6;
      v11[1] = 32LL;
      return (_OWORD *)EtwTraceSiloDcEvent((__int64)v11, 1u, a1, v10, 0x27Cu, 0x501802u);
    }
    else
    {
      v12[0] = v6;
      v12[1] = 32LL;
      return (_OWORD *)EtwTraceKernelEvent((int)v12, 1, 0x20080000u, 636, 5249026);
    }
  }
  return result;
}
