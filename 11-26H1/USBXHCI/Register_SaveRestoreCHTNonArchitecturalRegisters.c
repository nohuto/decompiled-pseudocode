/*
 * XREFs of Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x140031C5C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 */

int __fastcall Register_SaveRestoreCHTNonArchitecturalRegisters(__int64 a1, char a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int *v6; // rsi
  unsigned int *v7; // rbp
  int Ulong; // r8d
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // r8d
  _DWORD v13[6]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 35076;
  v13[1] = 35348;
  v13[2] = 35620;
  v4 = *(_QWORD *)(a1 + 8);
  if ( _bittest64((const signed __int64 *)(v4 + 736), 0x37u) )
  {
    v5 = 0;
    v6 = v13;
    do
    {
      v7 = (unsigned int *)(*(_QWORD *)(a1 + 24) + *v6);
      Ulong = XilRegister_ReadUlong(a1, v7);
      v9 = *(_DWORD *)(a1 + 120);
      if ( a2 )
      {
        if ( (Ulong & 0x2000000) != 0 )
          LODWORD(v4) = v9 | (1 << v5);
        else
          LODWORD(v4) = v9 & ~(1 << v5);
        *(_DWORD *)(a1 + 120) = v4;
      }
      else
      {
        v10 = Ulong & 0xFDFFFFFF;
        v11 = Ulong | 0x2000000;
        if ( !_bittest(&v9, v5) )
          v11 = v10;
        LODWORD(v4) = XilRegister_WriteUlong(a1, v7, v11);
      }
      ++v5;
      ++v6;
    }
    while ( v5 < 3 );
  }
  return v4;
}
