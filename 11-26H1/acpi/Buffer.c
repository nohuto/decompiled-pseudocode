/*
 * XREFs of Buffer @ 0x1400395A0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     PrintBuffData @ 0x14006F38C (PrintBuffData.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall Buffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 *v8; // rax
  const void *v10; // r8
  unsigned int v11; // ecx

  v2 = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120);
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v5 )
  {
    if ( (gDebugger & 0xD0) != 0 )
      PrintBuffData(*(_QWORD *)(a1 + 120), v2);
    v6 = *(_QWORD *)(a2 + 80);
    v7 = *(_DWORD *)(v6 + 16);
    if ( v7 < v2 )
    {
      v5 = -1073741789;
      LogError(-1073741789);
      AcpiDiagTraceAmlError(a1, -1073741789);
      v10 = (const void *)v2;
      v11 = 19;
    }
    else
    {
      if ( !*(_QWORD *)(v6 + 16) )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = 0LL;
        goto LABEL_8;
      }
      v8 = HeapAlloc((_QWORD *)gpheapGlobal, 1179992648, v7);
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v8;
      if ( v8 )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
        memset(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), 0, *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
        memmove(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), *(const void **)(a1 + 120), v2);
LABEL_8:
        *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
        return v5;
      }
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v10 = 0LL;
      v11 = 17;
    }
    PrintDebugMessage(v11, *(const void **)(*(_QWORD *)(a2 + 80) + 16LL), v10, 0LL, 0LL);
  }
  return v5;
}
