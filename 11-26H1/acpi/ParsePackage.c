/*
 * XREFs of ParsePackage @ 0x1400387D0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     ParseIntObj @ 0x140009C30 (ParseIntObj.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     ParseObjName @ 0x14000FE10 (ParseObjName.c)
 *     ParseString @ 0x140038A6C (ParseString.c)
 *     PrintIndent @ 0x140055A94 (PrintIndent.c)
 */

__int64 __fastcall ParsePackage(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  const void **v6; // r15
  _DWORD **v7; // r14
  int *v8; // rdx
  __int64 v9; // rbp
  char v10; // cl
  __int64 v11; // rbp
  __int64 v12; // r9
  _QWORD *v13; // rcx

  v3 = a3;
  if ( a3 )
    goto LABEL_20;
  switch ( *(_DWORD *)(a2 + 16) & 0xF )
  {
    case 0:
      ++*(_DWORD *)(a2 + 16);
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1);
        ConPrintf("{");
        ++dword_14008EC34;
      }
      goto LABEL_4;
    case 1:
LABEL_4:
      v6 = (const void **)(a1 + 120);
      while ( 1 )
      {
LABEL_5:
        v7 = (_DWORD **)(a2 + 32);
        v8 = (int *)(a2 + 40);
        while ( 1 )
        {
          if ( (unsigned __int64)*v6 >= *(_QWORD *)(a2 + 48) )
            goto LABEL_15;
          v9 = *v8;
          if ( (unsigned int)v9 >= **v7 )
            goto LABEL_15;
          *v8 = v9 + 1;
          if ( (gDebugger & 0xD0) != 0 && (int)v9 > 0 )
            ConPrintf(",");
          v10 = *(_BYTE *)*v6;
          if ( v10 == 17 || (unsigned __int8)(v10 - 18) <= 1u )
            break;
          if ( (gDebugger & 0xD0) != 0 )
            PrintIndent(a1);
          v11 = 5 * v9;
          v3 = ParseIntObj(a1, (const void **)(a1 + 120), (__int64)&(*v7)[2 * v11 + 2], 1);
          if ( v3 != -1072431103
            || (LOBYTE(v12) = 1, v3 = ParseString(a1, a1 + 120, &(*v7)[2 * v11 + 2], v12), v3 != -1072431103)
            || (v3 = ParseObjName(a1, (char **)(a1 + 120), (__int64)&(*v7)[2 * v11 + 2], 1), v3 != -1072431103) )
          {
            if ( !v3 )
              goto LABEL_5;
LABEL_15:
            if ( v3 == 32772 )
              return v3;
            goto LABEL_16;
          }
          LogError(-1072431103);
          AcpiDiagTraceAmlError(a1, -1072431103);
          PrintDebugMessage(0x87u, (const void *)*(unsigned __int8 *)*v6, *v6, 0LL, 0LL);
LABEL_16:
          if ( a2 != *(_QWORD *)(a1 + 416) )
            return v3;
          if ( !v3 && (unsigned __int64)*v6 < *(_QWORD *)(a2 + 48) )
          {
            v7 = (_DWORD **)(a2 + 32);
            v8 = (int *)(a2 + 40);
            if ( *(_DWORD *)(a2 + 40) < **(_DWORD **)(a2 + 32) )
              continue;
          }
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_20;
        }
        v3 = ParseOpcode(a1, 0LL, (__int64)&(*v7)[8 * v9 + 2 + 2 * v9]);
        if ( v3 )
          goto LABEL_15;
        if ( a2 != *(_QWORD *)(a1 + 416) )
          return v3;
      }
    case 2:
LABEL_20:
      if ( (gDebugger & 0xD0) != 0 )
      {
        --dword_14008EC34;
        PrintIndent(a1);
        ConPrintf("}");
        --dword_14008EC34;
      }
      v13 = *(_QWORD **)(a1 + 416);
      *(_QWORD *)(a1 + 416) = v13[1];
      HeapFree(v13);
      break;
  }
  return v3;
}
