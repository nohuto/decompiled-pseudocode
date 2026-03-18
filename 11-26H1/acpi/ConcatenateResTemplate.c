/*
 * XREFs of ConcatenateResTemplate @ 0x140052780
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     CheckAndPromoteAliasedObjects @ 0x14003D5D8 (CheckAndPromoteAliasedObjects.c)
 */

__int64 __fastcall ConcatenateResTemplate(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  char v4; // di
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int16 *v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  char v16; // al
  unsigned int v17; // ecx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0;
  v21 = 0LL;
  v6 = ValidateArgTypes(a1, v3, 0, "BB");
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(v7 + 24) <= 1u || *(_DWORD *)(v7 + 64) <= 1u )
    {
      v6 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      v12 = 28;
      goto LABEL_17;
    }
    v6 = ValidateTarget(a1, v7 + 80, 135, (__int64)&v21);
    if ( !v6 )
    {
      v9 = *(__int16 **)(a2 + 80);
      if ( v9[41] != 128 )
        CheckAndPromoteAliasedObjects(v9, v8, v21);
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
      v10 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 64LL) - 2 + *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v10;
      v11 = *(_QWORD *)(a2 + 88);
      *(_QWORD *)(v11 + 32) = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, v10);
      if ( !*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) )
      {
        v6 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        v12 = 29;
LABEL_17:
        PrintDebugMessage(v12, 0LL, 0LL, 0LL, 0LL);
        return v6;
      }
      v13 = *(_QWORD *)(a2 + 80);
      v14 = 0LL;
      if ( *(_DWORD *)(v13 + 24) != 2 )
      {
        do
        {
          *(_BYTE *)(v14 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = *(_BYTE *)(v14 + *(_QWORD *)(v13 + 32));
          ++v14;
          v13 = *(_QWORD *)(a2 + 80);
        }
        while ( v14 < (unsigned int)(*(_DWORD *)(v13 + 24) - 2) );
      }
      v15 = 0LL;
      if ( *(_DWORD *)(v13 + 64) != 2 )
      {
        do
        {
          v16 = *(_BYTE *)(v15 + *(_QWORD *)(v13 + 72));
          ++v15;
          *(_BYTE *)(v14 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v16;
          ++v14;
          v13 = *(_QWORD *)(a2 + 80);
        }
        while ( v15 < (unsigned int)(*(_DWORD *)(v13 + 64) - 2) );
      }
      *(_BYTE *)(v14 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 121;
      v17 = v10 - 1;
      v18 = *(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL);
      if ( v10 != 1 )
      {
        do
        {
          v4 += *v18++;
          --v17;
        }
        while ( v17 );
      }
      v19 = v21;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + v14 + 1) = -v4;
      return (unsigned int)WriteObject(a1, v19, *(_QWORD *)(a2 + 88));
    }
  }
  return v6;
}
