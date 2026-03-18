/*
 * XREFs of ToDecStr @ 0x140044A30
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

__int64 __fastcall ToDecStr(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rdi
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r10d
  unsigned int i; // r8d
  __int64 v17; // r14
  __int64 v18; // r11
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 *v28; // rax
  __int64 v29; // r10
  unsigned __int64 v30; // r8
  char v31; // al
  __int64 v33; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v33 = 0LL;
  v5 = ValidateArgTypes(a1, v3, 0, "D");
  if ( !v5 )
  {
    v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v33);
    if ( !v5 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v6 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v6 + 2) )
      {
        case 1:
          v26 = *(_QWORD *)(v6 + 16);
          LODWORD(v9) = 0;
          do
          {
            v27 = (int)v9;
            v9 = (unsigned int)(v9 + 1);
            v26 /= 0xAuLL;
          }
          while ( v26 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v9 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v9, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v28 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v28;
          if ( v28 )
          {
            v29 = v27;
            v30 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
            if ( (int)v27 >= 0 )
            {
              do
              {
                v31 = HTOALookupTable[v30 % 0xA];
                v30 /= 0xAuLL;
                *(_BYTE *)(v29 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v31;
                --v29;
              }
              while ( v29 >= 0 );
            }
            goto LABEL_32;
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v6 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v25 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v25;
          if ( v25 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v33, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v8 = *(_DWORD *)(v6 + 24);
          LODWORD(v9) = v8 - 1;
          if ( v8 )
          {
            v10 = *(_BYTE **)(v6 + 32);
            v11 = v8;
            do
            {
              if ( *v10 >= 0xAu )
                v12 = 3 - (*v10 < 0x64u);
              else
                v12 = 1;
              v9 = (unsigned int)(v12 + v9);
              ++v10;
              --v11;
            }
            while ( v11 );
          }
          else
          {
            v9 = 0LL;
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v9 + 1;
          ConPrintf("length=%x,size=%x\n", v9, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v13 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v13;
          if ( v13 )
          {
            v14 = *(_QWORD *)(a2 + 80);
            v15 = 0;
            for ( i = 0; v15 < *(_DWORD *)(v14 + 24); v14 = *(_QWORD *)(a2 + 80) )
            {
              v17 = i;
              v18 = *(unsigned __int8 *)(v15 + *(_QWORD *)(v14 + 32));
              if ( (unsigned __int8)v18 >= 0xAu )
              {
                v20 = i + 1;
                v19 = i + 2;
                v21 = *(_QWORD *)(a2 + 88);
                v22 = (int)((unsigned int)v18 / 0xA) % 10;
                v23 = (unsigned int)v18 % 0xA;
                if ( (unsigned __int8)v18 >= 0x64u )
                {
                  *(_BYTE *)(v17 + *(_QWORD *)(v21 + 32)) = HTOALookupTable[(int)((unsigned int)v18 / 0x64) % 10];
                  *(_BYTE *)(v20 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v22];
                  *(_BYTE *)(v19 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v23];
                  LODWORD(v19) = v19 + 1;
                }
                else
                {
                  *(_BYTE *)(v17 + *(_QWORD *)(v21 + 32)) = HTOALookupTable[v22];
                  *(_BYTE *)(v20 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v23];
                }
              }
              else
              {
                LODWORD(v19) = i + 1;
                *(_BYTE *)(v17 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v18];
              }
              ++v15;
              v24 = (unsigned int)v19;
              i = v19 + 1;
              *(_BYTE *)(v24 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
            }
LABEL_32:
            *(_BYTE *)(v9 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v33, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v5 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError(a1, -1072431098);
          v7 = 186;
LABEL_29:
          PrintDebugMessage(v7, 0LL, 0LL, 0LL, 0LL);
          return v5;
      }
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v7 = 185;
      goto LABEL_29;
    }
  }
  return v5;
}
