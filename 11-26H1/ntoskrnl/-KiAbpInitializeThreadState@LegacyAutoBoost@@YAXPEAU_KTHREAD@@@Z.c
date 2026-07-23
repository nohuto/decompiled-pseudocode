/*
 * XREFs of ?KiAbpInitializeThreadState@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140491760
 * Callers:
 *     KiAbInitializeThreadState @ 0x140491674 (KiAbInitializeThreadState.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyAutoBoost::KiAbpInitializeThreadState(LegacyAutoBoost *this, struct _KTHREAD *a2)
{
  __int64 v2; // r9
  unsigned int i; // r10d
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // r9
  unsigned int j; // r10d
  __int64 v9; // rdx
  char v10; // cl

  v2 = *((_QWORD *)this + 142);
  for ( i = 0; i < *(unsigned __int8 *)(v2 + 12); *(_BYTE *)(v5 + v2 + 24) ^= v6 & 0x3F )
  {
    v5 = 88LL * i;
    v6 = i++ ^ *(_BYTE *)(v5 + v2 + 24);
  }
  *(_WORD *)(v2 + 10) = 0;
  *(_WORD *)(v2 + 8) = (1LL << *(_BYTE *)(v2 + 12)) - 1;
  v7 = *((_QWORD *)this + 143);
  if ( v7 )
  {
    for ( j = 0; j < *(unsigned __int8 *)(v7 + 12); *(_BYTE *)(v9 + v7 + 24) = *(_BYTE *)(v9 + v7 + 24) ^ v10 & 0x3F | 0x80 )
    {
      v9 = 88LL * j;
      v10 = j++ ^ *(_BYTE *)(v9 + v7 + 24);
    }
    *(_WORD *)(v7 + 10) = 0;
    *(_WORD *)(v7 + 8) = (1LL << *(_BYTE *)(v7 + 12)) - 1;
  }
  *((_DWORD *)this + 29) |= 1u;
  *((_QWORD *)this + 102) = 1LL;
  *((_QWORD *)this + 101) = 1LL;
}
