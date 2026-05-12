/*
 * XREFs of sub_140010350 @ 0x140010350
 * Callers:
 *     sub_14000FC20 @ 0x14000FC20 (sub_14000FC20.c)
 * Callees:
 *     sub_14001046C @ 0x14001046C (sub_14001046C.c)
 *     sub_140010540 @ 0x140010540 (sub_140010540.c)
 */

__int64 __fastcall sub_140010350(__int64 a1, IRP *a2)
{
  KIRQL v4; // al
  unsigned int LockArray_high; // edi
  KIRQL v6; // bp
  IO_PRIORITY_HINT IoPriorityHint; // eax
  unsigned int v8; // edx
  int v9; // eax

  if ( *(_QWORD *)(a1 + 32) )
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    v4 = KfRaiseIrql(2u);
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    v6 = v4;
    IoPriorityHint = IoGetIoPriorityHint(a2);
    a2->IoStatus.Information = 0LL;
    v8 = 0;
    if ( IoPriorityHint <= IoPriorityLow )
      v8 = 0x80000000;
    a2->IoStatus.Status = LockArray_high & 0x7FFFFFFF | v8;
    v9 = sub_14001046C(a1, a2, LockArray_high);
    if ( v9 >= 0 )
    {
      if ( v9 != 259 )
        sub_140010540(a1, a2, 0LL);
    }
    else
    {
      a2->IoStatus.Status = v9;
      a2->IoStatus.Information = 0LL;
      IofCompleteRequest(a2, 0);
    }
    KeLowerIrql(v6);
    return 259LL;
  }
  else
  {
    a2->IoStatus.Status = -1073741436;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    return 3221225860LL;
  }
}
