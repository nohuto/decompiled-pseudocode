/*
 * XREFs of ?RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140452C14
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     KiForwardTick @ 0x140452220 (KiForwardTick.c)
 *     KiGetDeepIdleProcessors @ 0x140452A7C (KiGetDeepIdleProcessors.c)
 *     KeComplementAffinityEx @ 0x1405EF270 (KeComplementAffinityEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpComplementAffinityEx(struct _KAFFINITY_EX *a1, unsigned __int16 a2, struct _KAFFINITY_EX *a3)
{
  unsigned __int16 Count; // ax
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  $B38C3B1372D6E954799962D5DD404846 *v6; // rdx
  __int64 v7; // r11
  signed __int64 v8; // r8
  __int64 v9; // rax

  Count = a3->Count;
  v4 = a2;
  if ( a3->Count > a2 )
    Count = a2;
  v5 = 0;
  if ( Count )
  {
    v5 = Count;
    v6 = &a1->8;
    v7 = Count;
    v8 = (char *)a3 - (char *)a1;
    do
    {
      v6->Bitmap[0] = ~*(unsigned __int64 *)((char *)v6->Bitmap + v8);
      v6 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v6 + 8);
      --v7;
    }
    while ( v7 );
  }
  a1->Reserved = 0;
  a1->Count = v4;
  a1->Size = v4;
  if ( v5 < v4 )
  {
    do
    {
      v9 = v5++;
      a1->Bitmap[v9] = -1LL;
    }
    while ( v5 < a1->Size );
  }
}
