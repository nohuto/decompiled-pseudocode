/*
 * XREFs of PopCheckThermalPolicy @ 0x140AC5D5C
 * Callers:
 *     PopThermalWorker @ 0x140AC58C0 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 */

char __fastcall PopCheckThermalPolicy(__int64 a1, __int64 a2, char *a3, int *a4)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v9; // rsi
  __int64 v10; // rcx
  const WCHAR *v11; // r8
  unsigned int *v12; // rdi
  unsigned int v13; // eax
  char v14; // al
  unsigned int v15; // eax
  bool v16; // al
  unsigned int v17; // ecx
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // r10d
  unsigned int v22; // edx
  int v23; // r9d
  unsigned int v24; // r8d
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // ecx
  bool v30; // cf
  char result; // al
  char v32; // al
  int v33; // eax

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x6D546F50u);
  v9 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag
    && (v10 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL)) != 0 )
  {
    v11 = *(const WCHAR **)(v10 + 136);
  }
  else
  {
    v11 = &word_140B8A320;
  }
  v12 = (unsigned int *)(a1 + 128);
  v13 = *(_DWORD *)(a1 + 140);
  *(_QWORD *)(a1 + 232) = 1000000LL * *(unsigned int *)(a1 + 200);
  if ( v13 && *v12 >= v13 )
  {
    PopPrintEx(
      0,
      (int)"Thermal Zone %S (%p): Above critical temperature (_TMP %d, _CRT %d). Shutdown initiated\n",
      v11,
      a1,
      *v12,
      v13);
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  *(_BYTE *)(a1 + 210) = v14;
  v15 = *(_DWORD *)(a1 + 188);
  v16 = v15 && *v12 >= v15;
  *(_BYTE *)(a1 + 209) = v16;
  v17 = *(_DWORD *)(a1 + 136);
  if ( v17 )
  {
    v32 = *(_BYTE *)(a1 + 211);
    if ( *v12 < v17 )
    {
      if ( v32 )
        *(_BYTE *)(a1 + 211) = 0;
    }
    else if ( !v32 )
    {
      *(_BYTE *)(a1 + 211) = 1;
    }
  }
  v18 = *(unsigned __int8 *)(a1 + 144);
  v19 = 0LL;
  if ( (_BYTE)v18 )
  {
    do
    {
      if ( *(_DWORD *)(a1 + 128) >= *(_DWORD *)(a1 + 4 * v19 + 148) )
        break;
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < v18 );
  }
  v20 = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 220) = v19;
  if ( a2 - *(_QWORD *)(a1 + 96) < v20 )
  {
    result = *(_BYTE *)(a1 + 65) & 1;
    *a4 = 0;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 128);
    v22 = *(_DWORD *)(a1 + 132);
    if ( *(_DWORD *)(a1 + 80) == 100 && (!v22 || v21 < v22) )
    {
      *a4 = 0;
      result = 0;
      *(_DWORD *)(a1 + 212) = 0;
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 65) & 1) == 0 )
      {
        v33 = 10000 * *(_DWORD *)(a1 + 124);
        *(_DWORD *)(a1 + 108) = v22;
        *(_DWORD *)(a1 + 104) = v33;
      }
      v23 = *(_DWORD *)(a1 + 76);
      v24 = v21 - *(_DWORD *)(a1 + 108);
      v25 = *(_DWORD *)(a1 + 120) * (v21 - v22) + *(_DWORD *)(a1 + 116) * v24;
      *a4 = v25;
      if ( !v24 || ((v24 ^ v25) & 0x80000000) == 0 )
        v23 -= v25;
      if ( v23 > 1000 )
        v23 = 1000;
      v26 = *(_DWORD *)(a1 + 192);
      v27 = 0;
      if ( v23 >= 0 )
        v27 = v23;
      v28 = 10 * v26;
      if ( v27 >= 10 * v26 )
        v28 = v27;
      *(_DWORD *)(a1 + 76) = v28;
      v29 = v28 + 5;
      v30 = (unsigned int)(v29 / 10) < *(_DWORD *)(a1 + 196);
      *(_DWORD *)(a1 + 216) = v29 / 10;
      *(_BYTE *)(a1 + 224) = v30;
      result = 1;
      *(_DWORD *)(a1 + 108) = v21;
      *(_QWORD *)(a1 + 96) = a2;
      *(_DWORD *)(a1 + 212) = 1;
    }
  }
  *a3 = result;
  if ( v9 )
    return ObfDereferenceObjectWithTag(v9, 0x6D546F50u);
  return result;
}
