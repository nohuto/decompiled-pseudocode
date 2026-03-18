/*
 * XREFs of Index @ 0x1400120A0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 */

__int64 __fastcall Index(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  _DWORD *v14; // r14
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  const void *v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 ObjectTypeName; // rax
  int v21; // ecx
  unsigned __int64 v22; // r10

  LOBYTE(a3) = 1;
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), a3, "CI");
  if ( !v5 )
  {
    v6 = *(_QWORD *)(a2 + 80) + 80LL;
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 82LL);
    if ( (_WORD)v7 == 128 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL) + 64LL;
      v21 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL) + 66LL);
      if ( v21 == 133
        || v21 == 1
        || v21 == 2
        || v21 == 3
        || v21 == 4
        || v21 != 5 && v21 != 14 && !*(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL) + 66LL) )
      {
        goto LABEL_14;
      }
      v5 = -1072431094;
      LogError(-1072431094);
      AcpiDiagTraceAmlError(a1, -1072431094);
      GetObjectTypeName(133LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v6 + 2));
      v16 = v22;
      v18 = 207;
    }
    else
    {
      if ( (_WORD)v7 == 129 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL);
        goto LABEL_6;
      }
      if ( v7 <= 0x10 )
      {
        v8 = 81921;
        if ( _bittest(&v8, v7) )
        {
LABEL_6:
          v9 = *(unsigned __int16 *)(v6 + 2);
          if ( v9 == 133 || v9 == 1 || v9 == 2 || v9 == 3 || v9 == 4 || v9 != 5 && v9 != 14 && !*(_WORD *)(v6 + 2) )
            FreeDataBuffs(v6, 1u);
LABEL_14:
          v10 = *(_QWORD *)(a2 + 80);
          v5 = 0;
          if ( *(_WORD *)(v10 + 2) == 3 )
          {
            if ( *(_DWORD *)(v10 + 56) < *(_DWORD *)(v10 + 24) )
            {
              *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 14;
              *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 48;
              v11 = *(_QWORD *)(a2 + 88);
              *(_QWORD *)(v11 + 32) = HeapAlloc(*(_QWORD **)(a1 + 320), 1145455176, *(_DWORD *)(v11 + 24));
              v12 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL);
              if ( v12 )
              {
                *(_DWORD *)(v12 + 16) = 0;
                *(_DWORD *)(v12 + 20) = 8;
                *(_QWORD *)v12 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL);
                *(_DWORD *)(v12 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
                *(_DWORD *)(v12 + 12) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
                return (unsigned int)WriteObject(a1, v6, *(_QWORD *)(a2 + 88));
              }
              v5 = -1073741670;
              LogError(-1073741670);
              AcpiDiagTraceAmlError(a1, -1073741670);
              v16 = 0LL;
              v17 = 0LL;
              v18 = 60;
LABEL_24:
              PrintDebugMessage(v18, v17, (const void *)v16, 0LL, 0LL);
              return v5;
            }
            v5 = -1072431100;
            LogError(-1072431100);
            AcpiDiagTraceAmlError(a1, -1072431100);
            v19 = *(_QWORD *)(a2 + 80);
            v16 = *(unsigned int *)(v19 + 24);
          }
          else
          {
            if ( *(_WORD *)(v10 + 2) != 4 )
              return v5;
            v14 = *(_DWORD **)(v10 + 32);
            if ( *(_DWORD *)(v10 + 56) < *v14 )
            {
              *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 129;
              v15 = *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL);
              *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = &v14[8 * v15 + 2 + 2 * v15];
              return (unsigned int)WriteObject(a1, v6, *(_QWORD *)(a2 + 88));
            }
            v5 = -1072431100;
            LogError(-1072431100);
            AcpiDiagTraceAmlError(a1, -1072431100);
            v16 = (unsigned int)*v14;
            v19 = *(_QWORD *)(a2 + 80);
          }
          v17 = *(const void **)(v19 + 56);
          v18 = 61;
          goto LABEL_24;
        }
      }
      v5 = -1072431094;
      LogError(-1072431094);
      AcpiDiagTraceAmlError(a1, -1072431094);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v6 + 2));
      v16 = 0LL;
      v18 = 208;
    }
    v17 = (const void *)ObjectTypeName;
    goto LABEL_24;
  }
  return v5;
}
