/*
 * XREFs of BiCreateBootEntry @ 0x140899C64
 * Callers:
 *     BiCreateEfiEntry @ 0x14089A010 (BiCreateEfiEntry.c)
 * Callees:
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     BiTranslateFilePath @ 0x1409A2C44 (BiTranslateFilePath.c)
 *     BiGetKeyName @ 0x1409A4FC4 (BiGetKeyName.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiGetElement @ 0x1409A5A7C (BiGetElement.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateBootEntry(HANDLE BcdObjectHandle, _QWORD *a2)
{
  void *v2; // r15
  _FILE_PATH *v3; // r12
  int Element; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  _FILE_PATH *Pool2; // rax
  int KeyName; // eax
  _DWORD *v18; // rax
  _DWORD *v19; // rbx
  PVOID v20; // rdx
  __int64 v21; // rax
  unsigned int v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+30h] [rbp-38h]
  unsigned int v25; // [rsp+38h] [rbp-30h]
  unsigned int Src; // [rsp+40h] [rbp-28h]
  int v27; // [rsp+48h] [rbp-20h]
  void *v28; // [rsp+50h] [rbp-18h] BYREF
  PVOID P; // [rsp+58h] [rbp-10h]
  unsigned int Size; // [rsp+C8h] [rbp+60h]
  unsigned int Sizea; // [rsp+C8h] [rbp+60h]

  P = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v28 = 0LL;
  Element = BiGetElement(BcdObjectHandle, 0x12000004u);
  v6 = Element;
  if ( Element < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application description. Status: %x",
      (unsigned int)Element);
    goto LABEL_24;
  }
  v7 = BiGetElement(BcdObjectHandle, 0x11000001u);
  v6 = v7;
  if ( v7 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application device. Status: %x",
      (unsigned int)v7);
    goto LABEL_24;
  }
  v8 = BiGetElement(BcdObjectHandle, 0x12000002u);
  v6 = v8;
  if ( v8 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application path. Status: %x",
      (unsigned int)v8);
    goto LABEL_24;
  }
  if ( MEMORY[0] != 2 )
  {
    v6 = -1073741637;
    goto LABEL_24;
  }
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(2 * v10) );
  v11 = 2 * v10 + 2;
  v12 = -1LL;
  v23 = v11;
  do
    ++v12;
  while ( *(_WORD *)(2 * v12 + 0x14) );
  v13 = 2 * v12 + 2;
  v14 = v13 + v11;
  Size = v13;
  if ( v13 + v11 < v13 || (v15 = v14 + 12, v14 + 12 < v14) )
  {
    v6 = -1073741675;
  }
  else
  {
    Pool2 = (_FILE_PATH *)ExAllocatePool2(0x102uLL);
    v3 = Pool2;
    if ( !Pool2 )
    {
LABEL_16:
      v6 = -1073741670;
      goto LABEL_24;
    }
    Pool2->Length = v15;
    Pool2->Version = 1;
    Pool2->Type = 3;
    memmove(Pool2->FilePath, (const void *)0x14, Size);
    memmove(&v3->FilePath[Size], 0LL, v23);
    v6 = BiTranslateFilePath(v3, 4u);
    if ( v6 >= 0 )
    {
      KeyName = BiGetKeyName(BcdObjectHandle, &v28);
      v2 = v28;
      v6 = KeyName;
      if ( KeyName >= 0 )
      {
        do
          ++v9;
        while ( *((_WORD *)v28 + v9) );
        v27 = (2 * v9 + 45) & 0xFFFFFFFC;
        v24 = v27 + 16;
        Src = (v27 + 47) & 0xFFFFFFFC;
        Sizea = (Src + 3) & 0xFFFFFFFC;
        v25 = MEMORY[4] + Sizea;
        v18 = (_DWORD *)ExAllocatePool2(0x102uLL);
        v19 = v18;
        if ( !v18 )
          goto LABEL_16;
        v20 = P;
        *v18 = 1;
        v18[5] = Sizea;
        v18[1] = v25;
        v18[6] = v24;
        v18[2] = -1;
        v18[3] = 5;
        v18[4] = Src;
        memmove((char *)v18 + Src, v20, 0LL);
        memmove((char *)v19 + Sizea, 0LL, MEMORY[4]);
        *(_QWORD *)(v19 + 7) = 0x53574F444E4957LL;
        v19[10] = v24;
        v19[11] = v27;
        v19[9] = 1;
        swprintf_s((wchar_t *)v19 + 24, (unsigned int)v9 + 11LL, L"%s%s", L"BCDOBJECT=", v2);
        v21 = (unsigned int)v19[11];
        *(_DWORD *)((char *)v19 + v21 + 28) = 1;
        *(_DWORD *)((char *)v19 + v21 + 32) = 16;
        *(_DWORD *)((char *)v19 + v21 + 36) = 4;
        *(_DWORD *)((char *)v19 + v21 + 40) = 327551;
        *a2 = v19;
        v6 = 0;
      }
    }
  }
LABEL_24:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)v6;
}
