/*
 * XREFs of EtwEnableTrace @ 0x140AD6640
 * Callers:
 *     EtwWmitraceWorker @ 0x1408324F8 (EtwWmitraceWorker.c)
 *     WdipSemEnableDisableTrace @ 0x140AD65E0 (WdipSemEnableDisableTrace.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEnableTrace @ 0x140AD66E4 (EtwpEnableTrace.c)
 */

__int64 __fastcall EtwEnableTrace(int a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6, __int64 a7, int a8)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // r11d
  size_t Size; // [rsp+60h] [rbp-38h]
  size_t v15; // [rsp+70h] [rbp-28h]
  size_t v16; // [rsp+80h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  LODWORD(v16) = 0;
  LODWORD(v15) = 0;
  LODWORD(Size) = 0;
  return EtwpEnableTrace(
           (int)CurrentServerSiloGlobals[52].Flink,
           a1,
           v12,
           v10,
           v11,
           a5,
           a6,
           a7,
           a8,
           0LL,
           0LL,
           0LL,
           Size,
           0LL,
           v15,
           0LL,
           v16,
           0LL);
}
