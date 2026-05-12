/*
 * XREFs of sub_1400C18E0 @ 0x1400C18E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008FA40 @ 0x14008FA40 (sub_14008FA40.c)
 *     sub_1400C14AC @ 0x1400C14AC (sub_1400C14AC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

void __fastcall sub_1400C18E0(PDEVICE_OBJECT DeviceObject, _WORD *Context)
{
  _QWORD *DeviceExtension; // r14
  unsigned int v4; // ebx
  _WORD *v5; // rdi
  void *v6; // r15
  unsigned int i; // ebp
  unsigned __int16 v8; // r12
  __int64 v9; // rax
  _BYTE Dst[64]; // [rsp+60h] [rbp-68h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset_0(Dst, 0, sizeof(Dst));
  v4 = 0;
  v5 = Context + 10;
  v6 = (void *)sub_1400143E0(64LL, 512LL, 1179476306LL, DeviceExtension[1]);
  if ( v6 )
  {
    for ( i = 0; i < (unsigned __int16)*v5; ++i )
    {
      v8 = Context[i + 11];
      if ( (unsigned __int16)(v8 - 1) <= 0xFFFDu )
      {
        memset_0(Dst, 0, sizeof(Dst));
        sub_1400C14AC((__int64)Dst, v8, 193, 0, Context[4] & 1, 0x200u);
        if ( (int)sub_140187D84((_DWORD)DeviceExtension, (_DWORD)v6, 0, 512, (__int64)Dst) < 0 )
          break;
        sub_14008FA40((__int64)DeviceExtension, (__int64)v6);
      }
    }
    ExFreePoolWithTag(v6, 0x464D6152u);
  }
  if ( *(_QWORD *)(DeviceExtension[770] + 72LL) && *v5 )
  {
    do
    {
      v9 = v4++;
      _interlockedbittestandreset(
        (volatile signed __int32 *)(*(_QWORD *)(DeviceExtension[770] + 72LL)
                                  + 4 * (((unsigned __int64)(unsigned __int16)Context[v9 + 11] - 1) >> 5)),
        ((unsigned __int8)Context[v9 + 11] - 1) & 0x1F);
    }
    while ( v4 < (unsigned __int16)*v5 );
  }
  IoFreeWorkItem(*(PIO_WORKITEM *)Context);
  ExFreePoolWithTag(Context, 0x49576152u);
}
