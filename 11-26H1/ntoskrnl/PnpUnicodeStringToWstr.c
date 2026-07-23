/*
 * XREFs of PnpUnicodeStringToWstr @ 0x140A69BB0
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A6AB8 (PipApplyFunctionToServiceInstances.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     PnpGetDeviceDependencyList @ 0x1409B2710 (PnpGetDeviceDependencyList.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpUnicodeStringToWstr(_QWORD *a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned int v3; // edi
  __int64 v7; // r8
  _WORD *v8; // rdx
  unsigned __int64 v9; // rcx
  int v10; // ebp
  _WORD *Pool2; // rax
  _WORD *v12; // r14
  unsigned __int64 v13; // rax
  _WORD *v15; // rax

  v3 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = a3[1];
  if ( (unsigned int)v7 < 2 || (v8 = (_WORD *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    *a1 = 0LL;
    if ( a2 )
      *a2 = 0;
    return v3;
  }
  v9 = *a3;
  if ( (unsigned __int16)v9 > (unsigned __int16)v7 )
    return (unsigned int)-1073741811;
  if ( (_WORD)v9 )
  {
    if ( !*v8
      || (_WORD)v9 == (_WORD)v7 && !v8[((unsigned __int64)*a3 >> 1) - 1]
      || v9 <= v7 - 2 && (!v8[(v9 >> 1) - 1] || !v8[v9 >> 1]) )
    {
      goto LABEL_21;
    }
    v10 = v9 + 2;
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v12 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *((const void **)a3 + 1), *a3);
      v13 = (unsigned __int64)*a3 >> 1;
      *a1 = v12;
      v12[v13] = 0;
      if ( a2 )
        *a2 = v10;
      return v3;
    }
    return (unsigned int)-1073741670;
  }
  if ( !*v8 )
  {
LABEL_21:
    *a1 = v8;
    if ( a2 )
      *a2 = v7;
    return v3;
  }
  v15 = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( !v15 )
    return (unsigned int)-1073741670;
  *v15 = 0;
  *a1 = v15;
  if ( a2 )
    *a2 = 2;
  return v3;
}
