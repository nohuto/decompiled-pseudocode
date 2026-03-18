/*
 * XREFs of ToHexStr @ 0x1400155F0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ToHexStr(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 *v9; // rax
  unsigned int v10; // ecx
  __int64 *v12; // rax
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rbp
  __int64 j; // r11
  __int64 v17; // r11
  __int64 v18; // r11
  unsigned int v19; // r9d
  __int64 v20; // r11
  __int64 v21; // r11
  __int64 v22; // r8
  unsigned __int64 i; // r9
  __int64 v24; // rdx
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF

  v25 = 0LL;
  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v25);
    if ( !v4 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v5 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v5 + 2) )
      {
        case 1:
          v6 = *(_QWORD *)(v5 + 16);
          LODWORD(v7) = 2;
          do
          {
            v8 = (int)v7;
            v7 = (unsigned int)(v7 + 1);
            v6 >>= 4;
          }
          while ( v6 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v7 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v7, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v9 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v9;
          if ( !v9 )
            break;
          v22 = v8;
          **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 48;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 1LL) = 120;
          for ( i = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL); v22 >= 2; --v22 )
          {
            v24 = i & 0xF;
            i >>= 4;
            *(_BYTE *)(v22 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v24];
          }
          goto LABEL_24;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v5 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v12 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v12;
          if ( v12 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v13 = *(_DWORD *)(v5 + 24);
          if ( v13 )
            v7 = (unsigned int)(v13 + 4 * v13 - 1);
          else
            v7 = 0LL;
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v7 + 1;
          ConPrintf("length=%x,size=%x\n", v7, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v14 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v14;
          if ( v14 )
          {
            v15 = 0LL;
            for ( j = 0LL; (unsigned int)v15 < *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL); j = (unsigned int)(v21 + 1) )
            {
              *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 48;
              v17 = (unsigned int)(j + 1);
              *(_BYTE *)(v17 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 120;
              v18 = (unsigned int)(v17 + 1);
              v19 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL) + v15);
              v15 = (unsigned int)(v15 + 1);
              *(_BYTE *)(v18 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[(unsigned __int64)v19 >> 4];
              v20 = (unsigned int)(v18 + 1);
              *(_BYTE *)(v20 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v19 & 0xF];
              v21 = (unsigned int)(v20 + 1);
              *(_BYTE *)(v21 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
            }
LABEL_24:
            *(_BYTE *)(v7 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v4 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError(a1, -1072431098);
          v10 = 188;
          goto LABEL_8;
      }
      v4 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v10 = 187;
LABEL_8:
      PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v4;
}
