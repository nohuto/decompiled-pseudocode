/*
 * XREFs of KiAcquirePrcbLocksForGroupAffinity @ 0x1405E7850
 * Callers:
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 */

void __fastcall KiAcquirePrcbLocksForGroupAffinity(__int128 *a1)
{
  __int64 v1; // rdi
  __int16 v2; // si
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int128 v5; // [rsp+20h] [rbp-20h] BYREF
  __int16 v6; // [rsp+30h] [rbp-10h]
  int v7; // [rsp+32h] [rbp-Eh]
  __int16 v8; // [rsp+36h] [rbp-Ah]
  int v9; // [rsp+60h] [rbp+20h] BYREF

  v5 = *a1;
  v1 = v5;
  if ( (_QWORD)v5 )
  {
    v2 = WORD4(v5);
    do
    {
      v7 = 0;
      v3 = 0LL;
      v8 = 0;
      v9 = 0;
      v6 = v2;
      *((_QWORD *)&v5 + 1) = v1;
      *(_QWORD *)&v5 = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v5) )
      {
        if ( !v3 || KiProcessorBlock[v9] < v3 )
          v3 = KiProcessorBlock[v9];
      }
      v4 = ~*(_QWORD *)(v3 + 200);
      v9 = 0;
      v1 &= v4;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v9);
        while ( *(_QWORD *)(v3 + 48) );
      }
    }
    while ( v1 );
  }
}
