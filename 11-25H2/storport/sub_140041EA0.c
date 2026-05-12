/*
 * XREFs of sub_140041EA0 @ 0x140041EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140042038 @ 0x140042038 (sub_140042038.c)
 *     sub_1400A9E40 @ 0x1400A9E40 (sub_1400A9E40.c)
 */

void __fastcall sub_140041EA0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // r8
  struct _KDPC *v8; // rbx
  __int64 v9; // rdx
  struct _KTIMER *v10; // rcx
  ULONG v11; // r9d
  LARGE_INTEGER v12; // rdx

  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = v6 * (int)KeQueryTimeIncrement();
  v8 = &stru_1401690A0;
  *(_QWORD *)&qword_140168DC8 = v7 / 10000000;
  if ( Dpc == &stru_1401690A0 )
  {
    sub_1400A9E40();
    if ( dword_1401684A8 )
      v5 = 4;
    if ( dword_140168478 )
      v5 |= 0x10u;
    sub_140042038((unsigned __int16)v5 | 0x60u);
    v9 = qword_140168480;
    v10 = &stru_140168EE0;
    v11 = 300000;
    goto LABEL_15;
  }
  v8 = &stru_140169060;
  if ( Dpc == &stru_140169060 )
  {
    sub_140042038(128LL);
    v9 = qword_140168490;
    v10 = &stru_140169020;
    v11 = 300000;
LABEL_15:
    v12.QuadPart = -v9;
    goto LABEL_16;
  }
  v8 = &::Dpc;
  if ( Dpc == &::Dpc )
  {
    sub_140042038(3LL);
    v12.QuadPart = -138000000000LL;
    v10 = &stru_140168E60;
    v11 = 300000;
  }
  else
  {
    v8 = &stru_140168EA0;
    if ( Dpc != &stru_140168EA0 )
    {
      v8 = &stru_140168FE0;
      if ( Dpc != &stru_140168FE0 )
        return;
      sub_140042038(256LL);
      v9 = qword_1401684A0;
      v10 = &Timer;
      v11 = 900000;
      goto LABEL_15;
    }
    sub_140042038(8LL);
    v12.QuadPart = -864000000000LL;
    v10 = &stru_140168F60;
    v11 = 900000;
  }
LABEL_16:
  KeSetCoalescableTimer(v10, v12, 0, v11, v8);
}
