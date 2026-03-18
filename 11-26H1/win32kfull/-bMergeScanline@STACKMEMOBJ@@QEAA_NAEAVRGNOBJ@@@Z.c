/*
 * XREFs of ?bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z @ 0x1401E2D68
 * Callers:
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x14026A0D0 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 */

bool __fastcall STACKMEMOBJ::bMergeScanline(STACKMEMOBJ *this, struct RGNOBJ *a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  int *v6; // r9
  int v7; // ebx
  unsigned int v8; // ecx
  int v9; // ecx
  unsigned int *v11; // rax
  unsigned int v12; // r9d
  unsigned __int64 v13; // rdx
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)(*((_QWORD *)this + 1) + 24LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 20LL) + 1;
  v4 = *((_QWORD *)this + 1);
  v5 = (8 * (unsigned __int64)*(unsigned int *)(v4 + 16) + 12) >> 2;
  while ( 1 )
  {
    v6 = (int *)*((_QWORD *)this + 2);
    v7 = *v6;
    v8 = *v6;
    v14 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
    v9 = RGNCOREOBJ::UploadForFloodFill((RGNCOREOBJ *)&v14, (const int *)(v4 + 16), v5, v6, v6 != 0LL ? v8 >> 2 : 0);
    **((_DWORD **)this + 2) = v7;
    if ( v9 != -1073741789 )
      break;
    v11 = (unsigned int *)*((_QWORD *)this + 2);
    if ( v11 )
      v12 = *v11;
    else
      v12 = 0;
    v13 = 4LL * (unsigned int)(4 * *(_DWORD *)(*((_QWORD *)this + 1) + 16LL));
    if ( v13 <= v12 )
      LODWORD(v13) = v12;
    if ( !(unsigned int)STACKOBJ::bExpandScanline(this, v12 + (unsigned int)v13, 0) )
    {
      v9 = -1073741801;
      return v9 >= 0;
    }
  }
  return v9 >= 0;
}
