/*
 * XREFs of ?AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x140407C70
 * Callers:
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x14032F6BC (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_DISPLAY::AreSourcesSyncLocked(ADAPTER_DISPLAY *this, int a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // eax
  __int64 v5; // rdx
  bool result; // al

  result = a2
        && (v3 = (a2 ^ (unsigned int)(a2 - 1)) >> 1,
            v4 = ((((((((v3 >> 1) & 0x55555555) + (v3 & 0x55555555)) >> 2) & 0x33333333)
                  + ((((v3 >> 1) & 0x55555555) + (v3 & 0x55555555)) & 0x33333333)) >> 4) & 0xF0F0F0F)
               + (((((((v3 >> 1) & 0x55555555) + (v3 & 0x55555555)) >> 2) & 0x33333333)
                 + ((((v3 >> 1) & 0x55555555) + (v3 & 0x55555555)) & 0x33333333)) & 0xF0F0F0F),
            v5 = *(unsigned int *)(4024LL
                                 * ((((v4 & 0xFF00FF) + ((v4 >> 8) & 0xFF00FF)) >> 16)
                                  + (unsigned __int16)((unsigned __int8)v4 + BYTE1(v4)))
                                 + *((_QWORD *)this + 16)
                                 + 3804),
            (_DWORD)v5)
        && (a2 & *((_DWORD *)this + 20 * v5 + 220)) == a2;
  return result;
}
