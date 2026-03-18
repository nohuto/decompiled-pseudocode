/*
 * XREFs of UsbhGetLocationIdString @ 0x14000EC40
 * Callers:
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhMakeId @ 0x14000E1C0 (UsbhMakeId.c)
 *     Short2Bcd @ 0x14000ED2C (Short2Bcd.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhGetLocationIdString(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned __int16 v14; // bp
  unsigned __int16 v15; // ax
  char *Id; // rax
  char *v17; // rax
  int v19; // [rsp+70h] [rbp+18h] BYREF

  LOWORD(v19) = a3;
  v6 = PdoExt(a2);
  v10 = FdoExt(a1, v7, v8, v9);
  v11 = Short2Bcd(*(unsigned __int16 *)(v10 + 1376));
  v12 = *(unsigned __int16 *)(v6 + 1428);
  v13 = 0;
  v19 = 0;
  v14 = v11;
  v15 = Short2Bcd(v12);
  Id = UsbhMakeId(1, L"Port_#nnnn", 0LL, &v19, 0, 4, v15, 0LL);
  if ( Id && (v17 = UsbhMakeId(1, L".Hub_#nnnn", Id, &v19, 1u, 4, v14, 0LL)) != 0LL )
  {
    *(_DWORD *)(a4 + 4) = v19;
    *(_QWORD *)(a4 + 8) = v17;
    *(_WORD *)a4 = 1033;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
