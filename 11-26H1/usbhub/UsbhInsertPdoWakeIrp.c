/*
 * XREFs of UsbhInsertPdoWakeIrp @ 0x14004B860
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 */

void __fastcall UsbhInsertPdoWakeIrp(struct _IO_CSQ *Csq, __int64 Irp)
{
  int v2; // r9d
  __int64 v3; // r11
  _QWORD *v4; // rax
  __int64 v5; // r11
  __int64 v6; // r10
  _QWORD *v7; // r10

  Log((__int64)Csq[-18].ReservePointer, 16, 2004308267, 0LL, Irp);
  v4 = *(_QWORD **)(v3 - 8);
  v5 = v3 - 16;
  v7 = (_QWORD *)(v6 + 168);
  if ( *v4 != v5 )
    __fastfail(v2 + 3);
  *v7 = v5;
  v7[1] = v4;
  *v4 = v7;
  *(_QWORD *)(v5 + 8) = v7;
}
