/*
 * XREFs of RtlValidateDynamicFixupRelocation @ 0x14046C8A8
 * Callers:
 *     MiCaptureRetpolineRelocationTables @ 0x140AD3700 (MiCaptureRetpolineRelocationTables.c)
 * Callees:
 *     RtlSizeOfRetpolineRelocationEntry @ 0x14046CEF8 (RtlSizeOfRetpolineRelocationEntry.c)
 */

__int64 __fastcall RtlValidateDynamicFixupRelocation(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  char v8; // bp
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  unsigned __int64 v13; // r14
  unsigned int v14; // edi
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v20; // [rsp+50h] [rbp+8h]

  v8 = 0;
  v9 = *(_DWORD *)(a1 + 8) + 12;
  v10 = RtlSizeOfRetpolineRelocationEntry(*(_QWORD *)a1);
  v20 = v10;
  v13 = v11;
  v14 = v11;
  while ( 1 )
  {
    if ( v12 >= v9 )
    {
      *a4 = v14;
      return v11;
    }
    v15 = v12 + 8LL;
    if ( v15 < v12 )
      break;
    if ( v15 > v9 )
      break;
    v16 = *(unsigned int *)(v12 + a1 + 4);
    if ( (unsigned int)v16 < 8 )
      break;
    if ( (unsigned int)v16 + v12 < v12 )
      break;
    if ( (unsigned int)v16 + v12 > v9 )
      break;
    v17 = *(unsigned int *)(v12 + a1);
    if ( (unsigned int)v17 >= a2 || (unsigned int)v17 < a3 || (v17 & 0xFFF) != 0 || v8 && v17 <= v13 )
      break;
    v18 = (v16 - 8) / (unsigned __int64)v10;
    if ( (v16 - 8) % (unsigned __int64)v10 )
      break;
    v10 = v20;
    v14 += v18;
    v12 += v16;
    v13 = v17;
    v8 = 1;
  }
  return (unsigned int)-1073741701;
}
