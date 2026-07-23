/*
 * XREFs of SymCryptFdefModSetRandomGeneric @ 0x14056F330
 * Callers:
 *     SymCryptModSetRandom @ 0x14055ED84 (SymCryptModSetRandom.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptFdefRawAddUint32 @ 0x140567D9C (SymCryptFdefRawAddUint32.c)
 *     SymCryptFdefRawIsLessThan @ 0x140568018 (SymCryptFdefRawIsLessThan.c)
 *     SymCryptFdefRawSubUint32 @ 0x140568278 (SymCryptFdefRawSubUint32.c)
 *     SymCryptFatal @ 0x1405E7EE8 (SymCryptFatal.c)
 *     SymCryptCallbackRandom_HashlibDefault @ 0x1407274B4 (SymCryptCallbackRandom_HashlibDefault.c)
 */

void __fastcall __noreturn SymCryptFdefModSetRandomGeneric(int *a1, __int64 a2, char a3, _DWORD *a4, __int64 a5)
{
  int v5; // ebp
  _DWORD *v6; // r12
  unsigned int v11; // edi
  BOOL v12; // ebx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // [rsp+60h] [rbp+8h]

  v5 = a1[1];
  v6 = a1 + 32;
  xHalTimerWatchdogStop();
  if ( (a3 & 1) != 0 )
    v11 = 0;
  else
    v11 = 2 - ((a3 & 2) != 0);
  v12 = (a3 & 4) == 0;
  if ( (unsigned int)a1[19] < 3 )
  {
    v12 = 0;
    v13 = *v6 - 1;
    if ( v11 < v13 )
      v13 = v11;
    v11 = v13;
  }
  SymCryptFdefRawSubUint32((__int64)v6, v12 + v11, a4, v5);
  v14 = (unsigned int)(a1[19] + 7) >> 3;
  v15 = (unsigned int)v14;
  SymCryptWipe(v14 + a2, (unsigned int)((v5 << 6) - v14));
  SymCryptCallbackRandom_HashlibDefault(a2, v15);
}
