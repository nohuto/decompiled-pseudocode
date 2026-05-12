/*
 * XREFs of sub_140055B38 @ 0x140055B38
 * Callers:
 *     sub_140066D1C @ 0x140066D1C (sub_140066D1C.c)
 *     sub_1401A74B0 @ 0x1401A74B0 (sub_1401A74B0.c)
 *     sub_1401A756C @ 0x1401A756C (sub_1401A756C.c)
 *     sub_1401A7654 @ 0x1401A7654 (sub_1401A7654.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140055B38(__int64 a1, NTSTATUS a2)
{
  struct _IO_CSQ *v3; // rbx
  PIRP v4; // rax

  if ( a1 && *(__int16 *)(a1 + 36) > 0 )
  {
    v3 = (struct _IO_CSQ *)(a1 + 80);
    while ( 1 )
    {
      v4 = IoCsqRemoveNextIrp(v3, 0LL);
      if ( !v4 )
        break;
      v4->IoStatus.Status = a2;
      v4->IoStatus.Information = 0LL;
      IofCompleteRequest(v4, 0);
    }
  }
}
