/*
 * XREFs of sub_1400C1AB0 @ 0x1400C1AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008F890 @ 0x14008F890 (sub_14008F890.c)
 *     sub_1400C14AC @ 0x1400C14AC (sub_1400C14AC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

void __fastcall sub_1400C1AB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // ebx
  _WORD *v5; // rdi
  void *v6; // r15
  unsigned int i; // ebp
  unsigned __int16 v8; // r12
  __int64 v9; // rax
  _BYTE Dst[64]; // [rsp+60h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  memset_0(Dst, 0, sizeof(Dst));
  v4 = 0;
  v5 = (_WORD *)(a2 + 20);
  v6 = (void *)sub_1400143E0(64LL, 4096LL, 1179476306LL, *(_QWORD *)(v2 + 8));
  if ( v6 )
  {
    for ( i = 0; i < (unsigned __int16)*v5; ++i )
    {
      v8 = *(_WORD *)(a2 + 2LL * i + 22);
      if ( (unsigned __int16)(v8 - 1) <= 0xFFFDu )
      {
        memset_0(Dst, 0, sizeof(Dst));
        sub_1400C14AC((__int64)Dst, v8, 1, 0, *(_BYTE *)(a2 + 8) & 1, 0x1000u);
        if ( (int)sub_140187D84(v2, (_DWORD)v6, 0, 4096, (__int64)Dst) < 0 )
          break;
        sub_14008F890(v2, (__int64)v6);
      }
    }
    ExFreePoolWithTag(v6, 0x464D6152u);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 6160) + 56LL) && *v5 )
  {
    do
    {
      v9 = v4++;
      _interlockedbittestandreset(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 6160) + 56LL)
                                  + 4 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 2 * v9 + 22) - 1) >> 5)),
        ((unsigned __int8)*(_WORD *)(a2 + 2 * v9 + 22) - 1) & 0x1F);
    }
    while ( v4 < (unsigned __int16)*v5 );
  }
  IoFreeWorkItem(*(PIO_WORKITEM *)a2);
  ExFreePoolWithTag((PVOID)a2, 0x49576152u);
}
