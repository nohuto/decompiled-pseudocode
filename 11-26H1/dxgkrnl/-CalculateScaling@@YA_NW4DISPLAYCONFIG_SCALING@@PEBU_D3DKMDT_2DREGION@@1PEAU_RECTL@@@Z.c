/*
 * XREFs of ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x14006AC54
 * Callers:
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14033EDCC (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall CalculateScaling(int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v7; // rbx
  unsigned int v9; // edx
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r10

  v4 = 0;
  switch ( a1 )
  {
    case 1:
      if ( *a2 != *a3 || a2[1] != a3[1] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 85;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"*pSurfaceSize == *pContentSize",
          85LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_18;
    case 2:
      v9 = *a3;
      if ( *a2 < *a3 || (v10 = a3[1], v11 = a2[1], v11 < v10) )
      {
LABEL_11:
        v16 = a3[1];
        v17 = *a3;
        v14 = a2[1];
        v15 = *a2;
        v18 = v17 * v14;
        v19 = *a2 * v16;
        if ( v17 * v14 < v19 )
        {
          v22 = v18 / v16;
          v21 = 0;
          v23 = (v15 - v18 / v16) >> 1;
          v15 = v22 + v23;
          v4 = v23;
        }
        else
        {
          v20 = v19 / v17;
          v21 = (v14 - v20) >> 1;
          v14 = v20 + v21;
        }
        *a4 = v4;
        v24 = (__int64)a4;
        a4[1] = v21;
        v25 = (__int64)a4;
        v26 = 12LL;
        v27 = 8LL;
        goto LABEL_20;
      }
      v12 = (*a2 - v9) >> 1;
      v13 = (v11 - v10) >> 1;
      *a4 = v12;
      a4[1] = v13;
      v14 = v13 + v10;
      v15 = v12 + v9;
LABEL_19:
      v25 = 8LL;
      v27 = (__int64)a4;
      v26 = (__int64)a4;
      v24 = 12LL;
LABEL_20:
      *(_DWORD *)(v25 + v27) = v15;
      *(_DWORD *)(v24 + v26) = v14;
      return 1;
    case 3:
LABEL_18:
      v14 = a2[1];
      v15 = *a2;
      *(_QWORD *)a4 = 0LL;
      goto LABEL_19;
    case 4:
      goto LABEL_11;
  }
  if ( a1 != 5 )
  {
    v7 = a1;
    WdLogSingleEntry1(1LL);
    WdLogGlobalForLineNumber = 146;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Unknown scaling type 0x%lx", v7, 0LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
