/*
 * XREFs of UsbhGetLocationIdString @ 0x1400160EC
 * Callers:
 *     UsbhCreatePdo @ 0x140014360 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhMakeId @ 0x1400159A0 (UsbhMakeId.c)
 *     Short2Bcd @ 0x140017004 (Short2Bcd.c)
 */

__int64 __fastcall UsbhGetLocationIdString(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // ax
  unsigned int v10; // ebx
  char *Id; // rax
  char *v12; // rax
  int v14; // [rsp+70h] [rbp+18h] BYREF

  LOWORD(v14) = a3;
  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  v8 = Short2Bcd(*((unsigned __int16 *)v7 + 688));
  v9 = Short2Bcd(*((unsigned __int16 *)v6 + 714));
  v10 = 0;
  v14 = 0;
  Id = UsbhMakeId(1, L"Port_#nnnn", 0LL, &v14, 0, 4, v9, 0LL);
  if ( Id && (v12 = UsbhMakeId(1, L".Hub_#nnnn", Id, &v14, 1u, 4, v8, 0LL)) != 0LL )
  {
    *(_DWORD *)(a4 + 4) = v14;
    *(_QWORD *)(a4 + 8) = v12;
    *(_WORD *)a4 = 1033;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
