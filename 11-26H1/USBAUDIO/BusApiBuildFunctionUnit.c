/*
 * XREFs of BusApiBuildFunctionUnit @ 0x14002D1E0
 * Callers:
 *     BusApiBuildExtensionFunctionUnit @ 0x14003459C (BusApiBuildExtensionFunctionUnit.c)
 *     BusApiBuildFeatureFunctionUnit @ 0x140034620 (BusApiBuildFeatureFunctionUnit.c)
 *     BusApiBuildMIDIFunctionUnit @ 0x1400346D8 (BusApiBuildMIDIFunctionUnit.c)
 *     BusApiBuildMixerFunctionUnit @ 0x140034754 (BusApiBuildMixerFunctionUnit.c)
 *     BusApiBuildProcessFunctionUnit @ 0x140034814 (BusApiBuildProcessFunctionUnit.c)
 *     BusApiBuildTerminalFunctionUnit @ 0x14003492C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseSelectorUnit @ 0x140038D10 (USBParseSelectorUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BusApiBuildFunctionUnit(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int *a7,
        PCWSTR SourceString,
        unsigned int a9,
        __int64 *a10)
{
  unsigned int v13; // edi
  __int64 v14; // rsi
  __int64 Pool2; // rax
  __int64 v16; // rbx
  int *v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v22; // [rsp+50h] [rbp+8h]

  v22 = *(_QWORD *)(a1 + 16);
  v13 = -1073741670;
  v14 = a6;
  *a10 = 0LL;
  Pool2 = ExAllocatePool2(256LL, a9 + 12 * (a6 + 8LL), 1096972357LL);
  v16 = Pool2;
  if ( Pool2 )
  {
    v17 = a7;
    *(_DWORD *)(Pool2 + 16) = a2;
    *(_DWORD *)(Pool2 + 20) = a3;
    *(_DWORD *)(Pool2 + 24) = a4;
    *(_DWORD *)(Pool2 + 28) = a5;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 96;
    *(_DWORD *)(Pool2 + 32) = a6;
    if ( a7 && a6 )
    {
      v18 = 0LL;
      do
      {
        v19 = *v17++;
        *(_DWORD *)(v18 + *(_QWORD *)(v16 + 56)) = v19;
        v18 += 12LL;
        --v14;
      }
      while ( v14 );
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v16 + 40), SourceString);
    *a10 = v16;
    v20 = *(__int64 **)(v22 + 88);
    if ( *v20 != v22 + 80 )
      __fastfail(3u);
    *(_QWORD *)v16 = v22 + 80;
    v13 = 0;
    *(_QWORD *)(v16 + 8) = v20;
    *v20 = v16;
    *(_QWORD *)(v22 + 88) = v16;
  }
  return v13;
}
