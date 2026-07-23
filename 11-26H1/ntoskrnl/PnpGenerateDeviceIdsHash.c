/*
 * XREFs of PnpGenerateDeviceIdsHash @ 0x1409DBCCC
 * Callers:
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x14041C340 (NLS_UPCASE.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 */

NTSTATUS __fastcall PnpGenerateDeviceIdsHash(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r15
  NTSTATUS v4; // r8d
  const WCHAR **v5; // r14
  int v6; // edi
  unsigned int i; // esi
  const WCHAR *v8; // rbx
  NTSTATUS result; // eax
  int v10; // ebp
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  wchar_t *Buffer; // r12
  __int64 Flink; // r13
  int v14; // edx
  int v15; // r11d
  __int64 v16; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3;
  v18[0] = a1;
  v4 = 0;
  v18[1] = a2;
  v5 = (const WCHAR **)v18;
  DestinationString = 0LL;
  *v3 = 0;
  v6 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v8 = *v5;
    result = v4;
    if ( *v5 )
    {
      while ( 1 )
      {
        result = v4;
        if ( *v8 == (_WORD)v4 )
          break;
        result = RtlInitUnicodeStringEx(&DestinationString, v8);
        if ( result < 0 )
          return result;
        v10 = 0;
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        Buffer = DestinationString.Buffer;
        Flink = (__int64)CurrentServerSiloGlobals[75].Flink;
        if ( DestinationString.Length >> 1 )
        {
          do
          {
            v14 = *Buffer++;
            v10 = (unsigned __int16)NLS_UPCASE(Flink, v14) + 65599 * v10;
          }
          while ( v15 != 1 );
          v3 = a3;
          v4 = 0;
        }
        v6 += v10;
        v16 = -1LL;
        do
          ++v16;
        while ( v8[v16] != (_WORD)v4 );
        v8 += v16 + 1;
        if ( !v8 )
        {
          result = v4;
          break;
        }
      }
    }
    ++v5;
  }
  *v3 = v6;
  return result;
}
