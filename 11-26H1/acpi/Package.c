/*
 * XREFs of Package @ 0x14003C780
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall Package(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // r14
  __int64 *v8; // rax
  const void *v10; // rdx
  unsigned int v11; // ecx

  v4 = ValidateArgTypes(a1, a2[10], 0, "I");
  if ( !v4 )
  {
    v5 = a2[10];
    if ( *(_QWORD *)(v5 + 16) > 0xFFuLL )
    {
      v4 = -1072431100;
      LogError(-1072431100);
      AcpiDiagTraceAmlError(a1, -1072431100);
      v11 = 118;
      v10 = *(const void **)(a2[10] + 16LL);
    }
    else
    {
      *(_DWORD *)(a2[11] + 24LL) = 40 * *(_DWORD *)(v5 + 16) + 8;
      v6 = HeapAlloc((_QWORD *)gpheapGlobal, 1196118088, *(_DWORD *)(a2[11] + 24LL));
      v7 = v6;
      if ( v6 )
      {
        *(_WORD *)(a2[11] + 2LL) = 4;
        memset(v6, 0, *(unsigned int *)(a2[11] + 24LL));
        *(_QWORD *)(a2[11] + 32LL) = v7;
        *(_DWORD *)v7 = *(unsigned __int8 *)(a2[10] + 16LL);
        v8 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x38u);
        if ( v8 )
        {
          v8[1] = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v8;
          v8[3] = (__int64)ParsePackage;
          *(_DWORD *)v8 = 1179077456;
          v8[4] = (__int64)v7;
          v8[6] = a2[5];
          return v4;
        }
        v4 = -1072431102;
        LogError(-1072431102);
        AcpiDiagTraceAmlError(a1, -1072431102);
        v10 = 0LL;
        v11 = 153;
      }
      else
      {
        v4 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        v11 = 117;
        v10 = (const void *)*(unsigned int *)(a2[11] + 24LL);
      }
    }
    PrintDebugMessage(v11, v10, 0LL, 0LL, 0LL);
  }
  return v4;
}
